#ifndef _SYS_TYPES_H_
#define _SYS_TYPES_H_




typedef int int64_t;

typedef int ptrdiff_t;

typedef int ssize_t;

typedef unsigned int uid_t;

typedef int pid_t;

typedef unsigned long off_t;

typedef int key_t;

typedef unsigned int id_t;

typedef long suseconds_t;

typedef long fd_mask;

typedef int timer_t;

typedef int clockid_t;


/* Stuff really in asm/posix_types.h*/



/* Stuff that really in bits/types.h*/


typedef long long loff_t;


/* Stuff really in linux/types.h*/


typedef int ino_t;

typedef unsigned int gid_t;

typedef unsigned long long dev_t;

typedef unsigned int mode_t;

typedef int nlink_t;

typedef char *caddr_t;


#if defined(__ia64__)
#define __FDSET_LONGS	16
#endif
#if defined(__i386__)
#define __FDSET_LONGS	32
#endif


typedef struct
{
  unsigned long fds_bits[__FDSET_LONGS];
}
fd_set;


/* Time related types*/


typedef long clock_t;

typedef long time_t;


#endif
