#if (__LSB_VERSION__ >= 10 )
#ifndef _FCNTL_H_
#define _FCNTL_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define O_RDONLY	00
#define O_ACCMODE	0003
#define O_WRONLY	01
#define O_CREAT	0100
#define O_TRUNC	01000
#define O_RDWR	02
#define O_EXCL	0200
#define O_APPEND	02000
#define O_ASYNC	020000
#define O_NOCTTY	0400
#define O_NDELAY	04000
#define O_NONBLOCK	04000
#define FD_CLOEXEC	1
#if __LSB_VERSION__ < 50
#define O_SYNC	010000
#endif				/* __LSB_VERSION__ < 5.0 */

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
#define POSIX_FADV_NORMAL	0
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
#define POSIX_FADV_RANDOM	1
#define POSIX_FADV_SEQUENTIAL	2
#define POSIX_FADV_WILLNEED	3
#if defined __i386__
#define POSIX_FADV_DONTNEED	4
#endif
#if defined __ia64__
#define POSIX_FADV_DONTNEED	4
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define POSIX_FADV_DONTNEED	4
#endif
#if defined __powerpc64__
#define POSIX_FADV_DONTNEED	4
#endif
#if defined __s390__ && !defined __s390x__
#define POSIX_FADV_DONTNEED	4
#endif
#if defined __x86_64__
#define POSIX_FADV_DONTNEED	4
#endif
#if defined __i386__
#define POSIX_FADV_NOREUSE	5
#endif
#if defined __ia64__
#define POSIX_FADV_NOREUSE	5
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define POSIX_FADV_NOREUSE	5
#endif
#if defined __powerpc64__
#define POSIX_FADV_NOREUSE	5
#endif
#if defined __s390__ && !defined __s390x__
#define POSIX_FADV_NOREUSE	5
#endif
#if defined __x86_64__
#define POSIX_FADV_NOREUSE	5
#endif
#if defined __s390x__
#define POSIX_FADV_DONTNEED	6
#define POSIX_FADV_NOREUSE	7
#endif
#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 40
#define O_DSYNC	010000
#define O_RSYNC	010000
#if defined __powerpc__ && !defined __powerpc64__
#define O_NOFOLLOW	0100000
#endif
#if defined __powerpc64__
#define O_NOFOLLOW	0100000
#endif
#if defined __i386__
#define O_DIRECTORY	0200000
#endif
#if defined __ia64__
#define O_DIRECTORY	0200000
#endif
#if defined __s390__ && !defined __s390x__
#define O_DIRECTORY	0200000
#endif
#if defined __x86_64__
#define O_DIRECTORY	0200000
#endif
#if defined __s390x__
#define O_DIRECTORY	0200000
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define O_DIRECTORY	040000
#endif
#if defined __powerpc64__
#define O_DIRECTORY	040000
#endif
#if defined __i386__
#define O_NOFOLLOW	0400000
#endif
#if defined __ia64__
#define O_NOFOLLOW	0400000
#endif
#if defined __s390__ && !defined __s390x__
#define O_NOFOLLOW	0400000
#endif
#if defined __x86_64__
#define O_NOFOLLOW	0400000
#endif
#if defined __s390x__
#define O_NOFOLLOW	0400000
#endif
#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 50
#define O_SYNC	04010000
#define O_RSYNC	O_SYNC
#endif				/* __LSB_VERSION__ >= 5.0 */



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
#if __LSB_VERSION__ >= 40
#define AT_FDCWD	-100
#define AT_SYMLINK_NOFOLLOW	0x100
#define AT_EACCESS	0x200
#define AT_REMOVEDIR	0x200
#define AT_SYMLINK_FOLLOW	0x400
#endif				/* __LSB_VERSION__ >= 4.0 */




/* Constants used for fcntl(2)*/
#if __LSB_VERSION__ >= 11
#define F_DUPFD	0
#define F_RDLCK	0
#ifndef SEEK_SET
#define SEEK_SET	0
#endif
#define F_GETFD	1
#define F_WRLCK	1
#ifndef SEEK_CUR
#define SEEK_CUR	1
#endif
#define F_SETFD	2
#define F_UNLCK	2
#ifndef SEEK_END
#define SEEK_END	2
#endif
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

    extern int creat(const char *__file, mode_t __mode);
    extern int creat64(const char *__file, mode_t __mode);
    extern int fcntl(int __fd, int __cmd, ...);
    extern int open(const char *__file, int __oflag, ...);
    extern int open64(const char *__file, int __oflag, ...);
#if __LSB_VERSION__ >= 32
    extern int posix_fadvise(int __fd, off_t __offset, off_t __len,
			     int __advise);
    extern int posix_fadvise64(int __fd, off64_t __offset, off64_t __len,
			       int __advise);
    extern int posix_fallocate(int __fd, off_t __offset, off_t __len);
    extern int posix_fallocate64(int __fd, off64_t __offset,
				 off64_t __len);
#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 40
    extern int openat(int __fd, const char *__file, int __oflag, ...);
    extern int openat64(int __fd, const char *__file, int __oflag, ...);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
