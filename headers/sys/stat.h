#if (__LSB_VERSION__ >= 10 )
#ifndef _SYS_STAT_H_
#define _SYS_STAT_H_

#include <sys/types.h>
#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define S_ISBLK(m)	(((m)&S_IFMT)==S_IFBLK)
#define S_ISCHR(m)	(((m)&S_IFMT)==S_IFCHR)
#define S_ISDIR(m)	(((m)&S_IFMT)==S_IFDIR)
#define S_ISFIFO(m)	(((m)&S_IFMT)==S_IFIFO)
#define S_ISLNK(m)	(((m)&S_IFMT)==S_IFLNK)
#define S_ISREG(m)	(((m)&S_IFMT)==S_IFREG)
#define S_ISSOCK(m)	(((m)&S_IFMT)==S_IFSOCK)
#define S_IRWXU	(S_IREAD|S_IWRITE|S_IEXEC)
#define S_IROTH	(S_IRGRP>>3)
#define S_IRGRP	(S_IRUSR>>3)
#define S_IRWXO	(S_IRWXG>>3)
#define S_IRWXG	(S_IRWXU>>3)
#define S_IWOTH	(S_IWGRP>>3)
#define S_IWGRP	(S_IWUSR>>3)
#define S_IXOTH	(S_IXGRP>>3)
#define S_IXGRP	(S_IXUSR>>3)
#define S_IXUSR	0x0040
#define S_IWUSR	0x0080
#define S_IRUSR	0x0100
#define S_ISGID	0x0400
#define S_ISUID	0x0800
#define S_IFIFO	0x1000
#define S_IFCHR	0x2000
#define S_IFDIR	0x4000
#define S_IFBLK	0x6000
#define S_IFREG	0x8000
#define S_IFLNK	0xa000
#define S_IFSOCK	0xc000
#define S_IFMT	0xf000
#define S_IREAD	S_IRUSR
#define S_IWRITE	S_IWUSR
#define S_IEXEC	S_IXUSR
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#define S_TYPEISMQ(buf)	((buf)->st_mode - (buf)->st_mode)
#define S_TYPEISSEM(buf)	((buf)->st_mode - (buf)->st_mode)
#define S_TYPEISSHM(buf)	((buf)->st_mode - (buf)->st_mode)
#define S_ISVTX	01000
#if defined __i386__
#define _STAT_VER	3
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define _STAT_VER	3
#endif
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if defined __ia64__
#define _STAT_VER	1
#endif
#if defined __s390x__
#define _STAT_VER	1
#endif
#if defined __s390__ && !defined __s390x__
#define _STAT_VER	3
#endif
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if defined __powerpc64__
#define _STAT_VER	1
#endif
#if defined __x86_64__
#define _STAT_VER	1
#endif
#define st_atime	st_atim.tv_sec
#define st_ctime	st_ctim.tv_sec
#define st_mtime	st_mtim.tv_sec
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 32
#if defined __ia64__
#define _MKNOD_VER	0
#endif
#if defined __powerpc64__
#define _MKNOD_VER	0
#endif
#if defined __x86_64__
#define _MKNOD_VER	0
#endif
#if defined __s390x__
#define _MKNOD_VER	0
#endif
#if defined __i386__
#define _MKNOD_VER	1
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define _MKNOD_VER	1
#endif
#if defined __s390__ && !defined __s390x__
#define _MKNOD_VER	1
#endif
#endif				/* __LSB_VERSION__ >= 3.2 */



#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    struct stat {
	dev_t st_dev;
	unsigned short __pad1;
	unsigned long int st_ino;
	mode_t st_mode;
	nlink_t st_nlink;
	uid_t st_uid;
	gid_t st_gid;
	dev_t st_rdev;
	unsigned short __pad2;
	off_t st_size;
	blksize_t st_blksize;
	blkcnt_t st_blocks;
	struct timespec st_atim;	/* Time of last access. */
	struct timespec st_mtim;	/* Time of last modification. */
	struct timespec st_ctim;	/* Time of last status change. */
	unsigned long int __unused4;
	unsigned long int __unused5;
    };

#endif
#if defined __ia64__
/* IA64 */
    struct stat {
	dev_t st_dev;
	ino_t st_ino;
	nlink_t st_nlink;
	mode_t st_mode;
	uid_t st_uid;
	gid_t st_gid;
	unsigned int pad0;
	dev_t st_rdev;
	off_t st_size;
	struct timespec st_atim;	/* Time of last access. */
	struct timespec st_mtim;	/* Time of last modification. */
	struct timespec st_ctim;	/* Time of last status change. */
	blksize_t st_blksize;
	blkcnt_t st_blocks;
	unsigned long int __unused[3];
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct stat {
	dev_t st_dev;		/* Device. */
	unsigned short __pad1;
	ino_t st_ino;		/* File serial number. */
	mode_t st_mode;		/* File mode. */
	nlink_t st_nlink;	/* Link count. */
	uid_t st_uid;		/* User ID of the file's owner. */
	gid_t st_gid;		/* Group ID of the file's group. */
	dev_t st_rdev;		/* Device number, if device. */
	unsigned short __pad2;
	off_t st_size;		/* Size of file, in bytes. */
	blksize_t st_blksize;	/* Optimal block size for I/O. */
	blkcnt_t st_blocks;	/* Number 512-byte blocks allocated. */
	struct timespec st_atim;	/* Time of last access. */
	struct timespec st_mtim;	/* Time of last modification. */
	struct timespec st_ctim;	/* Time of last status change. */
	unsigned long int __unused4;
	unsigned long int __unused5;
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct stat {
	dev_t st_dev;
	ino_t st_ino;
	nlink_t st_nlink;
	mode_t st_mode;
	uid_t st_uid;
	gid_t st_gid;
	int __pad2;
	dev_t st_rdev;
	off_t st_size;
	blksize_t st_blksize;
	blkcnt_t st_blocks;
	struct timespec st_atim;	/* Time of last access. */
	struct timespec st_mtim;	/* Time of last modification. */
	struct timespec st_ctim;	/* Time of last status change. */
	unsigned long int __unused4;
	unsigned long int __unused5;
	unsigned long int __unused6;
    };

#endif
#if defined __s390x__
/* S390X */
    struct stat {
	dev_t st_dev;
	ino_t st_ino;
	nlink_t st_nlink;
	mode_t st_mode;
	uid_t st_uid;
	gid_t st_gid;
	int pad0;
	dev_t st_rdev;
	off_t st_size;
	struct timespec st_atim;	/* Time of last access. */
	struct timespec st_mtim;	/* Time of last modification. */
	struct timespec st_ctim;	/* Time of last status change. */
	blksize_t st_blksize;
	blkcnt_t st_blocks;
	long int __unused[3];
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct stat {
	dev_t st_dev;
	unsigned int __pad1;
	ino_t st_ino;
	mode_t st_mode;
	nlink_t st_nlink;
	uid_t st_uid;
	gid_t st_gid;
	dev_t st_rdev;
	unsigned int __pad2;
	off_t st_size;
	blksize_t st_blksize;
	blkcnt_t st_blocks;
	struct timespec st_atim;	/* Time of last access. */
	struct timespec st_mtim;	/* Time of last modification. */
	struct timespec st_ctim;	/* Time of last status change. */
	unsigned long int __unused4;
	unsigned long int __unused5;
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct stat {
	dev_t st_dev;
	ino_t st_ino;
	nlink_t st_nlink;
	mode_t st_mode;
	uid_t st_uid;
	gid_t st_gid;
	int pad0;
	dev_t st_rdev;
	off_t st_size;
	blksize_t st_blksize;
	blkcnt_t st_blocks;
	struct timespec st_atim;
	struct timespec st_mtim;
	struct timespec st_ctim;
	unsigned long int __unused[3];
    };

#endif
#if defined __i386__
/* IA32 */
    struct stat64 {
	dev_t st_dev;
	unsigned int __pad1;
	ino_t __st_ino;
	mode_t st_mode;
	nlink_t st_nlink;
	uid_t st_uid;
	gid_t st_gid;
	dev_t st_rdev;
	unsigned int __pad2;
	off64_t st_size;
	blksize_t st_blksize;
	blkcnt64_t st_blocks;
	struct timespec st_atim;	/* Time of last access. */
	struct timespec st_mtim;	/* Time of last modification. */
	struct timespec st_ctim;	/* Time of last status change. */
	ino64_t st_ino;
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct stat64 {
	dev_t st_dev;		/* Device. */
	ino64_t st_ino;		/* File serial number. */
	mode_t st_mode;		/* File mode. */
	nlink_t st_nlink;	/* Link count. */
	uid_t st_uid;		/* User ID of the file's owner. */
	gid_t st_gid;		/* Group ID of the file's group. */
	dev_t st_rdev;		/* Device number, if device. */
	unsigned short __pad2;
	off64_t st_size;	/* Size of file, in bytes. */
	blksize_t st_blksize;	/* Optimal block size for I/O. */
	blkcnt64_t st_blocks;	/* Number 512-byte blocks allocated. */
	struct timespec st_atim;	/* Time of last access. */
	struct timespec st_mtim;	/* Time of last modification. */
	struct timespec st_ctim;	/* Time of last status change. */
	unsigned long int __unused4;
	unsigned long int __unused5;
    };

#endif
#if defined __ia64__
/* IA64 */
    struct stat64 {
	dev_t st_dev;
	ino64_t st_ino;
	nlink_t st_nlink;
	mode_t st_mode;
	uid_t st_uid;
	gid_t st_gid;
	unsigned int pad0;
	dev_t st_rdev;
	off_t st_size;
	struct timespec st_atim;	/* Time of last access. */
	struct timespec st_mtim;	/* Time of last modification. */
	struct timespec st_ctim;	/* Time of last status change. */
	blksize_t st_blksize;
	blkcnt64_t st_blocks;
	unsigned long int __unused[3];
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct stat64 {
	dev_t st_dev;
	ino64_t st_ino;
	nlink_t st_nlink;
	mode_t st_mode;
	uid_t st_uid;
	gid_t st_gid;
	int __pad2;
	dev_t st_rdev;
	off64_t st_size;
	blksize_t st_blksize;
	blkcnt64_t st_blocks;
	struct timespec st_atim;	/* Time of last access. */
	struct timespec st_mtim;	/* Time of last modification. */
	struct timespec st_ctim;	/* Time of last status change. */
	unsigned long int __unused4;
	unsigned long int __unused5;
	unsigned long int __unused6;
    };

#endif
#if defined __s390x__
/* S390X */
    struct stat64 {
	dev_t st_dev;
	ino64_t st_ino;
	nlink_t st_nlink;
	mode_t st_mode;
	uid_t st_uid;
	gid_t st_gid;
	int pad0;
	dev_t st_rdev;
	off_t st_size;
	struct timespec st_atim;	/* Time of last access. */
	struct timespec st_mtim;	/* Time of last modification. */
	struct timespec st_ctim;	/* Time of last status change. */
	blksize_t st_blksize;
	blkcnt64_t st_blocks;
	long int __unused[3];
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct stat64 {
	dev_t st_dev;
	ino64_t st_ino;
	nlink_t st_nlink;
	mode_t st_mode;
	uid_t st_uid;
	gid_t st_gid;
	int pad0;
	dev_t st_rdev;
	off_t st_size;
	blksize_t st_blksize;
	blkcnt64_t st_blocks;
	struct timespec st_atim;
	struct timespec st_mtim;
	struct timespec st_ctim;
	unsigned long int __unused[3];
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct stat64 {
	dev_t st_dev;
	int __pad1;
	ino_t __st_ino;
	mode_t st_mode;
	nlink_t st_nlink;
	uid_t st_uid;
	gid_t st_gid;
	dev_t st_rdev;
	int __pad2;
	off64_t st_size;
	blksize_t st_blksize;
	blkcnt64_t st_blocks;
	struct timespec st_atim;	/* Time of last access. */
	struct timespec st_mtim;	/* Time of last modification. */
	struct timespec st_ctim;	/* Time of last status change. */
	ino64_t st_ino;
    };

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */



/* Function prototypes */

    extern int __fxstat(int __ver, int __fildes, struct stat *__stat_buf);
    extern int __fxstat64(int __ver, int __fildes,
			  struct stat64 *__stat_buf);
    extern int __lxstat(int __ver, const char *__filename,
			struct stat *__stat_buf);
    extern int __lxstat64(int __ver, const char *__filename,
			  struct stat64 *__stat_buf);
    extern int __xmknod(int __ver, const char *__path, mode_t __mode,
			dev_t * __dev);
    extern int __xstat(int __ver, const char *__filename,
		       struct stat *__stat_buf);
    extern int __xstat64(int __ver, const char *__filename,
			 struct stat64 *__stat_buf);
    extern int chmod(const char *__file, mode_t __mode);
    extern int fchmod(int __fd, mode_t __mode);
    extern int fstat(int __fd, struct stat *__buf);
    extern int fstat64(int __fd, struct stat64 *__buf);
    extern int lstat(const char *__file, struct stat *__buf);
    extern int lstat64(const char *__file, struct stat64 *__buf);
    extern int mkdir(const char *__path, mode_t __mode);
    extern int mkfifo(const char *__path, mode_t __mode);
    extern int mknod(const char *__path, mode_t __mode, dev_t __dev);
    extern int stat(const char *__file, struct stat *__buf);
    extern int stat64(const char *__file, struct stat64 *__buf);
    extern mode_t umask(mode_t __mask);
#if __LSB_VERSION__ >= 40
    extern int __fxstatat(int __ver, int __fildes, const char *__filename,
			  struct stat *__stat_buf, int __flag);
    extern int __fxstatat64(int __ver, int __fildes,
			    const char *__filename,
			    struct stat64 *__stat_buf, int __flag);
    extern int __xmknodat(int __ver, int __fd, const char *__path,
			  mode_t __mode, dev_t * __dev);
    extern int fchmodat(int __fd, const char *__file, mode_t mode,
			int __flag);
    extern int fstatat(int __fd, const char *__file, struct stat *__buf,
		       int __flag);
    extern int fstatat64(int __fd, const char *__file,
			 struct stat64 *__buf, int __flag);
    extern int mkdirat(int __fd, const char *__path, mode_t __mode);
    extern int mkfifoat(int __fd, const char *__path, mode_t __mode);
    extern int mknodat(int __fd, const char *__path, mode_t __mode,
		       dev_t __dev);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
