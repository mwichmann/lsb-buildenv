#ifndef _PTHREAD_H_
#define _PTHREAD_H_

#include <sys/time.h>
#include <sys/types.h>
#include <sched.h>

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

struct _pthread_descr_struct;




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





#define PTHREAD_ONCE_INIT	0
#define PTHREAD_CREATE_DETACHED	PTHREAD_CREATE_DETACHED
#define PTHREAD_CREATE_JOINABLE	PTHREAD_CREATE_JOINABLE
#define PTHREAD_EXPLICIT_SCHED	PTHREAD_EXPLICIT_SCHED
#define PTHREAD_INHERIT_SCHED	PTHREAD_INHERIT_SCHED
#define PTHREAD_PROCESS_PRIVATE	PTHREAD_PROCESS_PRIVATE
#define PTHREAD_PROCESS_SHARED	PTHREAD_PROCESS_SHARED
#define PTHREAD_SCOPE_PROCESS	PTHREAD_SCOPE_PROCESS
#define PTHREAD_SCOPE_SYSTEM	PTHREAD_SCOPE_SYSTEM



#define PTHREAD_CANCELED	((void*)-1)
#define PTHREAD_CANCEL_ASYNCHRONOUS	PTHREAD_CANCEL_ASYNCHRONOUS
#define PTHREAD_CANCEL_DEFERRED	PTHREAD_CANCEL_DEFERRED
#define PTHREAD_CANCEL_DISABLE	PTHREAD_CANCEL_DISABLE
#define PTHREAD_CANCEL_ENABLE	PTHREAD_CANCEL_ENABLE



int pthread_attr_destroy (pthread_attr_t *);
int pthread_attr_getdetachstate (pthread_attr_t *, int *);
int pthread_attr_getinheritsched (pthread_attr_t *, int *);
int pthread_attr_getschedparam (pthread_attr_t *, struct sched_param *);
int pthread_attr_getschedpolicy (pthread_attr_t *, int *);
int pthread_attr_getscope (pthread_attr_t *, int *);
int pthread_attr_init (pthread_attr_t *);
int pthread_attr_setdetachstate (pthread_attr_t *, int);
int pthread_attr_setinheritsched (pthread_attr_t *, int);
int pthread_attr_setschedparam (pthread_attr_t *, struct sched_param *);
int pthread_attr_setschedpolicy (pthread_attr_t *, int);
int pthread_attr_setscope (pthread_attr_t *, int);
int pthread_cancel (pthread_t);
int pthread_cond_broadcast (pthread_cond_t *);
int pthread_cond_destroy (pthread_cond_t *);
int pthread_cond_init (pthread_cond_t *, pthread_condattr_t *);
int pthread_cond_signal (pthread_cond_t *);
int pthread_cond_timedwait (pthread_cond_t *, pthread_mutex_t *,
			    struct timespec *);
int pthread_cond_wait (pthread_cond_t *, pthread_mutex_t *);
int pthread_condattr_destroy (pthread_condattr_t *);
int pthread_condattr_init (pthread_condattr_t *);
int pthread_create (pthread_t *, pthread_attr_t *,
		    void *(*__start_routine) (), void *);
int pthread_detach (pthread_t);
int pthread_equal (pthread_t, pthread_t);
void pthread_exit (void *);
int pthread_getschedparam (pthread_t, int *, struct sched_param *);
void *pthread_getspecific (pthread_key_t);
int pthread_join (pthread_t, void **);
int pthread_key_create (pthread_key_t *, void (*destructor) ());
int pthread_key_delete (pthread_key_t);
int pthread_kill (void);
int pthread_mutex_destroy (pthread_mutex_t *);
int pthread_mutex_init (pthread_mutex_t *, pthread_mutexattr_t *);
int pthread_mutex_lock (pthread_mutex_t *);
int pthread_mutex_trylock (pthread_mutex_t *);
int pthread_mutex_unlock (pthread_mutex_t *);
int pthread_mutexattr_destroy (void);
int pthread_mutexattr_init (void);
int pthread_once (pthread_once_t *, void (*init_routine) ());
int pthread_rwlock_destroy (void);
int pthread_rwlock_init (void);
int pthread_rwlock_rdlock (void);
int pthread_rwlock_tryrdlock (void);
int pthread_rwlock_trywrlock (void);
int pthread_rwlock_unlock (void);
int pthread_rwlock_wrlock (void);
int pthread_rwlockattr_destroy (void);
int pthread_rwlockattr_init (void);
pthread_t pthread_self (void);
int pthread_setcancelstate (int, int *);
int pthread_setcanceltype (int, int *);
int pthread_setschedparam (pthread_t, int, struct sched_param *);
int pthread_setspecific (pthread_key_t, void *);
void pthread_testcancel (void);
int pthread_attr_setstackaddr (pthread_attr_t *, void *);
int pthread_attr_getstackaddr (pthread_attr_t *, void **);
int pthread_attr_setstacksize (pthread_attr_t *, size_t);
int pthread_attr_getstacksize (pthread_attr_t *, size_t *);
int pthread_mutexattr_gettype (void);
int pthread_mutexattr_settype (void);
int pthread_setconcurrency (void);
#endif
