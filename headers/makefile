.SUFFIXES: .h

%.h:
	./mkfuncprototype -h $@ >$@.proto; \
	./mkdatadef -a All -h $@ >$@.defs  ; \
	if [ -f $@.m4 ];then \
		(cd `dirname $@`;m4 -Uindex -Uformat `basename $@`.m4 | \
		grep -v '^\# '| indent >`basename $@`);fi; \

all:
	for h in `./getheaderlist`; do \
		make $$h; \
	done

install:
	@echo "Nowhere to install headers"

clean:
	find . -name '*.html' -print | xargs rm -f
	find . -name '*.h' -print | xargs rm -f
