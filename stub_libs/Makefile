# Makefile for creation of LSB stub libraries

LSB_SUPPORTED_ARCHS=IA32 IA64 PPC32 S390 PPC64 S390X x86-64

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
	ppc64) \
	echo PPC64; \
	;; \
	s390) \
	echo S390; \
	;; \
	s390x) \
	echo S390X; \
	;; \
	x86_64) \
	echo x86-64; \
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

