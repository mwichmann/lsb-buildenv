# Makefile for creation of LSB stub libraries

DBOPTS = -h $$LSBDBHOST -u $$LSBUSER --password=$$LSBDBPASSWD

LSB_SUPPORTED_ARCHS = IA32 IA64 PPC32 PPC64 S390 S390X x86-64

VERSIONFILES = lsb_versions lsb_devel_versions
LSB_VERSIONS := $(shell cat lsb_versions)
ifneq ($(SKIP_DEVEL_VERSIONS),yes)
LSB_DEVEL_VERSIONS := $(shell cat lsb_devel_versions)
endif

# Determine arch to compile for from uname
# Add extra architectures as needed
LSB_COMPILE_FOR_ARCH := `case \`uname -m\` in \
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
	../mkfilelists --libs

$(VERSIONFILES):
	./mkversionfiles

dbfiles: 
	for version in $(LSB_VERSIONS) $(LSB_DEVEL_VERSIONS); do for arch in $(LSB_SUPPORTED_ARCHS); do ./mkstublibs -a $$arch -v $$version; done; done

# ex: make dbfiles-libpng12 builds only libpng12 for all versions/arches
dbfiles-%: 
	for version in $(LSB_VERSIONS) $(LSB_DEVEL_VERSIONS); do for arch in $(LSB_SUPPORTED_ARCHS); do ./mkstublibs -a $$arch -v $$version -l $(shell echo "$@" | sed s/dbfiles-//); done; done

# ex: make dbfiles-V5.0 builds only for LSB 5.0
dbfiles-V%: 
	for arch in $(LSB_SUPPORTED_ARCHS); do ./mkstublibs -a $$arch -v $(shell echo "$@" | sed s/dbfiles-V//); done

# only need to depend on one filelist, the rule above will gen them all
gensrc: core_filelist_3.0 dbfiles

install: install-core install-desktop

install-core: core-libs
	for version in $(LSB_VERSIONS) $(LSB_DEVEL_VERSIONS); do ( cd $$version/$(LSB_COMPILE_FOR_ARCH) && $(MAKE) install-core ); done

install-desktop: desktop-libs
	for version in $(LSB_VERSIONS) $(LSB_DEVEL_VERSIONS); do ( cd $$version/$(LSB_COMPILE_FOR_ARCH) && $(MAKE) install-desktop ); done

libs: core-libs desktop-libs

core-libs:
	for version in $(LSB_VERSIONS) $(LSB_DEVEL_VERSIONS); do ( cd $$version/$(LSB_COMPILE_FOR_ARCH) && $(MAKE) core-libs ); done

desktop-libs:
	for version in $(LSB_VERSIONS) $(LSB_DEVEL_VERSIONS); do ( cd $$version/$(LSB_COMPILE_FOR_ARCH) && $(MAKE) desktop-libs ); done

# Distclean means will need database to rebuild
distclean: 
	for version in $(LSB_VERSIONS) $(LSB_DEVEL_VERSIONS); do for arch in $(LSB_SUPPORTED_ARCHS); do ( cd $$version/$$arch && $(MAKE) distclean ); done; done;
	rm -f core_filelist_* desktop_filelist_* 

# Only remove compiler generated files
clean:
	for version in $(LSB_VERSIONS) $(LSB_DEVEL_VERSIONS); do ( cd $$version/$(LSB_COMPILE_FOR_ARCH) && $(MAKE) clean ); done

.PHONY: dbfiles

