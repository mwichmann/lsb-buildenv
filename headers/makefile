.SUFFIXES: .h

ARCHS = All IA32 IA64

%.h:
	for a in $(ARCHS) ; do \
		mkdir -p `dirname $$a/$@` 2>/dev/null ; \
		./mkdatadef -a $$a -h $@ | indent >$$a/$@.defs ; \
		./mkheader -a $$a -h $@ | indent >$$a/$@ ; \
	done

all:
	for h in `./getheaderlist`; do \
		make $$h; \
	done

install:
	@echo "Nowhere to install headers"

clean:
	find . -name '*.html' -print | xargs rm -f
	find . -name '*.h' -print | xargs rm -f
	find . -name '*.defs' -print | xargs rm -f
	find . -name '*.proto' -print | xargs rm -f
	find . -name '*.m4' -print | xargs rm -f
	find . -name '*.cpp' -print | xargs rm -f
	find . -name '*.txt' -print | xargs rm -f
