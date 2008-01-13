#ifndef _SYS_STATFS_H_
#define _SYS_STATFS_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif



#define NFS_SUPER_MAGIC	0x6969


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

    extern int fstatfs64(int, struct statfs64 *);
    extern int statfs64(const char *, struct statfs64 *);
    extern int fstatfs(int, struct statfs *);
    extern int statfs(const char *, struct statfs *);
#ifdef __cplusplus
}
#endif
#endif
