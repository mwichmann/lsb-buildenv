SUBDIRS=headers stub_libs lsbdev-cc lsbdev-runner
SUBDIRS_NOSTUB=headers lsbdev-cc

export BINDIR=/bin
export MANDIR=/man
export INSTALL_ROOT=/usr/local
export INCLUDEDIR=/include
export LIB64=$(shell case `uname -m` in (ppc64|s390x|x86_64) echo 64 ;; esac)
export LIBDIR=/lib$(LIB64)

all:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) all LSBVERSION=$$LSBVERSION);done

# this target is for skipping the desktop build, mostly for bootstrapping
# a known good lsbcc
bootstrap:
	for d in $(SUBDIRS_NOSTUB); do (cd $$d && $(MAKE) all LSBVERSION=$$LSBVERSION); done
	cd stub_libs && $(MAKE) core-libs LSBVERSION=$$LSBVERSION

install:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) install);done

install-core:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) install-core);done

install-desktop:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) install-desktop);done

install-bootstrap: install-core

gensrc:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) gensrc);done

clean:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) clean);done

distclean:
	for d in $(SUBDIRS);do (cd $$d && $(MAKE) distclean);done

