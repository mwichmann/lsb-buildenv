#ifndef _SYS_SHM_H_
#define _SYS_SHM_H_

#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>

#define SHMLBA	(__getpagesize())
#define SHM_RND	020000
#define SHM_RDONLY	4096


struct shmid_ds
{
  struct ipc_perm shm_perm;
  int shm_segsz;
  time_t shm_atime;
  time_t shm_dtime;
  time_t shm_ctime;
  pid_t shm_cpid;
  pid_t shm_lpid;
  unsigned short shm_nattch;
  unsigned short shm_unused;
  void *shm_unused2;
  void *shm_unused3;
}
 ;


int __getpagesize (void);
void *shmat (int, void *, int);
int shmctl (int, int, struct shmid_ds *);
int shmdt (void *);
int shmget (key_t, int, int);
#endif
