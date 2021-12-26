# pinenotes
Notes about PineNote development

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

## Building BSP kernel

In Ubuntu 18.04 Docker with packages `repo git ssh make gcc libssl-dev liblz4-tool expect g++ patchelf chrpath gawk texinfo chrpath diffstat binfmt-support qemu-user-static live-build bison flex fakeroot cmake gcc-multilib g++-multilib unzip device-tree-compiler python-pip ncurses-dev python-pyelftools bc time rsync`.

I think the closest device to the pinenote is 
```
./build.sh device/rockchip/rk356x/BoardConfig-rk3566-evb2-lp4x-v10.mk kernel
```
You can edit the `.mk` to increase the number of build threads.
To use the eink, we probably need to edit the dts to include `rk3566-evb2-lp4x-v10-eink.dts`, which is currently seems unused?

## Building U-Boot

In Ubuntu 18.04 Docker with packages `gcc-aarch64-linux-gnu make gcc python3-pyelftools`.