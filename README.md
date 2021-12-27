# pinenotes
Notes about PineNote development

## Rooting

Using [Magisk](https://github.com/topjohnwu/Magisk) following the [tutorial](https://topjohnwu.github.io/Magisk/install.html#patching-images).

```
adb push boot.img /sdcard/boot.img  #d60f4054edb91259fb4471eb5f0ba53803b9a7e2300c3647e11f7b71aa95a003
adb install Magisk-v23.0.apk
adb pull /sdcard/Download/magisk_patched-23011_dhTkI.img boot_magisk.img
rkdeveloptool write-partition boot boot_magisk.img
rkdeveloptool reboot
```

Unfortunately, this does not yet work, because Magisk says `No daemon is currently running!` and the fix from https://github.com/topjohnwu/Magisk/issues/4319 does not work.

## Patching the factory uboot.img

As noted in the next section, the factory uboot does not allow reading all partitions.
I extract the `u-boot.bin` (see [uboot_img.py](py/uboot_img.py)).
The offending `rkusb_read_sector` function seen in the below screenshot from ghidra.

![rkusb_read_sector screenshot](static/patch.png)

We just need to change the `b.ls` to a `b` instruction to always go to the `if` branch.

The python script creates a patched `uboot.img` file.
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

## Backup partitions

See also https://wiki.pine64.org/wiki/PineNote_Development

Entering the download mode by placing the pen as pictured below.
A magnet placed where the pen's cap is should also work (haven't tried).

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

Unfortunately, you cannot dump partitions after 32MB ([source](https://gitlab.com/pgwipeout/u-boot-rockchip/-/blob/quartz64/cmd/rockusb.c#L28)).

```c
if ((blkstart + blkcnt) > RKUSB_READ_LIMIT_ADDR) {
    memset(buf, 0xcc, blkcnt * SECTOR_SIZE);
    return blkcnt;
} else {
    return blk_dread(block_dev, blkstart, blkcnt, buf);
}
```
@Danct12 (in the PineNote discord) built a [fixed version of uboot](https://cdn.discordapp.com/attachments/870707390998282292/895518527304376341/uboot.img) (backed up here as `uboot_cc.img`).
I followed @ssgelm's instructions to update the uboot.

Backup existing uboot and install fixed one.
Note that you won't be able to boot android until you have reinstalled the factory uboot because its built for the quartz64.
```
rkdeveloptool read-partition uboot uboot.img
rkdeveloptool write-partition uboot uboot_cc.img
rkdeveloptool reboot
```
Enter the download mode again (now using the new uboot) and now you can actually backup the partitions and install the factory uboot again.
```
rkdeveloptool read-partition boot boot.img
...
rkdeveloptool write-partition uboot uboot.img
rkdeveloptool reboot
```
[Archive](https://1drv.ms/u/s!AuBFUYtk7aRLxSpIleR55b3io2a0?e=13snzK) of all my partitions.

## Enter settings and enable ADB

https://forum.pine64.org/showthread.php?tid=15598

- Application icon (4 squares) in the top
- Application management
- Application message
- 3 Dots -> Show System
- Search for "Settings" and open

Enable ADB the standard way.
This didn't work immediately for me, so I also set the "Default USB configuration" to PTP, after which I had to reenable ADB.
Then I got the permission prompt.

## Building BSP kernel

In Ubuntu 18.04 Docker with packages `repo git ssh make gcc libssl-dev liblz4-tool expect g++ patchelf chrpath gawk texinfo chrpath diffstat binfmt-support qemu-user-static live-build bison flex fakeroot cmake gcc-multilib g++-multilib unzip device-tree-compiler python-pip ncurses-dev python-pyelftools bc time rsync`.

I think the closest device to the pinenote is 
```
./build.sh device/rockchip/rk356x/BoardConfig-rk3566-evb2-lp4x-v10.mk kernel
```
You can edit the `.mk` to increase the number of build threads.
To use the eink, we probably need to edit the dts to include `rk3566-evb2-lp4x-v10-eink.dts`, which is currently seems unused?

## Building U-Boot

In Ubuntu 18.04 Docker with packages `gcc-aarch64-linux-gnu make gcc python3-pyelftools bc`.
```
export CROSS_COMPILE=aarch64-linux-gnu-
make rk3566-quartz64_defconfig
./make.sh
```