#ifndef _PTHREAD_H_
#define _PTHREAD_H_

#include <sys/time.h>
#include <stddef.h>
#include <sched.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define PTHREAD_MUTEX_DEFAULT	1
#define PTHREAD_MUTEX_NORMAL	1
#define PTHREAD_MUTEX_TIMED_NP	1
#define PTHREAD_MUTEX_RECURSIVE	2
#define PTHREAD_RWLOCK_DEFAULT_NP	2
#define PTHREAD_MUTEX_ERRORCHECK	3
#define __LOCK_INITIALIZER	{ 0, 0 }
#define PTHREAD_RWLOCK_INITIALIZER	{ __LOCK_INITIALIZER, 0, NULL, NULL, NULL,PTHREAD_RWLOCK_DEFAULT_NP, PTHREAD_PROCESS_PRIVATE }
#define PTHREAD_MUTEX_INITIALIZER	{0,0,0,PTHREAD_MUTEX_TIMED_NP,__LOCK_INITIALIZER}
#define PTHREAD_COND_INITIALIZER	{__LOCK_INITIALIZER,0}


  typedef unsigned int pthread_key_t;

  typedef int pthread_once_t;


/* Base Types*/


  typedef unsigned long pthread_t;

  struct _pthread_fastlock
  {
    long __status;
    int __spinlock;
  }
   ;


/* Description structure*/


  typedef struct _pthread_descr_struct *_pthread_descr;


/* Mutex Structures*/


  typedef struct
  {
    int __m_reserved;		/* Reserved for future use */
    int __m_count;		/* Depth of recursive locking */
    _pthread_descr __m_owner;	/* Owner thread (if recursive or errcheck) */
    int __m_kind;		/* Mutex kind: fast, recursive or errcheck */
    struct _pthread_fastlock __m_lock;	/* Underlying fast lock */
  }
  pthread_mutex_t;

  typedef struct
  {
    int __mutexkind;
  }
  pthread_mutexattr_t;


/* Attribute Structures*/


  typedef struct
  {
    int __detachstate;
    int __schedpolicy;
    struct sched_param __schedparam;
    int __inheritsched;
    int __scope;
    size_t __guardsize;
    int __stackaddr_set;
    void *__stackaddr;
    unsigned long __stacksize;
  }
  pthread_attr_t;


/* Conition Variables*/


  typedef struct
  {
    struct _pthread_fastlock lock;
    _pthread_descr wait_chain;
  }
  pthread_cond_t;

  typedef struct
  {
    int __dummy;
  }
  pthread_condattr_t;


/* Lock structures*/


  typedef struct _pthread_rwlock_t
  {
    struct _pthread_fastlock __rw_lock;	/* Lock to guarantee mutual exclusion */
    int __rw_readers;		/* Number of readers */
    _pthread_descr __rw_writer;	/* Identity of writer, or NULL if none */
    _pthread_descr __rw_read_waiting;	/* Threads waiting for reading */
    _pthread_descr __rw_write_waiting;	/* Threads waiting for writing */
    int __rw_kind;		/* Reader/Writer preference selection */
    int __rw_pshared;		/* Shared between processes or not */
  }
  pthread_rwlock_t;

  typedef struct
  {
    int __lockkind;
    int __pshared;
  }
  pthread_rwlockattr_t;


/* Initializers*/



/* Values for attributes.*/
#define PTHREAD_CREATE_JOINABLE	0
#define PTHREAD_INHERIT_SCHED	0
#define PTHREAD_ONCE_INIT	0
#define PTHREAD_PROCESS_PRIVATE	0
#define PTHREAD_SCOPE_SYSTEM	0
#define PTHREAD_CREATE_DETACHED	1
#define PTHREAD_EXPLICIT_SCHED	1
#define PTHREAD_PROCESS_SHARED	1
#define PTHREAD_SCOPE_PROCESS	1



/* Cancellation*/
#define PTHREAD_CANCELED	((void*)-1)
#define PTHREAD_CANCEL_DEFERRED	0
#define PTHREAD_CANCEL_ENABLE	0
#define PTHREAD_CANCEL_ASYNCHRONOUS	1
#define PTHREAD_CANCEL_DISABLE	1



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
			     void *(*__start_routine) (void *), void *);
  extern int pthread_detach (pthread_t);
  extern int pthread_equal (pthread_t, pthread_t);
  extern void pthread_exit (void *);
  extern int pthread_getschedparam (pthread_t, int *, struct sched_param *);
  extern void *pthread_getspecific (pthread_key_t);
  extern int pthread_join (pthread_t, void **);
  extern int pthread_key_create (pthread_key_t *,
				 void (*destr_func) (void *));
  extern int pthread_key_delete (pthread_key_t);
  extern int pthread_mutex_destroy (pthread_mutex_t *);
  extern int pthread_mutex_init (pthread_mutex_t *, pthread_mutexattr_t *);
  extern int pthread_mutex_lock (pthread_mutex_t *);
  extern int pthread_mutex_trylock (pthread_mutex_t *);
  extern int pthread_mutex_unlock (pthread_mutex_t *);
  extern int pthread_mutexattr_destroy (pthread_mutexattr_t *);
  extern int pthread_mutexattr_init (pthread_mutexattr_t *);
  extern int pthread_once (pthread_once_t *, void (*init_routine) (void));
  extern int pthread_rwlock_destroy (pthread_rwlock_t *);
  extern int pthread_rwlock_init (pthread_rwlock_t *,
				  const pthread_rwlockattr_t *);
  extern int pthread_rwlock_rdlock (pthread_rwlock_t *);
  extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *);
  extern int pthread_rwlock_trywrlock (pthread_rwlock_t *);
  extern int pthread_rwlock_unlock (pthread_rwlock_t *);
  extern int pthread_rwlock_wrlock (pthread_rwlock_t *);
  extern int pthread_rwlockattr_destroy (void);
  extern int pthread_rwlockattr_getkind_np (void);
  extern int pthread_rwlockattr_getpshared (void);
  extern int pthread_rwlockattr_init (void);
  extern int pthread_rwlockattr_setkind_np (void);
  extern int pthread_rwlockattr_setpshared (void);
  extern pthread_t pthread_self (void);
  extern int pthread_setcancelstate (int, int *);
  extern int pthread_setcanceltype (int, int *);
  extern int pthread_setschedparam (pthread_t, int, struct sched_param *);
  extern int pthread_setspecific (pthread_key_t, const void *);
  extern void pthread_testcancel (void);
  extern int pthread_attr_getguardsize (void);
  extern int pthread_attr_setguardsize (void);
  extern int pthread_attr_setstackaddr (pthread_attr_t *, void *);
  extern int pthread_attr_getstackaddr (pthread_attr_t *, void **);
  extern int pthread_attr_setstacksize (pthread_attr_t *, size_t);
  extern int pthread_attr_getstacksize (pthread_attr_t *, size_t *);
  extern int pthread_mutexattr_gettype (void);
  extern int pthread_mutexattr_settype (void);
  extern int pthread_setconcurrency (void);
  extern int pthread_mutexattr_getpshared (pthread_mutexattr_t *, int *);
  extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *, int);
  extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *,
					 const struct timespec *);
  extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *,
					 const struct timespec *);
#ifdef __cplusplus
}
#endif
#endif
