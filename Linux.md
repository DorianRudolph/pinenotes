# Run Linux on PineNote

Beware, this is not really a tutorial, these are just the notes I took while installing this myself.
I do hope everything is correct, but please make sure to understand the commands before executing.

## VCOM

Each Eink panel has a calibration offset VCOM.
The factory uboot sets the kernel parameter `ebc_pmic.vcom=960`.
For my device, VCOM is 960mV, but this value is (supposedly) unique for each device.
This value should be entered into `regulator-min-microvolt` and `regulator-min-microvolt` in the `rk3556-pinenote.dts`. 

## Compile Kernel

Based on https://musings.martyn.berlin/cross-compiling-the-linux-kernel-for-the-pinenote-or-other-arm-device

```sh
# clone linux
git clone -b rk355x-ebc-dev https://github.com/smaeul/linux/tree/rk356x-ebc-dev  # currently on commit 46e87f1f9c7dd22af26d99f60eb83d2cace43cb5

# download toolchain
wget https://developer.arm.com/-/media/Files/downloads/gnu-a/10.3-2021.07/binrel/gcc-arm-10.3-2021.07-x86_64-aarch64-none-linux-gnu.tar.xz{,.asc}
md5sum -c gcc-arm-10.3-2021.07-x86_64-aarch64-none-linux-gnu.tar.xz.asc
tar xfv gcc-arm-10.3-2021.07-x86_64-aarch64-none-linux-gnu.tar.xz

# compile
cd linux
export CROSS_COMPILE="$PWD/../gcc-arm-10.3-2021.07-x86_64-aarch64-none-linux-gnu/bin/aarch64-none-linux-gnu-"
export ARCH=arm64
```
I want to boot from the userdata partition, so add some F2FS flags to `pinenote_defconfig`:
```
CONFIG_F2FS_STAT_FS=y
CONFIG_F2FS_FS_XATTR=y
CONFIG_F2FS_FS_POSIX_ACL=y
```

```sh
make pinenote_defconfig
make -j $(nproc) all

mkdir pack
make INSTALL_MOD_PATH=pack modules_install
make INSTALL_PATH=pack dtbs_install

cd ..
mkdir out
cp linux/arch/arm64/boot/Image out
cp linux/pack/dtbs/*/rockchip/rk3566-pinenote.dtb out
rsync -av linux/pack/lib/modules out --exclude='*/source' --exclude='*/build'
```

## pgwipeout's kernel

```sh
git clone https://gitlab.com/pgwipeout/linux-next.git
cd linux-next
# download defconfig
curl https://gitlab.com/pgwipeout/quartz64_ci/-/raw/main/quartz64_defconfig?inline=false -o arch/arm64/configs/pinenote_defconfig
```

Add f2fs to the config:
```
CONFIG_F2FS_FS=y
CONFIG_F2FS_STAT_FS=y
CONFIG_F2FS_FS_XATTR=y
CONFIG_F2FS_FS_POSIX_ACL=y
CONFIG_F2FS_FS_SECURITY=y
```

Replace `1450000` (`regulator-min-microvolt` and `regulator-max-microvolt`) in `rk3566-pinenote.dts` with `960000` (replace with your VCOM).

Compile as above.

```sh
make pinenote_defconfig
make -j $(nproc) all

mkdir pack
make INSTALL_MOD_PATH=pack modules_install
make INSTALL_PATH=pack dtbs_install

cd ..
mkdir out2
cd out2
cp ../linux/arch/arm64/boot/Image out
cp ../linux/pack/dtbs/*/rockchip/rk3566-pinenote.dtb out
rsync -av ../linux/pack/lib/modules out --exclude='*/source' --exclude='*/build'

adb push Image /sdcard/Image2
adb push rk3566-pinenote.dtb /sdcard/rk3566-pinenote2.dtb
```

## Installing Arch (WIP)

Get firmware from Android:
```sh
adb shell
su
cd /vendor/etc/firmware
tar -c -j -f /sdcard/firmware.tar.bz2 *
dd if=/dev/block/mmcblk2p3 of=/sdcard/waveform.bin bs=1k count=2048  # matches waveform partition
sha1sum /sdcard/firmware.tar.bz2 /sdcard/waveform.bin
exit
exit
adb pull /sdcard/firmware.tar.bz2
adb pull /sdcard/waveform.bin
sha1sum firmware.tar.bz2 waveform.bin
```

Download and extract Arch:
```sh
wget http://os.archlinuxarm.org/os/ArchLinuxARM-aarch64-latest.tar.gz{,.sig}
gpg --recv-key 68B3537F39A313B3E574D06777193F152BDBE6A6
gpg --verify ArchLinuxARM-aarch64-latest.tar.gz{.sig,}

mkdir arch
bsdtar xfv ArchLinuxARM-aarch64-latest.tar.gz -C arch

mkdir initramfs
cd initramfs
zcat ../arch/boot/initramfs-linux.img | cpio -idmv  # see https://access.redhat.com/solutions/24029
```

Add hook to mount subdirectory has root (https://bbs.archlinux.org/viewtopic.php?pid=932362#p932362):
```sh
cp hooks/{udev,dir}  # preserve permissions
```
Replace code in `hooks/dir` with
```sh
run_hook() {
    echo "Root FS is in: $dir"
    
    dir_pre_mount_handler="$mount_handler"
    mount_handler=dir_mount_handler
}

dir_mount_handler() {
    $dir_pre_mount_handler "$1"
    mount --bind "$1/$dir" "$1"
}
```
Add `dir` hook to `CONFIG`:
```
HOOKS="dir udev"
```
Later we can add `dir=os/arch` as kernel parameter to choose the directly containing root.

Repack initramfs:
```sh
find . | cpio -H newc -o -R root:root | gzip -9 > ../out/initramfs_dir.img
cd ../out
mkimage -A arm -T ramdisk -C none -n uInitrd -d initramfs_dir.img uInitrd.img
```

Create Arch root:
```sh
cd out/modules/
tar cf ../modules.tar *
cd ..
# the clm_blob does not seem to work but is optional?
# wget https://github.com/ccrisan/thingos/raw/96a19ddb3143e34b1c46001371fea002331c9356/board/raspberrypi/overlay/lib/firmware/brcm/brcmfmac43455-sdio.clm_blob
adb push modules.tar /sdcard
adb push rk3566-pinenote.dtb /sdcard
adb push Image /sdcard
adb push waveform.bin /sdcard
adb push firmware.tar.bz2 sdcard /sdcard
# adb push brcmfmac43455-sdio.clm_blob /sdcard
adb push uInitrd.img /sdcard
cd ..
adb push ArchLinuxARM-aarch64-latest.tar.gz /sdcard
adb shell
su
mkdir -p /data/os/arch
cd /sdcard
tar -x -f ArchLinuxARM-aarch64-latest.tar.gz -C /data/os/arch/
tar -x -f modules2.tar -C /data/os/arch/lib/modules/
chown -R 0:0 /data/os/arch/lib/modules/5*
tar -x -f firmware.tar.bz2 -C /data/os/arch/lib/firmware/
mv /data/os/arch/lib/firmware /data/os/arch/lib/firmware_bak
mkdir /data/os/arch/lib/firmware
cp waveform.bin /data/os/arch/lib/firmware/
chmod +r /data/os/arch/lib/firmware/waveform.bin
mkdir /data/os/arch/lib/firmware/brcm
# cp brcmfmac43455-sdio.clm_blob /data/os/arch/lib/firmware/brcm/
# chmod +r /data/os/arch/lib/firmware/brcmfmac43455-sdio.clm_blob
cp uInitrd.img /cache
cp rk3566-pinenote2.dtb Image2 /cache
cd /data/os/arch/lib/firmware/
cp fw_bcm43455c0_ag_cy.bin brcm/brcmfmac43455-sdio.bin
cp nvram_ap6255_cy.txt brcm/brcmfmac43455-sdio.txt
cp fw_bcm43455c0_ag_cy.bin brcm/brcmfmac43455-sdio.pine64,pinenote.bin
cp nvram_ap6255_cy.txt brcm/brcmfmac43455-sdio.pine64,pinenote.txt
cp BCM4345C0.hcd brcm/BCM4345C0.hcd
```

Boot into uboot
```sh
picocom /dev/ttyUSB0 -b 1500000 -l

load mmc 0:b ${kernel_addr_r} /Image
load mmc 0:b ${fdt_addr_r} /rk3566-pinenote.dtb
load mmc 0:b ${ramdisk_addr_r} /uInitrd.img
setenv bootargs ignore_loglevel root=/dev/mmcblk0p16 rw rootwait earlycon console=tty0 console=ttyS2,1500000n8 fw_devlink=off dir=os/arch
booti ${kernel_addr_r} ${ramdisk_addr_r} ${fdt_addr_r}

```

extlinux.conf

```
timeout 10
default MAINLINE
menu title boot prev kernel

label MAINLINE
  kernel /Image2
  fdt /rk3566-pinenote2.dtb
  initrd /uInitrd.img
  append ignore_loglevel root=/dev/mmcblk0p16 rw rootwait earlycon console=tty0 console=ttyS2,1500000n8 fw_devlink=off dir=os/arch
```

Boot with:
```
sysboot ${devtype} ${devnum}:b any ${scriptaddr} extlinux.conf

```

Login with `root:root`


## Boot Alpine

Based on https://musings.martyn.berlin/cross-compiling-the-linux-kernel-for-the-pinenote-or-other-arm-device

```sh
# copy kernel and dtb
adb push out/Image /sdcard
adb push out/rk3566-pinenote.dtb /sdcard

# copy alpine minirootfs
wget https://dl-cdn.alpinelinux.org/alpine/v3.15/releases/aarch64/alpine-minirootfs-3.15.0-aarch64.tar.gz
adb push alpine-minirootfs-3.15.0-aarch64.tar.gz /sdcard

# copy files and extract minirootfs to /cache
adb shell
cd /sdcard
su
cp rk3566-pinenote.dtb Image /cache
tar -zxf alpine-minirootfs-3.15.0-aarch64.tar.gz -C /cache
echo "nameserver $(getprop net.dns1)" > /cache/etc/resolv.conf 

# chroot into alpine (turn on screen to connect to wifi)
env -i PATH=/usr/bin:/bin:/usr/sbin:/sbin chroot /cache
apk add --no-cache parted e2fsprogs
```

Connect serial adapter, reboot, hold Ctrl-C until you are in the uboot shell.
```sh
picocom /dev/ttyUSB0 -b 1500000 -l
```
Paste into uboot (cannot paste all at once):
```sh
load mmc 0:b ${kernel_addr_r} /Image
load mmc 0:b ${fdt_addr_r} /rk3566-pinenote.dtb
setenv bootargs ignore_loglevel root=/dev/mmcblk0p11 rw rootwait earlycon console=tty0 console=ttyS2,1500000n8 fw_devlink=off init=/bin/sh
booti ${kernel_addr_r} - ${fdt_addr_r}
```
After linux boots:
```sh
export TERM=dumb
mount -t proc proc /proc

parted
select /dev/mmcblk0
print                                                            
```
After a few seconds, you should see the partition table.
```
Model: Generic SD/MMC Storage Card (sd/mmc)
Disk /dev/mmcblk0: 124GB
Sector size (logical/physical): 512B/512B
Partition Table: gpt
Disk Flags: 

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
```

## Looproot

By ssgelm in discord

```
default l0
menu title U-Boot menu
prompt 0
timeout 0


label l0
        menu label Debian GNU/Linux sid 5.16.0-rc8-dirty
        linux /vmlinuz-5.16.0-rc8-dirty
        fdt /rk3566-pinenote.dtb
        append initrd=/uinitrd rw root=/dev/loop0 looproot=/dev/mmcblk0p16 loop=/media/0/debian.img earlycon console=tty0 console=ttyS2,1500000n8 fw_devlink=off
```

Correction(?) by Danct12
```
        menu label Debian GNU/Linux sid 5.16.0-rc8-dirty
        linux /vmlinuz-5.16.0-rc8-dirty
        initrd /uinitrd
        fdt /rk3566-pinenote.dtb
```

```
root@pinenote:~# cat /etc/initramfs-tools/scripts/init-top/loopboot
#!/bin/sh

PREREQ=""
prereqs()
{
    echo "$PREREQ"
}
case $1 in
# get pre-requisites
prereqs)
    prereqs
    exit 0
    ;;
esac

[ -d ${rootmnt}2 ] || mkdir --mode=0700 ${rootmnt}2
root@pinenote:~# cat /etc/initramfs-tools/scripts/local-premount/loopboot
#!/bin/sh

PREREQ=""
prereqs()
{
    echo "$PREREQ"
}
case $1 in
# get pre-requisites
prereqs)
    prereqs
    exit 0
    ;;
esac

mount -n -t f2fs -o nodiratime,noatime ${looproot} ${rootmnt}2

mknod -m660 /dev/loop0 b 7 0
losetup /dev/loop0 ${rootmnt}2${loop}
```