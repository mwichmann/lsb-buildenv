#ifndef _SEMAPHORE_H_
#define _SEMAPHORE_H_



typedef struct
{
  long status;
  int spinlock;
}
sem_t;


#define SEM_FAILED	((sem_t*)0)

#define SEM_VALUE_MAX	((int)((~0u)>>1))

int sem_close (sem_t *);
int sem_destroy (sem_t *);
int sem_getvalue (sem_t *, int *);
int sem_init (sem_t *, int, unsigned int);
sem_t *sem_open (char *, int, ...);
int sem_post (sem_t *);
int sem_trywait (sem_t *);
int sem_unlink (char *);
int sem_wait (sem_t *);
int sem_timedwait (void);
#endif
