<p align="center">
<img src="https://flavio.tordini.org/files/products/musique.png">
</p>

# Musique
Musique is a music player built for speed, simplicity and style. It is written in C++ using the Qt framework. Contributing is welcome, especially in the Linux desktop integration area.

## Translating Musique to your language
Translations are done at https://www.transifex.com/flaviotordini/musique/
Just register and apply for a language team. Please don't request translation merges on GitHub.

## Build instructions
To compile Musique you need at least Qt 6.0. The following Qt modules are needed: core, gui, widgets, network, sql (using the Sqlite plugin), declarative, dbus. You also need TagLib: http://taglib.github.io and MPV >= 0.29.0: https://mpv.io/

To be able to build on a RHEL (or derivative) system:

	sudo dnf install qt6-qtbase-devel mpv-devel taglib-devel mesa-libGL-devel qt6-qtdeclarative-devel qt6-qtbase-mysql qt6-qttools-devel qt6-qttranslations

Clone from original Github repo (for Debian-based):

    git clone --recursive https://github.com/flaviotordini/musique.git

Clone from my Github repo for RHEL compatibility:

    git clone --recursive https://github.com/Goddv/musique.git

Compiling:

    qmake6 && make

On Fedora, qmake has been renamed to qmake6 for Qt 6.

Running:

	build/target/musique

Installing on Linux:

    sudo make install

This is for packagers. End users should not install applications in this way.
