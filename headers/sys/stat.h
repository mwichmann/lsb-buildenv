#ifndef _SYS_STAT_H_
#define _SYS_STAT_H_

#include <sys/types.h>

struct stat
{
  unsigned short st_dev;
  unsigned short __pad1;
  unsigned long st_ino;
  unsigned short st_mode;
  unsigned short st_nlink;
  unsigned short st_uid;
  unsigned short st_gid;
  unsigned short st_rdev;
  unsigned short __pad2;
  unsigned long st_size;
  unsigned long st_blksize;
  unsigned long st_blocks;
  unsigned long st_atime;
  unsigned long __unused1;
  unsigned long st_mtime;
  unsigned long __unused2;
  unsigned long st_ctime;
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


#define S_IROTH	(S_IRGRP>>3)
#define S_IRGRP	(S_IRUSR>>3)
#define S_IRWXG	(S_IRWXU>>3)
#define S_IWOTH	(S_IWGRP>>3)
#define S_IWGRP	(S_IWUSR>>3)
#define S_IXOTH	(S_IXGRP>>3)
#define S_IXGRP	(S_IXUSR>>3)
#define S_IRWXU	(__S_IREAD|__S_IWRITE|__S_IEXEC)
#define S_IXUSR	__S_IEXEC
#define S_IFBLK	__S_IFBLK
#define S_IFCHR	__S_IFCHR
#define S_IFDIR	__S_IFDIR
#define S_IFIFO	__S_IFIFO
#define S_IFLNK	__S_IFLNK
#define S_IFMT	__S_IFMT
#define S_IFREG	__S_IFREG
#define S_IFSOCK	__S_IFSOCK
#define S_IRUSR	__S_IREAD
#define S_ISGID	__S_ISGID
#define S_ISUID	__S_ISUID
#define S_IWUSR	__S_IWRITE

int mkfifo (char *, mode_t);
int chmod (char *, mode_t);
int fchmod (int, mode_t);
int mkdir (char *, mode_t);
mode_t umask (mode_t);
#endif
