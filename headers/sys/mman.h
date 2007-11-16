#ifndef _SYS_MMAN_H_
#define _SYS_MMAN_H_

#include <sys/types.h>
#include <unistd.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif



#define MAP_FAILED	((void*)-1)
#define PROT_NONE	0x0
#define MAP_SHARED	0x01
#define MAP_PRIVATE	0x02
#define PROT_READ	0x1
#define MAP_FIXED	0x10
#define PROT_WRITE	0x2
#define MAP_ANONYMOUS	0x20
#define PROT_EXEC	0x4
#if defined __i386__
#define MCL_CURRENT	1
#endif
#if defined __ia64__
#define MCL_CURRENT	1
#endif
#if defined __s390__ && !defined __s390x__
#define MCL_CURRENT	1
#endif
#if defined __x86_64__
#define MCL_CURRENT	1
#endif
#if defined __s390x__
#define MCL_CURRENT	1
#endif
#define MREMAP_MAYMOVE	1
#define MS_ASYNC	1
#if defined __powerpc__ && !defined __powerpc64__
#define MCL_FUTURE	16384
#endif
#if defined __powerpc64__
#define MCL_FUTURE	16384
#endif
#if defined __i386__
#define MCL_FUTURE	2
#endif
#if defined __ia64__
#define MCL_FUTURE	2
#endif
#if defined __s390__ && !defined __s390x__
#define MCL_FUTURE	2
#endif
#if defined __x86_64__
#define MCL_FUTURE	2
#endif
#if defined __s390x__
#define MCL_FUTURE	2
#endif
#define MREMAP_FIXED	2
#define MS_INVALIDATE	2
#define MS_SYNC	4
#if defined __powerpc__ && !defined __powerpc64__
#define MCL_CURRENT	8192
#endif
#if defined __powerpc64__
#define MCL_CURRENT	8192
#endif
#define MAP_ANON	MAP_ANONYMOUS



    extern void *mremap(void *, size_t, size_t, int);
    extern int posix_madvise(void *, size_t, int);
    extern int msync(void *, size_t, int);
    extern int mlock(const void *, size_t);
    extern int mlockall(int);
    extern void *mmap(void *, size_t, int, int, int, off_t);
    extern int mprotect(void *, size_t, int);
    extern int munlock(const void *, size_t);
    extern int munlockall(void);
    extern int munmap(void *, size_t);
    extern void *mmap64(void *, size_t, int, int, int, off64_t);
    extern int shm_open(const char *, int, mode_t);
    extern int shm_unlink(const char *);
#ifdef __cplusplus
}
#endif
#endif
