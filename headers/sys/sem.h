#ifndef _SYS_SEM_H_
#define _SYS_SEM_H_

#include <sys/types.h>

struct sembuf
{
  short sem_num;
  short sem_op;
  short sem_flg;
}
 ;

#define IPC_PRIVATE	((key_t)0)
#define IPC_RMID	0
#define IPC_CREAT	00001000
#define IPC_EXCL	00002000
#define IPC_NOWAIT	00004000
#define SEM_UNDO	0x1000
#define IPC_SET	1
#define GETPID	11
#define GETVAL	12
#define GETALL	13
#define GETNCNT	14
#define GETZCNT	15
#define SETVAL	16
#define SETALL	17
#define IPC_STAT	2

int semctl (int, int, int, ...);
int semget (key_t, int, int);
int semop (int, struct sembuf *, unsigned int);
#endif
