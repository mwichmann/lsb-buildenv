#ifndef _SYS_SHM_H_
#define _SYS_SHM_H_

#include <sys/types.h>
#include <sys/ipc.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __ia64__
#define SHMLBA	(1024*1024)
#endif
#if __i386__
#define SHMLBA	(__getpagesize())
#endif
#if __powerpc__ && !__powerpc64__
#define SHMLBA	(__getpagesize())
#endif
#if __powerpc64__
#define SHMLBA	(__getpagesize())
#endif
#if __s390__ && !__s390x__
#define SHMLBA	(__getpagesize())
#endif
#if __x86_64__
#define SHMLBA	(__getpagesize())
#endif
#if __s390x__
#define SHMLBA	(__getpagesize())
#endif
#define SHM_RDONLY	010000
#define SHM_W	0200
#define SHM_RND	020000
#define SHM_R	0400
#define SHM_REMAP	040000
#define SHM_LOCK	11
#define SHM_UNLOCK	12





#if __i386__
/* IA32 */
    typedef unsigned long int shmatt_t;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
    typedef unsigned long int shmatt_t;

#endif
#if __s390__ && !__s390x__
/* S390 */
    typedef unsigned long int shmatt_t;

#endif
#if __powerpc64__
/* PPC64 */
    typedef unsigned long int shmatt_t;

#endif
#if __s390x__
/* S390X */
    typedef unsigned long int shmatt_t;

#endif
#if __x86_64__
/* x86-64 */
    typedef unsigned long int shmatt_t;

#endif



#if __i386__
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
#if __powerpc__ && !__powerpc64__
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
#if __ia64__
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
#if __s390__ && !__s390x__
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
#if __powerpc64__
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
#if __s390x__
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
#if __x86_64__
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

    extern int __getpagesize(void);
    extern void *shmat(int, const void *, int);
    extern int shmctl(int, int, struct shmid_ds *);
    extern int shmdt(const void *);
    extern int shmget(key_t, size_t, int);
#ifdef __cplusplus
}
#endif
#endif
