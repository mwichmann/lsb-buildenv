#ifndef _SEMAPHORE_H_
#define _SEMAPHORE_H_





/* System specific semaphore definition*/


typedef struct
{
  long status;
  int spinlock;
}
sem_t;


/* Value returned if `sem_open' failed*/
#define SEM_FAILED	((sem_t*)0)



/* Maximum value the semaphore can have*/
#define SEM_VALUE_MAX	((int)((~0u)>>1))



extern int sem_close (sem_t *);
extern int sem_destroy (sem_t *);
extern int sem_getvalue (sem_t *, int *);
extern int sem_init (sem_t *, int, unsigned int);
extern sem_t *sem_open (char *, int, ...);
extern int sem_post (sem_t *);
extern int sem_trywait (sem_t *);
extern int sem_unlink (char *);
extern int sem_wait (sem_t *);
extern int sem_timedwait (void);
#endif
