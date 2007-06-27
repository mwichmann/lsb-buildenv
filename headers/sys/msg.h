#ifndef _SYS_MSG_H_
#define _SYS_MSG_H_

#include <sys/types.h>
#include <sys/ipc.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#define MSG_NOERROR	010000



/* Base types for messages*/


#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef unsigned long int msgqnum_t;

#endif
#if defined __i386__
/* IA32 */
    typedef unsigned long int msgqnum_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned long int msgqnum_t;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned long int msgqnum_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned long int msgqnum_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned long int msgqnum_t;

#endif
#if defined __i386__
/* IA32 */
    typedef unsigned long int msglen_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef unsigned long int msglen_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned long int msglen_t;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned long int msglen_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned long int msglen_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned long int msglen_t;

#endif

/* Message Queue structure*/


#if defined __i386__
/* IA32 */
    struct msqid_ds {
	struct ipc_perm msg_perm;	/* structure describing operation permission */
	time_t msg_stime;	/* time of last msgsnd command */
	unsigned long int __unused1;
	time_t msg_rtime;	/* time of last msgrcv command */
	unsigned long int __unused2;
	time_t msg_ctime;	/* time of last change */
	unsigned long int __unused3;
	unsigned long int __msg_cbytes;	/* current number of bytes on queue */
	msgqnum_t msg_qnum;	/* number of messages currently on queue */
	msglen_t msg_qbytes;	/* max number of bytes allowed on queue */
	pid_t msg_lspid;	/* pid of last msgsnd() */
	pid_t msg_lrpid;	/* pid of last msgrcv() */
	unsigned long int __unused4;
	unsigned long int __unused5;
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct msqid_ds {
	struct ipc_perm msg_perm;	/* structure describing operation permission */
	time_t msg_stime;	/* time of last msgsnd command */
	unsigned long int __unused1;
	time_t msg_rtime;	/* time of last msgrcv command */
	unsigned long int __unused2;
	time_t msg_ctime;	/* time of last change */
	unsigned long int __unused3;
	unsigned long int __msg_cbytes;	/* current number of bytes on queue */
	msgqnum_t msg_qnum;	/* number of messages currently on queue */
	msglen_t msg_qbytes;	/* max number of bytes allowed on queue */
	pid_t msg_lspid;	/* pid of last msgsnd() */
	pid_t msg_lrpid;	/* pid of last msgrcv() */
	unsigned long int __unused4;
	unsigned long int __unused5;
    };

#endif
#if defined __ia64__
/* IA64 */
    struct msqid_ds {
	struct ipc_perm msg_perm;	/* structure describing operation permission */
	time_t msg_stime;	/* time of last msgsnd command */
	time_t msg_rtime;	/* time of last msgrcv command */
	time_t msg_ctime;	/* time of last change */
	unsigned long int __msg_cbytes;	/* current number of bytes on queue */
	unsigned long int msg_qnum;	/* number of messages currently on queue */
	unsigned long int msg_qbytes;	/* max number of bytes allowed on queue */
	pid_t msg_lspid;	/* pid of last msgsnd() */
	pid_t msg_lrpid;	/* pid of last msgrcv() */
	unsigned long int __unused1;
	unsigned long int __unused2;
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct msqid_ds {
	struct ipc_perm msg_perm;	/* structure describing operation permission */
	unsigned int __unused1;
	time_t msg_stime;	/* time of last msgsnd command */
	unsigned int __unused2;
	time_t msg_rtime;	/* time of last msgrcv command */
	unsigned int __unused3;
	time_t msg_ctime;	/* time of last change */
	unsigned long int __msg_cbytes;	/* current number of bytes on queue */
	msgqnum_t msg_qnum;	/* number of messages currently on queue */
	msglen_t msg_qbytes;	/* max number of bytes allowed on queue */
	pid_t msg_lspid;	/* pid of last msgsnd() */
	pid_t msg_lrpid;	/* pid of last msgrcv() */
	unsigned long int __unused4;
	unsigned long int __unused5;
    };

#endif
#if defined __s390x__
/* S390X */
    struct msqid_ds {
	struct ipc_perm msg_perm;
	time_t msg_stime;
	time_t msg_rtime;
	time_t msg_ctime;
	unsigned long int __msg_cbytes;
	msgqnum_t msg_qnum;
	msglen_t msg_qbytes;
	pid_t msg_lspid;
	pid_t msg_lrpid;
	unsigned long int __unused4;
	unsigned long int __unused5;
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct msqid_ds {
	struct ipc_perm msg_perm;	/* structure describing operation permission */
	time_t msg_stime;	/* time of last msgsnd command */
	time_t msg_rtime;	/*  time of last msgrcv command */
	time_t msg_ctime;	/* time of last change */
	unsigned long int __msg_cbytes;	/* current number of bytes on queue */
	msgqnum_t msg_qnum;	/* number of messages currently on queue */
	msglen_t msg_qbytes;	/* max number of bytes allowed on queue */
	pid_t msg_lspid;	/* pid of last msgsnd() */
	pid_t msg_lrpid;	/* pid of last msgrcv() */
	unsigned long int __unused4;
	unsigned long int __unused5;
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct msqid_ds {
	struct ipc_perm msg_perm;	/* structure describing operation permission */
	time_t msg_stime;	/* time of last msgsnd command */
	time_t msg_rtime;	/* time of last msgrcv command */
	time_t msg_ctime;	/* time of last change */
	unsigned long int __msg_cbytes;	/* current number of bytes on queue */
	msgqnum_t msg_qnum;	/* number of messages currently on queue */
	msglen_t msg_qbytes;	/* max number of bytes allowed on queue */
	pid_t msg_lspid;	/* pid of last msgsnd() */
	pid_t msg_lrpid;	/* pid of last msgrcv() */
	unsigned long int __unused4;
	unsigned long int __unused5;
    };

#endif

    extern int msgctl(int, int, struct msqid_ds *);
    extern int msgget(key_t, int);
    extern ssize_t msgrcv(int, void *, size_t, long int, int);
    extern int msgsnd(int, const void *, size_t, int);
#ifdef __cplusplus
}
#endif
#endif
