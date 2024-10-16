# Arch Linux Installation Guide

This guide provides two methods to install Arch Linux: the easier `archinstall` method and the more manual "Arch Way" method. The manual method offers greater control over the installation process.

## Overview of Installation Steps

1. **Checking Internet Access**: Verify that you have an active internet connection, which is essential for downloading packages.

2. **Setting Up the Disk**:
   - **List Disks**: Identify your storage devices.
   - **Partitioning**: Create the necessary partitions for EFI, swap, and root. This includes configuring partition types and sizes suitable for your system (UEFI or BIOS).

3. **System Installation**: 
   - Use `reflector` to update the mirror list for package downloads.
   - Install the base system and necessary firmware using `pacstrap`.

4. **Configuring the System**:
   - Generate the filesystem table (`fstab`).
   - Change root into the new system and set up users and passwords.
   - Install additional packages, including the bootloader and desktop environment.

5. **Localization and Hostname**: Configure the system locale and set a hostname for your machine.

6. **Bootloader Setup**: Install and configure GRUB to manage system booting.

7. **Service Management**: Enable necessary services like GDM (GNOME Display Manager) and NetworkManager to start on boot.

8. **Final Steps**: Exit the chroot environment, unmount filesystems, and reboot to complete the installation.

This guide is designed for users who prefer a detailed understanding of each step in the installation process, allowing for a fully customized Arch Linux setup.
Checkout [Setup](Setup.MD).

## Useful Links: <br>
[General Recommendations](https://wiki.archlinux.org/title/General_recommendations) <br>
[Desktop Environment](https://wiki.archlinux.org/title/Desktop_environment) <br>
[Window Manager](https://wiki.archlinux.org/title/Window_manager) <br>
[Pacman](https://wiki.archlinux.org/title/Pacman) the Package Manager of Arch
