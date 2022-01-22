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
cp ../linux/arch/arm64/boot/Image .
cp ../linux/pack/dtbs/*/rockchip/rk3566-pinenote.dtb .
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
(mount in linux with `mount /dev/mmcblk0p11 /cache`)

Boot with:
```
sysboot ${devtype} ${devnum}:b any ${scriptaddr} extlinux.conf

```

Login with `root:root`


Chroot from android into arch to install network utilities.
```sh
cd /data/os/arch
mount -t proc /proc proc/
mount --rbind /sys sys/
mount --rbind /dev dev/
cd etc
mv resolv.conf resolv.conf.bak
echo nameserver 192.168.178.1 > resolv.conf
env -i PATH=/usr/bin:/bin:/usr/sbin:/sbin chroot /data/os/arch/
mount -t tmpfs tmpfs /tmp

# https://archlinuxarm.org/platforms/armv8/rockchip/rock64
pacman-key --init
pacman-key --populate archlinuxarm

# comment checkspace in /etc/pacman.conf
pacman -Syuu
pacman -S networkmanager wpa_supplicant bluez iwd iw dialog

# uninstall firmware and kernel, which we don't use
pacman -R linux-aarch64  linux-firmware linux-firmware-whence
```


```sh
systemctl enable --now NetworkManager
nmcli device wifi connect <ssid> password <pwd>

systemctl enable --now sshd
```

Now we can ssh into the pinenote with 

```sh
ssh-copy-id -i ~/.ssh/id_rsa.pub alarm@192.168.178.80
ssh alarm@129.168.178.20
# deafult password alarm

su
# uncomment en_US.UTF-8 in /etc/locale.gen
locale-gen

# install larger font for TTY
pacman -S terminus-font
FONT=ter-124n
echo FONT=ter-124n > /etc/vconsole.conf
```

Check filesystem:

```sh
# alpine on the cache partition
sudo mount /dev/mmcblk0p11 /cache
sudo env -i PATH=/usr/bin:/bin:/usr/sbin:/sbin chroot /cache sh
apk add f2fs-tools

# boot into apline
fsck.f2fs -f /dev/mmcblk0p16
```

Connect bluetooth keyboard:
```
pacman -S bluez bluez-utils
systemctl enable --now bluetooth
```

Change LUT:
```sh
# default is 7
printf 7 > /sys/module/rockchip_ebc/parameters/lut_type

# force refresh on next frame
printf 1 > /sys/module/rockchip_ebc/parameters/force_refresh
```

Backlight (values from 0 to 255):
```sh
echo 0 > /sys/class/backlight/backlight_warm/brightness
echo 0 > /sys/class/backlight/backlight_cool/brightness
```


Run sway:


```sh
# add to .bash_profile (no GPU support yet)
export LIBGL_ALWAYS_SOFTWARE=true
export GALLIUM_DRIVER=llvmpipe
export WLR_RENDERER_ALLOW_SOFTWARE=1
```