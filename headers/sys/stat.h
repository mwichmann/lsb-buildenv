#ifndef _SYS_STAT_H_
#define _SYS_STAT_H_

#include <sys/types.h>

#define S_ISBLK(m)	(((m)&S_IFMT)==S_IFBLK)
#define S_ISCHR(m)	(((m)&S_IFMT)==S_IFCHR)
#define S_ISDIR(m)	(((m)&S_IFMT)==S_IFDIR)
#define S_ISFIFO(m)	(((m)&S_IFMT)==S_IFIFO)
#define S_ISLNK(m)	(((m)&S_IFMT)==S_IFLNK)
#define S_ISREG(m)	(((m)&S_IFMT)==S_IFREG)
#define S_ISSOCK(m)	(((m)&S_IFMT)==S_IFSOCK)
#define S_TYPEISSHM(buf)	((buf)->st_mode - (buf)->st_mode)
#define S_TYPEISMQ(buf)	((buf)->st_mode - (buf)->st_mode)
#define S_TYPEISSEM(buf)	((buf)->st_mode - (buf)->st_mode)
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
#define S_IREAD	S_IRUSR
#define S_IWRITE	S_IWUSR
#define S_IEXEC	S_IXUSR


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

struct stat64
{
  unsigned short st_dev;
  unsigned char __pad0[1];
  unsigned long __st_ino;
  unsigned int st_mode;
  unsigned int st_nlink;
  unsigned long st_uid;
  unsigned long st_gid;
  unsigned short st_rdev;
  unsigned char __pad3[1];
  long st_size;
  unsigned long st_blksize;
  unsigned long st_blocks;
  unsigned long __pad4;
  unsigned long st_atime;
  unsigned long __pad5;
  unsigned long st_mtime;
  unsigned long __pad6;
  unsigned long st_ctime;
  unsigned long __pad7;
  unsigned long st_ino;
}
 ;





extern int mkfifo (char *, mode_t);
extern int chmod (char *, mode_t);
extern int fchmod (int, mode_t);
extern mode_t umask (mode_t);
#endif
