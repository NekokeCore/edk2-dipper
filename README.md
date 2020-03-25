Attempt to create a minimal EDK2 for Xiaomi MI8 - dipper.

Based on zhuowei's port for Pixel3XL (https://github.com/Pixel3Dev/edk2-pixel3/).

## Status 
[![FOSSA Status](https://app.fossa.io/api/projects/git%2Bgithub.com%2FNekokeCore%2Fedk2_dipper_SDM845_Xiaomi_mi_8.svg?type=shield)](https://app.fossa.io/projects/git%2Bgithub.com%2FNekokeCore%2Fedk2_dipper_SDM845_Xiaomi_mi_8?ref=badge_shield)


Can load GRUB2 from a fat partition on the emmc.(/firmware is tested,you can also format the useless /vendor for it)
Can partially boot the Fedora 29 aarch64 kernel: there's no initrd, so the kernel panics when mounting root FS.

## Building
Tested on Ubuntu 18.04.

First, clone EDK2.

```
cd ..
git clone https://github.com/tianocore/edk2.git --recursive
git clone https://github.com/tianocore/edk2-platforms.git
```

You should have all three directories side by side.

Next, install dependencies:

18.04:

```
sudo apt install build-essential uuid-dev iasl git nasm python3-distutils gcc-aarch64-linux-gnu
```

Also see [EDK2 website](https://github.com/tianocore/tianocore.github.io/wiki/Using-EDK-II-with-Native-GCC#Install_required_software_from_apt)

Finally, ./build.sh.

Then fastboot boot uefi.img.

# Credits

SimpleFbDxe screen driver is from imbushuo's [Lumia950XLPkg](https://github.com/WOA-Project/Lumia950XLPkg).


## License
[![FOSSA Status](https://app.fossa.io/api/projects/git%2Bgithub.com%2FNekokeCore%2Fedk2_dipper_SDM845_Xiaomi_mi_8.svg?type=large)](https://app.fossa.io/projects/git%2Bgithub.com%2FNekokeCore%2Fedk2_dipper_SDM845_Xiaomi_mi_8?ref=badge_large)