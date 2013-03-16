CFLAGS = -g -Wall
LDFLAGS = -static

all: lsbrun

lsbrun: lsbrun.o

install: lsbrun
	install -d $(DESTDIR)/$(INSTALL_ROOT)/$(BINDIR)
	install lsbrun $(DESTDIR)/$(INSTALL_ROOT)/$(BINDIR)/lsbrun

# dummies
install-core install-desktop: install

clean:
	rm -f lsbrun.o lsbrun

distclean:

test:

check: test

.PHONY: install clean
