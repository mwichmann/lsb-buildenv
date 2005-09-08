#ifndef _PTHREAD_H_
#define _PTHREAD_H_

#include <sched.h>
#include <sys/types.h>
#include <sys/time.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C"
{
#endif


#define PTHREAD_SCOPE_SYSTEM	0
#define PTHREAD_MUTEX_DEFAULT	1
#define PTHREAD_MUTEX_NORMAL	1
#define PTHREAD_SCOPE_PROCESS	1
#define PTHREAD_MUTEX_RECURSIVE	2
#define PTHREAD_RWLOCK_DEFAULT_NP	2
#define PTHREAD_MUTEX_ERRORCHECK	3
#define PTHREAD_MUTEX_INITIALIZER	\
	{0,0,0,PTHREAD_MUTEX_NORMAL,__LOCK_INITIALIZER}
#define PTHREAD_RWLOCK_INITIALIZER	\
        { __LOCK_INITIALIZER, 0, NULL, NULL, NULL,PTHREAD_RWLOCK_DEFAULT_NP,\
        PTHREAD_PROCESS_PRIVATE }
#define pthread_cleanup_push(routine,arg)	\
        {struct _pthread_cleanup_buffer _buffer;\
        _pthread_cleanup_push(&_buffer,(routine),(arg));
#define pthread_cleanup_pop(execute)	_pthread_cleanup_pop(&_buffer,(execute));}
#define __LOCK_INITIALIZER	{ 0, 0 }
#define PTHREAD_COND_INITIALIZER	{__LOCK_INITIALIZER,0}


  struct _pthread_cleanup_buffer
  {
    void (*__routine) (void *);
    void *__arg;
    int __canceltype;
    struct _pthread_cleanup_buffer *__prev;
  }
   ;

  typedef unsigned int pthread_key_t;

  typedef int pthread_once_t;

  typedef long long int __pthread_cond_align_t;


/* Base Types*/


  typedef unsigned long int pthread_t;

  struct _pthread_fastlock
  {
    long int __status;
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
    unsigned long int __stacksize;
  }
  pthread_attr_t;


/* Conition Variables*/


  typedef struct
  {
    struct _pthread_fastlock __c_lock;
    _pthread_descr __c_waiting;
    char __padding[48 - sizeof (struct _pthread_fastlock) -
		   sizeof (_pthread_descr) - sizeof (__pthread_cond_align_t)];
    __pthread_cond_align_t __align;
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
#define PTHREAD_CREATE_DETACHED	1
#define PTHREAD_EXPLICIT_SCHED	1
#define PTHREAD_PROCESS_SHARED	1



/* Cancellation*/
#define PTHREAD_CANCELED	((void*)-1)
#define PTHREAD_CANCEL_DEFERRED	0
#define PTHREAD_CANCEL_ENABLE	0
#define PTHREAD_CANCEL_ASYNCHRONOUS	1
#define PTHREAD_CANCEL_DISABLE	1



  extern void _pthread_cleanup_pop (struct _pthread_cleanup_buffer *, int);
  extern void _pthread_cleanup_push (struct _pthread_cleanup_buffer *,
				     void (*)(void *), void *);
  extern int pthread_atfork (void (*)(void), void (*)(void), void (*)(void));
  extern int pthread_attr_destroy (pthread_attr_t *);
  extern int pthread_attr_getdetachstate (const pthread_attr_t *, int *);
  extern int pthread_attr_getinheritsched (const pthread_attr_t *, int *);
  extern int pthread_attr_getschedparam (const pthread_attr_t *,
					 struct sched_param *);
  extern int pthread_attr_getschedpolicy (const pthread_attr_t *, int *);
  extern int pthread_attr_getscope (const pthread_attr_t *, int *);
  extern int pthread_attr_init (pthread_attr_t *);
  extern int pthread_attr_setdetachstate (pthread_attr_t *, int);
  extern int pthread_attr_setinheritsched (pthread_attr_t *, int);
  extern int pthread_attr_setschedparam (pthread_attr_t *,
					 const struct sched_param *);
  extern int pthread_attr_setschedpolicy (pthread_attr_t *, int);
  extern int pthread_attr_setscope (pthread_attr_t *, int);
  extern int pthread_cancel (pthread_t);
  extern int pthread_cond_broadcast (pthread_cond_t *);
  extern int pthread_cond_destroy (pthread_cond_t *);
  extern int pthread_cond_init (pthread_cond_t *, const pthread_condattr_t *);
  extern int pthread_cond_signal (pthread_cond_t *);
  extern int pthread_cond_timedwait (pthread_cond_t *, pthread_mutex_t *,
				     const struct timespec *);
  extern int pthread_cond_wait (pthread_cond_t *, pthread_mutex_t *);
  extern int pthread_condattr_destroy (pthread_condattr_t *);
  extern int pthread_condattr_init (pthread_condattr_t *);
  extern int pthread_create (pthread_t *, const pthread_attr_t *,
			     void *(*)(void *), void *);
  extern int pthread_detach (pthread_t);
  extern int pthread_equal (pthread_t, pthread_t);
  extern void pthread_exit (void *);
  extern int pthread_getschedparam (pthread_t, int *, struct sched_param *);
  extern void *pthread_getspecific (pthread_key_t);
  extern int pthread_join (pthread_t, void **);
  extern int pthread_key_create (pthread_key_t *, void (*)(void *));
  extern int pthread_key_delete (pthread_key_t);
  extern int pthread_mutex_destroy (pthread_mutex_t *);
  extern int pthread_mutex_init (pthread_mutex_t *,
				 const pthread_mutexattr_t *);
  extern int pthread_mutex_lock (pthread_mutex_t *);
  extern int pthread_mutex_trylock (pthread_mutex_t *);
  extern int pthread_mutex_unlock (pthread_mutex_t *);
  extern int pthread_mutexattr_destroy (pthread_mutexattr_t *);
  extern int pthread_mutexattr_init (pthread_mutexattr_t *);
  extern int pthread_once (pthread_once_t *, void (*)(void));
  extern int pthread_rwlock_destroy (pthread_rwlock_t *);
  extern int pthread_rwlock_init (pthread_rwlock_t *,
				  const pthread_rwlockattr_t *);
  extern int pthread_rwlock_rdlock (pthread_rwlock_t *);
  extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *);
  extern int pthread_rwlock_trywrlock (pthread_rwlock_t *);
  extern int pthread_rwlock_unlock (pthread_rwlock_t *);
  extern int pthread_rwlock_wrlock (pthread_rwlock_t *);
  extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *);
  extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *,
					    int *);
  extern int pthread_rwlockattr_init (pthread_rwlockattr_t *);
  extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *, int);
  extern pthread_t pthread_self (void);
  extern int pthread_setcancelstate (int, int *);
  extern int pthread_setcanceltype (int, int *);
  extern int pthread_setschedparam (pthread_t, int,
				    const struct sched_param *);
  extern int pthread_setspecific (pthread_key_t, const void *);
  extern void pthread_testcancel (void);
  extern int pthread_attr_getguardsize (const pthread_attr_t *, size_t *);
  extern int pthread_attr_setguardsize (pthread_attr_t *, size_t);
  extern int pthread_attr_setstackaddr (pthread_attr_t *, void *);
  extern int pthread_attr_getstackaddr (const pthread_attr_t *, void **);
  extern int pthread_attr_setstacksize (pthread_attr_t *, size_t);
  extern int pthread_attr_getstacksize (const pthread_attr_t *, size_t *);
  extern int pthread_mutexattr_gettype (const pthread_mutexattr_t *, int *);
  extern int pthread_mutexattr_settype (pthread_mutexattr_t *, int);
  extern int pthread_getconcurrency (void);
  extern int pthread_setconcurrency (int);
  extern int pthread_attr_getstack (const pthread_attr_t *, void **,
				    size_t *);
  extern int pthread_attr_setstack (pthread_attr_t *, void *, size_t);
  extern int pthread_condattr_getpshared (const pthread_condattr_t *, int *);
  extern int pthread_condattr_setpshared (pthread_condattr_t *, int);
  extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *,
					   int *);
  extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *, int);
  extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *,
					 const struct timespec *);
  extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *,
					 const struct timespec *);
  extern int __register_atfork (void (*)(void), void (*)(void),
				void (*)(void), void *);
  extern int pthread_setschedprio (pthread_t, int);
#ifdef __cplusplus
}
#endif
#endif
