
Debian
====================
This directory contains files used to package lapislazulid/lapislazuli-qt
for Debian-based Linux systems. If you compile lapislazulid/lapislazuli-qt yourself, there are some useful files here.

## lapislazuli: URI support ##


lapislazuli-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install lapislazuli-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your lapislazuli-qt binary to `/usr/bin`
and the `../../share/pixmaps/lapislazuli128.png` to `/usr/share/pixmaps`

lapislazuli-qt.protocol (KDE)

