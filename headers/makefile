ARCHS = All IA32 IA64 PPC32 S390 PPC64 S390X
HEADERFILELIST := $(shell ./getheaderlist)

all:
	@for a in $(ARCHS); do \
		make headers-$$a; \
	done

headers-%:
	@echo Making header files for $*
	@for header in $(HEADERFILELIST); do \
		mkdir -p `dirname $*/$$header` ; \
		./mkdatadef -a $* -h $$header | indent | sed -e 's/\&/\&amp /' >$*/$$header.defs ; \
	done

headers-All:
	@echo Making All component of header files 
	@for header in $(HEADERFILELIST); do \
		mkdir -p `dirname $$header` ; \
		./mkdatadef -a All -h $$header | indent | sed -e 's/\&/\&amp /' >All/$$header.defs ; \
		./mkheader -a All -h $$header | indent >$$header ; \
	done


install:
	install -d $(INSTALL_ROOT)/$(INCLUDEDIR)
	find . -name '*.h' -print | cpio -pdu $(INSTALL_ROOT)/$(INCLUDEDIR)
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

