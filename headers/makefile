INSTALL_ROOT ?= /usr/local
INCLUDEDIR ?= include

DBOPTS=-h $$LSBDBHOST -u $$LSBUSER --password=$$LSBDBPASSWD

all: 

gensrc: core_filelist desktop_filelist datadefs

datadefs: $(foreach archver,$(shell mysql $(DBOPTS) $$LSBDB -e "SELECT Aname,LVvalue FROM Architecture,LSBVersion WHERE LVvalue>='3.0'" | grep -v Aname | sed s/\\t/_/g),headers-$(archver))

devel: lsb_versions $(foreach archver,$(shell mysql $(DBOPTS) $$LSBDB -e "SELECT Aname,LVvalue FROM Architecture,LSBVersion WHERE LVreleased='No'" | grep -v Aname | sed s/\\t/_/g),headers-$(archver))

headers-%: $(foreach headerfile,$(shell ./getheaderlist),%/$(headerfile).defs)
	@echo Made header files for $*

core_filelist desktop_filelist:
	../mkfilelists --headers

%.defs: 
	mkdir -p $(dir $(shell echo "$@" | sed s/_/\\//))
	./mkdatadef -a $(shell expr $* : '\([^_]*\)') -v $(shell expr $* : '[^_]*_\([^/]*\)') -h $(shell expr $* : '[^_]*_[^/]*/\(.*\)') | indent -kr -sob > $(shell echo "$@" | sed s/_/\\//)

%.h:
	mkdir -p $(dir $@)
	./mkheader -a All -h $@ | indent -kr >$@

headers-All_4.0: $(foreach headerfile,$(shell ./getheaderlist),All_4.0/$(headerfile).defs $(headerfile)) 
	@echo Made All component of header files 

install: install-core install-desktop

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

distclean:
	find . -name '*.h' -print | xargs rm -f
	find . -name '*.defs' -print | xargs rm -f
	rm -f core_filelist desktop_filelist

.SECONDARY:

