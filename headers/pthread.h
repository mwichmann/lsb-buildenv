


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
int pthread_attr_destroy (*);
int pthread_attr_getdetachstate (*, int *);
int pthread_attr_getinheritsched (*, int *);
int pthread_attr_getschedparam (*, struct sched_param *);
int pthread_attr_getschedpolicy (*, int *);
int pthread_attr_getscope (*, int *);
int pthread_attr_init (*);
int pthread_attr_setdetachstate (*, int);
int pthread_attr_setinheritsched (*, int);
int pthread_attr_setschedparam (*, struct sched_param *);
int pthread_attr_setschedpolicy (*, int);
int pthread_attr_setscope (*, int);
int pthread_cancel ();
int pthread_cond_broadcast (*);
int pthread_cond_destroy (*);
int pthread_cond_init (*, *);
int pthread_cond_signal (*);
int pthread_cond_timedwait (*, *, struct timespec *);
int pthread_cond_wait (*, *);
int pthread_condattr_destroy (*);
int pthread_condattr_init (*);
int pthread_create (*, *, void *, void *);
int pthread_detach ();
int pthread_equal (,);
void pthread_exit (void *);
int pthread_getschedparam (, int *, struct sched_param *);
void *pthread_getspecific ();
int pthread_join (, void **);
int pthread_key_create (*, void);
int pthread_key_delete ();
int pthread_mutex_destroy (*);
int pthread_mutex_init (*, *);
int pthread_mutex_lock (*);
int pthread_mutex_trylock (*);
int pthread_mutex_unlock (*);
int pthread_mutexattr_destroy (*);
int pthread_mutexattr_init (*);
int pthread_once (*, void);
int pthread_rwlock_destroy (*);
int pthread_rwlock_init (*, *);
int pthread_rwlock_rdlock (*);
int pthread_rwlock_tryrdlock (*);
int pthread_rwlock_trywrlock (*);
int pthread_rwlock_unlock (*);
int pthread_rwlock_wrlock (*);
int pthread_rwlockattr_destroy (*);
int pthread_rwlockattr_getpshared (*, int *);
int pthread_rwlockattr_init (*);
int pthread_rwlockattr_setpshared (*, int);
pthread_self (void);
int pthread_setcancelstate (int, int *);
int pthread_setcanceltype (int, int *);
int pthread_setschedparam (, int, struct sched_param *);
int pthread_setspecific (, void *);
void pthread_testcancel (void);
int pthread_attr_getguardsize (*, size_t *);
int pthread_attr_setguardsize (*, size_t);
int pthread_attr_setstackaddr (*, void *);
int pthread_attr_getstackaddr (*, void **);
int pthread_attr_setstacksize (*, size_t);
int pthread_attr_getstacksize (*, size_t *);
int pthread_mutexattr_gettype (*, int *);
int pthread_mutexattr_settype (*, int);
