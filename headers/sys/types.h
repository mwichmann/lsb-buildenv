#ifndef _SYS_TYPES_H_
#define _SYS_TYPES_H_


#ifdef __cplusplus
extern "C"
{
#endif


#define FD_ISSET(d,set)	((set)->fds_bits[0]&(1<<d))
#define FD_CLR(d,set)	((set)->fds_bits[0]&=~(1<<d))
#define FD_SET(d,set)	((set)->fds_bits[0]|=(1<<d))
#define FALSE	0
#define TRUE	1
#define FD_SETSIZE	1024
#define FD_ZERO(fdsetp)	bzero(fdsetp, sizeof(*(fdsetp)))


  typedef signed char int8_t;

  typedef short int16_t;

  typedef int int32_t;

#if __i386__
/* IA32 */
  typedef long long int64_t;

#endif
  typedef unsigned char u_int8_t;

  typedef unsigned short u_int16_t;

  typedef unsigned int u_int32_t;

  typedef unsigned int uid_t;

  typedef int pid_t;

  typedef unsigned long off_t;

  typedef int key_t;

  typedef unsigned int id_t;

  typedef long suseconds_t;

  typedef unsigned int u_int;

  typedef struct
  {
    int __val[2];
  }
  fsid_t;

  typedef unsigned int useconds_t;

  typedef unsigned long blksize_t;

  typedef long fd_mask;

  typedef int timer_t;

  typedef int clockid_t;

#if __ia64__
/* IA64 */
  typedef long int64_t;

#endif
#if __powerpc64__
/* PPC64 */
  typedef long int64_t;

#endif
#if __x86_64__
/* x86-64 */
  typedef long int64_t;

#endif
#if __s390x__
/* S390X */
  typedef long int64_t;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  typedef long long int64_t;

#endif
#if __s390__ && !__s390x__
/* S390 */
  typedef long long int64_t;

#endif
#if __ia64__
/* IA64 */
  typedef int32_t __suseconds32_t;

#endif
#if __powerpc64__
/* PPC64 */
  typedef int32_t __suseconds32_t;

#endif
#if __x86_64__
/* x86-64 */
  typedef int32_t __suseconds32_t;

#endif

/* These types are derived from the ones above*/


#if __i386__
/* IA32 */
  typedef int32_t ssize_t;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  typedef int32_t ssize_t;

#endif
#if __ia64__
/* IA64 */
  typedef int64_t ssize_t;

#endif
#if __s390__ && !__s390x__
/* S390 */
  typedef int32_t ssize_t;

#endif
#if __powerpc64__
/* PPC64 */
  typedef int64_t ssize_t;

#endif
#if __x86_64__
/* x86-64 */
  typedef int64_t ssize_t;

#endif
#if __s390x__
/* S390X */
  typedef int64_t ssize_t;

#endif

/* Stuff that really in bits/types.h*/


  typedef unsigned long long ino64_t;

  typedef long long loff_t;

  typedef unsigned long blkcnt_t;

  typedef unsigned long fsblkcnt_t;

  typedef unsigned long fsfilcnt_t;

  typedef unsigned long long blkcnt64_t;

  typedef unsigned long long fsblkcnt64_t;

  typedef unsigned long long fsfilcnt64_t;

  typedef unsigned char u_char;

  typedef unsigned short u_short;

  typedef unsigned long u_long;


/* Stuff really in linux/types.h*/


  typedef unsigned long ino_t;

  typedef unsigned int gid_t;

  typedef unsigned long long dev_t;

  typedef unsigned int mode_t;

  typedef unsigned long nlink_t;

  typedef char *caddr_t;


#if __ia64__
#define __FDSET_LONGS	16
#endif
#if __powerpc64__
#define __FDSET_LONGS	16
#endif
#if __x86_64__
#define __FDSET_LONGS	16
#endif
#if __s390x__
#define __FDSET_LONGS	16
#endif
#if __i386__
#define __FDSET_LONGS	32
#endif
#if __powerpc__ && !__powerpc64__
#define __FDSET_LONGS	32
#endif
#if __s390__ && !__s390x__
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


/* Setup some values*/
#define __LITTLE_ENDIAN	1234
#define __BIG_ENDIAN	4321



/* Per Architecture settings*/
#if __powerpc__ && !__powerpc64__
#define __BYTE_ORDER	__BIG_ENDIAN
#endif
#if __powerpc64__
#define __BYTE_ORDER	__BIG_ENDIAN
#endif
#if __s390__ && !__s390x__
#define __BYTE_ORDER	__BIG_ENDIAN
#endif
#if __s390x__
#define __BYTE_ORDER	__BIG_ENDIAN
#endif
#if __i386__
#define __BYTE_ORDER	__LITTLE_ENDIAN
#endif
#if __ia64__
#define __BYTE_ORDER	__LITTLE_ENDIAN
#endif
#if __x86_64__
#define __BYTE_ORDER	__LITTLE_ENDIAN
#endif



#ifdef __cplusplus
}
#endif
#endif
