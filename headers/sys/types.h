#ifndef _SYS_TYPES_H_
#define _SYS_TYPES_H_


#define FD_ISSET(d,set)	((set)->fds_bits[0]&(1<<d))
#define FD_CLR(d,set)	((set)->fds_bits[0]&=~(1<<d))
#define FD_SET(d,set)	((set)->fds_bits[0]|=(1<<d))
#define FD_SETSIZE	1024
#define FD_ZERO(fdsetp)	bzero(fdsetp, sizeof(*(fdsetp)))


typedef int int8_t;

typedef int int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned int u_int8_t;

typedef unsigned int u_int16_t;

typedef unsigned int u_int32_t;

typedef int ssize_t;

typedef unsigned int uid_t;

typedef int pid_t;

typedef unsigned long off_t;

typedef int key_t;

typedef unsigned int id_t;

typedef long suseconds_t;

typedef unsigned char uint8_t;

typedef unsigned short uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long blksize_t;

typedef long fd_mask;

typedef int timer_t;

typedef int clockid_t;


/* Stuff really in asm/posix_types.h*/



/* Stuff that really in bits/types.h*/


typedef unsigned long long ino64_t;

typedef long long loff_t;

typedef unsigned long blkcnt_t;

typedef unsigned long long blkcnt64_t;

typedef unsigned char u_char;

typedef unsigned short u_short;

typedef unsigned long u_long;


/* Stuff really in linux/types.h*/


typedef int ino_t;

typedef unsigned int gid_t;

typedef unsigned long long dev_t;

typedef unsigned int mode_t;

typedef int nlink_t;

typedef char *caddr_t;

typedef unsigned short ushort;


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
