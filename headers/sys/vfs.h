#ifndef _SYS_VFS_H_
#define _SYS_VFS_H_

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define MSDOS_SUPER_MAGIC	0x4d44
#define NFS_SUPER_MAGIC	0x6969
#define ISOFS_SUPER_MAGIC	0x9660
#define PROC_SUPER_MAGIC	0x9fa0
#define EXT2_SUPER_MAGIC	0xEF53


  struct statfs
  {
    int f_type;			/* type of filesystem */
    int f_bsize;		/* optimal transfer block size */
    fsblkcnt_t f_blocks;	/* total data blocks in file system */
    fsblkcnt_t f_bfree;		/* free blocks in fs */
    fsblkcnt_t f_bavail;	/* free blocks avail to non-superuser */
    fsblkcnt_t f_files;		/* total file nodes in file system */
    fsblkcnt_t f_ffree;		/* free file nodes in fs */
    fsid_t f_fsid;		/* file system id */
    int f_namlen;		/* maximum length of filenames */
    int f_spare[6];		/* spare for later */
  }
   ;

  struct statfs64
  {
    int f_type;			/* type of filesystem */
    int f_bsize;		/* optimal transfer block size */
    fsblkcnt64_t f_blocks;	/* total data blocks in file system */
    fsblkcnt64_t f_bfree;	/* free blocks in fs */
    fsblkcnt64_t f_bavail;	/* free blocks avail to non-superuser */
    fsblkcnt64_t f_files;	/* total file nodes in file system */
    fsblkcnt64_t f_ffree;	/* free file nodes in fs */
    fsid_t f_fsid;		/* file system id */
    int f_namlen;		/* maximum length of filenames */
    int f_spare[6];		/* spare for later */
  }
   ;


  extern int fstatfs64 (int, struct statfs64 *);
  extern int statfs64 (const char *, struct stat64 *);
  extern int fstatfs (int, struct statfs *);
  extern int statfs (const char *, struct statfs *);
#ifdef __cplusplus
}
#endif
#endif
