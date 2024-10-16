# Kali WSL Setup
## 1. To Choose Distribution name from Available ones
```
wsl --list --online
```
### (-o / --online, -l / --list)
---
## 2. Installing From The Web and not Launching it directly
```
wsl --install --web-download --no-launch kali-Linux
```
### (-n / --no-launch)
---

## 3. Setting Kali to Default Distro
```
wsl --set-default kali-Linux
```
---

## 4. Setting kali to WSL version 2
```
wsl --set-version kali-linux 2
```
### (-s / --set-version)
---

## 5. TO make wsl 2 Default Version
```
wsl --set-default-version 2
```

### Some WSL commands
```
wsl --help (TO get all The commands)
wsl --terminate kali-linux (To ShutDown Kali)
wsl --unregister kali-linux (To Uninstall Kali)
wsl --shutdown (To ShutDown WSL and All distros)
wsl --distribution kali-linux --user root (To login in kali as root)
```
### (-d / --distrubution, -u / --user)
---

## 6. Logging in
```
kali
```
### (Kali uses kali as a shortcut to login with the default login)
---

## 7. Init Steps
```
touch ~/.hushlogin
sudo su
passwd
apt update && apt upgrade
apt install -y kali-win-kex
apt install kali-tweaks
kali-tweaks
```
### (Installing top tools, zsh and others)
---

## 8. Change The Shell to Zsh if it didn't already for default User
```
cat /etc/shells
which zsh
chsh -s /usr/bin/zsh
```
### Logout and Login and Check
```
echo $SHELL 
which $SHELL
```
---
## 9. Installing Oh-My-Zsh
```
sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
mv ~/.oh-my-zsh /usr/share/ohmyzsh
```
### empty existing .zshrc (echo '' > ~/.zshrc) as we will use /etc/zsh/zshrc as global  
### Some OMZ Commands
```
omz help (for help msg)
omz reload (reloads oh my zsh)
omz update (updates omz)
omz plugin <command> (Manage plugins)
omz theme  <command> (Manage themes)
```
---

## 10. Using Kex
```
kex -s (to start Win-Kex in window mode with sound)
kex --ems -s (to start Win-Kex in RDP Mode with sound)
kex --sl -s (to start Win-Kex in Seamless Mode with sound)
kex status (to see kex's status)
kex <Mode> --stop (to stop that mode)
kex kill (to stop kex all together)
```

## Extra
### Symlinks to auto setup all our configs from Documents so it's easier to edit to config from windows
```
// ln -s link target (soft link where target will be linked to link) 

// For wsl.conf

ln -s /mnt/c/Users/thesr/Documents/dotfiles/Kali_WSL/etc/wsl.conf /etc/wsl.conf

// For zshrc for oh-my-zsh

ln -s /mnt/c/Users/thesr/Documents/dotfiles/Kali_WSL/etc/zsh/zshrc /etc/zsh/zshrc
```
---
### omz update issue (.git not found)
you need to install ohmyzsh as git repo if you face this issue
```
cd /usr/share
mv ohmyzsh ohmyzsh-backup
git clone https://github.com/ohmyzsh/ohmyzsh.git ohmyzsh
mv ohmyzsh-backup ohmyzsh
omz update
```
---
