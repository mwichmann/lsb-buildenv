
LSBLINKLIBS=libc.so libpthread.so libm.so libutil.so
LSBRUNLIBS=$(LSBLINKLIBS:.so=.so.lsb.1)
LSBLIBS=$(LSBLINKLIBS) $(LSBRUNLIBS)

LSBLINKOBJS=$(LSBLINKLIBS:.so=.o)
LSBRUNOBJS=$(LSBLINKLIBS:.so=.run.o)
LSBOBJS=$(LSBLINKOBJS) $(LSBRUNOBJS)

LSBLINKSRCS=$(LSBLINKLIBS:.so=.c)
LSBRUNSRCS=$(LSBLINKLIBS:.so=.run.c)
LSBSRCS=$(LSBLINKSRCS) $(LSBRUNSRCS)


.SUFFIXES: .c .o .so

%.c:
	mklibsrc Lib=$* >$*.c
	mkrunlibsrc Lib=$* >$*.run.c

.c.o:
	$(CC) $(CFLAGS) -c $*.c
	$(CC) $(CFLAGS) -c $*.run.c

.o.so:
	$(LD) --version-script Version -o $@ -shared -h $@.lsb.1 $*.o /lib/libc.so.6
	$(LD) --version-script Version -o $@.lsb.1 -shared -h $@.lsb.1 $*.run.o /lib/libc.so.6

all:: $(LSBLIBS)
	echo Libraries done.

$(LSBLIBS): $(LSBOBJS)

$(LSBOBJS): $(LSBSRCS)

all::
	cc -o testlib testlib.c -L`pwd`

clean:
	rm -f $(LSBLIBS) $(LSBOBJS) $(LSBSRCS) testlib
