#ifndef _SYS_MMAN_H_
#define _SYS_MMAN_H_

#include <stddef.h>
#include <sys/types.h>

#define MAP_SHARED	0x01
#define MAP_PRIVATE	0x02
#define PROT_READ	0x1

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
