SUBDIRS=headers stub_libs lsbdev-cc
SUBDIRS_SPLIT=headers stub_libs

export BINDIR=/bin
export MANDIR=/man
export INSTALL_ROOT=/usr/local
export INCLUDEDIR=/include
export LIB64=$(shell case `uname -m` in (ppc64|s390x|x86_64) echo 64 ;; esac)
export LIBDIR=/lib$(LIB64)

all:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) all LSBVERSION=$$LSBVERSION);done

install:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) install);done

install-core:
	for d in $(SUBDIRS_SPLIT);do (cd $$d && $(MAKE) install-core);done

install-desktop:
	for d in $(SUBDIRS_SPLIT);do (cd $$d && $(MAKE) install-desktop);done

gensrc:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) gensrc);done

clean:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) clean);done

distclean:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) distclean);done

