
PROGRAMS = lsbcc
CFLAGS=-g

all: $(PROGRAMS)

install: $(PROGRAMS)
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install lsbcc $(INSTALL_ROOT)/$(BINDIR)/lsbcc
	install lsbcc $(INSTALL_ROOT)/$(BINDIR)/lsbc++
	install -d $(INSTALL_ROOT)/$(MANDIR)/man1
	install lsbcc.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsbcc.1
	install lsbcc.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsbc++.1

clean:
	rm -f $(PROGRAMS)

distclean:
