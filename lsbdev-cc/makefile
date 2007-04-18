PROGRAMS = lsbcc lsbc++ lsbcpp
COMMON_OBJS = lsbcc_argv.o
LSBCC_OBJS = lsbcc.o
LSBCPP_OBJS = lsbcpp.o
LIBS = libgcc34compat.a
CFLAGS=-g -Wall
CXXFLAGS=$(CFLAGS)
GCC34_COMPAT_CFLAGS = -fPIC
LSB_VERSION ?= "3.1"

all: $(PROGRAMS) $(LIBS)

lsbcc_libs.h:
	./mk_lsbcc_libs.pl $(LSB_VERSION) > lsbcc_libs.h

lsbcc_version.h:
	./mk_lsbcc_version.pl $(LSB_VERSION) > lsbcc_version.h

$(LSBCC_OBJS): lsbcc_libs.h lsbcc_version.h

$(LSBCPP_OBJS): lsbcc_version.h

$(COMMON_OBJS):

lsbcc: $(LSBCC_OBJS) $(COMMON_OBJS)

lsbcpp: $(LSBCPP_OBJS) $(COMMON_OBJS)

lsbc++: lsbcc
	rm -f lsbc++
	ln -s lsbcc lsbc++

libgcc34compat.a: gcc34-compat.o
	ar rcs libgcc34compat.a gcc34-compat.o

gcc34-compat.o: gcc34-compat.cc
	g++ $(CXXFLAGS) $(GCC34_COMPAT_CFLAGS) -c $<

install: $(PROGRAMS) $(LIBS)
	install -d $(INSTALL_ROOT)/$(BINDIR)
	install lsbcc $(INSTALL_ROOT)/$(BINDIR)/lsbcc
	install lsbcc $(INSTALL_ROOT)/$(BINDIR)/lsbc++
	install lsbcpp $(INSTALL_ROOT)/$(BINDIR)/lsbcpp
	install -d $(INSTALL_ROOT)/$(MANDIR)/man1
	install lsbcc.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsbcc.1
	install lsbcc.1 $(INSTALL_ROOT)/$(MANDIR)/man1/lsbc++.1
	install -d $(INSTALL_ROOT)/$(LIBDIR)
	install libgcc34compat.a $(INSTALL_ROOT)/$(LIBDIR)/libgcc34compat.a

scripts:
	cd scripts;make
	#cd lsb_release-1.0;make

install_scripts:
	cd scripts;make install
	#cd lsb_release-1.0;make install


clean:
	rm -f $(PROGRAMS) $(LIBS) *.o

distclean:
	rm lsbcc_libs.h
	rm lsbcc_version.h
