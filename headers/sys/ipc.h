#ifndef _SYS_IPC_H_
#define _SYS_IPC_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include <sys/types.h>

#define IPC_PRIVATE	((key_t)0)
#define IPC_RMID	0
#define IPC_CREAT	00001000
#define IPC_EXCL	00002000
#define IPC_NOWAIT	00004000
#define IPC_SET	1
#define IPC_STAT	2


  struct ipc_perm
  {
    key_t __key;
    uid_t uid;
    gid_t gid;
    uid_t cuid;
    gid_t cgid;
    unsigned short mode;
    unsigned short __pad1;
    unsigned short __seq;
    unsigned short __pad2;
    unsigned long __unused1;
    unsigned long __unused2;
  }
   ;


/* common mode bits*/



/* SVID required constants (same values as system 5)*/



  extern key_t ftok (const char *, int);
#ifdef __cplusplus
}
#endif
#endif
