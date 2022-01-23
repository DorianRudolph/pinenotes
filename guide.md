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
Do make sure that the dumped partitions contain actual data and not just 0xCC.

## Android root

### Enable ADB

https://forum.pine64.org/showthread.php?tid=15598

- Application icon (4 squares) in the top
- Application management
- Application message
- 3 Dots -> Show System
- Search for "Settings" and open

Enable ADB the standard way.
This didn't work immediately for me, so I also set the "Default USB configuration" to PTP, after which I had to reenable ADB.
Then I got the permission prompt.

### Magisk

We use [Magisk](https://github.com/topjohnwu/Magisk) following the [tutorial](https://topjohnwu.github.io/Magisk/install.html#patching-images).

I had issues with Magisk, discussed in this [issue](https://github.com/topjohnwu/Magisk/issues/5125) (many thanks to canyie for fixing this so quickly).
The canary build of Magisk, should work now, but I also backed up the version I used ([backup](static/magisk_c85b2a0.apk)).

```
adb push boot.img /sdcard/boot.img  # d60f4054edb91259fb4471eb5f0ba53803b9a7e2300c3647e11f7b71aa95a003
adb install magisk_c85b2a0.apk
# install magisk to boot.img
adb pull /sdcard/Download/magisk_patched-23011_dhTkI.img boot_magisk.img
rkdeveloptool write-partition boot boot_magisk.img
rkdeveloptool reboot
```

Now you should have a working root. Try running `su` in `adb shell`.

## Build mainline kernel

Clone kernel:
```sh
git clone -b rk355x-ebc-dev https://github.com/smaeul/linux/tree/rk356x-ebc-dev
# or
git clone https://gitlab.com/pgwipeout/linux-next.git
curl https://gitlab.com/pgwipeout/quartz64_ci/-/raw/main/quartz64_defconfig?inline=false -o linux-next/arch/arm64/configs/pinenote_defconfig
```
I'm using pgwipeout's kernel for now

### VCOM

Each Eink panel has a calibration offset VCOM.
The factory uboot sets the kernel parameter `ebc_pmic.vcom=960`, which you can find out with `cat /proc/cmdline` on android.
For my device, VCOM is 960mV, but this value is (supposedly) unique for each device.
This value should be entered into `regulator-min-microvolt` and `regulator-max-microvolt` in the `rk3556-pinenote.dts`.
Alternatively, you can also remove the `regulator-min-microvolt` and `regulator-max-microvolt`, which we do here.

```diff
--- a/arch/arm64/boot/dts/rockchip/rk3566-pinenote.dts
+++ b/arch/arm64/boot/dts/rockchip/rk3566-pinenote.dts
@@ -653,8 +653,8 @@ v3p3: v3p3 {
 
                        vcom: vcom {
                                regulator-name = "vcom";
-                               regulator-min-microvolt = <1450000>;
-                               regulator-max-microvolt = <1450000>;
+                               /* regulator-min-microvolt = <960000>;
+                               regulator-max-microvolt = <960000>; */
                        };
 
                        vdrive: vdrive {
```

### Compile the kernel

Add F2FS to `pinenote_defconfig` such that we can work with the userdata partition.
```
CONFIG_F2FS_FS=y
CONFIG_F2FS_STAT_FS=y
CONFIG_F2FS_FS_XATTR=y
CONFIG_F2FS_FS_POSIX_ACL=y
CONFIG_F2FS_FS_SECURITY=y
CONFIG_F2FS_FS_ENCRYPTION=y
```

Download toolchain (next to the kernel directory):
```sh
wget https://developer.arm.com/-/media/Files/downloads/gnu-a/10.3-2021.07/binrel/gcc-arm-10.3-2021.07-x86_64-aarch64-none-linux-gnu.tar.xz{,.asc}
md5sum -c gcc-arm-10.3-2021.07-x86_64-aarch64-none-linux-gnu.tar.xz.asc
tar xfv gcc-arm-10.3-2021.07-x86_64-aarch64-none-linux-gnu.tar.xz
```

Build (save as shell script for rebuilds):

```sh
export CROSS_COMPILE="$PWD/../gcc-arm-10.3-2021.07-x86_64-aarch64-none-linux-gnu/bin/aarch64-none-linux-gnu-"
export ARCH=arm64

make clean

make pinenote_defconfig
make -j $(nproc) all

rm -rf pack
mkdir pack
make INSTALL_MOD_PATH=pack modules_install
make INSTALL_PATH=pack dtbs_install

rm -rf ../kout
mkdir ../kout
cp arch/arm64/boot/Image ../kout
cp pack/dtbs/*/rockchip/rk3566-pinenote.dtb ../kout
rsync -av pack/lib/modules ../kout --exclude='*/source' --exclude='*/build'

cd ../kout/modules
tar cf ../modules.tar *
cd ..
rm -r modules
```

### Export firmware


```sh
adb shell
su

cd /vendor/etc/firmware
tar -c -j -f /sdcard/firmware.tar.bz2 *
dd if=/dev/block/mmcblk2p3 of=/sdcard/waveform.bin bs=1k count=2048
sha1sum /sdcard/firmware.tar.bz2 /sdcard/waveform.bin
# waveform.bin matches waveform partition
exit

adb pull /sdcard/waveform.bin
adb pull /sdcard/firmware.tar.bz2
```
Backup: (waveform.bin)[static/waveform.bin], (firmware.tar.bz2)[static/firmware.tar.bz2]

## Boot Alpine

Setup alpine root in `/cache`:
```sh
# alpine rootfs
wget https://dl-cdn.alpinelinux.org/alpine/v3.15/releases/aarch64/alpine-minirootfs-3.15.0-aarch64.tar.gz
adb push alpine-minirootfs-3.15.0-aarch64.tar.gz /sdcard

# kernel and modules
cd kout
adb push * /sdcard

adb shell
su

cp rk3566-pinenote.dtb Image /cache
tar -zxf alpine-minirootfs-3.15.0-aarch64.tar.gz -C /cache
echo "nameserver $(getprop net.dns1)" > /cache/etc/resolv.conf

# chroot to install additional tools  (wake the pinenote to connect to wifi)
env -i PATH=/usr/bin:/bin:/usr/sbin:/sbin chroot /cache
apk add --no-cache parted e2fsprogs
```