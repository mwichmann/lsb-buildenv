
all: stdio.h

stdio.h:
	for h in `./getheaderlist`; do \
		./mkfuncprototype -h $$h >$$h.proto; \
		./mkdatadef -a All -h $$h >$$h.defs  ; \
		if [ -f $$h.m4 ];then (cd `dirname $$h`;m4 `basename $$h`.m4 | \
			grep -v '^\# '| indent >`basename $$h`);fi; \
	done

install:
	@echo "Nowhere to install headers"

clean:
	find . -name '*.html' -print | xargs rm -f
	find . -name '*.h' -print | xargs rm -f
