# Makefile for creation of LSB stub libraries

LSB_SUPPORTED_ARCHS=IA32 IA64 PPC32

# Determine arch to compile for from uname
# Add extra architectures as needed
LSB_COMPILE_FOR_ARCH:=`case \`uname -m\` in \
	i686|i586|i486|i386|athlon) \
	echo IA32; \
	;; \
	ia64) \
	echo IA64; \
	;; \
	ppc) \
	echo PPC32; \
	;; \
	*) \
	echo Unknown; \
	esac`

all: libs

dbfiles:
	for arch in $(LSB_SUPPORTED_ARCHS); do ./mkstublibs -a $$arch; done;

install:
	cd $(LSB_COMPILE_FOR_ARCH) && make install

libs:
	cd $(LSB_COMPILE_FOR_ARCH) && make libs

# Distclean means will need database to rebuild
distclean: 
	for arch in $(LSB_SUPPORTED_ARCHS); do cd $$arch && make distclean && cd ..; done;

# Only remove compiler generated files
clean:
	cd $(LSB_COMPILE_FOR_ARCH) && make clean

.PHONY: dbfiles

