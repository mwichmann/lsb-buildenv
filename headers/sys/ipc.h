#ifndef _SYS_IPC_H_
#define _SYS_IPC_H_

#include <sys/types.h>

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




#endif
