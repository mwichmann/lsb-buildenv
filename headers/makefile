.SUFFIXES: .h

ARCHS = All IA32 IA64 PPC32 S390 PPC64

%.h:
	for a in $(ARCHS) ; do \
		mkdir -p `dirname $$a/$@` 2>/dev/null ; \
		./mkdatadef -a $$a -h $@ | indent | sed -e 's/\&/\&amp /' >$$a/$@.defs ; \
	done
	mkdir -p `dirname $@` 2>/dev/null ; \
	./mkheader -a All -h $@ | indent >$@ ;

all:
	for h in `./getheaderlist`; do \
		make $$h; \
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

