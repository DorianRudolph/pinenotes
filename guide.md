# Pinenote Developer Starter Guide

The goal of this (unofficial) document is to guide you from unboxing to running and developing on (Arch) Linux on your PineNote.

Note that I didn't fully test this document from start to finish.
So make sure you understand each command before you run it.
If you find errata, open issues, or even better, pull requests.

## Backup partitions

See also https://wiki.pine64.org/wiki/PineNote_Development

### Rkdeveloptool

Build rkdeveloptool:
```sh
git clone https://gitlab.com/pine64-org/quartz-bsp/rkdeveloptool.git
cd rkdeveloptool
mkdir build
cd build
cmake ..
```

### Download mode

Enter the download mode by placing the pen as pictured below.
A magnet placed where the pen's cap is should also work (haven't tried).
I guess the dot on the case also indicates the position of the sensor.

![placing pen on the back](static/download_mode.jpg)

lsusb should now recognize the PineNote as
```
2207:350a Fuzhou Rockchip Electronics Company USB download gadget
```

List partitions:
```
> rkdeveloptool list-partitions                      
#   LBA start (sectors)  LBA end (sectors)  Size (bytes)       Name                
00                16384              24575       4194304       uboot
01                24576              32767       4194304       trust
02                32768              36863       2097152       waveform
03                36864              45055       4194304       misc
04                45056              53247       4194304       dtbo
05                53248              55295       1048576       vbmeta
06                55296             137215      41943040       boot
07               137216             145407       4194304       security
08               145408             407551     134217728       recovery
09               407552            1193983     402653184       backup
10              1193984            3291135    1073741824       cache
11              3291136            3323903      16777216       metadata
12              3323904            9697279    3263168512       super
13              9697280            9730047      16777216       logo
14              9730048            9861119      67108864       device
15              9861120          241827775  118766927872       userdata
```

### Fix uboot

Unfortunately, you cannot dump partitions after 32MB ([source](https://gitlab.com/pgwipeout/u-boot-rockchip/-/blob/quartz64/cmd/rockusb.c#L28)), as all bytes are replaced by 0xCC.
```c
if ((blkstart + blkcnt) > RKUSB_READ_LIMIT_ADDR) {
    memset(buf, 0xcc, blkcnt * SECTOR_SIZE);
    return blkcnt;
} else {
    return blk_dread(block_dev, blkstart, blkcnt, buf);
}
```

I provide a [fixed version of uboot](static/uboot_patched.img), which you can flash with:
```sh
rkdeveloptool write-partition uboot uboot_patched.img
```
WARNING: If you corrupt uboot, it may be necessary to open the device to unbrick it!

In the rest of this section, I elaborate on how I created this image.
First, read the uboot partition, which is readable as its below 32M.
```sh
rkdeveloptool read-partition uboot uboot.img
```
From `uboot.img`, extract the `u-boot.bin` (see [uboot_img.py](py/uboot_img.py)).
The offending `rkusb_read_sector` function seen in the below screenshot from ghidra.

![rkusb_read_sector screenshot](static/patch.png)

We just need to change the `b.ls` to a `b` instruction to always go to the `if` branch.

After modifying the `u-boot.bin` file, we can create a patched `uboot.img` file using the python script.
`uboot.img` appears to consist of two equal parts of size 0x200000 containing a dtb file (`dtc -I dtb -O dts uboot.img`) describing the sections followed by binary data.

```
> radiff2 uboot_factory.img uboot_patched.img 
0x00000190 95773e263e2a17568f8419ca7b9f96d434881e5cd4d0562d51f5c13bde94d7f7 => 3559cd72cd63c1b596ad9daad7d37ea28f68d37b14505e8b6c4fe6ef7f42f2ba 0x00000190
0x00013430 4901 => 0a00 0x00013430
0x00013433 54 => 14 0x00013433
0x00200190 95773e263e2a17568f8419ca7b9f96d434881e5cd4d0562d51f5c13bde94d7f7 => 3559cd72cd63c1b596ad9daad7d37ea28f68d37b14505e8b6c4fe6ef7f42f2ba 0x00200190
0x00213430 4901 => 0a00 0x00213430
0x00213433 54 => 14 0x00213433
```

In the diff, we can see the duplication. The two differences are hash values, the short ones correspond to the patched instruction.

### Backup partitions

After patching uboot, ender download mode again and run

```sh
rkdeveloptool read-partition boot boot.img
# for all partiations except userdata
rkdeveloptool write-partition uboot uboot.img
rkdeveloptool reboot
```

Note that there is a bug in rkdeveloptool that prohibits us from dumping partitions of size larger than 2G.
So we cannot successfully dump userdata, but that is not so important because android can recreate that on its own.
Do make sure that the dumped partitions contain actual data and not just 0xCC to ensure that there