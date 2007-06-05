#ifndef _SYS_SEM_H_
#define _SYS_SEM_H_

#include <sys/types.h>
#include <sys/ipc.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#define SEM_UNDO	0x1000
#define GETPID	11
#define GETVAL	12
#define GETALL	13
#define GETNCNT	14
#define GETZCNT	15
#define SETVAL	16
#define SETALL	17


    struct sembuf {
	short sem_num;
	short sem_op;
	short sem_flg;
    };

#if __ia64__
/* IA64 */
    struct semid_ds {
	struct ipc_perm sem_perm;	/* operation permission struct */
	time_t sem_otime;	/* last semop() time */
	time_t sem_ctime;	/* last time changed by semctl() */
	unsigned long int sem_nsems;	/* number of semaphores in set */
	unsigned long int __unused1;
	unsigned long int __unused2;
    };

#endif
#if __i386__
/* IA32 */
    struct semid_ds {
	struct ipc_perm sem_perm;	/* operation permission struct */
	time_t sem_otime;	/* last semop() time */
	unsigned long int __unused1;
	time_t sem_ctime;	/* last time changed by semctl() */
	unsigned long int __unused2;
	unsigned long int sem_nsems;	/* number of semaphores in set */
	unsigned long int __unused3;
	unsigned long int __unused4;
    };

#endif
#if __s390__ && !__s390x__
/* S390 */
    struct semid_ds {
	struct ipc_perm sem_perm;	/* operation permission struct */
	time_t sem_otime;	/* last semop() time */
	unsigned long int __unused1;
	time_t sem_ctime;	/* last time changed by semctl() */
	unsigned long int __unused2;
	unsigned long int sem_nsems;	/* number of semaphores in set */
	unsigned long int __unused3;
	unsigned long int __unused4;
    };

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
    struct semid_ds {
	struct ipc_perm sem_perm;	/* operation permission struct */
	unsigned int __unused1;
	time_t sem_otime;	/* last semop() time */
	unsigned int __unused2;
	time_t sem_ctime;	/* last time changed by semctl() */
	unsigned long int sem_nsems;	/* number of semaphores in set */
	unsigned long int __unused3;
	unsigned long int __unused4;
    };

#endif
#if __powerpc64__
/* PPC64 */
    struct semid_ds {
	struct ipc_perm sem_perm;
	time_t sem_otime;
	time_t sem_ctime;
	unsigned long int sem_nsems;
	unsigned long int __unused3;
	unsigned long int __unused4;
    };

#endif
#if __s390x__
/* S390X */
    struct semid_ds {
	struct ipc_perm sem_perm;
	time_t sem_otime;
	time_t sem_ctime;
	unsigned long int sem_nsems;
	unsigned long int __unused3;
	unsigned long int __unused4;
    };

#endif
#if __x86_64__
/* x86-64 */
    struct semid_ds {
	struct ipc_perm sem_perm;
	time_t sem_otime;
	unsigned long int __unused1;
	time_t sem_ctime;
	unsigned long int __unused2;
	unsigned long int sem_nsems;
	unsigned long int __unused3;
	unsigned long int __unused4;
    };

#endif

    extern int semctl(int, int, int, ...);
    extern int semget(key_t, int, int);
    extern int semop(int, struct sembuf *, size_t);
#ifdef __cplusplus
}
#endif
#endif
