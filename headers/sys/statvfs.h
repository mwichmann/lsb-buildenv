#if (__LSB_VERSION__ >= 12 )
#ifndef _SYS_STATVFS_H_
#define _SYS_STATVFS_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 20
#if defined __ia64__
/* IA64 */
    struct statvfs {
	unsigned long int f_bsize;
	unsigned long int f_frsize;
	fsblkcnt64_t f_blocks;
	fsblkcnt64_t f_bfree;
	fsblkcnt64_t f_bavail;
	fsfilcnt64_t f_files;
	fsfilcnt64_t f_ffree;
	fsfilcnt64_t f_favail;
	unsigned long int f_fsid;
	unsigned long int f_flag;
	unsigned long int f_namemax;
	unsigned int __f_spare[6];
    };

#endif
#if defined __i386__
/* IA32 */
    struct statvfs {
	unsigned long int f_bsize;
	unsigned long int f_frsize;
	fsblkcnt_t f_blocks;
	fsblkcnt_t f_bfree;
	fsblkcnt_t f_bavail;
	fsfilcnt_t f_files;
	fsfilcnt_t f_ffree;
	fsfilcnt_t f_favail;
	unsigned long int f_fsid;
	int __f_unused;
	unsigned long int f_flag;
	unsigned long int f_namemax;
	int __f_spare[6];
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct statvfs {
	unsigned long int f_bsize;
	unsigned long int f_frsize;
	fsblkcnt_t f_blocks;
	fsblkcnt_t f_bfree;
	fsblkcnt_t f_bavail;
	fsfilcnt_t f_files;
	fsfilcnt_t f_ffree;
	fsfilcnt_t f_favail;
	unsigned long int f_fsid;
	int __f_unused;
	unsigned long int f_flag;
	unsigned long int f_namemax;
	int __f_spare[6];
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct statvfs {
	unsigned long int f_bsize;
	unsigned long int f_frsize;
	fsblkcnt_t f_blocks;
	fsblkcnt_t f_bfree;
	fsblkcnt_t f_bavail;
	fsfilcnt_t f_files;
	fsfilcnt_t f_ffree;
	fsfilcnt_t f_favail;
	unsigned long int f_fsid;
	unsigned long int f_flag;
	unsigned long int f_namemax;
	int __f_spare[6];
    };

#endif
#if defined __s390x__
/* S390X */
    struct statvfs {
	unsigned long int f_bsize;
	unsigned long int f_frsize;
	fsblkcnt64_t f_blocks;
	fsblkcnt64_t f_bfree;
	fsblkcnt64_t f_bavail;
	fsfilcnt64_t f_files;
	fsfilcnt64_t f_ffree;
	fsfilcnt64_t f_favail;
	unsigned long int f_fsid;
	unsigned long int f_flag;
	unsigned long int f_namemax;
	int __f_spare[6];
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct statvfs {
	unsigned long int f_bsize;
	unsigned long int f_frsize;
	fsblkcnt_t f_blocks;
	fsblkcnt_t f_bfree;
	fsblkcnt_t f_bavail;
	fsfilcnt_t f_files;
	fsfilcnt_t f_ffree;
	fsfilcnt_t f_favail;
	unsigned long int f_fsid;
	int __f_unused;
	unsigned long int f_flag;
	unsigned long int f_namemax;
	int __f_spare[6];
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct statvfs {
	unsigned long int f_bsize;
	unsigned long int f_frsize;
	fsblkcnt_t f_blocks;
	fsblkcnt_t f_bfree;
	fsblkcnt_t f_bavail;
	fsfilcnt_t f_files;
	fsfilcnt_t f_ffree;
	fsfilcnt_t f_favail;
	unsigned long int f_fsid;
	unsigned long int f_flag;
	unsigned long int f_namemax;
	int __f_spare[6];
    };

#endif
#if defined __i386__
/* IA32 */
    struct statvfs64 {
	unsigned long int f_bsize;
	unsigned long int f_frsize;
	fsblkcnt64_t f_blocks;
	fsblkcnt64_t f_bfree;
	fsblkcnt64_t f_bavail;
	fsfilcnt64_t f_files;
	fsfilcnt64_t f_ffree;
	fsfilcnt64_t f_favail;
	unsigned long int f_fsid;
	int __f_unused;
	unsigned long int f_flag;
	unsigned long int f_namemax;
	int __f_spare[6];
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct statvfs64 {
	unsigned long int f_bsize;
	unsigned long int f_frsize;
	fsblkcnt64_t f_blocks;
	fsblkcnt64_t f_bfree;
	fsblkcnt64_t f_bavail;
	fsfilcnt64_t f_files;
	fsfilcnt64_t f_ffree;
	fsfilcnt64_t f_favail;
	unsigned long int f_fsid;
	int __f_unused;
	unsigned long int f_flag;
	unsigned long int f_namemax;
	int __f_spare[6];
    };

#endif
#if defined __ia64__
/* IA64 */
    struct statvfs64 {
	unsigned long int f_bsize;
	unsigned long int f_frsize;
	fsblkcnt64_t f_blocks;
	fsblkcnt64_t f_bfree;
	fsblkcnt64_t f_bavail;
	fsfilcnt64_t f_files;
	fsfilcnt64_t f_ffree;
	fsfilcnt64_t f_favail;
	unsigned long int f_fsid;
	unsigned long int f_flag;
	unsigned long int f_namemax;
	unsigned int __f_spare[6];
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct statvfs64 {
	unsigned long int f_bsize;
	unsigned long int f_frsize;
	fsblkcnt64_t f_blocks;
	fsblkcnt64_t f_bfree;
	fsblkcnt64_t f_bavail;
	fsfilcnt64_t f_files;
	fsfilcnt64_t f_ffree;
	fsfilcnt64_t f_favail;
	unsigned long int f_fsid;
	unsigned long int f_flag;
	unsigned long int f_namemax;
	int __f_spare[6];
    };

#endif
#if defined __s390x__
/* S390X */
    struct statvfs64 {
	unsigned long int f_bsize;
	unsigned long int f_frsize;
	fsblkcnt64_t f_blocks;
	fsblkcnt64_t f_bfree;
	fsblkcnt64_t f_bavail;
	fsfilcnt64_t f_files;
	fsfilcnt64_t f_ffree;
	fsfilcnt64_t f_favail;
	unsigned long int f_fsid;
	unsigned long int f_flag;
	unsigned long int f_namemax;
	int __f_spare[6];
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct statvfs64 {
	unsigned long int f_bsize;
	unsigned long int f_frsize;
	fsblkcnt64_t f_blocks;
	fsblkcnt64_t f_bfree;
	fsblkcnt64_t f_bavail;
	fsfilcnt64_t f_files;
	fsfilcnt64_t f_ffree;
	fsfilcnt64_t f_favail;
	unsigned long int f_fsid;
	int __f_unused;
	unsigned long int f_flag;
	unsigned long int f_namemax;
	int __f_spare[6];
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct statvfs64 {
	unsigned long int f_bsize;
	unsigned long int f_frsize;
	fsblkcnt64_t f_blocks;
	fsblkcnt64_t f_bfree;
	fsblkcnt64_t f_bavail;
	fsfilcnt64_t f_files;
	fsfilcnt64_t f_ffree;
	fsfilcnt64_t f_favail;
	unsigned long int f_fsid;
	unsigned long int f_flag;
	unsigned long int f_namemax;
	int __f_spare[6];
    };

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */


/* Function prototypes */

    extern int fstatvfs(int, struct statvfs *);
    extern int fstatvfs64(int, struct statvfs64 *);
    extern int statvfs(const char *, struct statvfs *);
#if __LSB_VERSION__ >= 13
    extern int statvfs64(const char *, struct statvfs64 *);
#endif				/* __LSB_VERSION__ >= 1.3 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
