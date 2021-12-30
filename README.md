# pinenotes
Notes about PineNote development

## Rooting

We use [Magisk](https://github.com/topjohnwu/Magisk) following the [tutorial](https://topjohnwu.github.io/Magisk/install.html#patching-images).

Right now, we need to use Magisk build [c85b2a0](https://github.com/canyie/Magisk/actions/runs/1627522914) ([backup](static/magisk_c85b2a0.apk), [commit](https://github.com/canyie/Magisk/commit/c85b2a06e4c0d2322f4b8ac108fd32f0c3856c07)) as discussed in the [issue](https://github.com/topjohnwu/Magisk/issues/5125) (many thanks to canyie for fixing this so quickly).

```
adb push boot.img /sdcard/boot.img  # d60f4054edb91259fb4471eb5f0ba53803b9a7e2300c3647e11f7b71aa95a003
adb install magisk_c85b2a0.apk
# install magisk to boot.img
adb pull /sdcard/Download/magisk_patched-23011_dhTkI.img boot_magisk.img
rkdeveloptool write-partition boot boot_magisk.img
rkdeveloptool reboot
```


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
(Update: I recommend `uboot_patched.img` (see above), which can also boot android)

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

## Custom Logo

The PineNote has a `logo` partition containing images displayed by uboot for when the device is off.
There exists a tool called `bmp2gray.c` in the downstream uboot, but it does not appear to quite match the partition.
So I wrote my own [logotool](logodump/logotool.c) to convert the logo partition to PNGs and back.
While I haven't created custom logos, the logotool is able to recreate the logo partition exactly (see the [test.sh](logodump/test.sh) script).

## Links

- Reimplementation of Rockchip E-Ink waveform/LUT code: https://gitlab.com/smaeul/ebc-dev/-/tree/main
- hwcomposer (android component that communicates with the ebc driver): https://github.com/TinkerBoard-Android/hardware-rockchip-hwcomposer-einkhwc
- downstream linux: https://toscode.gitee.com/caesar-wang/ohos-kernel-4.19
- smaeul's repo, current driver is 2.08 (BSP has 1.04): https://github.com/smaeul/linux/commits/rk356x-ebc-dev/drivers/gpu/drm/rockchip/ebc-dev
- pwarren's partition backup: https://pwarren.id.au/pinenote/partitions/
- latest BSP U-Boot: https://toscode.gitee.com/caesar-wang/u-boot / https://github.com/Caesar-github/u-boot / https://github.com/JeffyCN/rockchip_mirrors/tree/u-boot
  - installed version: U-Boot 2017.09-g966d3c1 (aarch64-linux-gnu-gcc (Linaro GCC 6.3-2017.05) 6.3.1 20170404; GNU ld (Linaro_Binutils-2017.05) 2.27.0.20161019)
    - this commit is not in any repo???
  - earlier version: U-Boot 2017.09-gead987b #chichengzao (Aug 23 2021 - 16:15:18 +0800)
- neural network toolkit:
  - https://wiki.t-firefly.com/en/ROC-RK3566-PC/usage_npu.html
  - https://github.com/rockchip-linux/rknn-toolkit2/blob/master/doc/Rockchip_User_Guide_RKNN_Toolkit2_EN-1.1.0.pdf 
- Documentation about eink refresh modes: https://www.waveshare.net/w/upload/c/c4/E-paper-mode-declaration.pdf

## Eink Refresh

I was curious how the refresh is done (refresh button in the android apps).
I decompiled the com.xrz.ebook app, which is not obfuscated.
The reader appears to be a modified version of [FBreader](https://fbreader.org/) with added function for annotating and eink refresh.
It sets flush modes (in BSP source) by calling the `EinkService` with the following modes:
```
HD mode:             GL:      7
Normal mode:         A2:     15
Extreme speed mode:  Du:     13
Regal mode:          Regal:  10
```

The actual enum in `ebc_dev.h` from Android BSP:
```c
enum panel_refresh_mode {
	EPD_AUTO		= 0,
	EPD_OVERLAY		= 1,
	EPD_FULL_GC16		= 2,
	EPD_FULL_GL16		= 3,
	EPD_FULL_GLR16		= 4,
	EPD_FULL_GLD16		= 5,
	EPD_FULL_GCC16		= 6,
	EPD_PART_GC16		= 7,
	EPD_PART_GL16		= 8,
	EPD_PART_GLR16		= 9,
	EPD_PART_GLD16		= 10,
	EPD_PART_GCC16		= 11,
	EPD_A2			= 12,
	EPD_DU			= 13,
	EPD_RESET		= 14,
	EPD_SUSPEND		= 15,
	EPD_RESUME		= 16,
	EPD_POWER_OFF		= 17,
	EPD_PART_EINK		= 18,
	EPD_FULL_EINK		= 19,
};
```

Current version [2.08](https://github.com/smaeul/linux/blob/26a761b44caa31fa36774686f27e68e0da3bacc0/drivers/gpu/drm/rockchip/ebc-dev/ebc_dev.h) is
```c
enum panel_refresh_mode {
	EPD_AUTO		= 0,
	EPD_OVERLAY		= 1,
	EPD_FULL_GC16		= 2,
	EPD_FULL_GL16		= 3,
	EPD_FULL_GLR16		= 4,
	EPD_FULL_GLD16		= 5,
	EPD_FULL_GCC16		= 6,
	EPD_PART_GC16		= 7,
	EPD_PART_GL16		= 8,
	EPD_PART_GLR16		= 9,
	EPD_PART_GLD16		= 10,
	EPD_PART_GCC16		= 11,
	EPD_A2			= 12,
	EPD_A2_DITHER	        = 13,
	EPD_DU			= 14,
	EPD_DU4			= 15,
	EPD_A2_ENTER		= 16,
	EPD_RESET		= 17,
	EPD_SUSPEND		= 18,
	EPD_RESUME		= 19,
	EPD_POWER_OFF		= 20,
	EPD_FORCE_FULL		= 21,
};
```
These values are also replicated in the custom [`hwcomposer.cpp`](https://github1s.com/TinkerBoard-Android/hardware-rockchip-hwcomposer-einkhwc/blob/HEAD/hwcomposer.cpp#L142).

## Strace

To see the communication with the eink driver, one can use strace.
Copy [strace](https://github.com/ipduh/strace/tree/master/binaries/arm64/26) to `/cache` and then run `/cache/strace -f -p 205`, where `205` is the PID of `android.hardware.graphics.composer@2.1-service` (use `ps -A` to find the PID).
However, it seems like to actually see the full communication data, we would need to patch strace to dereference pointer parameters for the `ioctl` syscalls.

## Eink

The `ebc-dev` driver logs some information.
```
[28380.255116] ebc-dev ebc-dev: frame start, mode = 7, framecount = 46
```
Here the mode corresponds to the `panel_refresh_mode` enum listed above.
From that, we can tell that in the ebook reader,
"HD mode" is `EPD_PART_GC16`, "Normal mode" is `EPD_DU4`, and "Speed mode" is   `EPD_A2_ENTER` then `EPD_A2_DITHER`.
The browser just uses `PART_GC16` and `FORCE_FULL`.

I'm not sure if the regal mode works.
It is disabled in the ebook reader: There is a class DeviceInfo with a property devicePanelType which is set to 0. If it is 0, then the regal mode button is hidden.

Release [2.11](https://github.com/smaeul/linux/commit/1803804eb0be1e578bff94b9523c79df59ee1392#diff-8df0008fd48942d36076fa34a23a2333cc74718070222ae5f8d7fab5e97301dd) references regal mode in its commit message: "register /dev/waveform for hwc with eink regal lib"

```
[M] <smaeul> the only difference between FULL_G16 and PART_G16 is whether the kernel driver does the waveform lookup for each pixel, or if it directly sends zeroes for unchanged pixels
[I] <semiotics> smaeul: afaiui, GLR16 and GLD16 are supposed to be regal things - you are supposed to preprocess the buffer to use grayscale values 29 and 31 for certain white-white transitions, and then it applies special SGU and ghost-reduction waveforms to those pixels. so PART_GLR16/PART_GLD16 seem a bit contradictory (although I guess it still has some effect in 29->29 and 31->31 transitions...)
[M] <smaeul> also the BSP kernel driver does damage/frame tracking on linear 1x16 groups of pixels... it would be interesting to see if we could use some 4x4 tiled pixel format
[M] <smaeul> OVERLAY is the same as AUTO, except that OVERLAY does framebuffer &= background before the LUT lookup
```