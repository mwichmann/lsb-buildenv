# Makefile for creation of LSB stub libraries

STUBLIBS=$(subst .Version,,$(wildcard *.Version))
CFILES = $(addsuffix .c,$(STUBLIBS))
OFILES = $(subst .c,.o,$(CFILES))
SOFILES = $(subst .c,.so,$(CFILES))
CFLAGS=-g -Wall  -fno-builtin 
SUPPORTED_ARCHS=IA32 IA64

%.so : %.o
	ld -shared -o $@ --version-script $(subst .o,.Version,$<) -h `grep "$(subst .o,,$<) " LibNameMap.txt | cut -f2 -d' '`  $<

all: dbfiles libs

libs: $(OFILES) $(SOFILES)

dbfiles:
	for arch in $(SUPPORTED_ARCHS); do ./mkstublibs -a $$arch; done;

# Distclean means will need database to rebuild
distclean: clean
	rm -f  *.c *.Version LibNameMap.txt

clean:
	rm -f $(OFILES) *.so

.PHONY: clean distclean dbfiles libs

install:
	install -d $$LSBHOME/src/build/usr/lsb/lib
	install $(SOFILES) $$LSBHOME/src/build/usr/lsb/lib

