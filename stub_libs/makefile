
include liblist
include libsrc

.SUFFIXES: .c .o .so

.c.o:
	$(CC) $(CFLAGS) -c $*.c

#.o.so:
#	$(LD) --version-script Version -o $@ -shared -h $@. $*.o /lib/libc.so.6

%.c:
	./mklibsrc -a IA32

all:: $(LSBLIBS)
	@echo Libraries done.

$(LSBLIBS): $(LSBSRC)

all::
	cc -o testlib testlib.c -L`pwd`
	LD_LIBRARY_PATH=`pwd` ./testlib

include liblink

clean:
	rm -f $(LSBLIBS) $(LSBSRC) testlib

install:
	install -d $$LSBHOME/src/build/usr/lib/lsb-stub
	install $(LSBLIBS) $$LSBHOME/src/build/usr/lib/lsb-stub
