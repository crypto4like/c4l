
Debian
====================
This directory contains files used to package crypto4liked/crypto4like-qt
for Debian-based Linux systems. If you compile crypto4liked/crypto4like-qt yourself, there are some useful files here.

## crypto4like: URI support ##


crypto4like-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install crypto4like-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your crypto4likeqt binary to `/usr/bin`
and the `../../share/pixmaps/crypto4like128.png` to `/usr/share/pixmaps`

crypto4like-qt.protocol (KDE)

