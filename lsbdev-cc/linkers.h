#ifndef __LINKER_H
#define __LINKER_H

#if   __i386__
#define LSB_LINKER "/lib/ld-lsb.so.3"
#define NATIVE_LINKER "/lib/ld-linux.so.2"
#elif __powerpc__ && !__powerpc64__
#define LSB_LINKER "/lib/ld-lsb-ppc32.so.3"
#define NATIVE_LINKER "/lib/ld.so.1"
#elif __powerpc64__
#define LSB_LINKER "/lib64/ld-lsb-ppc64.so.3"
#define NATIVE_LINKER "/lib/ld.so.1"
#elif __ia64__
#define LSB_LINKER "/lib/ld-lsb-ia64.so.3"
#define NATIVE_LINKER "/lib/ld-linux-ia64.so.2"
#elif __s390__ && !__s390x__
#define LSB_LINKER "/lib/ld-lsb-s390.so.3"
#define NATIVE_LINKER "/lib/ld.so.1"
#elif __s390x__
#define LSB_LINKER "/lib64/ld-lsb-s390x.so.3"
#define NATIVE_LINKER "/lib64/ld64.so.1"
#elif __x86_64__
#define LSB_LINKER "/lib64/ld-lsb-x86-64.so.3"
#define NATIVE_LINKER "/lib/ld-linux-x86-64.so.2"
#else
#error Unknown_program_interpreter
#endif

#endif
