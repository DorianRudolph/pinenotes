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

## Alpine

Based on: https://musings.martyn.berlin/dual-booting-the-pinenote-with-android-and-debian

### Install /cache

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

Note, at this point we could also install firmware and modules, but we skip that part because I only want to use alpine to modify the partitions.

### Boot

Connect to PineNote via the UART adapter.
```sh
picocom /dev/ttyUSB0 -b 1500000 -l
```

Reboot from android and hold `Ctrl+C` in the picocom terminal until `=> <INTERRUPT>` appears.
Then we have entered the uboot shell.
Copy the following commands to boot into Alpine (you may have to copy them one by one).

```sh
load mmc 0:b ${kernel_addr_r} /Image
load mmc 0:b ${fdt_addr_r} /rk3566-pinenote.dtb
setenv bootargs ignore_loglevel root=/dev/mmcblk0p11 rw rootwait earlycon console=tty0 console=ttyS2,1500000n8 fw_devlink=off init=/bin/sh
booti ${kernel_addr_r} - ${fdt_addr_r}
```

### Shrink userdata

```sh
export TERM=dumb
mount -t proc proc /proc
parted
select /dev/mmcblk0
print
```

You should the the list of partitions now:
```
Number  Start   End     Size    File system  Name      Flags
 1      8389kB  12.6MB  4194kB               uboot
 2      12.6MB  16.8MB  4194kB               trust
 3      16.8MB  18.9MB  2097kB               waveform
 4      18.9MB  23.1MB  4194kB               misc
 5      23.1MB  27.3MB  4194kB               dtbo
 6      27.3MB  28.3MB  1049kB               vbmeta
 7      28.3MB  70.3MB  41.9MB               boot
 8      70.3MB  74.4MB  4194kB               security
 9      74.4MB  209MB   134MB                recovery
10      209MB   611MB   403MB                backup
11      611MB   1685MB  1074MB  ext4         cache
12      1685MB  1702MB  16.8MB  ext4         metadata
13      1702MB  4965MB  3263MB               super
14      4965MB  4982MB  16.8MB               logo
15      4982MB  5049MB  67.1MB  fat16        device
16      5049MB  124GB   119GB   f2fs         userdata
```

Resize userdata to 8G:

```
resizepart 16 13049M
yes
Ignore
print
```

```
15      4982MB  5049MB  67.1MB  fat16        device
16      5049MB  13.0GB  8000MB  f2fs         userdata
```

```
mkpart primary ext4 13G 100%
Ignore
print
```

```
16      5049MB  13.0GB  8000MB  f2fs         userdata
17      13.0GB  124GB   111GB   ext4         primary
```

Reboot:
```
quit
exit
```

### Recreate userdata

By resizing, we have broken the userdata partition.
But we can rebuild it with fastboot.

Enter uboot again with `Ctrl+C` and enter:
```
fastboot usb 0
```
Disconnect the UART adapter and connect the PineNote directly.

```
fastboot erase userdata
fastboot reboot
```

You need to turn the PineNote on again.
This will take a while because it has to recreate its userdata.

Now setup everything again and reinstall magisk (no need to reflash boot).
```
adb install static/magisk_c85b2a0.apk
```
Open magisk and allow it to reboot.

## Arch Linux

### Install

Download:
```sh
wget http://os.archlinuxarm.org/os/ArchLinuxARM-aarch64-latest.tar.gz{,.sig}
gpg --recv-key 68B3537F39A313B3E574D06777193F152BDBE6A6
gpg --verify ArchLinuxARM-aarch64-latest.tar.gz{.sig,}

adb push ArchLinuxARM-aarch64-latest.tar.gz /sdcard
adb push kout/* /sdcard
```

Mount partition:
```sh
mkfs.ext4 /dev/block/mmcblk2p17
mount /dev/block/mmcblk2p17 /mnt/arch/
```

Extract
```sh
tar -x -f /sdcard/ArchLinuxARM-aarch64-latest.tar.gz -C /mnt/arch/

cd /mnt/arch
# arch messes with /boot, so create a different one
mkdir boot2
cp /sdcard/Image /sdcard/rk3566-pinenote.dtb boot2
tar -x -f /sdcard/modules.tar -C lib/modules
chown -R 0:0 lib/modules/5.16*

mv lib/firmware lib/firmware.bak
mkdir lib/firmware
tar -x -f /sdcard/firmware.tar.bz2 -C lib/firmware

cp lib/firmware
cp /sdcard/waveform.bin .
chmod +r waveform.bin
mkdir brcm
cp fw_bcm43455c0_ag_cy.bin brcm/brcmfmac43455-sdio.bin
cp nvram_ap6255_cy.txt brcm/brcmfmac43455-sdio.txt
cp fw_bcm43455c0_ag_cy.bin brcm/brcmfmac43455-sdio.pine64,pinenote.bin
cp nvram_ap6255_cy.txt brcm/brcmfmac43455-sdio.pine64,pinenote.txt
cp BCM4345C0.hcd brcm/BCM4345C0.hcd
```

Chroot to install NetworkManager:
```sh
cd /mnt/arch

mount -t proc /proc proc/
mount --rbind /sys sys/
mount --rbind /dev dev/
mount -t tmpfs tmpfs tmp

rm etc/resolv.conf
# lrwxrwxrwx 1 root root 32 2021-11-20 03:44 etc/resolv.conf -> /run/systemd/resolve/resolv.conf

echo "nameserver $(getprop net.dns1)" > etc/resolv.conf

env -i PATH=/usr/bin:/bin:/usr/sbin:/sbin chroot /mnt/arch bash

cp /boot/initramfs-linux.img /boot2

pacman-key --init
pacman-key --populate archlinuxarm

# uninstall firmware and kernel, which we don't use
pacman -R linux-aarch64  linux-firmware

pacman -Syuu
pacman -S networkmanager

cd boot2
pacman -S uboot-tools
mkimage -A arm -T ramdisk -C none -n uInitrd -d initramfs-linux.img uInitrd.img
```

TODO: generate custom initramfs. This one seems to work, but it doesn't run any hooks like fsck.

### Boot Arch

Back to the uboot shell:
```sh
load mmc 0:11 ${kernel_addr_r} /boot2/Image
load mmc 0:11 ${fdt_addr_r} /boot2/rk3566-pinenote.dtb
load mmc 0:11 ${ramdisk_addr_r} /boot2/uInitrd.img
setenv bootargs ignore_loglevel root=/dev/mmcblk0p17 rw rootwait earlycon console=tty0 console=ttyS2,1500000n8 fw_devlink=off
booti ${kernel_addr_r} ${ramdisk_addr_r} ${fdt_addr_r}
```
Note that `0:11` is in hex, so it refers to `mmcblk0p17`.

To avoid having to paste all these commands, create `/boot2/extlinux.conf`:
```
timeout 10
default MAINLINE
menu title boot prev kernel

label MAINLINE
  kernel /boot2/Image
  fdt /boot2/rk3566-pinenote.dtb
  initrd /boot2/uInitrd.img
  append ignore_loglevel root=/dev/mmcblk0p17 rw rootwait earlycon console=tty0 console=ttyS2,1500000n8 fw_devlink=off
```

If everything boots fine, you can remove the `ignore_loglevel` and then `sudo dmesg -n 1` to disable the log spam or replace it with `loglevel=1`.

Boot with
```sh
sysboot ${devtype} ${devnum}:11 any ${scriptaddr} /boot2/extlinux.conf
```

### Setup Arch

Login with `root:root`

```sh
systemctl enable --now NetworkManager
nmcli device wifi connect <ssid> password <pwd>

systemctl enable --now sshd
```

Now we can finally SSH into the PineNote.

```sh
ssh-copy-id -i ~/.ssh/id_rsa.pub alarm@192.168.178.80
ssh alarm@129.168.178.20
# default password alarm
```

Install larger terminal font:

```sh
pacman -S terminus-font
FONT=ter-124n
echo FONT=ter-124n > /etc/vconsole.conf
```

Allow the video group at access the backlight brightness:
`/etc/udev/rules.d/backlight.rules`
```
RUN+="/bin/chgrp video /sys/class/backlight/backlight_cool/brightness"
RUN+="/bin/chmod g+w /sys/class/backlight/backlight_cool/brightness"

RUN+="/bin/chgrp video /sys/class/backlight/backlight_warm/brightness"
RUN+="/bin/chmod g+w /sys/class/backlight/backlight_warm/brightness"
```

Reload: `sudo udevadm control --reload-rules && sudo udevadm trigger`

Backlight (values from 0 to 255):
```sh
echo 100 > /sys/class/backlight/backlight_warm/brightness
echo 100 > /sys/class/backlight/backlight_cool/brightness
```

Setup `/etc/fstab`:

```
/dev/mmcblk0p17   /         ext4    rw,noatime,nodiscard    0 1
/dev/mmcblk0p11   /cache    ext4    rw,noatime,nodiscard    0 2
```

Enable trim:
```
sudo systemctl enable fstrim.timer
```

### Install alternative wireless driver

Right now, it takes about 60 seconds until the wlan driver becomes available because it is missing the `/lib/firmware/brcm/brcmfmac43455-sdio.clm_blob` file.
This is due to the `CONFIG_FW_LOADER_USER_HELPER_FALLBACK` option, which gives userspace 60 seconds to provide the missing blob.
You can either disable this option or use the driver from the website which comes with the `clm_blob`.

```sh
wget https://community.cypress.com/gfawx74859/attachments/gfawx74859/resourcelibrary/1030/1/cypress-fmac-v5.4.18-2020_0925.zip
unzip cypress-fmac-v5.4.18-2020_0925.zip cypress-firmware-v5.4.18-2020_0925.tar.gz
tar xzf cypress-firmware-v5.4.18-2020_0925.tar.gz firmware/cyfmac43455-sdio.clm_blob firmware/cyfmac43455-sdio.bin
cd /lib/firmware/brcm
sudo cp brcmfmac43455-sdio.pine64,pinenote.bin brcmfmac43455-sdio.pine64,pinenote.bin.bak
sudo cp /home/alarm/Downloads/firmware/cyfmac43455-sdio.clm_blob brcmfmac43455-sdio.clm_blob
sudo cp /home/alarm/Downloads/firmware/cyfmac43455-sdio.bin brcmfmac43455-sdio.pine64,pinenote.bin
```

I couldn't notice a difference in terms of speed (about 100/100 on 5GHz), but at least it works without waiting.

An alternative BCM4345C0.hcd is at https://github.com/worproject/cywbtserialbus/raw/master/src/vendor/fw/BCM4345C0.hcd, but I cannot get bluetooth to work correctly.
I can pair it with my keyboard, but it doesn't show up as input device.


### Change Kernel

Right now, [smaeul's kernel](https://github.com/smaeul/linux/commits/rk356x-ebc-dev) has working USB, which pgwipeout does not yet have, but no working touch.
Though there may be more differences.
You can build the kernel using the same build script as above and copy the files using scp.

```sh
con=alarm@192.168.178.80
scp -r $out $con:kout
ssh $con
cd kout
# note: if both kernels have the same uname (root directory in modules.tar), then you need to change name
#   (generally modules from different kernel builds are not compatiable)
sudo tar xfv modules.tar -C /lib/modules
sudo chown -R 0:0 /lib/modules
sudo cp rk3566-pinenote.dtb Image /boot
sudo cp /boot/uInitrd.img /boot
```

```sh
sysboot ${devtype} ${devnum}:11 any ${scriptaddr} /boot/extlinux.conf
```


### Sway

```
sudo pacman -S sway
```

Add to `.bash_profile` (GPU doesn't work yet):
```sh
export LIBGL_ALWAYS_SOFTWARE=true
export GALLIUM_DRIVER=llvmpipe
export WLR_RENDERER_ALLOW_SOFTWARE=1
```