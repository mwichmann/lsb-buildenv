# Makefile for creation of LSB stub libraries

STUBLIBS=$(subst .Version,,$(wildcard *.Version))
CFILES = $(addsuffix .c,$(STUBLIBS))
OFILES = $(subst .c,.o,$(CFILES))
SOFILES = $(subst .c,.so,$(CFILES))
CFLAGS=-g -Wall  -fno-builtin 
DB_ARCH=IA32

%.so : %.o
	ld -shared -o $@ --version-script $(subst .o,.Version,$<) -h `grep "$(subst .o,,$<) " LibNameMap.txt | cut -f2 -d' '`  $<

libs: $(OFILES) $(SOFILES)

dbfiles:
	./mkstublibs -a $(DB_ARCH)

# Distclean means will need database to rebuild
distclean: clean
	rm -f  *.c *.Version LibNameMap.txt

clean:
	rm -f $(OFILES) *.so

.PHONY: clean distclean dbfiles libs

