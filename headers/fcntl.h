#if (__LSB_VERSION__ >= 10 )
#ifndef _FCNTL_H_
#define _FCNTL_H_

#include <sys/types.h>
#include <unistd.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define O_RDONLY	00
#define O_ACCMODE	0003
#define O_WRONLY	01
#define O_CREAT	0100
#define O_TRUNC	01000
#define O_SYNC	010000
#define O_RDWR	02
#define O_EXCL	0200
#define O_APPEND	02000
#define O_ASYNC	020000
#define O_NOCTTY	0400
#define O_NDELAY	04000
#define O_NONBLOCK	04000
#define FD_CLOEXEC	1
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 32
#if defined __ia64__
#define O_LARGEFILE	0
#endif
#if defined __x86_64__
#define O_LARGEFILE	0
#endif
#if defined __s390x__
#define O_LARGEFILE	0
#endif
#if defined __i386__
#define O_LARGEFILE	0100000
#endif
#if defined __s390__ && !defined __s390x__
#define O_LARGEFILE	0100000
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define O_LARGEFILE	0200000
#endif
#if defined __powerpc64__
#define O_LARGEFILE	0200000
#endif
#endif				/* __LSB_VERSION__ >= 3.2 */



#if __LSB_VERSION__ >= 12
    struct flock {
	short l_type;
	short l_whence;
	off_t l_start;
	off_t l_len;
	pid_t l_pid;
    };

    struct flock64 {
	short l_type;
	short l_whence;
	loff_t l_start;
	loff_t l_len;
	pid_t l_pid;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* flags for open(2)*/

/* flags for access(2)*/

/* Constants used for fcntl(2)*/
#if __LSB_VERSION__ >= 11
#define F_DUPFD	0
#define F_RDLCK	0
#define F_GETFD	1
#define F_WRLCK	1
#define F_SETFD	2
#define F_UNLCK	2
#define F_GETFL	3
#define F_SETFL	4
#define F_GETLK	5
#define F_SETLK	6
#define F_SETLKW	7
#define F_SETOWN	8
#define F_GETOWN	9
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 21
#if defined __i386__
#define F_GETLK64	12
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define F_GETLK64	12
#endif
#if defined __powerpc64__
#define F_GETLK64	12
#endif
#if defined __s390__ && !defined __s390x__
#define F_GETLK64	12
#endif
#if defined __i386__
#define F_SETLK64	13
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define F_SETLK64	13
#endif
#if defined __powerpc64__
#define F_SETLK64	13
#endif
#if defined __s390__ && !defined __s390x__
#define F_SETLK64	13
#endif
#if defined __i386__
#define F_SETLKW64	14
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define F_SETLKW64	14
#endif
#if defined __powerpc64__
#define F_SETLKW64	14
#endif
#if defined __s390__ && !defined __s390x__
#define F_SETLKW64	14
#endif
#if defined __ia64__
#define F_GETLK64	5
#endif
#if defined __x86_64__
#define F_GETLK64	5
#endif
#if defined __s390x__
#define F_GETLK64	5
#endif
#if defined __ia64__
#define F_SETLK64	6
#endif
#if defined __x86_64__
#define F_SETLK64	6
#endif
#if defined __s390x__
#define F_SETLK64	6
#endif
#if defined __ia64__
#define F_SETLKW64	7
#endif
#if defined __x86_64__
#define F_SETLKW64	7
#endif
#if defined __s390x__
#define F_SETLKW64	7
#endif
#endif				/* __LSB_VERSION__ >= 2.1 */

#if __LSB_VERSION__ >= 32
#define F_SETSIG	10
#define F_GETSIG	11
#endif				/* __LSB_VERSION__ >= 3.2 */




/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern int creat(const char *, mode_t);
    extern int creat64(const char *, mode_t);
    extern int fcntl(int, int, ...);
    extern int open(const char *, int, ...);
    extern int open64(const char *, int, ...);
#endif				/* __LSB_VERSION__ >= 1.0 */

#if __LSB_VERSION__ >= 32
    extern int posix_fadvise(int, off_t, off_t, int);
    extern int posix_fadvise64(int, off64_t, off64_t, int);
    extern int posix_fallocate(int, off_t, off_t);
    extern int posix_fallocate64(int, off64_t, off64_t);
#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
