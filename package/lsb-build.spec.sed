# vim: set filetype=spec :
%define ver     @LSBVERSION@
%define lsbver  @TRUELSBVERSION@
# build for LSB 3.0 (bug 2327) 
%define build_target 3.0
%ifarch ppc64 s390x x86_64
%define xlib lib64
%else
%define xlib lib
%endif

Name: lsb-build
Summary: LSB Build environment packages
Group: Development/Tools
Version: %ver
Release: @PACKAGE_RELEASE@
License: LF
Vendor: Linux Foundation
Packager: LSB Project <lsb-discuss@linux-foundation.org>
Source: lsb-build-%ver.tar.gz
BuildRoot: %{_tmppath}/%name-root
# Does not strictly require lsb
#PreReq: lsb >= 3.1

%description
The LSB Build environment including stubs, headers and compiler wrapper

%package base
Summary: LSB Build environment base package
Group: Development/Tools
Obsoletes: lsbdev-base < 3.0
Conflicts: lsbdev-base
Requires: lsb-setup
AutoReqProv: no
%description base
The LSB Build environment base package provides stub libraries and header
files. These can be used with lsbcc to build LSB conforming applications.

%package desktop
Summary: LSB Build environment desktop package
Group: Development/Tools
Requires: lsb-build-base
Obsoletes: lsbdev-desktop < 3.0
Conflicts: lsbdev-desktop
AutoReqProv: no
%description desktop
The LSB Build Environment desktop package adds stub libraries and headers
files for desktop support which can be used with lsbcc to build LSB
conforming applications.

%package cc
Summary: LSB Build environment lsbcc package
Group: Development/Tools
Requires: lsb-build-base
Obsoletes: lsbdev-cc < 3.0
Conflicts: lsbdev-cc
AutoReqProv: no
%description cc
The LSB Build Environment cc package provides lsbcc, which can be used
to help build LSB conforming applications.

%prep
%setup -q

%build
# (sb) bug 2487 - we need to bootstrap the build on systems without lsbcc
# (mdw) bootstrap reworked, now cross-builds the effect of -base as well
make INSTALL_ROOT=$RPM_BUILD_DIR/xbuild
make install-core INSTALL_ROOT=$RPM_BUILD_DIR/xbuild
make clean
# now rebuild using our just-built binaries
make CC=$RPM_BUILD_DIR/xbuild/bin/lsbcc CXX=$RPM_BUILD_DIR/xbuild/bin/lsbc++ LSBCC_LSBVERSION=%build_target INSTALL_ROOT=/opt/lsb
%ifarch ppc
make -C lsbdev-cc/crti
%endif

%install
[ -e $RPM_BUILD_ROOT ] && rm -rf $RPM_BUILD_ROOT
make install DESTDIR=$RPM_BUILD_ROOT INSTALL_ROOT=/opt/lsb

# specifics for base part:
mkdir -p $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-base
cp package/Licence $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-base
cp package/README-base $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-base/README
( cd $RPM_BUILD_ROOT/opt/lsb/include ; ln -s curses.h ncurses.h )
( cd $RPM_BUILD_ROOT/opt/lsb/include ; rm -fr All IA32 IA64 PPC32 PPC64 S390 S390X x86-64 )
( for i in $RPM_BUILD_ROOT/opt/lsb/%xlib-*; do cd $i && ln -s libncurses.so libcurses.so; done )

# (sb) bug XXXX, let lib{64}-CURRENT be a symlink to lib{64}, 
# owned by lsb-setup, this needs to be tweaked for a new LSB version
[ -e $RPM_BUILD_ROOT/opt/lsb/%xlib ] && rm -fr $RPM_BUILD_ROOT/opt/lsb/%xlib
mv $RPM_BUILD_ROOT/opt/lsb/%xlib-%lsbver $RPM_BUILD_ROOT/opt/lsb/%xlib
(cd $RPM_BUILD_ROOT/opt/lsb; ln -s %xlib %xlib-%lsbver)

# specifics for desktop part:
mkdir -p $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-desktop
cp package/Licence $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-desktop
cp package/README-desktop $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-desktop/README
( for i in $RPM_BUILD_ROOT/opt/lsb/%xlib-*; do cd $i && ln -s libpng12.so libpng.so; done )
# did not exist in 3.0, clean out
rm $RPM_BUILD_ROOT/opt/lsb/%xlib-3.0/libpng.so

# specifics for cc part:
mkdir -p $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-cc
cp package/Licence $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-cc
cp package/README-cc $RPM_BUILD_ROOT/opt/lsb/doc/lsb-build-cc/README
%ifarch ppc 
for i in $RPM_BUILD_ROOT/opt/lsb/lib*; do install lsbdev-cc/crti/crti.o "$i"; done
%endif

# before leaving, we have to fix up the file lists:
sed -e 's,BASE,/opt/lsb,' -e 's,LIB,%xlib,' package/core_pkglist > core_pkglist
sed -e 's,BASE,/opt/lsb,' -e 's,LIB,%xlib,' package/desktop_pkglist > desktop_pkglist

%files base -f core_pkglist
%defattr(-,root,root)
# directories
%dir /opt/lsb/doc/lsb-build-base
%dir /opt/lsb/include/alsa
%dir /opt/lsb/include/arpa
%dir /opt/lsb/include/cups
%dir /opt/lsb/include/GL
%dir /opt/lsb/include/linux
%dir /opt/lsb/include/net
%dir /opt/lsb/include/netinet
%dir /opt/lsb/include/netpacket
%dir /opt/lsb/include/nspr4
%dir /opt/lsb/include/nspr4/private
%dir /opt/lsb/include/nss3
%dir /opt/lsb/include/rpc
%dir /opt/lsb/include/security
%dir /opt/lsb/include/sys
%dir /opt/lsb/include/X11
%dir /opt/lsb/include/X11/extensions
%dir /opt/lsb/include/X11/ICE
%dir /opt/lsb/include/X11/SM
%dir /opt/lsb/%xlib-3.0
%dir /opt/lsb/%xlib-3.1
%dir /opt/lsb/%xlib-3.2
%dir /opt/lsb/%xlib-4.1
%dir /opt/lsb/%xlib-5.0

# extra files
/opt/lsb/bin/cups-config
/opt/lsb/doc/lsb-build-base/Licence
/opt/lsb/doc/lsb-build-base/README

# locally created symlinks
/opt/lsb/include/ncurses.h
/opt/lsb/%xlib-4.0
/opt/lsb/%xlib-3.0/libcurses.so
/opt/lsb/%xlib-3.1/libcurses.so
/opt/lsb/%xlib-3.2/libcurses.so
/opt/lsb/%xlib-4.1/libcurses.so
/opt/lsb/%xlib-5.0/libcurses.so
/opt/lsb/%xlib/libcurses.so

# handle a special case
%ifarch ia64
/opt/lsb/%xlib-3.0/libc.so.6.1
/opt/lsb/%xlib-3.1/libc.so.6.1
/opt/lsb/%xlib-3.2/libc.so.6.1
/opt/lsb/%xlib-4.1/libc.so.6.1
/opt/lsb/%xlib-5.0/libc.so.6.1
/opt/lsb/%xlib/libc.so.6.1
/opt/lsb/%xlib-3.0/libm.so.6.1
/opt/lsb/%xlib-3.1/libm.so.6.1
/opt/lsb/%xlib-3.2/libm.so.6.1
/opt/lsb/%xlib-4.1/libm.so.6.1
/opt/lsb/%xlib-5.0/libm.so.6.1
/opt/lsb/%xlib/libm.so.6.1
%else
/opt/lsb/%xlib-3.0/libc.so.6
/opt/lsb/%xlib-3.1/libc.so.6
/opt/lsb/%xlib-3.2/libc.so.6
/opt/lsb/%xlib-4.1/libc.so.6
/opt/lsb/%xlib-5.0/libc.so.6
/opt/lsb/%xlib/libc.so.6
/opt/lsb/%xlib-3.0/libm.so.6
/opt/lsb/%xlib-3.1/libm.so.6
/opt/lsb/%xlib-3.2/libm.so.6
/opt/lsb/%xlib-4.1/libm.so.6
/opt/lsb/%xlib-5.0/libm.so.6
/opt/lsb/%xlib/libm.so.6
%endif

%files desktop -f desktop_pkglist
%defattr(-,root,root)
# directories
%dir /opt/lsb/doc/lsb-build-desktop
%dir /opt/lsb/include/atk-1.0
%dir /opt/lsb/include/atk-1.0/atk
%dir /opt/lsb/include/cairo
%dir /opt/lsb/include/fontconfig
%dir /opt/lsb/include/freetype
%dir /opt/lsb/include/freetype/config
%dir /opt/lsb/include/glib-2.0
%dir /opt/lsb/include/glib-2.0/glib
%dir /opt/lsb/include/glib-2.0/gobject
%dir /opt/lsb/include/gtk-2.0
%dir /opt/lsb/include/gtk-2.0/gdk
%dir /opt/lsb/include/gtk-2.0/gdk-pixbuf
%dir /opt/lsb/include/gtk-2.0/gdk-pixbuf-xlib
%dir /opt/lsb/include/gtk-2.0/gtk
%dir /opt/lsb/include/libxml2
%dir /opt/lsb/include/libxml2/libxml
%dir /opt/lsb/include/pango-1.0
%dir /opt/lsb/include/pango-1.0/pango
%dir /opt/lsb/include/X11
%dir /opt/lsb/include/X11/extensions
%dir /opt/lsb/include/X11/Xft
%dir /opt/lsb/%xlib-3.1/pkgconfig
%dir /opt/lsb/%xlib-3.2/pkgconfig
%dir /opt/lsb/%xlib-4.1/pkgconfig
%dir /opt/lsb/%xlib-5.0/pkgconfig
%dir /opt/lsb/%xlib/pkgconfig

# extra files
/opt/lsb/bin/freetype-config
/opt/lsb/bin/xft-config
/opt/lsb/bin/xml2-config
%doc /opt/lsb/doc/lsb-build-desktop/Licence
%doc /opt/lsb/doc/lsb-build-desktop/README
/opt/lsb/%xlib-3.1/pkgconfig/atk.pc
/opt/lsb/%xlib-3.1/pkgconfig/cairo-ft.pc
/opt/lsb/%xlib-3.1/pkgconfig/cairo.pc
/opt/lsb/%xlib-3.1/pkgconfig/cairo-pdf.pc
/opt/lsb/%xlib-3.1/pkgconfig/cairo-png.pc
/opt/lsb/%xlib-3.1/pkgconfig/cairo-ps.pc
/opt/lsb/%xlib-3.1/pkgconfig/cairo-xlib.pc
/opt/lsb/%xlib-3.1/pkgconfig/cairo-xlib-xrender.pc
/opt/lsb/%xlib-3.1/pkgconfig/fontconfig.pc
/opt/lsb/%xlib-3.1/pkgconfig/freetype2.pc
/opt/lsb/%xlib-3.1/pkgconfig/gdk-2.0.pc
/opt/lsb/%xlib-3.1/pkgconfig/gdk-pixbuf-2.0.pc
/opt/lsb/%xlib-3.1/pkgconfig/gdk-pixbuf-xlib-2.0.pc
/opt/lsb/%xlib-3.1/pkgconfig/gdk-x11-2.0.pc
/opt/lsb/%xlib-3.1/pkgconfig/glib-2.0.pc
/opt/lsb/%xlib-3.1/pkgconfig/gmodule-2.0.pc
/opt/lsb/%xlib-3.1/pkgconfig/gobject-2.0.pc
/opt/lsb/%xlib-3.1/pkgconfig/gthread-2.0.pc
/opt/lsb/%xlib-3.1/pkgconfig/gtk+-2.0.pc
/opt/lsb/%xlib-3.1/pkgconfig/gtk+-x11-2.0.pc
/opt/lsb/%xlib-3.1/pkgconfig/libpng12.pc
/opt/lsb/%xlib-3.1/pkgconfig/libpng.pc
/opt/lsb/%xlib-3.1/pkgconfig/libxml-2.0.pc
/opt/lsb/%xlib-3.1/pkgconfig/pangocairo.pc
/opt/lsb/%xlib-3.1/pkgconfig/pangoft2.pc
/opt/lsb/%xlib-3.1/pkgconfig/pango.pc
/opt/lsb/%xlib-3.1/pkgconfig/pangoxft.pc
/opt/lsb/%xlib-3.1/pkgconfig/QtCore.pc
/opt/lsb/%xlib-3.1/pkgconfig/QtGui.pc
/opt/lsb/%xlib-3.1/pkgconfig/QtNetwork.pc
/opt/lsb/%xlib-3.1/pkgconfig/QtOpenGL.pc
/opt/lsb/%xlib-3.1/pkgconfig/QtSql.pc
/opt/lsb/%xlib-3.1/pkgconfig/QtSvg.pc
/opt/lsb/%xlib-3.1/pkgconfig/QtXml.pc
/opt/lsb/%xlib-3.2/pkgconfig/atk.pc
/opt/lsb/%xlib-3.2/pkgconfig/cairo-ft.pc
/opt/lsb/%xlib-3.2/pkgconfig/cairo.pc
/opt/lsb/%xlib-3.2/pkgconfig/cairo-pdf.pc
/opt/lsb/%xlib-3.2/pkgconfig/cairo-png.pc
/opt/lsb/%xlib-3.2/pkgconfig/cairo-ps.pc
/opt/lsb/%xlib-3.2/pkgconfig/cairo-xlib.pc
/opt/lsb/%xlib-3.2/pkgconfig/cairo-xlib-xrender.pc
/opt/lsb/%xlib-3.2/pkgconfig/fontconfig.pc
/opt/lsb/%xlib-3.2/pkgconfig/freetype2.pc
/opt/lsb/%xlib-3.2/pkgconfig/gdk-2.0.pc
/opt/lsb/%xlib-3.2/pkgconfig/gdk-pixbuf-2.0.pc
/opt/lsb/%xlib-3.2/pkgconfig/gdk-pixbuf-xlib-2.0.pc
/opt/lsb/%xlib-3.2/pkgconfig/gdk-x11-2.0.pc
/opt/lsb/%xlib-3.2/pkgconfig/glib-2.0.pc
/opt/lsb/%xlib-3.2/pkgconfig/gmodule-2.0.pc
/opt/lsb/%xlib-3.2/pkgconfig/gobject-2.0.pc
/opt/lsb/%xlib-3.2/pkgconfig/gthread-2.0.pc
/opt/lsb/%xlib-3.2/pkgconfig/gtk+-2.0.pc
/opt/lsb/%xlib-3.2/pkgconfig/gtk+-x11-2.0.pc
/opt/lsb/%xlib-3.2/pkgconfig/libpng12.pc
/opt/lsb/%xlib-3.2/pkgconfig/libpng.pc
/opt/lsb/%xlib-3.2/pkgconfig/libxml-2.0.pc
/opt/lsb/%xlib-3.2/pkgconfig/pangocairo.pc
/opt/lsb/%xlib-3.2/pkgconfig/pangoft2.pc
/opt/lsb/%xlib-3.2/pkgconfig/pango.pc
/opt/lsb/%xlib-3.2/pkgconfig/pangoxft.pc
/opt/lsb/%xlib-3.2/pkgconfig/QtCore.pc
/opt/lsb/%xlib-3.2/pkgconfig/QtGui.pc
/opt/lsb/%xlib-3.2/pkgconfig/QtNetwork.pc
/opt/lsb/%xlib-3.2/pkgconfig/QtOpenGL.pc
/opt/lsb/%xlib-3.2/pkgconfig/QtSql.pc
/opt/lsb/%xlib-3.2/pkgconfig/QtSvg.pc
/opt/lsb/%xlib-3.2/pkgconfig/QtXml.pc
/opt/lsb/%xlib-4.1/pkgconfig/atk.pc
/opt/lsb/%xlib-4.1/pkgconfig/cairo-ft.pc
/opt/lsb/%xlib-4.1/pkgconfig/cairo.pc
/opt/lsb/%xlib-4.1/pkgconfig/cairo-pdf.pc
/opt/lsb/%xlib-4.1/pkgconfig/cairo-png.pc
/opt/lsb/%xlib-4.1/pkgconfig/cairo-ps.pc
/opt/lsb/%xlib-4.1/pkgconfig/cairo-xlib.pc
/opt/lsb/%xlib-4.1/pkgconfig/cairo-xlib-xrender.pc
/opt/lsb/%xlib-4.1/pkgconfig/fontconfig.pc
/opt/lsb/%xlib-4.1/pkgconfig/freetype2.pc
/opt/lsb/%xlib-4.1/pkgconfig/gdk-2.0.pc
/opt/lsb/%xlib-4.1/pkgconfig/gdk-pixbuf-2.0.pc
/opt/lsb/%xlib-4.1/pkgconfig/gdk-pixbuf-xlib-2.0.pc
/opt/lsb/%xlib-4.1/pkgconfig/gdk-x11-2.0.pc
/opt/lsb/%xlib-4.1/pkgconfig/glib-2.0.pc
/opt/lsb/%xlib-4.1/pkgconfig/gmodule-2.0.pc
/opt/lsb/%xlib-4.1/pkgconfig/gobject-2.0.pc
/opt/lsb/%xlib-4.1/pkgconfig/gthread-2.0.pc
/opt/lsb/%xlib-4.1/pkgconfig/gtk+-2.0.pc
/opt/lsb/%xlib-4.1/pkgconfig/gtk+-x11-2.0.pc
/opt/lsb/%xlib-4.1/pkgconfig/libpng12.pc
/opt/lsb/%xlib-4.1/pkgconfig/libpng.pc
/opt/lsb/%xlib-4.1/pkgconfig/libxml-2.0.pc
/opt/lsb/%xlib-4.1/pkgconfig/pangocairo.pc
/opt/lsb/%xlib-4.1/pkgconfig/pangoft2.pc
/opt/lsb/%xlib-4.1/pkgconfig/pango.pc
/opt/lsb/%xlib-4.1/pkgconfig/pangoxft.pc
/opt/lsb/%xlib-4.1/pkgconfig/QtCore.pc
/opt/lsb/%xlib-4.1/pkgconfig/QtGui.pc
/opt/lsb/%xlib-4.1/pkgconfig/QtNetwork.pc
/opt/lsb/%xlib-4.1/pkgconfig/QtOpenGL.pc
/opt/lsb/%xlib-4.1/pkgconfig/QtSql.pc
/opt/lsb/%xlib-4.1/pkgconfig/QtSvg.pc
/opt/lsb/%xlib-4.1/pkgconfig/QtXml.pc
/opt/lsb/%xlib-5.0/pkgconfig/atk.pc
/opt/lsb/%xlib-5.0/pkgconfig/cairo-ft.pc
/opt/lsb/%xlib-5.0/pkgconfig/cairo.pc
/opt/lsb/%xlib-5.0/pkgconfig/cairo-pdf.pc
/opt/lsb/%xlib-5.0/pkgconfig/cairo-png.pc
/opt/lsb/%xlib-5.0/pkgconfig/cairo-ps.pc
/opt/lsb/%xlib-5.0/pkgconfig/cairo-xlib.pc
/opt/lsb/%xlib-5.0/pkgconfig/cairo-xlib-xrender.pc
/opt/lsb/%xlib-5.0/pkgconfig/fontconfig.pc
/opt/lsb/%xlib-5.0/pkgconfig/freetype2.pc
/opt/lsb/%xlib-5.0/pkgconfig/gdk-2.0.pc
/opt/lsb/%xlib-5.0/pkgconfig/gdk-pixbuf-2.0.pc
/opt/lsb/%xlib-5.0/pkgconfig/gdk-pixbuf-xlib-2.0.pc
/opt/lsb/%xlib-5.0/pkgconfig/gdk-x11-2.0.pc
/opt/lsb/%xlib-5.0/pkgconfig/glib-2.0.pc
/opt/lsb/%xlib-5.0/pkgconfig/gmodule-2.0.pc
/opt/lsb/%xlib-5.0/pkgconfig/gobject-2.0.pc
/opt/lsb/%xlib-5.0/pkgconfig/gthread-2.0.pc
/opt/lsb/%xlib-5.0/pkgconfig/gtk+-2.0.pc
/opt/lsb/%xlib-5.0/pkgconfig/gtk+-x11-2.0.pc
/opt/lsb/%xlib-5.0/pkgconfig/libpng12.pc
/opt/lsb/%xlib-5.0/pkgconfig/libpng.pc
/opt/lsb/%xlib-5.0/pkgconfig/libxml-2.0.pc
/opt/lsb/%xlib-5.0/pkgconfig/pangocairo.pc
/opt/lsb/%xlib-5.0/pkgconfig/pangoft2.pc
/opt/lsb/%xlib-5.0/pkgconfig/pango.pc
/opt/lsb/%xlib-5.0/pkgconfig/pangoxft.pc
/opt/lsb/%xlib-5.0/pkgconfig/QtCore.pc
/opt/lsb/%xlib-5.0/pkgconfig/QtGui.pc
/opt/lsb/%xlib-5.0/pkgconfig/QtNetwork.pc
/opt/lsb/%xlib-5.0/pkgconfig/QtOpenGL.pc
/opt/lsb/%xlib-5.0/pkgconfig/QtSql.pc
/opt/lsb/%xlib-5.0/pkgconfig/QtSvg.pc
/opt/lsb/%xlib-5.0/pkgconfig/QtXml.pc
/opt/lsb/%xlib/pkgconfig/atk.pc
/opt/lsb/%xlib/pkgconfig/cairo-ft.pc
/opt/lsb/%xlib/pkgconfig/cairo.pc
/opt/lsb/%xlib/pkgconfig/cairo-pdf.pc
/opt/lsb/%xlib/pkgconfig/cairo-png.pc
/opt/lsb/%xlib/pkgconfig/cairo-ps.pc
/opt/lsb/%xlib/pkgconfig/cairo-xlib.pc
/opt/lsb/%xlib/pkgconfig/cairo-xlib-xrender.pc
/opt/lsb/%xlib/pkgconfig/fontconfig.pc
/opt/lsb/%xlib/pkgconfig/freetype2.pc
/opt/lsb/%xlib/pkgconfig/gdk-2.0.pc
/opt/lsb/%xlib/pkgconfig/gdk-pixbuf-2.0.pc
/opt/lsb/%xlib/pkgconfig/gdk-pixbuf-xlib-2.0.pc
/opt/lsb/%xlib/pkgconfig/gdk-x11-2.0.pc
/opt/lsb/%xlib/pkgconfig/glib-2.0.pc
/opt/lsb/%xlib/pkgconfig/gmodule-2.0.pc
/opt/lsb/%xlib/pkgconfig/gobject-2.0.pc
/opt/lsb/%xlib/pkgconfig/gthread-2.0.pc
/opt/lsb/%xlib/pkgconfig/gtk+-2.0.pc
/opt/lsb/%xlib/pkgconfig/gtk+-x11-2.0.pc
/opt/lsb/%xlib/pkgconfig/libpng12.pc
/opt/lsb/%xlib/pkgconfig/libpng.pc
/opt/lsb/%xlib/pkgconfig/libxml-2.0.pc
/opt/lsb/%xlib/pkgconfig/pangocairo.pc
/opt/lsb/%xlib/pkgconfig/pangoft2.pc
/opt/lsb/%xlib/pkgconfig/pango.pc
/opt/lsb/%xlib/pkgconfig/pangoxft.pc
/opt/lsb/%xlib/pkgconfig/QtCore.pc
/opt/lsb/%xlib/pkgconfig/QtGui.pc
/opt/lsb/%xlib/pkgconfig/QtNetwork.pc
/opt/lsb/%xlib/pkgconfig/QtOpenGL.pc
/opt/lsb/%xlib/pkgconfig/QtSql.pc
/opt/lsb/%xlib/pkgconfig/QtSvg.pc
/opt/lsb/%xlib/pkgconfig/QtXml.pc

# locally created symlinks
#/opt/lsb/%xlib-4.0         # covered in lsb-build-base, don't duplicate
/opt/lsb/%xlib/libpng.so
/opt/lsb/%xlib-3.1/libpng.so
/opt/lsb/%xlib-3.2/libpng.so
/opt/lsb/%xlib-4.1/libpng.so
/opt/lsb/%xlib-5.0/libpng.so

%files cc
%defattr(-,root,root)
/opt/lsb/bin/lsbc++
/opt/lsb/bin/lsbcc
/opt/lsb/bin/lsbcpp
%dir /opt/lsb/doc/lsb-build-cc
%doc /opt/lsb/doc/lsb-build-cc/Licence
%doc /opt/lsb/doc/lsb-build-cc/README
/opt/lsb/%xlib-3.0/besteffort.o
/opt/lsb/%xlib-3.0/libgcc34compat.a
/opt/lsb/%xlib-3.1/besteffort.o
/opt/lsb/%xlib-3.1/libgcc34compat.a
/opt/lsb/%xlib-3.2/besteffort.o
/opt/lsb/%xlib-3.2/libgcc34compat.a
/opt/lsb/%xlib/besteffort.o
/opt/lsb/%xlib/libgcc34compat.a
/opt/lsb/%xlib-4.1/besteffort.o
/opt/lsb/%xlib-4.1/libgcc34compat.a
/opt/lsb/%xlib-5.0/besteffort.o
/opt/lsb/%xlib-5.0/libgcc34compat.a
/opt/lsb/man/man1/lsbc++.1
/opt/lsb/man/man1/lsbcc.1
/opt/lsb/man/man1/lsbcpp.1
  
%clean
rm -rf $RPM_BUILD_ROOT

%changelog
* Wed Nov 18 2009 Mats Wichmann <mats@linuxfoundation.org> - 4.0.5
- the subpackage scheme is working properly now
* Fri Oct 30 2009 Mats Wichmann <mats@linuxfoundation.org>
- specfiles for -base, -desktop, -cc coalesced into one, changlog cleared