#ifndef _SYS_STAT_H_
#define _SYS_STAT_H_

#include <sys/types.h>
#include <unistd.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define S_ISBLK(m)	(((m)&S_IFMT)==S_IFBLK)
#define S_ISCHR(m)	(((m)&S_IFMT)==S_IFCHR)
#define S_ISDIR(m)	(((m)&S_IFMT)==S_IFDIR)
#define S_ISFIFO(m)	(((m)&S_IFMT)==S_IFIFO)
#define S_ISLNK(m)	(((m)&S_IFMT)==S_IFLNK)
#define S_ISREG(m)	(((m)&S_IFMT)==S_IFREG)
#define S_ISSOCK(m)	(((m)&S_IFMT)==S_IFSOCK)
#define S_TYPEISMQ(buf)	((buf)->st_mode - (buf)->st_mode)
#define S_TYPEISSEM(buf)	((buf)->st_mode - (buf)->st_mode)
#define S_TYPEISSHM(buf)	((buf)->st_mode - (buf)->st_mode)
#define S_IRWXU	(S_IREAD|S_IWRITE|S_IEXEC)
#define S_IROTH	(S_IRGRP>>3)
#define S_IRGRP	(S_IRUSR>>3)
#define S_IRWXO	(S_IRWXG>>3)
#define S_IRWXG	(S_IRWXU>>3)
#define S_IWOTH	(S_IWGRP>>3)
#define S_IWGRP	(S_IWUSR>>3)
#define S_IXOTH	(S_IXGRP>>3)
#define S_IXGRP	(S_IXUSR>>3)
#define S_ISVTX	01000
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
#if __ia64__
#define _STAT_VER	1
#endif
#if __x86_64__
#define _STAT_VER	1
#endif
#if __s390x__
#define _STAT_VER	1
#endif
#if __i386__
#define _STAT_VER	3
#endif
#if __powerpc__ && !__powerpc64__
#define _STAT_VER	3
#endif
#if __powerpc64__
#define _STAT_VER	3
#endif
#if __s390__ && !__s390x__
#define _STAT_VER	3
#endif
#define S_IREAD	S_IRUSR
#define S_IWRITE	S_IWUSR
#define S_IEXEC	S_IXUSR


#if __i386__
/* IA32 */
  struct stat
  {
    dev_t st_dev;
    unsigned short __pad1;
    unsigned long st_ino;
    mode_t st_mode;
    nlink_t st_nlink;
    pid_t st_uid;
    gid_t st_gid;
    dev_t st_rdev;
    unsigned short __pad2;
    off_t st_size;
    blksize_t st_blksize;
    blkcnt_t st_blocks;
    time_t st_atime;
    unsigned long __unused1;
    time_t st_mtime;
    unsigned long __unused2;
    time_t st_ctime;
    unsigned long __unused3;
    unsigned long __unused4;
    unsigned long __unused5;
  }
   ;

#endif
#if __i386__
/* IA32 */
  struct stat64
  {
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
    time_t st_atime;
    unsigned long __unused1;
    time_t st_mtime;
    unsigned long __unused2;
    time_t st_ctime;
    unsigned long __unused3;
    ino64_t st_ino;
  }
   ;

#endif
#if __ia64__
/* IA64 */
  struct stat
  {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned long st_nlink;
    unsigned int st_mode;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned int pad0;
    unsigned long st_rdev;
    unsigned long st_size;
    unsigned long st_atime;
    unsigned long __reserved0;
    unsigned long st_mtime;
    unsigned long __reserved1;
    unsigned long st_ctime;
    unsigned long __reserved2;
    unsigned long st_blksize;
    long st_blocks;
    unsigned long __unused[3];
  }
   ;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  struct stat64
  {
    dev_t st_dev;		/* Device. */
    ino64_t st_ino;		/* File serial number. */
    mode_t st_mode;		/* File mode. */
    nlink_t st_nlink;		/* Link count. */
    uid_t st_uid;		/* User ID of the file's owner. */
    gid_t st_gid;		/* Group ID of the file's group. */
    dev_t st_rdev;		/* Device number, if device. */
    unsigned short __pad2;
    off64_t st_size;		/* Size of file, in bytes. */
    blksize_t st_blksize;	/* Optimal block size for I/O. */
    blkcnt64_t st_blocks;	/* Number 512-byte blocks allocated. */
    time_t st_atime;		/* Time of last access. */
    unsigned long __unused1;	/* Reserved for atime.nanoseconds. */
    time_t st_mtime;		/* Time of last modification. */
    unsigned long __unused2;	/* Reserved for mtime.nanoseconds. */
    time_t st_ctime;		/* Time of last status change. */
    unsigned long __unused3;	/* Reserved for ctime.nanoseconds. */
    unsigned long __unused4;
    unsigned long __unused5;
  }
   ;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  struct stat
  {
    dev_t st_dev;		/* Device. */
    unsigned short __pad1;
    ino_t st_ino;		/* File serial number. */
    mode_t st_mode;		/* File mode. */
    nlink_t st_nlink;		/* Link count. */
    uid_t st_uid;		/* User ID of the file's owner. */
    gid_t st_gid;		/* Group ID of the file's group. */
    dev_t st_rdev;		/* Device number, if device. */
    unsigned short __pad2;
    off_t st_size;		/* Size of file, in bytes. */
    blksize_t st_blksize;	/* Optimal block size for I/O. */
    blkcnt_t st_blocks;		/* Number 512-byte blocks allocated. */
    time_t st_atime;		/* Time of last access. */
    unsigned long __unused1;	/* Reserved for atime.nanoseconds */
    time_t st_mtime;		/* Time of last modification. */
    unsigned long __unused2;	/* Reserved for mtime.nanoseconds. */
    time_t st_ctime;		/* Time of last status change. */
    unsigned long __unused3;	/* Reserved for ctime.nanoseconds. */
    unsigned long __unused4;
    unsigned long __unused5;
  }
   ;

#endif
#if __ia64__
/* IA64 */
  struct stat64
  {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned long st_nlink;
    unsigned int st_mode;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned int pad0;
    unsigned long st_rdev;
    unsigned long st_size;
    unsigned long st_atime;
    unsigned long __reserved0;
    unsigned long st_mtime;
    unsigned long __reserved1;
    unsigned long st_ctime;
    unsigned long __reserved2;
    unsigned long st_blksize;
    long st_blocks;
    unsigned long __unused[3];
  }
   ;

#endif
#if __powerpc64__
/* PPC64 */
  struct stat
  {
    dev_t st_dev;
    ino_t st_ino;
    nlink_t st_nlink;
    mode_t st_mode;
    uid_t st_uid;
    gid_t st_gid;
    int __pad1;
    dev_t st_rdev;
    off_t st_size;
    blksize_t st_blksize;
    blkcnt_t st_blocks;
    time_t st_atime;
    unsigned long __unused1;
    time_t st_mtime;
    unsigned long __unused2;
    time_t st_ctime;
    unsigned long __unused3;
    unsigned long __unused4;
    unsigned long __unused5;
    unsigned long __unused6;
  }
   ;

#endif
#if __powerpc64__
/* PPC64 */
  struct stat64
  {
    dev_t st_dev;
    ino64_t st_ino;
    nlink_t st_nlink;
    mode_t st_mode;
    uid_t st_uid;
    gid_t st_gid;
    int __pad1;
    dev_t st_rdev;
    off64_t st_size;
    blksize_t st_blksize;
    blkcnt64_t st_blocks;
    time_t st_atime;
    unsigned long __unused1;
    time_t st_mtime;
    unsigned long __unused2;
    time_t st_ctime;
    unsigned long __unused3;
    unsigned long __unused4;
    unsigned long __unused5;
    unsigned long __unused6;
  }
   ;

#endif
#if __s390x__
/* S390X */
  struct stat
  {
    dev_t st_dev;
    ino_t st_ino;
    nlink_t st_nlink;
    mode_t st_mode;
    uid_t st_uid;
    gid_t st_gid;
    int pad0;
    dev_t st_rdev;
    off_t st_size;
    time_t st_atime;
    long __reserved0;
    time_t st_mtime;
    long __reserved1;
    time_t st_ctime;
    long __reserved2;
    blksize_t st_blksize;
    blkcnt_t st_blocks;
  }
   ;

#endif
#if __s390x__
/* S390X */
  struct stat64
  {
    __dev_t st_dev;
    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __time_t st_atime;
    int __reserved0;
    __time_t st_mtime;
    int __reserved1;
    __time_t st_ctime;
    int __reserved2;
    blksize_t st_blksize;
    __blkcnt64_t st_blocks;
  }
   ;

#endif
#if __s390__ && !__s390x__
/* S390 */
  struct stat
  {
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
    time_t st_atime;
    unsigned long __unused1;
    time_t st_mtime;
    unsigned long __unused2;
    time_t st_ctime;
    unsigned long __unused3;
    unsigned long __unused4;
    unsigned long __unused5;
  }
   ;

#endif
#if __x86_64__
/* x86-64 */
  struct stat
  {
    dev_t st_dev;
    ino_t st_ino;
    nlink_t st_nlink;
    mode_t st_mode;
    uid_t st_uid;
    gid_t st_gid;
    int __pad0;
    dev_t st_rdev;
    off_t st_size;
    blksize_t st_blksize;
    blkcnt_t st_blocks;
    time_t st_atime;
    unsigned long __unused1;
    time_t st_mtime;
    unsigned long __unused2;
    time_t st_ctime;
    unsigned long __unused3;
    unsigned long __unused;
  }
   ;

#endif
#if __x86_64__
/* x86-64 */
  struct stat64
  {
    dev_t st_dev;
    ino64_t st_ino;
    nlink_t st_nlink;
    mode_t st_mode;
    uid_t st_uid;
    gid_t st_gid;
    int __pad0;
    dev_t st_rdev;
    off_t st_size;
    blksize_t st_blksize;
    blkcnt64_t st_blocks;
    time_t st_atime;
    unsigned long __unused1;
    time_t st_mtime;
    unsigned long __unused2;
    time_t st_ctime;
    unsigned long __unused3;
    unsigned long __unused;
  }
   ;

#endif




  extern int __fxstat (int, int, struct stat *);
  extern int __fxstat64 (void);
  extern int __lxstat (int, const char *, struct stat *);
  extern int __lxstat64 (void);
  extern int __xmknod (void);
  extern int __xstat (int, const char *, struct stat *);
  extern int __xstat64 (void);
  extern int mkfifo (const char *, mode_t);
  extern int chmod (const char *, mode_t);
  extern int fchmod (int, mode_t);
  extern mode_t umask (mode_t);
  extern int stat (const char *, struct stat *);
  extern int fstat (int, struct stat *);
  extern int lstat (const char *, struct stat *);
  extern int stat64 (const char *, struct stat64 *);
  extern int fstat64 (int, struct stat64 *);
  extern int lstat64 (const char *, struct stat64 *);
#ifdef __cplusplus
}
#endif
#endif
