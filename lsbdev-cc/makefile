
PROGRAMS = lsbcc
CFLAGS=-g

all: $(PROGRAMS)

install: $(PROGRAMS)
	install -d $$LSBHOME/src/build/usr/bin
	cp lsbcc $$LSBHOME/src/build/usr/bin
	cp lsbcc $$LSBHOME/src/build/usr/bin/lsbc++

clean:
	rm $(PROGRAMS)

distclean:
