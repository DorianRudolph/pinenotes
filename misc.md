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
load mmc 0:b ${kernel_addr_r} /Image2
load mmc 0:b ${fdt_addr_r} /rk3566-pinenote2.dtb
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