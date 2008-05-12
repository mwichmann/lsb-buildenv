DBOPTS=-h $$LSBDBHOST -u $$LSBUSER --password=$$LSBDBPASSWD

LSBVERSION=$(shell cat LSB_VERSION)
VERSIONS=$(shell mysql $(DBOPTS) $$LSBDB -e "SELECT Aname,LVvalue FROM Architecture,LSBVersion WHERE LVvalue>='3.0'" | grep -v Aname | sed s/\\t/_/g)
HEADERFILELIST := $(shell ./getheaderlist)

all: $(foreach archver,$(VERSIONS),headers-$(archver))

headers-%: $(foreach headerfile,$(HEADERFILELIST),%/$(headerfile).defs)
	@echo Made header files for $*

core_filelist desktop_filelist:
	cd .. && ./mkfilelists $(LSBVERSION)

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

headers-All_3.0: $(foreach headerfile,$(HEADERFILELIST),All_3.0/$(headerfile).defs $(headerfile)) 
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

