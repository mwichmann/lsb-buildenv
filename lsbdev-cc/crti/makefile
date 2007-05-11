OBJECTS = crti.o

all: $(OBJECTS)

crti.o: crti.S
	gcc -c -I. $<

clean:
	rm -f $(OBJECTS)

distclean:
