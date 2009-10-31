%define ver     @LSBVERSION@
%define lsbver	@TRUELSBVERSION@
# build for LSB 3.0 (bug 2327) 
%define build_target 3.0

Name: lsb-build
Summary: LSB Build environment packages
Version: %ver
Release: @PACKAGE_RELEASE@
License: LF
Vendor: Linux Foundation
Packager: LSB Project <lsb-discuss@linux-foundation.org>
Source: lsb-build-%ver.tar.gz
BuildRoot: /var/tmp/lsb-build-root
AutoReqProv: no
# Does not strictly require lsb
#PreReq: lsb >= 3.1
%description
The LSB Build environment including stubs, headers and compiler wrapper

%package base
Summary: LSB Build environment base package
Group: Development/Tools
Obsoletes: lsbdev-base
Requires: lsb-setup
%description base
The LSB Build environment base package provides stub libraries and header
files. These can be used with lsbcc to build LSB conforming applications.

%package desktop
Summary: LSB Build environment desktop package
Requires: lsb-build-base
Obsoletes: lsbdev-desktop
BuildRequires: lsb-build-base lsb-build-cc
%description desktop
The LSB Build Environment desktop package adds stub libraries and headers
files for desktop support which can be used with lsbcc to build LSB
conforming applications.

%package cc
Summary: LSB Build environment lsbcc package
Requires: lsb-build-base
Obsoletes: lsbdev-cc
BuildRequires: lsb-build-base
%description cc
The LSB Build Environment cc package lsbcc, which can be used to help
build LSB conforming applications.

%prep
%setup -q

%build
# (sb) bug 2487 - we need to bootstrap the build on systems without lsbcc
make INSTALL_ROOT=$RPM_BUILD_ROOT/xbuild install
make clean
# now rebuild using our just-built binaries
make CC=$RPM_BUILD_ROOT/xbuild/bin/lsbcc CXX=$RPM_BUILD_ROOT/xbuild/bin/lsbc++ LSBCC_LSBVERSION=%build_target INSTALL_ROOT=/opt/lsb
%ifarch ppc
make -C lsbdev-cc/crti
%endif

%install
rm -rf $RPM_BUILD_ROOT
make install DESTDIR=$RPM_BUILD_ROOT INSTALL_ROOT=/opt/lsb

# base part:
mkdir -p $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-base
cp package/Licence $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-base
cp package/README-base $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-base/README
( cd $RPM_BUILD_ROOT/opt/lsb/include ; ln -s curses.h ncurses.h )
( cd $RPM_BUILD_ROOT/opt/lsb/include ; rm -fr All IA32 IA64 PPC32 PPC64 S390 S390X x86-64 )
%ifarch ppc64 s390x x86_64
( for i in $RPM_BUILD_ROOT/opt/lsb/lib64-*; do cd $i && ln -s libncurses.so libcurses.so; done )
%else
( for i in $RPM_BUILD_ROOT/opt/lsb/lib-*; do cd $i && ln -s libncurses.so libcurses.so; done )
%endif

# (sb) bug XXXX, let lib{64}-CURRENT be a symlink to lib{64}, 
# owned by lsb-setup, this needs to be tweaked for a new LSB version
%ifarch ppc64 s390x x86_64
  rm $RPM_BUILD_ROOT/opt/lsb/lib64
  mv $RPM_BUILD_ROOT/opt/lsb/lib64-%lsbver $RPM_BUILD_ROOT/opt/lsb/lib64
  (cd $RPM_BUILD_ROOT/opt/lsb; ln -s lib64 lib64-%lsbver)
%else
  rm $RPM_BUILD_ROOT/opt/lsb/lib
  mv $RPM_BUILD_ROOT/opt/lsb/lib-%lsbver $RPM_BUILD_ROOT/opt/lsb/lib
  (cd $RPM_BUILD_ROOT/opt/lsb; ln -s lib lib-%lsbver)
%endif

# desktop part:
mkdir -p $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-desktop
cp package/Licence $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-desktop
cp package/README-desktop $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-desktop/README
%ifarch ppc64 s390x x86_64
( for i in $RPM_BUILD_ROOT/opt/lsb/lib64-*; do cd $i && ln -s libpng12.so libpng.so; done )
%else
( for i in $RPM_BUILD_ROOT/opt/lsb/lib-*; do cd $i && ln -s libpng12.so libpng.so; done )
%endif

# cc part:
mkdir -p $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-cc
cp package/Licence $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-cc
cp package/README-cc $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-cc/README
%ifarch ppc 
for i in $RPM_BUILD_ROOT/opt/lsb/lib*; do install ../lsbdev-cc/crti/crti.o "$i"; done
%endif

%files base
%defattr(-,root,root)
%dir /opt/lsb/doc/lsb-build-base
/opt/lsb/doc/lsb-build-base/*
/opt/lsb/include/*
/opt/lsb/bin/cups-config
#XXX need to be more precise - all files are now installed
### FIXME - need to manually redo this when we bump the LSB version
# the lib{64}-3* may need to be expanded
%ifarch ppc64 s390x x86_64
  /opt/lsb/lib64-%lsbver
  %dir /opt/lsb/lib64-3*
  /opt/lsb/lib64-3*/*
  /opt/lsb/lib64-4.1/*
  /opt/lsb/lib64-5.0/*
  /opt/lsb/lib64/*
%else
  /opt/lsb/lib-%lsbver
  %dir /opt/lsb/lib-3*
  /opt/lsb/lib-3*/*
  /opt/lsb/lib-4.1/*
  /opt/lsb/lib-5.0/*
  /opt/lsb/lib/*
%endif

%files desktop
%defattr(-,root,root)
/opt/lsb/bin/freetype-config
#XXX need to be more precise - all files are now installed
%dir /opt/lsb/doc/lsb-build-desktop
/opt/lsb/doc/lsb-build-desktop/*
/opt/lsb/include/*
%ifarch ppc64 s390x x86_64
  /opt/lsb/lib64*/*
%else
  /opt/lsb/lib*/*
%endif

%files cc
%defattr(-,root,root)
/opt/lsb/bin/lsb*
%dir /opt/lsb/doc/lsb-build-cc
/opt/lsb/doc/lsb-build-cc/*
#XXX need to be more precise - all files are now installed
%ifarch ppc64 s390x x86_64
  /opt/lsb/lib64*/*
%else
  /opt/lsb/lib*/*
%endif
/opt/lsb/man/man1/lsbc*.1
  
%clean
rm -rf $RPM_BUILD_ROOT

%changelog
* Fri Oct 30 2009 Mats Wichmann <mats@linuxfoundation.org>
- specfiles for -base, -desktop, -cc coalesced into one, changlog cleared
