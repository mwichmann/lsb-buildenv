#ifndef _SYS_STATVFS_H_
#define _SYS_STATVFS_H_


#ifdef __cplusplus
extern "C"
{
#endif




  struct statvfs
  {
    unsigned long f_bsize;
    unsigned long f_frsize;
    fsblkcnt_t f_blocks;
    fsblkcnt_t f_bfree;
    fsblkcnt_t f_bavail;
    fsfilcnt_t f_files;
    fsfilcnt_t f_ffree;
    fsfilcnt_t f_favail;
    unsigned long f_fsid;
    int __f_unused;
    unsigned long f_flag;
    unsigned long f_namemax;
    int __f_spare[6];
  }
   ;

  struct statvfs64
  {
    unsigned long f_bsize;
    unsigned long f_frsize;
    fsblkcnt64_t f_blocks;
    fsblkcnt64_t f_bfree;
    fsblkcnt64_t f_bavail;
    fsfilcnt64_t f_files;
    fsfilcnt64_t f_ffree;
    fsfilcnt64_t f_favail;
    unsigned long f_fsid;
    int __f_unused;
    unsigned long f_flag;
    unsigned long f_namemax;
    int __f_spare[6];
  }
   ;


  extern int fstatvfs (int, struct statvfs *);
  extern int fstatvfs64 (int, struct statvfs64 *);
  extern int statvfs (const char *, struct statvfs *);
  extern int statvfs64 (const char *, struct statvfs64 *);
#ifdef __cplusplus
}
#endif
#endif
