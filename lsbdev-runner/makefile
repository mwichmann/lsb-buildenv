CFLAGS = -g -Wall
LDFLAGS = -static

lsbrun: lsbrun.o

clean:
	rm -f lsbrun.o lsbrun

install: lsbrun
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install lsbrun $(INSTALL_ROOT)/$(BINDIR)/lsbrun

.PHONY: install clean
