# Makefile for creation of LSB stub libraries

LSB_SUPPORTED_ARCHS=IA32 IA64 PPC32 PPC64 S390 S390X x86-64

DBOPTS=-h $$LSBDBHOST -u $$LSBUSER --password=$$LSBDBPASSWD
LSB_VERSIONS=$(shell mysql $(DBOPTS) $$LSBDB -e "SELECT LVvalue FROM LSBVersion WHERE LVvalue>='3.0'" | grep -v LVvalue)

# Desktop libs appeared in 3.1
LSB_DESKTOP_VERSIONS=$(shell mysql $(DBOPTS) $$LSBDB -e "SELECT LVvalue FROM LSBVersion WHERE LVvalue>='3.1'" | grep -v LVvalue)


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

core_filelist_% desktop_filelist_%:
	cd .. && for version in $(LSB_VERSIONS); do ./mkfilelists $$version; done

gensrc: dbfiles

dbfiles: $(foreach version,$(LSB_VERSIONS),core_filelist_$(version) desktop_filelist_$(version))
	for version in $(LSB_VERSIONS); do for arch in $(LSB_SUPPORTED_ARCHS); do ./mkstublibs -a $$arch -v $$version; done; done

install: install-core

install-core:
	for version in $(LSB_VERSIONS); do cd $$version/$(LSB_COMPILE_FOR_ARCH) && make install-core && cd ../..; done

install-desktop:
	for version in $(LSB_DESKTOP_VERSIONS); do cd $$version/$(LSB_COMPILE_FOR_ARCH) && make install-desktop && cd ../..; done

libs: core-libs

core-libs:
	for version in $(LSB_VERSIONS); do cd $$version/$(LSB_COMPILE_FOR_ARCH) && make core-libs && cd ../..; done

desktop-libs:
	for version in $(LSB_VERSIONS); do cd $$version/$(LSB_COMPILE_FOR_ARCH) && make desktop-libs && cd ../..; done

# Distclean means will need database to rebuild
distclean: 
	for version in $(LSB_VERSIONS); do for arch in $(LSB_SUPPORTED_ARCHS); do cd $$version/$$arch && make distclean && cd ../..; done; done;
	rm -f core_filelist desktop_filelist

# Only remove compiler generated files
clean:
	for version in $(LSB_VERSIONS); do cd $$version/$(LSB_COMPILE_FOR_ARCH) && make clean && cd ../..; done

.PHONY: dbfiles

