
LSBLINKLIBS=libc.so libpthread.so libm.so libutil.so libtrt.so
#LSBRUNLIBS=$(LSBLINKLIBS:.so=.so.lsb.1)
LSBLIBS=$(LSBLINKLIBS) $(LSBRUNLIBS)

LSBLINKOBJS=$(LSBLINKLIBS:.so=.o)
#LSBRUNOBJS=$(LSBLINKLIBS:.so=.run.o)
LSBOBJS=$(LSBLINKOBJS) $(LSBRUNOBJS)

LSBLINKSRCS=$(LSBLINKLIBS:.so=.c)
#LSBRUNSRCS=$(LSBLINKLIBS:.so=.run.c)
LSBSRCS=$(LSBLINKSRCS) $(LSBRUNSRCS)


.SUFFIXES: .c .o .so

%.c:
	./mklibsrc -l $* >$*.c

.c.o:
	$(CC) $(CFLAGS) -c $*.c

.o.so:
	$(LD) --version-script Version -o $@ -shared -h $@. $*.o /lib/libc.so.6

all:: $(LSBLIBS)
	@echo Libraries done.

$(LSBLIBS): $(LSBOBJS)

$(LSBOBJS): $(LSBSRCS)

#all::
#	cc -o testlib testlib.c -L`pwd`
#	LD_LIBRARY_PATH=`pwd` ./testlib

clean:
	rm -f $(LSBLIBS) $(LSBOBJS) $(LSBSRCS) testlib

install:
	install -d $$LSBHOME/src/build/usr/lsb/lib
	install $(LSBLINKLIBS) $$LSBHOME/src/build/usr/lsb/lib
