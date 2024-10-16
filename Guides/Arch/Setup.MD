# Arch Installation
## The Easy Way aka archinstall
```
archinstall
```
### just set it up as usual and be done with the installation

## The Arch way aka following the Arch Installation guide

## 1. Checking Internet Access
```
ip a
```
### check if you have ip address which you should have by default if you are using Ethernet, for Wifi or SIM you need to setup them manually
```
ping archlinux.org
```
### check if ping works

### optional
```
timedatectl
```
---
### sync time, tho it will auto do it if you have internet access

## 2. Setting up the Disk

#### List all the disks
```
fdisk -l
```
or 
```
lsblk
```
#### # Results ending in rom, loop or airootfs may be ignored. mmcblk* devices ending in rpbm, boot0 and boot1 can be ignored.

### Partitioning The Disk
#### Example UEFI and Bios partition
#### UEFI with GPT
|  Mount Point on the Installed System   |            Partition         |     Partition Type       |             Suggested Size               |
| :------------------------------------: | :--------------------------: | :----------------------: | :--------------------------------------: |
|               /boot/efi                |   /dev/efi_system_partition  |   EFI system partition   |                 1 GiB                    |
|                [SWAP]                  |      /dev/swap_partition     |       Linux swap         |              At least 4 GiB              |
|                   /                    |      /dev/root_partition     |   Linux x86-64 root (/)  | At least 23–32 GiB (remainder of device) |

### BIOS with MBR
|  Mount Point on the Installed System   |            Partition         |     Partition Type       |             Suggested Size               |
| :------------------------------------: | :--------------------------: | :----------------------: | :--------------------------------------: |
|                [SWAP]                  |      /dev/swap_partition     |       Linux swap         |              At least 4 GiB              |
|                   /                    |      /dev/root_partition     |   Linux x86-64 root (/)  | At least 23–32 GiB (remainder of device) |

### You will have to create these partition in the disk if doesn't exist
```
fdisk /dev/sda
```
#### # here sda is my_disk name, yours can be different
```
m
```
#### shows help
```
p
```
#### p will print all the partitions of the sda disk
```
g
```
#### g will delete all the partitions of the sda disk
---

### Making the Partitions
#### n to create new partition, and create the partition as per the above table
```
n (adds a new partition)
Enter (keeping the default partion number)
Enter (keeping the default first sector)
+1G (we doing 1G for efi_system_partition)
```
#### Create all 3 partition this way and for the / make last sector to default which will take up all the empty disk space or custom if you want that
---

### Changing the Partition Type
#### By default all the partion type is Linux filesystem by default, but we need to change for efi and swap
```
t (change partition type)
1 (change the first partition type)
l (list all the partition type, see the number and q to quit)
1 (for efi system partition)
```
#### Do the same for the swap partition (/ root partition is not necessary to change to Linux x86-64 root (/))
---

### Writing the Changes
#### Writing changes will format the disk as well
```
p (to check the changes)
w (will write and quit)
```
---
### Formatting the Partitions
```
lsblk (to check the partition names)
mkfs.fat -F32 /dev/sda1 (formats the efi partition to fat32 format)
mkswap /dev/sda2 (formats the swap partition to swap format)
mkfs.ext4 /dev/sda3  (formats the root partition to ext4 format)
```
#### # note: () is used for comment, don't put them in commands lol
---

### Mounting the File Systems
```
mkdir -p /mnt/boot/EFI
mount /dev/sda1 /mnt/boot/EFI
swapon /dev/sda2
mount /dev/sda3 /mnt
```
#### Mounting the EFI, swap and root

## 3. System instalation
```
reflector (it will update the mirrorlist and sort them based on download speed)
```
#### # note:  No software or configuration (except for /etc/pacman.d/mirrorlist) gets carried over from the live environment to the installed system.

```
pacstrap -i /mnt base linux linux-firmware
```
#### # Tip:
- You can substitute [linux](https://archlinux.org/packages/?name=linux) with a [kernel](https://wiki.archlinux.org/title/Kernel) package of your choice, or you could omit it entirely when installing in a container.
- You could omit the installation of the firmware package when installing in a virtual machine or container.
---

## 4. Configuring the system
### Fstab
```
genfstab -U /mnt > /mnt/etc/fstab
```
#### Check the resulting /mnt/etc/fstab file, and edit it in case of errors.

### Chroot
```
arch-chroot /mnt
```
#### Change root into the new system

### Root password and Additional users
```
passwd

useradd -m -g users -G wheel user (m is to create home directory, g is to add primary user group,  G is to add additional user groups)

passwd user
```
#### # note: I am adding an extra user who has sudo access, you can skip this if you don't need it and wanna use root by default.

### Installing Useful packages
```
pacman -S grub efibootmgr gnome gnome-tweaks nano networkmanager sudo
```
#### We are adding bootloader(grub, efibootmgr), Desktop Environment(gnome, gnome-tweaks), Text Editor(nano),  Network Manager(networkmanager) and Super User Access(sudo)
#### # note:  You can install additional packages as needed. Check [List of applications](https://wiki.archlinux.org/title/List_of_applications)  
---

### Localization
```
nano /etc/locale.gen (uncomment en_US.UTF-8 UTF-8)
locale-gen
echo LANG=en_US.UTF-8 > /etc/locale.conf
```
---

### Hostname
```
echo arch > /etc/hostname
```
#### setting the hostname
---

### Bootloader
```
grub-install --target=x86_64-efi --bootloader-id=grub_uefi --efi-directoy=/boot/EFI --recheck
grub-mkconfig -o /boot/grub/grub.cfg
```
#### installing the grub bootloader

### Services
```
systemctl enable gdm
systemctl enable NetworkManager
```
#### Enabling the NetworkManager for Internet and gdm(GNOME Display Manager) for the Gnome desktop environment

### Final steps
```
exit (exit from chroot)
umount -R /mnt
reboot
```
#### And We are done with the instalation
