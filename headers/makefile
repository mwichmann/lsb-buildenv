INSTALL_ROOT ?= /usr/local
INCLUDEDIR ?= include

DBOPTS=-h $$LSBDBHOST -u $$LSBUSER --password=$$LSBDBPASSWD --disable-auto-rehash

LSB_SUPPORTED_ARCHS = All IA32 IA64 PPC32 PPC64 S390 x86-64 S390X 
LSB_VERSIONS = $(shell cat lsb_versions)
LSB_DEVEL_VERSIONS = $(shell cat lsb_devel_versions)
ARCHVER = $(foreach ver,$(LSB_VERSIONS),defs-$(arch)_$(ver))
DATADEFS := $(foreach arch,$(LSB_SUPPORTED_ARCHS),$(ARCHVER))
#DATADEFS := $(foreach archver,$(shell mysql $(DBOPTS) $$LSBDB -e "SELECT Aname,LVvalue FROM Architecture,LSBVersion WHERE LVvalue>='3.0'" | grep -v Aname | sed s/\\t/_/g),headers-$(archver))

all: 

gensrc: lsb_versions core_filelist desktop_filelist headers datadefs

datadefs: $(DATADEFS)

devel: $(foreach archver,$(shell mysql $(DBOPTS) $$LSBDB -e "SELECT Aname,LVvalue FROM Architecture,LSBVersion WHERE LVreleased='No'" | grep -v Aname | sed s/\\t/_/g),headers-$(archver))

headers: $(foreach headerfile,$(shell ./getheaderlist),$(headerfile))
	@echo Made header files

defs-%: $(foreach headerfile,$(shell ./getheaderlist),%/$(headerfile).defs)
	@echo Made data definitions for $*

core_filelist desktop_filelist:
	../mkfilelists --headers

lsb_versions:
	mysql $(DBOPTS) $$LSBDB -e "SELECT LVvalue FROM LSBVersion WHERE LVvalue>='3.0'" | grep -v LVvalue > lsb_versions

lsb_devel_versions:
	mysql $(DBOPTS) $$LSBDB -e "SELECT LVvalue FROM LSBVersion WHERE LVreleased='No'" | grep -v LVvalue > lsb_devel_versions

%.defs: 
	mkdir -p $(dir $(shell echo "$@" | sed s/_/\\//))
	./mkdatadef -a $(shell expr $* : '\([^_]*\)') -v $(shell expr $* : '[^_]*_\([^/]*\)') -h $(shell expr $* : '[^_]*_[^/]*/\(.*\)') | indent -kr -sob > $(shell echo "$@" | sed s/_/\\//)

%.h:
	mkdir -p $(dir $(shell echo "$@" | sed s/_/\\//))
	./mkheader -a All -h $@ | indent -kr >$@

install: install-core install-desktop

install-core: core_filelist
	install -d $(DESTDIR)/$(INSTALL_ROOT)/$(INCLUDEDIR)/$(SUBDIR)
	cpio -pdu $(DESTDIR)/$(INSTALL_ROOT)/$(INCLUDEDIR)/$(SUBDIR) < core_filelist
	find $(DESTDIR)/$(INSTALL_ROOT)/$(INCLUDEDIR)/$(SUBDIR) -type d -exec chmod 755 {} \;
	#xargs md5sum < core_filelist > $(DESTDIR)/$(INSTALL_ROOT)/$(INCLUDEDIR)/$(SUBDIR)/MD5SUMS.core || true

install-desktop: desktop_filelist
	install -d $(DESTDIR)/$(INSTALL_ROOT)/$(INCLUDEDIR)/$(SUBDIR)
	cpio -pdu $(DESTDIR)/$(INSTALL_ROOT)/$(INCLUDEDIR)/$(SUBDIR) < desktop_filelist
	find $(DESTDIR)/$(INSTALL_ROOT)/$(INCLUDEDIR)/$(SUBDIR) -type d -exec chmod 755 {} \;
	#xargs md5sum < desktop_filelist > $(DESTDIR)/$(INSTALL_ROOT)/$(INCLUDEDIR)/$(SUBDIR)/MD5SUMS.desktop || true

clean:

distclean:
	find . -name '*.h' -print | xargs rm -f
	find . -name '*.defs' -print | xargs rm -f
	rm -f core_filelist desktop_filelist

.SECONDARY:

