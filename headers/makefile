
HEADERS=aio.h assert.h cpio.h ctype.h dirent.h errno.h fcntl.h float.h \
	fnmatch.h ftw.h glob.h grp.h iconv.h langinfo.h limits.h \
	libgen.h locale.h math.h monetary.h netdb.h nl_types.h poll.h \
	pthread.h pwd.h regex.h regexp.h re_comp.h sched.h search.h setjmp.h \
	 signal.h stdarg.h stdio.h stdlib.h string.h strings.h stropts.h \
	syslog.h tar.h termios.h time.h ulimit.h unistd.h utime.h wchar.h \
	wctype.h zlib.h

ARPAHEADERS=arpa/inet.h

SYSHEADERS=sys/ipc.h sys/mman.h sys/msg.h sys/resource.h sys/sem.h \
	sys/shm.h sys/socket.h sys/stat.h sys/time.h sys/timeb.h sys/times.h \
	sys/types.h sys/uio.h sys/utsname.h sys/wait.h

OTHERHEADERS=elf.h

all::
	for h in `./getheaderlist`; do \
		./mkfuncprototype -h $$h >$$h.proto; \
		./mkdatadef -a All -h $$h >$$h.defs  ; \
		if [ -f $$h.m4 ];then (cd `dirname $$h`;m4 `basename $$h`.m4 | \
			grep -v '^\# '| indent >`basename $$h`);fi; \
	done
#	for h in $(ARPAHEADERS) ; do \
#		./mkfuncprototype -h $$h >$$h.proto; \
#		./mkdatadef -a All -h $$h >$$h.defs  ; \
#		if [ -f $$h.m4 ];then (cd arpa;m4 `basename $$h`.m4 | grep -v '^\# '>`basename $$h`);fi; \
#	done
#	for h in $(SYSHEADERS) ; do \
#		./mkfuncprototype -h $$h >$$h.proto; \
#		./mkdatadef -a All -h $$h >$$h.defs  ; \
#		if [ -f $$h.m4 ];then (cd sys;m4 `basename $$h`.m4 | grep -v '^\# '>`basename $$h`);fi; \
#	done

#all::
#	find . -type f -name '*.h' -print | xargs c2html

#all:: datadefs.sgml
#
#datadefs.sgml: datadefs.m4 $(HEADERS) $(ARPAHEADERS) $(SYSHEADERS)
#	m4 datadefs.m4 >datadefs.sgml

#datadefs.m4::
#	./mkdatadefs $(HEADERS) $(ARPAHEADERS) $(SYSHEADERS) >datadefs.m4

#clean:
#	find . -name '*.html' -print | xargs rm
#	rm -f $(HEADERS) $(ARPAHEADERS) $(SYSHEADERS) $(OTHERHEADERS)
