#ifndef _SYS_SHM_H_
#define _SYS_SHM_H_

#include <stddef.h>
#include <sys/types.h>
#include <sys/ipc.h>

#ifdef __cplusplus
extern "C"
{
#endif


#if defined(__ia64__)
#define SHMLBA	(1024*1024)
#endif
#define SHMLBA	(__getpagesize())
#define SHM_RDONLY	010000
#define SHM_W	0200
#define SHM_RND	020000
#define SHM_R	0400
#define SHM_REMAP	040000
#define SHM_LOCK	11
#define SHM_UNLOCK	12





#if defined(__i386__)
/* IA32 */
  typedef unsigned long shmatt_t;

#endif



#if defined(__i386__)
/* IA32 */
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

#endif
#if defined(__ia64__)
/* IA64 */
  struct shmid_ds
  {
    struct ipc_perm shm_perm;	/* operation permission struct */
    size_t shm_segsz;		/* size of segment in bytes */
    time_t shm_atime;		/* time of last shmat() */
    time_t shm_dtime;		/* time of last shmdt() */
    time_t shm_ctime;		/* time of last change by shmctl() */
    pid_t shm_cpid;		/* pid of creator */
    pid_t shm_lpid;		/* pid of last shmop */
    unsigned long shm_nattch;	/* number of current attaches */
    unsigned long;		/* __unused1 */
    unsigned long;		/* __unused2 */
  }
   ;

#endif
#if defined(__powerpc__)
/* PPC32 */
  struct shmid_ds;

#endif

  extern int __getpagesize (void);
  extern void *shmat (int, void *, int);
  extern int shmctl (int, int, struct shmid_ds *);
  extern int shmdt (void *);
  extern int shmget (key_t, int, int);
#ifdef __cplusplus
}
#endif
#endif
