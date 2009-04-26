#if (__LSB_VERSION__ >= 13 )
#ifndef _SYS_STATFS_H_
#define _SYS_STATFS_H_

#include <sys/types.h>

#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
#define NFS_SUPER_MAGIC	0x6969
#endif				/* __LSB_VERSION__ >= 3.1 */



#if __LSB_VERSION__ >= 31
#if defined __i386__
/* IA32 */
    struct statfs {
	int f_type;		/* type of filesystem */
	int f_bsize;		/* optimal transfer block size */
	fsblkcnt_t f_blocks;	/* total data blocks in file system */
	fsblkcnt_t f_bfree;	/* free blocks in fs */
	fsblkcnt_t f_bavail;	/* free blocks avail to non-superuser */
	fsfilcnt_t f_files;	/* total file nodes in file system */
	fsfilcnt_t f_ffree;	/* free file nodes in file system */
	fsid_t f_fsid;		/* file system id */
	int f_namelen;		/* maximum length of filenames */
	int f_frsize;		/* fragment size */
	int f_spare[5];		/* spare for later */
    };

#endif
#if defined __ia64__
/* IA64 */
    struct statfs {
	long int f_type;	/* type of filesystem */
	long int f_bsize;	/* optimal transfer block size */
	fsblkcnt_t f_blocks;	/* total data blocks in file system */
	fsblkcnt_t f_bfree;	/* free blocks in fs */
	fsblkcnt_t f_bavail;	/* free blocks avail to non-superuser */
	fsfilcnt_t f_files;	/* total file nodes in file system */
	fsfilcnt_t f_ffree;	/* free file nodes in file system */
	fsid_t f_fsid;		/* file system id */
	long int f_namelen;	/* maximum length of filenames */
	long int f_frsize;	/* fragment size */
	long int f_spare[5];	/* spare for later */
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct statfs {
	int f_type;		/* type of filesystem */
	int f_bsize;		/* optimal transfer block size */
	fsblkcnt_t f_blocks;	/* total data blocks in file system */
	fsblkcnt_t f_bfree;	/* free blocks in fs */
	fsblkcnt_t f_bavail;	/* free blocks avail to non-superuser */
	fsfilcnt_t f_files;	/* total file nodes in file system */
	fsfilcnt_t f_ffree;	/* free file nodes in file system */
	fsid_t f_fsid;		/* file system id */
	int f_namelen;		/* maximum length of filenames */
	int f_frsize;		/* fragment size */
	int f_spare[5];		/* spare for later */
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct statfs {
	int f_type;		/* type of filesystem */
	int f_bsize;		/* optimal transfer block size */
	fsblkcnt_t f_blocks;	/* total data blocks in file system */
	fsblkcnt_t f_bfree;	/* free blocks in fs */
	fsblkcnt_t f_bavail;	/* free blocks avail to non-superuser */
	fsfilcnt_t f_files;	/* total file nodes in file system */
	fsfilcnt_t f_ffree;	/* free file nodes in file system */
	fsid_t f_fsid;		/* file system id */
	int f_namelen;		/* maximum length of filenames */
	int f_frsize;		/* fragment size */
	int f_spare[5];		/* spare for later */
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct statfs {
	long int f_type;	/* type of filesystem */
	long int f_bsize;	/* optimal transfer block size */
	fsblkcnt_t f_blocks;	/* total data blocks in file system */
	fsblkcnt_t f_bfree;	/* free blocks in fs */
	fsblkcnt_t f_bavail;	/* free blocks avail to non-superuser */
	fsfilcnt_t f_files;	/* total file nodes in file system */
	fsfilcnt_t f_ffree;	/* free file nodes in file system */
	fsid_t f_fsid;		/* file system id */
	long int f_namelen;	/* maximum length of filenames */
	long int f_frsize;	/* fragment size */
	long int f_spare[5];	/* spare for later */
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct statfs {
	long int f_type;	/* type of filesystem */
	long int f_bsize;	/* optimal transfer block size */
	fsblkcnt_t f_blocks;	/* total data blocks in file system */
	fsblkcnt_t f_bfree;	/* free blocks in fs */
	fsblkcnt_t f_bavail;	/* free blocks avail to non-superuser */
	fsfilcnt_t f_files;	/* total file nodes in file system */
	fsfilcnt_t f_ffree;	/* free file nodes in file system */
	fsid_t f_fsid;		/* file system id */
	long int f_namelen;	/* maximum length of filenames */
	long int f_frsize;	/* fragment size */
	long int f_spare[5];	/* spare for later */
    };

#endif
#if defined __s390x__
/* S390X */
    struct statfs {
	int f_type;		/* type of filesystem */
	int f_bsize;		/* optimal transfer block size */
	fsblkcnt_t f_blocks;	/* total data blocks in file system */
	fsblkcnt_t f_bfree;	/* free blocks in fs */
	fsblkcnt_t f_bavail;	/* free blocks avail to non-superuser */
	fsfilcnt_t f_files;	/* total file nodes in file system */
	fsfilcnt_t f_ffree;	/* free file nodes in file system */
	fsid_t f_fsid;		/* file system id */
	int f_namelen;		/* maximum length of filenames */
	int f_frsize;		/* fragment size */
	int f_spare[5];		/* spare for later */
    };

#endif
#if defined __i386__
/* IA32 */
    struct statfs64 {
	int f_type;		/* type of filesystem */
	int f_bsize;		/* optimal transfer block size */
	fsblkcnt64_t f_blocks;	/* total data blocks in file system */
	fsblkcnt64_t f_bfree;	/* free blocks in fs */
	fsblkcnt64_t f_bavail;	/* free blocks avail to non-superuser */
	fsfilcnt64_t f_files;	/* total file nodes in file system */
	fsfilcnt64_t f_ffree;	/* free file nodes in file system */
	fsid_t f_fsid;		/* file system id */
	int f_namelen;		/* maximum length of filenames */
	int f_frsize;		/* fragment size */
	int f_spare[5];		/* spare for later */
    };

#endif
#if defined __ia64__
/* IA64 */
    struct statfs64 {
	long int f_type;	/* type of filesystem */
	long int f_bsize;	/* optimal transfer block size */
	fsblkcnt64_t f_blocks;	/* total data blocks in file system */
	fsblkcnt64_t f_bfree;	/* free blocks in fs */
	fsblkcnt64_t f_bavail;	/* free blocks avail to non-superuser */
	fsfilcnt64_t f_files;	/* total file nodes in file system */
	fsfilcnt64_t f_ffree;	/* free file nodes in file system */
	fsid_t f_fsid;		/* file system id */
	long int f_namelen;	/* maximum length of filenames */
	long int f_frsize;	/* fragment size */
	long int f_spare[5];	/* spare for later */
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct statfs64 {
	int f_type;		/* type of filesystem */
	int f_bsize;		/* optimal transfer block size */
	fsblkcnt64_t f_blocks;	/* total data blocks in file system */
	fsblkcnt64_t f_bfree;	/* free blocks in fs */
	fsblkcnt64_t f_bavail;	/* free blocks avail to non-superuser */
	fsfilcnt64_t f_files;	/* total file nodes in file system */
	fsfilcnt64_t f_ffree;	/* free file nodes in file system */
	fsid_t f_fsid;		/* file system id */
	int f_namelen;		/* maximum length of filenames */
	int f_frsize;		/* fragment size */
	int f_spare[5];		/* spare for later */
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct statfs64 {
	int f_type;		/* type of filesystem */
	int f_bsize;		/* optimal transfer block size */
	fsblkcnt64_t f_blocks;	/* total data blocks in file system */
	fsblkcnt64_t f_bfree;	/* free blocks in fs */
	fsblkcnt64_t f_bavail;	/* free blocks avail to non-superuser */
	fsfilcnt64_t f_files;	/* total file nodes in file system */
	fsfilcnt64_t f_ffree;	/* free file nodes in file system */
	fsid_t f_fsid;		/* file system id */
	int f_namelen;		/* maximum length of filenames */
	int f_frsize;		/* fragment size */
	int f_spare[5];		/* spare for later */
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct statfs64 {
	long int f_type;	/* type of filesystem */
	long int f_bsize;	/* optimal transfer block size */
	fsblkcnt64_t f_blocks;	/* total data blocks in file system */
	fsblkcnt64_t f_bfree;	/* free blocks in fs */
	fsblkcnt64_t f_bavail;	/* free blocks avail to non-superuser */
	fsfilcnt64_t f_files;	/* total file nodes in file system */
	fsfilcnt64_t f_ffree;	/* free file nodes in file system */
	fsid_t f_fsid;		/* file system id */
	long int f_namelen;	/* maximum length of filenames */
	long int f_frsize;	/* fragment size */
	long int f_spare[5];	/* spare for later */
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct statfs64 {
	long int f_type;	/* type of filesystem */
	long int f_bsize;	/* optimal transfer block size */
	fsblkcnt64_t f_blocks;	/* total data blocks in file system */
	fsblkcnt64_t f_bfree;	/* free blocks in fs */
	fsblkcnt64_t f_bavail;	/* free blocks avail to non-superuser */
	fsfilcnt64_t f_files;	/* total file nodes in file system */
	fsfilcnt64_t f_ffree;	/* free file nodes in file system */
	fsid_t f_fsid;		/* file system id */
	long int f_namelen;	/* maximum length of filenames */
	long int f_frsize;	/* fragment size */
	long int f_spare[5];	/* spare for later */
    };

#endif
#if defined __s390x__
/* S390X */
    struct statfs64 {
	int f_type;		/* type of filesystem */
	int f_bsize;		/* optimal transfer block size */
	fsblkcnt64_t f_blocks;	/* total data blocks in file system */
	fsblkcnt64_t f_bfree;	/* free blocks in fs */
	fsblkcnt64_t f_bavail;	/* free blocks avail to non-superuser */
	fsfilcnt64_t f_files;	/* total file nodes in file system */
	fsfilcnt64_t f_ffree;	/* free file nodes in file system */
	fsid_t f_fsid;		/* file system id */
	int f_namelen;		/* maximum length of filenames */
	int f_frsize;		/* fragment size */
	int f_spare[5];		/* spare for later */
    };

#endif
#endif				/* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
    /* Use fstatvfs instead */
    extern int fstatfs(int __fildes,
		       struct statfs *__buf) LSB_DECL_DEPRECATED;
    /* Use fstatvfs64 instead */
    extern int fstatfs64(int __fildes,
			 struct statfs64 *__buf) LSB_DECL_DEPRECATED;
    /* Use statvfs instead */
    extern int statfs(const char *__file,
		      struct statfs *__buf) LSB_DECL_DEPRECATED;
    /* Use stavfs64 instead */
    extern int statfs64(const char *__file,
			struct statfs64 *__buf) LSB_DECL_DEPRECATED;
#endif				/* __LSB_VERSION__ >= 3.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
