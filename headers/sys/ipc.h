#ifndef _SYS_IPC_H_
#define _SYS_IPC_H_

#include <sys/types.h>

#define IPC_PRIVATE	((key_t)0)
#define IPC_RMID	0
#define IPC_CREAT	00001000
#define IPC_EXCL	00002000
#define IPC_NOWAIT	00004000
#define IPC_SET	1
#define IPC_STAT	2


struct sembuf
{
  short sem_num;
  short sem_op;
  short sem_flg;
}
 ;

struct ipc_perm
{
  key_t key;
  uid_t uid;
  gid_t gid;
  uid_t cuid;
  gid_t cgid;
  mode_t mode;
  unsigned short seq;
}
 ;

struct semid_ds;








#endif
