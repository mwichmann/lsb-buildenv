#ifndef _SYS_MSG_H_
#define _SYS_MSG_H_

#include <stddef.h>
#include <sys/types.h>
#include <sys/ipc.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define MSG_NOERROR	010000



/* Base types for messages*/


#if __i386__
/* IA32 */
  typedef unsigned long msgqnum_t;

#endif
#if __i386__
/* IA32 */
  typedef unsigned long msglen_t;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  typedef unsigned long msglen_t;

#endif
#if __s390__
/* S390 */
  typedef unsigned long msglen_t;

#endif
#if __s390__
/* S390 */
  typedef unsigned long msgqnum_t;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
  typedef unsigned long msgqnum_t;

#endif

/* Message Queue structure*/


#if __i386__
/* IA32 */
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
    msglen_t msg_qbytes;	/* max number of bytes allowed on queue */
    pid_t msg_lspid;		/* pid of last msgsnd() */
    pid_t msg_lrpid;		/* pid of last msgrcv() */
    unsigned long __unused4;
    unsigned long __unused5;
  }
   ;

#endif
#if __ia64__
/* IA64 */
  struct msqid_ds
  {
    struct ipc_perm msg_perm;	/* structure describing operation permission */
    time_t msg_stime;		/* time of last msgsnd command */
    time_t msg_rtime;		/* time of last msgrcv command */
    time_t msg_ctime;		/* time of last change */
    unsigned long __msg_cbytes;	/* current number of bytes on queue */
    unsigned long msg_qnum;	/* number of messages currently on queue */
    unsigned long msg_qbytes;	/* max number of bytes allowed on queue */
    pid_t msg_lspid;		/* pid of last msgsnd() */
    pid_t msg_lrpid;		/* pid of last msgrcv() */
    unsigned long __unused1;
    unsigned long __unused2;
  }
   ;

#endif
#if __powerpc__ && !__powerpc64__
/* PPC32 */
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
    msglen_t msg_qbytes;	/* max number of bytes allowed on queue */
    pid_t msg_lspid;		/* pid of last msgsnd() */
    pid_t msg_lrpid;		/* pid of last msgrcv() */
  }
   ;

#endif
#if __s390__
/* S390 */
  struct msqid_ds
  {
    struct ipc_perm msg_perm;	/* structure describing operation permission */
    time_t msg_stime;		/* time of last msgsnd command */
    time_t msg_rtime;		/* time of last msgrcv command */
    unsigned long __unused1;
    time_t msg_ctime;		/* time of last change */
    unsigned long __unused2;
    unsigned long __unused3;
    unsigned long __msg_cbytes;	/* current number of bytes on queue */
    msgqnum_t msg_qnum;		/* number of messages currently on queue */
    msglen_t msg_qbytes;	/* max number of bytes allowed on queue */
    pid_t msg_lspid;		/* pid of last msgsnd() */
    pid_t msg_lrpid;		/* pid of last msgrcv() */
    unsigned long __unused4;
    unsigned long __unused5;
  }
   ;

#endif

  extern int msgctl (int, int, struct msqid_ds *);
  extern int msgget (key_t, int);
  extern int msgrcv (int, void *, size_t, long, int);
  extern int msgsnd (int, void *, size_t, int);
#ifdef __cplusplus
}
#endif
#endif
