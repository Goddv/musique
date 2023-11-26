%define name musique
%define version 1.12
%define release 1
%define buildroot %{_tmppath}/%{name}-%{version}-%{release}-root-%(%{__id_u} -n)

Summary: A Music Player
Name: %{name}
Version: %{version}
Release: %{release}
License: GPLv3+
Source0: %{name}-%{version}.tar.gz
URL: https://github.com/Goddv/musique

# Build requirements
BuildRequires: gcc
BuildRequires: make
BuildRequires: qt6-qtbase-devel

# Add any other build dependencies here
BuildRequires: mpv-devel
BuildRequires: taglib-devel
BuildRequires: mesa-libGL-devel 
BuildRequires: qt6-qtdeclarative-devel
BuildRequires: qt6-qtbase-mysql
BuildRequires: qt6-qttools-devel
BuildRequires: qt6-qttranslations

# Requires
Requires: qt6

%description
Musique is a simple, lightweight, and elegant music player for your desktop.

%prep
%setup -q

%build
qmake6
make

%install
rm -rf %{buildroot}
make INSTALL_ROOT=%{buildroot} install

%clean
rm -rf %{buildroot}

%files
%defattr(-,root,root,-)
%doc README.md
/usr/bin/musique
# Add any other files to package here

%changelog
* Mon Nov 25 2023 Your Name <akagoddv@gmail.com> - %{version}-%{release}
- Initial RPM package release
