#ifndef _SYS_MMAN_H_
#define _SYS_MMAN_H_

#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>

#define MAP_FAILED	((void*)-1)
#define PROT_NONE	0x0
#define MAP_SHARED	0x01
#define MAP_PRIVATE	0x02
#define PROT_READ	0x1
#define MAP_FIXED	0x10
#define PROT_WRITE	0x2
#define MAP_ANONYMOUS	0x20
#define PROT_EXEC	0x4
#define MS_ASYNC	1
#define MCL_CURRENT	1
#if defined(__powerpc__)
#define MCL_FUTURE	16384
#endif
#define MS_INVALIDATE	2
#define MCL_FUTURE	2
#define MS_SYNC	4
#if defined(__powerpc__)
#define MCL_CURRENT	8192
#endif
#define MAP_ANON	MAP_ANONYMOUS



extern int msync (void *, size_t, int);
extern int mlock (void *, size_t);
extern int mlockall (int);
extern void *mmap (void *, size_t, int, int, int, off_t);
extern int mprotect (void *, size_t, int);
extern int munlock (void *, size_t);
extern int munlockall (void);
extern int munmap (void *, size_t);
extern void *mmap64 (void *, size_t, int, int, int, off64_t);
#endif
