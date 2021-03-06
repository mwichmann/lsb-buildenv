#if (__LSB_VERSION__ >= 10 )
#ifndef _SYS_SHM_H_
#define _SYS_SHM_H_

#include <sys/types.h>
#include <sys/ipc.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#if defined __i386__
#define SHMLBA	(__getpagesize())
#endif
#define SHM_RDONLY	010000
#define SHM_RND	020000
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#if defined __powerpc__ && !defined __powerpc64__
#define SHMLBA	(__getpagesize())
#endif
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if defined __ia64__
#define SHMLBA	(1024*1024)
#endif
#if defined __s390__ && !defined __s390x__
#define SHMLBA	(__getpagesize())
#endif
#if defined __s390x__
#define SHMLBA	(__getpagesize())
#endif
#define SHM_W	0200
#define SHM_R	0400
#define SHM_REMAP	040000
#define SHM_LOCK	11
#define SHM_UNLOCK	12
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if defined __powerpc64__
#define SHMLBA	(__getpagesize())
#endif
#if defined __x86_64__
#define SHMLBA	(__getpagesize())
#endif
#endif				/* __LSB_VERSION__ >= 2.0 */




#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    typedef unsigned long int shmatt_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned long int shmatt_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef unsigned long int shmatt_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned long int shmatt_t;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned long int shmatt_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned long int shmatt_t;

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */


#if __LSB_VERSION__ >= 20
#if defined __i386__
/* IA32 */
    struct shmid_ds {
	struct ipc_perm shm_perm;
	int shm_segsz;
	time_t shm_atime;
	unsigned long int __unused1;
	time_t shm_dtime;
	unsigned long int __unused2;
	time_t shm_ctime;
	unsigned long int __unused3;
	pid_t shm_cpid;
	pid_t shm_lpid;
	shmatt_t shm_nattch;
	unsigned long int __unused4;
	unsigned long int __unused5;
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct shmid_ds {
	struct ipc_perm shm_perm;
	unsigned int __unused1;
	time_t shm_atime;
	unsigned int __unused2;
	time_t shm_dtime;
	unsigned int __unused3;
	time_t shm_ctime;
	unsigned int __unused4;
	size_t shm_segsz;
	pid_t shm_cpid;
	pid_t shm_lpid;
	shmatt_t shm_nattch;
	unsigned long int __unused5;
	unsigned long int __unused6;
    };

#endif
#if defined __ia64__
/* IA64 */
    struct shmid_ds {
	struct ipc_perm shm_perm;	/* operation permission struct */
	size_t shm_segsz;	/* size of segment in bytes */
	time_t shm_atime;	/* time of last shmat() */
	time_t shm_dtime;	/* time of last shmdt() */
	time_t shm_ctime;	/* time of last change by shmctl() */
	pid_t shm_cpid;		/* pid of creator */
	pid_t shm_lpid;		/* pid of last shmop */
	unsigned long int shm_nattch;	/* number of current attaches */
	unsigned long int __unused1;
	unsigned long int __unused2;
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct shmid_ds {
	struct ipc_perm shm_perm;
	size_t shm_segsz;
	time_t shm_atime;
	unsigned long int __unused1;
	time_t shm_dtime;
	unsigned long int __unused2;
	time_t shm_ctime;
	unsigned long int __unused3;
	pid_t shm_cpid;
	pid_t shm_lpid;
	shmatt_t shm_nattch;
	unsigned long int __unused4;
	unsigned long int __unused5;
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct shmid_ds {
	struct ipc_perm shm_perm;
	time_t shm_atime;
	time_t shm_dtime;
	time_t shm_ctime;
	size_t shm_segsz;
	pid_t shm_cpid;
	pid_t shm_lpid;
	shmatt_t shm_nattch;
	unsigned long int __unused5;
	unsigned long int __unused6;
    };

#endif
#if defined __s390x__
/* S390X */
    struct shmid_ds {
	struct ipc_perm shm_perm;
	size_t shm_segsz;
	time_t shm_atime;
	time_t shm_dtime;
	time_t shm_ctime;
	pid_t shm_cpid;
	pid_t shm_lpid;
	shmatt_t shm_nattch;
	unsigned long int __unused4;
	unsigned long int __unused5;
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct shmid_ds {
	struct ipc_perm shm_perm;	/* operation permission struct */
	size_t shm_segsz;	/* size of segment in bytes */
	time_t shm_atime;	/* time of last shmat() */
	time_t shm_dtime;	/* time of last shmdt() */
	time_t shm_ctime;	/* time of last change by shmctl() */
	pid_t shm_cpid;		/* pid of creator */
	pid_t shm_lpid;		/* pid of last shmop */
	shmatt_t shm_nattch;	/* number of current attaches */
	unsigned long int __unused4;
	unsigned long int __unused5;
    };

#endif
#endif				/* __LSB_VERSION__ >= 2.0 */


/* Function prototypes */

    extern void *shmat(int __shmid, const void *__shmaddr, int __shmflg);
    extern int shmctl(int __shmid, int __cmd, struct shmid_ds *__buf);
    extern int shmdt(const void *__shmaddr);
    extern int shmget(key_t __key, size_t __size, int __shmflg);
#if __LSB_VERSION__ >= 11
    extern int __getpagesize(void);
#endif				/* __LSB_VERSION__ >= 1.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
