DBOPTS=-h $$LSBDBHOST -u $$LSBUSER --password=$$LSBDBPASSWD

LSBVERSION=$(shell cat LSB_VERSION)
DEVEL_VERSIONS=All_4.0 IA32_4.0 IA64_4.0 x86-64_4.0 PPC32_4.0 PPC64_4.0 S390_4.0 S390X_4.0
VERSIONS=All_3.0 All_3.1 All_3.2 All_4.0 \
	IA32_3.0 IA32_3.1 IA32_3.2 IA32_4.0 \
	IA64_3.0 IA64_3.1 IA64_3.2 IA64_4.0 \
	x86-64_3.0 x86-64_3.1 x86-64_3.2 x86-64_4.0 \
	PPC32_3.0 PPC32_3.1 PPC32_3.2 PPC32_4.0 \
	PPC64_3.0 PPC64_3.1 PPC64_3.2 PPC64_4.0 \
	S390_3.0 S390_3.1 S390_3.2 S390_4.0 \
	S390X_3.0 S390X_3.1 S390X_3.2 S390X_4.0

all: $(foreach archver,$(VERSIONS),headers-$(archver))

devel: $(foreach archver,$(DEVEL_VERSIONS),headers-$(archver))

headers-%: $(foreach headerfile,$(shell ./getheaderlist),%/$(headerfile).defs)
	@echo Made header files for $*

core_filelist desktop_filelist:
	cd .. && ./mkfilelists

%.defs: 
	mkdir -p $(dir $(shell echo "$@" | sed s/_/\\//))
	./mkdatadef -a $(shell expr $* : '\([^_]*\)') -v $(shell expr $* : '[^_]*_\([^/]*\)') -h $(shell expr $* : '[^_]*_[^/]*/\(.*\)') | indent -kr -sob > $(shell echo "$@" | sed s/_/\\//)

%.h:
	mkdir -p $(dir $@)
	./mkheader -a All -v $(LSBVERSION) -h $@ | indent -kr >$@
	
# no idea why this was added, but it breaks autobuilder's "make install"
#%:
#	@$(if $(filter-out all clean,$@),\
#	mkdir -p $(dir $@);\
#	./mkheader -a All -v `cat LSB_VERSION` -h $@ | indent -kr >$@\
#	)

headers-All_4.0: $(foreach headerfile,$(shell ./getheaderlist),All_4.0/$(headerfile).defs $(headerfile)) 
	@echo Made All component of header files 

install: install-core

install-core: core_filelist
	install -d $(DESTDIR)/$(INSTALL_ROOT)/$(INCLUDEDIR)/$(SUBDIR)
	cpio -pdu $(DESTDIR)/$(INSTALL_ROOT)/$(INCLUDEDIR)/$(SUBDIR) < core_filelist
	find $(DESTDIR)/$(INSTALL_ROOT)/$(INCLUDEDIR)/$(SUBDIR) -type d -exec chmod 755 {} \;
	xargs md5sum < core_filelist > $(DESTDIR)/$(INSTALL_ROOT)/$(INCLUDEDIR)/$(SUBDIR)/MD5SUMS.core || true

install-desktop: desktop_filelist
	install -d $(DESTDIR)/$(INSTALL_ROOT)/$(INCLUDEDIR)/$(SUBDIR)
	cpio -pdu $(DESTDIR)/$(INSTALL_ROOT)/$(INCLUDEDIR)/$(SUBDIR) < desktop_filelist
	find $(DESTDIR)/$(INSTALL_ROOT)/$(INCLUDEDIR)/$(SUBDIR) -type d -exec chmod 755 {} \;
	xargs md5sum < desktop_filelist > $(DESTDIR)/$(INSTALL_ROOT)/$(INCLUDEDIR)/$(SUBDIR)/MD5SUMS.desktop || true

clean:

distclean: clean
	find . -name '*.html' -print | xargs rm -f
	find . -name '*.h' -print | xargs rm -f
	find . -name '*.defs' -print | xargs rm -f
	find . -name '*.proto' -print | xargs rm -f
	find . -name '*.m4' -print | xargs rm -f
	find . -name '*.cpp' -print | xargs rm -f
	find . -name '*.txt' -print | xargs rm -f
	rm -f core_filelist desktop_filelist

.SECONDARY:

