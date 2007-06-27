#ifndef _FCNTL_H_
#define _FCNTL_H_

#include <sys/types.h>
#include <unistd.h>

#ifdef __cplusplus
extern "C" {
#endif


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


/* flags for open(2)*/



/* flags for access(2)*/



/* Constants used for fcntl(2)*/
#define F_DUPFD	0
#define F_RDLCK	0
#define F_GETFD	1
#define F_WRLCK	1
#define F_SETSIG	10
#define F_GETSIG	11
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
#define F_SETFD	2
#define F_UNLCK	2
#define F_GETFL	3
#define F_SETFL	4
#define F_GETLK	5
#if defined __ia64__
#define F_GETLK64	5
#endif
#if defined __x86_64__
#define F_GETLK64	5
#endif
#if defined __s390x__
#define F_GETLK64	5
#endif
#define F_SETLK	6
#if defined __ia64__
#define F_SETLK64	6
#endif
#if defined __x86_64__
#define F_SETLK64	6
#endif
#if defined __s390x__
#define F_SETLK64	6
#endif
#define F_SETLKW	7
#if defined __ia64__
#define F_SETLKW64	7
#endif
#if defined __x86_64__
#define F_SETLKW64	7
#endif
#if defined __s390x__
#define F_SETLKW64	7
#endif
#define F_SETOWN	8
#define F_GETOWN	9



    extern int posix_fadvise(int, off_t, off_t, int);
    extern int posix_fallocate(int, off_t, off_t);
    extern int posix_fadvise64(int, off64_t, off64_t, int);
    extern int posix_fallocate64(int, off64_t, off64_t);
    extern int lockf64(int, int, off64_t);
    extern int fcntl(int, int, ...);
    extern int open(const char *, int, ...);
#ifdef __cplusplus
}
#endif
#endif
