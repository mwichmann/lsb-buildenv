#ifndef _SYS_MMAN_H_
#define _SYS_MMAN_H_

#include <sys/types.h>

#define MAP_FAILED	((void*)-1)
#define PROT_NONE	0x0
#define MAP_SHARED	0x01
#define MAP_PRIVATE	0x02
#define PROT_READ	0x1
#define PROT_WRITE	0x2
#define PROT_EXEC	0x4
#define MCL_CURRENT	1
#define MS_ASYNC	1
#define MCL_FUTURE	2
#define MS_INVALIDATE	2
#define MS_SYNC	4



int msync (void *, size_t, int);
int mlock (void *, size_t);
int mlockall (int);
void *mmap (void *, size_t, int, int, int, __off_t);
int mprotect (void *, size_t, int);
int munlock (void *, size_t);
int munlockall (void);
int munmap (void *, size_t);
void *mmap64 (void *, size_t, int, int, int, __off64_t);
#endif
