#ifndef _SYS_SHM_H_
#define _SYS_SHM_H_

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
  unsigned long __unused1;
  time_t shm_dtime;
  unsigned long __unused2;
  time_t shm_ctime;
  unsigned long __unused3;
  pid_t shm_cpid;
  pid_t shm_lpid;
  shmatt_t shm_nattch;
  unsigned long __unused4;
  unsigned long __unused5;
}
 ;

typedef unsigned long shmatt_t;


int __getpagesize (void);
void *shmat (int, void *, int);
int shmctl (int, int, struct shmid_ds *);
int shmdt (void *);
int shmget (key_t, int, int);
#endif
