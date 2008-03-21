ARCHS = All IA32 IA64 PPC32 S390 PPC64 S390X x86-64
LSBVERSION=$(shell cat LSB_VERSION)
HEADERFILELIST := $(shell ./getheaderlist -v `cat LSB_VERSION`)

all: $(foreach arch,$(ARCHS),headers-$(arch))

headers-%: $(foreach headerfile,$(HEADERFILELIST),%/$(headerfile).defs)
	@echo Made header files for $*

core_filelist desktop_filelist:
	cd .. && ./mkfilelists $(LSBVERSION)

%.defs: 
	mkdir -p $(dir $@)
	./mkdatadef -a $(shell expr $* : '\([^/]*\)') -v $(LSBVERSION) -h $(shell expr $* : '[^/]*/\(.*\)') | indent -kr -sob > $@

%.h:
	mkdir -p $(dir $@)
	./mkheader -a All -v $(LSBVERSION) -h $@ | indent -kr >$@
	
# no idea why this was added, but it breaks autobuilder's "make install"
#%:
#	@$(if $(filter-out all clean,$@),\
#	mkdir -p $(dir $@);\
#	./mkheader -a All -v `cat LSB_VERSION` -h $@ | indent -kr >$@\
#	)

headers-All: $(foreach headerfile,$(HEADERFILELIST),All/$(headerfile).defs $(headerfile)) 
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

