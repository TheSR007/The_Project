# Zsh Setup
## Installing Zsh
### Debian and Debian Based
```
apt update
apt install zsh
```
### Fedora
```
dnf install zsh
```
### CentOS/RHEL
```
yum install zsh
```
### For CentOS 8 and RHEL 8:
```
dnf install zsh
```
### Arch Linux
```
pacman -S zsh
```
### OpenSUSE
```
zypper install zsh
```
### Gentoo
```
emerge app-shells/zsh
```
### Alpine Linux
```
apk add zsh
```
### Void Linux
```
xbps-install zsh
```
### Slackware Linux
```
slackpkg install zsh
```
### Termux (Android)
```
pkg install zsh
```
### OpenBSD
```
pkg_add zsh
```
### FreeBSD
```
pkg install zsh
```
---
## After Installation
#### Once Zsh is installed, you can set it as the default shell with:

```
chsh -s $(which zsh)
```

## Installing Oh-My-Zsh
#### Installing Oh-My-Zsh will enhance your experience, as it offers many plugins and themes and so on.
| Method |	                                          Command                                              |
| :----: | :---------------------------------------------------------------------------------------------: |
| curl	 | sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)" |
| wget	 | sh -c "$(wget -O- https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"   |
| fetch	 | sh -c "$(fetch -o - https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)" |
#### Alternatively, the installer is also mirrored outside GitHub. Using this URL instead may be required if you're in a country like China or India (for certain ISPs), that blocks raw.githubusercontent.com:
| Method |	               Command                         |
| :----: | :---------------------------------------------: |
| curl	 | sh -c "$(curl -fsSL https://install.ohmyz.sh/)" |
| wget	 | sh -c "$(wget -O- https://install.ohmyz.sh/)"   |
| fetch	 | sh -c "$(fetch -o - https://install.ohmyz.sh/)" |

## Oh-My-Zsh Setup for All users (Optional)
### moving ohmyzsh 
```
mv ~/.oh-my-zsh /usr/share/ohmyzsh
``` 
we need to move  the existing .zshrc to /etc/zsh/zshrc
```
mv ~/.zshrc /etc/zsh/zshrc
```
need to change the ZSH path in /etc/zsh/zshrc
```
export ZSH="/usr/share/ohmyzsh"
```
### Replace existing .zshrc with 'we will use /etc/zsh/zshrc' as we will use /etc/zsh/zshrc as global
```
echo "# we will use /etc/zsh/zshrc" > ~/.zshrc
```
---

## Some OMZ Commands
```
omz help (for help msg)
omz reload (reloads oh my zsh)
omz update (updates omz)
omz plugin <command> (Manage plugins)
omz theme  <command> (Manage themes)
```
---

## omz update issue (.git not found)
you need to install ohmyzsh as git repo if you face this issue
```
cd /usr/share
mv ohmyzsh ohmyzsh-backup
git clone https://github.com/ohmyzsh/ohmyzsh.git ohmyzsh
mv ohmyzsh-backup ohmyzsh
omz update
```
---

### My zshrc is provided [here](etc/zsh/zshrc). Here are all the [plugins](https://github.com/ohmyzsh/ohmyzsh/tree/master/plugins) and [themes](https://github.com/ohmyzsh/ohmyzsh/wiki/Themes) and [oh-my-zsh wiki](https://github.com/ohmyzsh/ohmyzsh/wiki/).