#ifndef _SYS_IPC_H_
#define _SYS_IPC_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif



#define IPC_PRIVATE	((key_t)0)
#define IPC_RMID	0
#define IPC_CREAT	00001000
#define IPC_EXCL	00002000
#define IPC_NOWAIT	00004000
#define IPC_SET	1
#define IPC_STAT	2


#if defined __i386__
/* IA32 */
    struct ipc_perm {
	key_t __key;
	uid_t uid;
	gid_t gid;
	uid_t cuid;
	gid_t cgid;
	unsigned short mode;
	unsigned short __pad1;
	unsigned short __seq;
	unsigned short __pad2;
	unsigned long int __unused1;
	unsigned long int __unused2;
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct ipc_perm {
	key_t __key;
	uid_t uid;
	gid_t gid;
	uid_t cuid;
	uid_t cgid;
	unsigned short mode;
	unsigned short __pad1;
	unsigned short __seq;
	unsigned short __pad2;
	unsigned long int __unused1;
	unsigned long int __unused2;
    };

#endif
#if defined __ia64__
/* IA64 */
    struct ipc_perm {
	key_t __key;		/* Key. */
	uid_t uid;		/* Owner's user ID. */
	gid_t gid;		/* Owner's group ID. */
	uid_t cuid;		/* Creator's user ID. */
	uid_t cgid;		/* Creator's group ID. */
	mode_t mode;		/* Read/write permission. */
	unsigned short __seq;	/* Sequence number. */
	unsigned short __pad1;
	unsigned long int __unused1;
	unsigned long int __unused2;
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct ipc_perm {
	key_t __key;
	uid_t uid;
	gid_t gid;
	uid_t cuid;
	uid_t cgid;
	mode_t mode;
	long int __seq;
	int __pad1;
	unsigned long long int __unused1;
	unsigned long long int __unused2;
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct ipc_perm {
	key_t __key;
	uid_t uid;
	gid_t gid;
	uid_t cuid;
	gid_t cgid;
	mode_t mode;
	unsigned int __seq;
	unsigned int __pad1;
	unsigned long int __unused1;
	unsigned long int __unused2;
    };

#endif
#if defined __s390x__
/* S390X */
    struct ipc_perm {
	key_t __key;
	uid_t uid;
	gid_t gid;
	uid_t cuid;
	gid_t cgid;
	mode_t mode;
	unsigned short __seq;
	unsigned short __pad2;
	unsigned long int __unused1;
	unsigned long int __unused2;
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct ipc_perm {
	key_t __key;
	uid_t uid;
	gid_t gid;
	uid_t cuid;
	uid_t cgid;
	unsigned short mode;
	unsigned short __pad1;
	unsigned short __seq;
	unsigned short __pad2;
	unsigned long int __unused1;
	unsigned long int __unused2;
    };

#endif

/* common mode bits*/



/* SVID required constants (same values as system 5)*/



    extern key_t ftok(const char *, int);
#ifdef __cplusplus
}
#endif
#endif
