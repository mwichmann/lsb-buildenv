PROGRAMS = lsbcc
CFLAGS=-g -Wall

all: $(PROGRAMS)

install: $(PROGRAMS)
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install lsbcc $(INSTALL_ROOT)/$(BINDIR)/lsbcc
	install lsbcc $(INSTALL_ROOT)/$(BINDIR)/lsbc++
	install -d $(INSTALL_ROOT)/$(MANDIR)/man1
	install lsbcc.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsbcc.1
	install lsbcc.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsbc++.1

scripts:
	cd scripts;make
	#cd lsb_release-1.0;make

install_scripts:
	cd scripts;make install
	#cd lsb_release-1.0;make install


clean:
	rm -f $(PROGRAMS)

distclean:
