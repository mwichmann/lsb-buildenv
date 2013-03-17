CFLAGS = -g -Wall
LDFLAGS = -static

all: lsbrun

# lsbrun specifially has to be linked with native compiler,
# so avoid using $(CC) which may be set to lsbcc
LINK = cc
lsbrun: lsbrun.o
	$(LINK) $(LDFLAGS) lsbrun.o -o lsbrun

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
