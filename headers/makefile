ARCHS = All IA32 IA64 PPC32 S390 PPC64 S390X x86-64
HEADERFILELIST := $(shell ./getheaderlist)

all: $(foreach arch,$(ARCHS),headers-$(arch))

headers-%: $(foreach headerfile,$(HEADERFILELIST),%/$(headerfile).defs)
	@echo Made header files for $*

%.defs: 
	mkdir -p $(dir $@)
	./mkdatadef -a $(shell expr $* : '\([^/]*\)') -h $(shell expr $* : '[^/]*/\(.*\)') | indent -kr -sob| sed -e 's/\&/\&amp;/g' > $@

%.h:
	./mkheader -a All -h $@ | indent -kr >$@

%:
	./mkheader -a All -h $@ | indent -kr >$@

headers-All: $(foreach headerfile,$(HEADERFILELIST),All/$(headerfile).defs $(headerfile)) 
	@echo Made All component of header files 

install:
	install -d $(INSTALL_ROOT)/$(INCLUDEDIR)
	find . \( -name '*.h' -o -type d \) -print | cpio -pdu $(INSTALL_ROOT)/$(INCLUDEDIR)
	find . -name "*.h" -exec md5sum {} \; > $(INSTALL_ROOT)/$(INCLUDEDIR)/MD5SUMS
	rm -rf $(INSTALL_ROOT)/$(INCLUDEDIR)/X11
	rm -rf $(INSTALL_ROOT)/$(INCLUDEDIR)/GL

clean:

distclean: clean
	find . -name '*.html' -print | xargs rm -f
	find . -name '*.h' -print | xargs rm -f
	find . -name '*.defs' -print | xargs rm -f
	find . -name '*.proto' -print | xargs rm -f
	find . -name '*.m4' -print | xargs rm -f
	find . -name '*.cpp' -print | xargs rm -f
	find . -name '*.txt' -print | xargs rm -f

.SECONDARY:

