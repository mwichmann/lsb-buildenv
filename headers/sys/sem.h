#ifndef _SYS_SEM_H_
#define _SYS_SEM_H_

#include <sys/types.h>
#include <sys/ipc.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define SEM_UNDO	0x1000
#define GETPID	11
#define GETVAL	12
#define GETALL	13
#define GETNCNT	14
#define GETZCNT	15
#define SETVAL	16
#define SETALL	17


  struct sembuf
  {
    short sem_num;
    short sem_op;
    short sem_flg;
  }
   ;

  struct semid_ds
  {
    struct ipc_perm sem_perm;	/* operation permission struct */
    time_t sem_otime;		/* last semop() time */
    unsigned long __unused1;
    time_t sem_ctime;		/* last time changed by semctl() */
    unsigned long __unused2;
    unsigned long sem_nsems;	/* number of semaphores in set */
    unsigned long __unused3;
    unsigned long __unused4;
  }
   ;


  extern int semctl (int, int, int, ...);
  extern int semget (key_t, int, int);
  extern int semop (int, struct sembuf *, unsigned int);
#ifdef __cplusplus
}
#endif
#endif
