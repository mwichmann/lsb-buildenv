# Makefile for creation of LSB stub libraries

LSB_SUPPORTED_ARCHS=IA32 IA64

# Default to compile for IA32
LSB_COMPILE_FOR_ARCH=IA32

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

