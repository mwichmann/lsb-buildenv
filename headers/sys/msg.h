#ifndef _SYS_MSG_H_
#define _SYS_MSG_H_

#include <sys/types.h>
#include <sys/ipc.h>

#define MSG_NOERROR	010000



int msgctl (int, int, struct msqid_ds *);
int msgget (key_t, int);
int msgrcv (int, void *, size_t, long, int);
int msgsnd (int, void *, size_t, int);
#endif
