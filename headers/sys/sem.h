#ifndef _SYS_SEM_H_
#define _SYS_SEM_H_

#include <sys/ipc.h>
#include <sys/types.h>

#define SEM_UNDO	0x1000
#define GETPID	11
#define GETVAL	12
#define GETALL	13
#define GETNCNT	14
#define GETZCNT	15
#define SETVAL	16
#define SETALL	17



int semctl (int, int, int, ...);
int semget (key_t, int, int);
int semop (int, struct sembuf *, unsigned int);
#endif
