#if (__LSB_VERSION__ >= 10 )
#ifndef _SYS_TYPES_H_
#define _SYS_TYPES_H_

#include <stddef.h>
#include <strings.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define FD_SETSIZE	1024
#define FD_ZERO(fdsetp)	bzero(fdsetp, sizeof(*(fdsetp)))
#define FD_ISSET(d,set)	\
	((set)->fds_bits[((d)/(8*sizeof(long)))]&(1<<((d)%(8*sizeof(long)))))
#define FD_CLR(d,set)	\
	((set)->fds_bits[((d)/(8*sizeof(long)))]&=~(1<<((d)%(8*sizeof(long)))))
#define FD_SET(d,set)	\
	((set)->fds_bits[((d)/(8*sizeof(long)))]|=(1<<((d)%(8*sizeof(long)))))
#endif				// __LSB_VERSION__ >= 1.1

#if __LSB_VERSION__ >= 20
#ifndef FALSE
#define FALSE	0
#endif
#ifndef TRUE
#define TRUE	1
#endif
#endif				// __LSB_VERSION__ >= 2.0



#if __LSB_VERSION__ >= 10
    typedef int pid_t;

    typedef long int off_t;

    typedef int key_t;

#endif				// __LSB_VERSION__ >= 1.0

#if __LSB_VERSION__ >= 12
    typedef unsigned char u_int8_t;

    typedef unsigned short u_int16_t;

    typedef unsigned int u_int32_t;

    typedef unsigned int uid_t;

    typedef long int suseconds_t;

    typedef unsigned int u_int;

    typedef long int blksize_t;

    typedef long int fd_mask;

    typedef void *timer_t;

    typedef int clockid_t;

#endif				// __LSB_VERSION__ >= 1.2

#if __LSB_VERSION__ >= 13
    typedef unsigned long long int u_int64_t;

    typedef struct {
	int __val[2];
    } fsid_t;

#endif				// __LSB_VERSION__ >= 1.3

#if __LSB_VERSION__ >= 20
    typedef unsigned int useconds_t;

#endif				// __LSB_VERSION__ >= 2.0


/* These types are derived from the ones above*/
#if __LSB_VERSION__ >= 12
    typedef unsigned int id_t;

#endif				// __LSB_VERSION__ >= 1.2

#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    typedef int32_t ssize_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef int32_t ssize_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef int32_t ssize_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef int64_t ssize_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef int64_t ssize_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef int64_t ssize_t;

#endif
#if defined __s390x__
/* S390X */
    typedef int64_t ssize_t;

#endif
#endif				// __LSB_VERSION__ >= 2.0


/* Stuff that really in bits/types.h*/
#if __LSB_VERSION__ >= 12
    typedef unsigned long long int ino64_t;

    typedef long long int loff_t;

    typedef long int blkcnt_t;

    typedef long long int blkcnt64_t;

    typedef unsigned char u_char;

    typedef unsigned short u_short;

    typedef unsigned long int u_long;

#endif				// __LSB_VERSION__ >= 1.2

#if __LSB_VERSION__ >= 13
    typedef unsigned long int fsblkcnt_t;

    typedef unsigned long int fsfilcnt_t;

    typedef unsigned long long int fsblkcnt64_t;

    typedef unsigned long long int fsfilcnt64_t;

#endif				// __LSB_VERSION__ >= 1.3


/* Stuff really in linux/types.h*/
#if __LSB_VERSION__ >= 11
    typedef unsigned long int ino_t;

#endif				// __LSB_VERSION__ >= 1.1

#if __LSB_VERSION__ >= 12
    typedef unsigned int gid_t;

    typedef unsigned long long int dev_t;

    typedef unsigned int mode_t;

    typedef unsigned long int nlink_t;

    typedef char *caddr_t;

#endif				// __LSB_VERSION__ >= 1.2


#if __LSB_VERSION__ >= 21
#if defined __ia64__
#define __FDSET_LONGS	16
#endif
#if defined __powerpc64__
#define __FDSET_LONGS	16
#endif
#if defined __x86_64__
#define __FDSET_LONGS	16
#endif
#if defined __s390x__
#define __FDSET_LONGS	16
#endif
#if defined __i386__
#define __FDSET_LONGS	32
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define __FDSET_LONGS	32
#endif
#if defined __s390__ && !defined __s390x__
#define __FDSET_LONGS	32
#endif
#endif				// __LSB_VERSION__ >= 2.1



#if __LSB_VERSION__ >= 12
    typedef struct {
	unsigned long int fds_bits[__FDSET_LONGS];
    } fd_set;

#endif				// __LSB_VERSION__ >= 1.2


/* Time related types*/
#if __LSB_VERSION__ >= 10
    typedef long int clock_t;

#endif				// __LSB_VERSION__ >= 1.0

#if __LSB_VERSION__ >= 12
    typedef long int time_t;

#endif				// __LSB_VERSION__ >= 1.2


/* Setup some values*/
#define __LITTLE_ENDIAN	1234
#define __BIG_ENDIAN	4321



/* Per Architecture settings*/
#if defined __i386__
#define __BYTE_ORDER	__LITTLE_ENDIAN
#endif
#if __LSB_VERSION__ >= 12
#if defined __powerpc__ && !defined __powerpc64__
#define __BYTE_ORDER	__BIG_ENDIAN
#endif
#endif				// __LSB_VERSION__ >= 1.2

#if __LSB_VERSION__ >= 13
#if defined __s390__ && !defined __s390x__
#define __BYTE_ORDER	__BIG_ENDIAN
#endif
#if defined __s390x__
#define __BYTE_ORDER	__BIG_ENDIAN
#endif
#if defined __ia64__
#define __BYTE_ORDER	__LITTLE_ENDIAN
#endif
#endif				// __LSB_VERSION__ >= 1.3

#if __LSB_VERSION__ >= 20
#if defined __powerpc64__
#define __BYTE_ORDER	__BIG_ENDIAN
#endif
#if defined __x86_64__
#define __BYTE_ORDER	__LITTLE_ENDIAN
#endif
#endif				// __LSB_VERSION__ >= 2.0



#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
