#ifndef _SYS_MSG_H_
#define _SYS_MSG_H_

#include <sys/types.h>
#include <sys/ipc.h>

#define MSG_NOERROR	010000





typedef unsigned long msgqnum_t;

typedef unsigned long msglen_t;




struct msqid_ds
{
  struct ipc_perm msg_perm;	/* structure describing operation permission */
  time_t msg_stime;		/* time of last msgsnd command */
  unsigned long __unused1;
  time_t msg_rtime;		/* time of last msgrcv command */
  unsigned long __unused2;
  time_t msg_ctime;		/* time of last change */
  unsigned long __unused3;
  unsigned long __msg_cbytes;	/* current number of bytes on queue */
  msgqnum_t msg_qnum;		/* number of messages currently on queue */
  msglen_t msg_qbytes;		/* max number of bytes allowed on queue */
  pid_t msg_lspid;		/* pid of last msgsnd() */
  pid_t msg_lrpid;		/* pid of last msgrcv() */
  unsigned long __unused4;
  unsigned long __unused5;
}
 ;


int msgctl (int, int, struct msqid_ds *);
int msgget (key_t, int);
int msgrcv (int, void *, size_t, long, int);
int msgsnd (int, void *, size_t, int);
#endif
