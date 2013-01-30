#if (__LSB_VERSION__ >= 10 )
#ifndef _SYS_MMAN_H_
#define _SYS_MMAN_H_

#include <sys/types.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define MAP_SHARED	0x01
#define MAP_PRIVATE	0x02
#define PROT_READ	0x1
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#define MAP_FAILED	((void*)-1)
#define PROT_NONE	0x0
#define MAP_FIXED	0x10
#define PROT_WRITE	0x2
#define MAP_ANONYMOUS	0x20
#define PROT_EXEC	0x4
#if defined __i386__
#define MCL_CURRENT	1
#endif
#define MS_ASYNC	1
#if defined __powerpc__ && !defined __powerpc64__
#define MCL_FUTURE	16384
#endif
#if defined __i386__
#define MCL_FUTURE	2
#endif
#define MS_INVALIDATE	2
#define MS_SYNC	4
#if defined __powerpc__ && !defined __powerpc64__
#define MCL_CURRENT	8192
#endif
#define MAP_ANON	MAP_ANONYMOUS
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if defined __ia64__
#define MCL_CURRENT	1
#endif
#if defined __s390__ && !defined __s390x__
#define MCL_CURRENT	1
#endif
#if defined __s390x__
#define MCL_CURRENT	1
#endif
#if defined __ia64__
#define MCL_FUTURE	2
#endif
#if defined __s390__ && !defined __s390x__
#define MCL_FUTURE	2
#endif
#if defined __s390x__
#define MCL_FUTURE	2
#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if defined __x86_64__
#define MCL_CURRENT	1
#endif
#if defined __powerpc64__
#define MCL_FUTURE	16384
#endif
#if defined __x86_64__
#define MCL_FUTURE	2
#endif
#if defined __powerpc64__
#define MCL_CURRENT	8192
#endif
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 32
#define POSIX_MADV_NORMAL	0
#define MREMAP_MAYMOVE	1
#define POSIX_MADV_RANDOM	1
#define MREMAP_FIXED	2
#define POSIX_MADV_SEQUENTIAL	2
#define POSIX_MADV_WILLNEED	3
#define POSIX_MADV_DONTNEED	4
#endif				/* __LSB_VERSION__ >= 3.2 */




/* Function prototypes */

    extern int mlock(const void *__addr, size_t __len);
    extern int mlockall(int __flags);
    extern void *mmap(void *__addr, size_t __len, int __prot, int __flags,
		      int __fd, off_t __offset);
    extern void *mmap64(void *__addr, size_t __len, int __prot,
			int __flags, int __fd, off64_t __offset);
    extern int mprotect(void *__addr, size_t __len, int __prot);
    extern int msync(void *__addr, size_t __len, int __flags);
    extern int munlock(const void *__addr, size_t __len);
    extern int munlockall(void);
    extern int munmap(void *__addr, size_t __len);
#if __LSB_VERSION__ >= 30
    extern int shm_open(const char *__name, int __oflag, mode_t __mode);
    extern int shm_unlink(const char *__name);
#endif				/* __LSB_VERSION__ >= 3.0 */

#if __LSB_VERSION__ >= 32
    extern void *mremap(void *__addr, size_t __old_len, size_t __new_len,
			int __flags, ...);
    extern int posix_madvise(void *__addr, size_t __len, int __advice);
#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
