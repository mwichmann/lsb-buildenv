#ifndef _PTHREAD_H_
#define _PTHREAD_H_

#include <sys/time.h>
#include <stddef.h>
#include <sched.h>
#include <sys/types.h>

#define PTHREAD_MUTEX_INITIALIZER	{0,0,0,PTHREAD_MUTEX_TIMED_NP,__LOCK_INITIALIZER}


typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

struct _pthread_fastlock
{
  int __spinlock;
}
 ;




typedef unsigned long pthread_t;




typedef struct _pthread_descr_struct *_pthread_descr;




typedef struct
{
  struct _pthread_fastlock lock;
  _pthread_descr owner;
  int kind;
  unsigned int count;
}
pthread_mutex_t;

typedef struct
{
  int __mutexkind;
}
pthread_mutexattr_t;




typedef struct
{
  int __detachstate;
  int __schedpolicy;
  struct sched_param __schedparam;
  int __inheritsched;
  int __scope;
  void *__stackaddr;
  unsigned long __stacksize;
}
pthread_attr_t;




typedef struct
{
  struct _pthread_fastlock lock;
  _pthread_descr wait_chain;
}
pthread_cond_t;

typedef void *pthread_condattr_t;


/* Initializers*/



/* Values for attributes.*/
#define PTHREAD_ONCE_INIT	0
#define PTHREAD_CREATE_DETACHED	1
#define PTHREAD_CREATE_JOINABLE	2
#define PTHREAD_EXPLICIT_SCHED	3
#define PTHREAD_INHERIT_SCHED	4
#define PTHREAD_PROCESS_PRIVATE	5
#define PTHREAD_PROCESS_SHARED	6
#define PTHREAD_SCOPE_PROCESS	7
#define PTHREAD_SCOPE_SYSTEM	8



/* Cancellation*/
#define PTHREAD_CANCELED	((void*)-1)
#define PTHREAD_CANCEL_ASYNCHRONOUS	2
#define PTHREAD_CANCEL_DEFERRED	3
#define PTHREAD_CANCEL_DISABLE	4
#define PTHREAD_CANCEL_ENABLE	5



extern int pthread_attr_destroy (pthread_attr_t *);
extern int pthread_attr_getdetachstate (pthread_attr_t *, int *);
extern int pthread_attr_getinheritsched (pthread_attr_t *, int *);
extern int pthread_attr_getschedparam (pthread_attr_t *,
				       struct sched_param *);
extern int pthread_attr_getschedpolicy (pthread_attr_t *, int *);
extern int pthread_attr_getscope (pthread_attr_t *, int *);
extern int pthread_attr_init (pthread_attr_t *);
extern int pthread_attr_setdetachstate (pthread_attr_t *, int);
extern int pthread_attr_setinheritsched (pthread_attr_t *, int);
extern int pthread_attr_setschedparam (pthread_attr_t *,
				       struct sched_param *);
extern int pthread_attr_setschedpolicy (pthread_attr_t *, int);
extern int pthread_attr_setscope (pthread_attr_t *, int);
extern int pthread_cancel (pthread_t);
extern int pthread_cond_broadcast (pthread_cond_t *);
extern int pthread_cond_destroy (pthread_cond_t *);
extern int pthread_cond_init (pthread_cond_t *, pthread_condattr_t *);
extern int pthread_cond_signal (pthread_cond_t *);
extern int pthread_cond_timedwait (pthread_cond_t *, pthread_mutex_t *,
				   struct timespec *);
extern int pthread_cond_wait (pthread_cond_t *, pthread_mutex_t *);
extern int pthread_condattr_destroy (pthread_condattr_t *);
extern int pthread_condattr_init (pthread_condattr_t *);
extern int pthread_create (pthread_t *, pthread_attr_t *,
			   void *(*__start_routine) (), void *);
extern int pthread_detach (pthread_t);
extern int pthread_equal (pthread_t, pthread_t);
extern void pthread_exit (void *);
extern int pthread_getschedparam (pthread_t, int *, struct sched_param *);
extern void *pthread_getspecific (pthread_key_t);
extern int pthread_join (pthread_t, void **);
extern int pthread_key_create (pthread_key_t *, void (*destructor) ());
extern int pthread_key_delete (pthread_key_t);
extern int pthread_kill (void);
extern int pthread_mutex_destroy (pthread_mutex_t *);
extern int pthread_mutex_init (pthread_mutex_t *, pthread_mutexattr_t *);
extern int pthread_mutex_lock (pthread_mutex_t *);
extern int pthread_mutex_trylock (pthread_mutex_t *);
extern int pthread_mutex_unlock (pthread_mutex_t *);
extern int pthread_mutexattr_destroy (void);
extern int pthread_mutexattr_init (void);
extern int pthread_once (pthread_once_t *, void (*init_routine) ());
extern int pthread_rwlock_destroy (void);
extern int pthread_rwlock_init (void);
extern int pthread_rwlock_rdlock (void);
extern int pthread_rwlock_tryrdlock (void);
extern int pthread_rwlock_trywrlock (void);
extern int pthread_rwlock_unlock (void);
extern int pthread_rwlock_wrlock (void);
extern int pthread_rwlockattr_destroy (void);
extern int pthread_rwlockattr_init (void);
extern pthread_t pthread_self (void);
extern int pthread_setcancelstate (int, int *);
extern int pthread_setcanceltype (int, int *);
extern int pthread_setschedparam (pthread_t, int, struct sched_param *);
extern int pthread_setspecific (pthread_key_t, void *);
extern void pthread_testcancel (void);
extern int pthread_attr_setstackaddr (pthread_attr_t *, void *);
extern int pthread_attr_getstackaddr (pthread_attr_t *, void **);
extern int pthread_attr_setstacksize (pthread_attr_t *, size_t);
extern int pthread_attr_getstacksize (pthread_attr_t *, size_t *);
extern int pthread_mutexattr_gettype (void);
extern int pthread_mutexattr_settype (void);
extern int pthread_setconcurrency (void);
#endif
