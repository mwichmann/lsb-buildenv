#if (__LSB_VERSION__ >= 10 )
#ifndef _PTHREAD_H_
#define _PTHREAD_H_

#include <sched.h>
#include <sys/types.h>
#include <time.h>
#include <stddef.h>
#include <lsb/pthread.h>

#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define PTHREAD_SCOPE_SYSTEM	0
#define PTHREAD_SCOPE_PROCESS	1
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#define PTHREAD_MUTEX_DEFAULT	0
#define PTHREAD_MUTEX_NORMAL	0
#define PTHREAD_MUTEX_RECURSIVE	1
#define PTHREAD_MUTEX_ERRORCHECK	2
#if __LSB_VERSION__ < 40
#define PTHREAD_MUTEX_INITIALIZER	\
	{0,0,0,PTHREAD_MUTEX_NORMAL,__LOCK_INITIALIZER}
#define PTHREAD_RWLOCK_INITIALIZER	\
        { __LOCK_INITIALIZER, 0, NULL, NULL, NULL,PTHREAD_RWLOCK_DEFAULT_NP,\
        PTHREAD_PROCESS_PRIVATE }
#define __LOCK_INITIALIZER	{ 0, 0 }
#define PTHREAD_COND_INITIALIZER	{__LOCK_INITIALIZER,0}
#endif				/* __LSB_VERSION__ < 4.0 */

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#define PTHREAD_RWLOCK_DEFAULT_NP	2
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#define pthread_cleanup_push(routine,arg)	\
        {struct _pthread_cleanup_buffer _buffer;\
        _pthread_cleanup_push(&_buffer,(routine),(arg));
#define pthread_cleanup_pop(execute)	_pthread_cleanup_pop(&_buffer,(execute));}
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 32
#if defined __i386__
#define __SIZEOF_PTHREAD_BARRIER_T	20
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define __SIZEOF_PTHREAD_BARRIER_T	20
#endif
#if defined __s390__ && !defined __s390x__
#define __SIZEOF_PTHREAD_BARRIER_T	20
#endif
#if defined __ia64__
#define __SIZEOF_PTHREAD_BARRIER_T	32
#endif
#if defined __powerpc64__
#define __SIZEOF_PTHREAD_BARRIER_T	32
#endif
#if defined __x86_64__
#define __SIZEOF_PTHREAD_BARRIER_T	32
#endif
#if defined __s390x__
#define __SIZEOF_PTHREAD_BARRIER_T	32
#endif
#define __SIZEOF_PTHREAD_BARRIERATTR_T	4
#define __SIZEOF_PTHREAD_CONDATTR_T	4
#define __SIZEOF_PTHREAD_MUTEXATTR_T	4
#define __SIZEOF_PTHREAD_RWLOCKATTR_T	8
#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 40
#if defined __i386__
#define __SIZEOF_PTHREAD_MUTEX_T	24
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define __SIZEOF_PTHREAD_MUTEX_T	24
#endif
#if defined __s390__ && !defined __s390x__
#define __SIZEOF_PTHREAD_MUTEX_T	24
#endif
#if defined __i386__
#define __SIZEOF_PTHREAD_RWLOCK_T	32
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define __SIZEOF_PTHREAD_RWLOCK_T	32
#endif
#if defined __s390__ && !defined __s390x__
#define __SIZEOF_PTHREAD_RWLOCK_T	32
#endif
#if defined __i386__
#define __SIZEOF_PTHREAD_ATTR_T	36
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define __SIZEOF_PTHREAD_ATTR_T	36
#endif
#if defined __s390__ && !defined __s390x__
#define __SIZEOF_PTHREAD_ATTR_T	36
#endif
#if defined __ia64__
#define __SIZEOF_PTHREAD_MUTEX_T	40
#endif
#if defined __powerpc64__
#define __SIZEOF_PTHREAD_MUTEX_T	40
#endif
#if defined __x86_64__
#define __SIZEOF_PTHREAD_MUTEX_T	40
#endif
#if defined __s390x__
#define __SIZEOF_PTHREAD_MUTEX_T	40
#endif
#define __SIZEOF_PTHREAD_COND_T	48
#if defined __ia64__
#define __SIZEOF_PTHREAD_ATTR_T	56
#endif
#if defined __powerpc64__
#define __SIZEOF_PTHREAD_ATTR_T	56
#endif
#if defined __x86_64__
#define __SIZEOF_PTHREAD_ATTR_T	56
#endif
#if defined __s390x__
#define __SIZEOF_PTHREAD_ATTR_T	56
#endif
#if defined __ia64__
#define __SIZEOF_PTHREAD_RWLOCK_T	56
#endif
#if defined __powerpc64__
#define __SIZEOF_PTHREAD_RWLOCK_T	56
#endif
#if defined __x86_64__
#define __SIZEOF_PTHREAD_RWLOCK_T	56
#endif
#if defined __s390x__
#define __SIZEOF_PTHREAD_RWLOCK_T	56
#endif
#define PTHREAD_COND_INITIALIZER	{ { 0, 0, 0, 0, 0, (void *) 0, 0, 0 } }
#if defined __i386__
#define PTHREAD_RWLOCK_INITIALIZER	{ { 0, 0, 0, 0, 0, 0, 0, 0 } }
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define PTHREAD_RWLOCK_INITIALIZER	{ { 0, 0, 0, 0, 0, 0, 0, 0 } }
#endif
#if defined __s390__ && !defined __s390x__
#define PTHREAD_RWLOCK_INITIALIZER	{ { 0, 0, 0, 0, 0, 0, 0, 0 } }
#endif
#if defined __ia64__
#define PTHREAD_RWLOCK_INITIALIZER	{ { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } }
#endif
#if defined __powerpc64__
#define PTHREAD_RWLOCK_INITIALIZER	{ { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } }
#endif
#if defined __x86_64__
#define PTHREAD_RWLOCK_INITIALIZER	{ { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } }
#endif
#if defined __s390x__
#define PTHREAD_RWLOCK_INITIALIZER	{ { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } }
#endif
#if defined __ia64__
#define PTHREAD_MUTEX_INITIALIZER	{ { 0, 0, 0, 0, 0, 0, { 0, 0 } } }
#endif
#if defined __powerpc64__
#define PTHREAD_MUTEX_INITIALIZER	{ { 0, 0, 0, 0, 0, 0, { 0, 0 } } }
#endif
#if defined __x86_64__
#define PTHREAD_MUTEX_INITIALIZER	{ { 0, 0, 0, 0, 0, 0, { 0, 0 } } }
#endif
#if defined __s390x__
#define PTHREAD_MUTEX_INITIALIZER	{ { 0, 0, 0, 0, 0, 0, { 0, 0 } } }
#endif
#if defined __i386__
#define PTHREAD_MUTEX_INITIALIZER	{ { 0, 0, 0, 0, 0, { 0 } } }
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define PTHREAD_MUTEX_INITIALIZER	{ { 0, 0, 0, 0, 0, { 0 } } }
#endif
#if defined __s390__ && !defined __s390x__
#define PTHREAD_MUTEX_INITIALIZER	{ { 0, 0, 0, 0, 0, { 0 } } }
#endif
#endif				/* __LSB_VERSION__ >= 4.0 */



#if __LSB_VERSION__ >= 12
    typedef unsigned int pthread_key_t;

    typedef int pthread_once_t;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 20
#if __LSB_VERSION__ < 40
    typedef long long int __pthread_cond_align_t;

#endif				/* __LSB_VERSION__ < 4.0 */

#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 32
    typedef volatile int pthread_spinlock_t;

#if defined __i386__
/* IA32 */
    typedef union {
	char __size[__SIZEOF_PTHREAD_BARRIER_T];
	long int __align;
    } pthread_barrier_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef union {
	char __size[__SIZEOF_PTHREAD_BARRIER_T];
	long int __align;
    } pthread_barrier_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef union {
	char __size[__SIZEOF_PTHREAD_BARRIER_T];
	long int __align;
    } pthread_barrier_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef union {
	char __size[__SIZEOF_PTHREAD_BARRIER_T];
	long int __align;
    } pthread_barrier_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef union {
	char __size[__SIZEOF_PTHREAD_BARRIER_T];
	long int __align;
    } pthread_barrier_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef union {
	char __size[__SIZEOF_PTHREAD_BARRIER_T];
	long int __align;
    } pthread_barrier_t;

#endif
#if defined __s390x__
/* S390X */
    typedef union {
	char __size[__SIZEOF_PTHREAD_BARRIER_T];
	long int __align;
    } pthread_barrier_t;

#endif
    typedef union {
	char __size[__SIZEOF_PTHREAD_BARRIERATTR_T];
	int __align;
    } pthread_barrierattr_t;

#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 20
    struct _pthread_cleanup_buffer {
	void (*__routine) (void *);
	void *__arg;
	int __canceltype;
	struct _pthread_cleanup_buffer *__prev;
    };

#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 40
#if defined __ia64__
/* IA64 */
    struct __pthread_internal_list {
	struct __pthread_internal_list *__prev;
	struct __pthread_internal_list *__next;
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct __pthread_internal_list {
	struct __pthread_internal_list *__prev;
	struct __pthread_internal_list *__next;
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct __pthread_internal_list {
	struct __pthread_internal_list *__prev;
	struct __pthread_internal_list *__next;
    };

#endif
#if defined __s390x__
/* S390X */
    struct __pthread_internal_list {
	struct __pthread_internal_list *__prev;
	struct __pthread_internal_list *__next;
    };

#endif
#if defined __i386__
/* IA32 */
    struct __pthread_internal_slist {
	struct __pthread_internal_slist *__next;
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct __pthread_internal_slist {
	struct __pthread_internal_slist *__next;
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct __pthread_internal_slist {
	struct __pthread_internal_slist *__next;
    };

#endif
    enum {
	PTHREAD_PRIO_NONE,
	PTHREAD_PRIO_INHERIT,
	PTHREAD_PRIO_PROTECT
    };

#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 41
    enum {
	PTHREAD_MUTEX_STALLED_NP = 0,
	PTHREAD_MUTEX_ROBUST_NP = 1
    };

#endif				/* __LSB_VERSION__ >= 4.1 */


/* Base Types*/
#if __LSB_VERSION__ >= 12
#if __LSB_VERSION__ < 40
    struct _pthread_fastlock {
	long int __status;
	int __spinlock;
    };

#endif				/* __LSB_VERSION__ < 4.0 */

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Description structure*/
#if __LSB_VERSION__ >= 12
#if __LSB_VERSION__ < 40
    typedef struct _pthread_descr_struct *_pthread_descr;

#endif				/* __LSB_VERSION__ < 4.0 */

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 40
#if defined __ia64__
/* IA64 */
    typedef struct __pthread_internal_list __pthread_list_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef struct __pthread_internal_list __pthread_list_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct __pthread_internal_list __pthread_list_t;

#endif
#if defined __s390x__
/* S390X */
    typedef struct __pthread_internal_list __pthread_list_t;

#endif
#if defined __i386__
/* IA32 */
    typedef struct __pthread_internal_slist __pthread_slist_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct __pthread_internal_slist __pthread_slist_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct __pthread_internal_slist __pthread_slist_t;

#endif
#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 40
#if defined __i386__
/* IA32 */
    struct __pthread_mutex_s {
	int __lock;
	unsigned int __count;
	int __owner;
	int __kind;
	unsigned int __nusers;
	__extension__ union {
	    int __spins;
	    __pthread_slist_t __list;
	};
    };

#endif
#if defined __ia64__
/* IA64 */
    struct __pthread_mutex_s {
	int __lock;
	unsigned int __count;
	int __owner;
	unsigned int __nusers;
	int __kind;
	int __spins;
	__pthread_list_t __list;
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct __pthread_mutex_s {
	int __lock;
	unsigned int __count;
	int __owner;
	int __kind;
	unsigned int __nusers;
	__extension__ union {
	    int __spins;
	    __pthread_slist_t __list;
	};
    };

#endif
#if defined __powerpc64__
/* PPC64 */
    struct __pthread_mutex_s {
	int __lock;
	unsigned int __count;
	int __owner;
	unsigned int __nusers;
	int __kind;
	int __spins;
	__pthread_list_t __list;
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct __pthread_mutex_s {
	int __lock;
	unsigned int __count;
	int __owner;
	int __kind;
	unsigned int __nusers;
	__extension__ union {
	    int __spins;
	    __pthread_slist_t __list;
	};
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct __pthread_mutex_s {
	int __lock;
	unsigned int __count;
	int __owner;
	unsigned int __nusers;
	int __kind;
	int __spins;
	__pthread_list_t __list;
    };

#endif
#if defined __s390x__
/* S390X */
    struct __pthread_mutex_s {
	int __lock;
	unsigned int __count;
	int __owner;
	unsigned int __nusers;
	int __kind;
	int __spins;
	__pthread_list_t __list;
    };

#endif
#endif				/* __LSB_VERSION__ >= 4.0 */


/* Mutex Structures*/
#if __LSB_VERSION__ >= 12
#if __LSB_VERSION__ < 40
    typedef struct {
	int __m_reserved;	/* Reserved for future use */
	int __m_count;		/* Depth of recursive locking */
	_pthread_descr __m_owner;	/* Owner thread (if recursive or errcheck) */
	int __m_kind;		/* Mutex kind: fast, recursive or errcheck */
	struct _pthread_fastlock __m_lock;	/* Underlying fast lock */
    } pthread_mutex_t;

    typedef struct {
	int __mutexkind;
    } pthread_mutexattr_t;

#endif				/* __LSB_VERSION__ < 4.0 */

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 40
    typedef union {
	struct __pthread_mutex_s __data;
	char __size[__SIZEOF_PTHREAD_MUTEX_T];
	long int __align;
    } pthread_mutex_t;

    typedef union {
	char __size[__SIZEOF_PTHREAD_MUTEXATTR_T];
	int __align;
    } pthread_mutexattr_t;

#endif				/* __LSB_VERSION__ >= 4.0 */


/* Attribute Structures*/
#if __LSB_VERSION__ >= 12
#if __LSB_VERSION__ < 40
    typedef struct {
	int __detachstate;
	int __schedpolicy;
	struct sched_param __schedparam;
	int __inheritsched;
	int __scope;
	size_t __guardsize;
	int __stackaddr_set;
	void *__stackaddr;
	unsigned long int __stacksize;
    } pthread_attr_t;

#endif				/* __LSB_VERSION__ < 4.0 */

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 40
    typedef union {
	char __size[__SIZEOF_PTHREAD_ATTR_T];
	long int __align;
    } pthread_attr_t;

#endif				/* __LSB_VERSION__ >= 4.0 */


/* Conition Variables*/
#if __LSB_VERSION__ >= 12
#if __LSB_VERSION__ < 40
    typedef struct {
	struct _pthread_fastlock __c_lock;
	_pthread_descr __c_waiting;
	char __padding[48 - sizeof(struct _pthread_fastlock) -
		       sizeof(_pthread_descr) -
		       sizeof(__pthread_cond_align_t)];
	__pthread_cond_align_t __align;
    } pthread_cond_t;

    typedef struct {
	int __dummy;
    } pthread_condattr_t;

#endif				/* __LSB_VERSION__ < 4.0 */

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 40
    typedef union {
	struct {
	    int __lock;
	    unsigned int __futex;
	    unsigned long long int __total_seq;
	    unsigned long long int __wakeup_seq;
	    unsigned long long int __woken_seq;
	    void *__mutex;
	    unsigned int __nwaiters;
	    unsigned int __broadcast_seq;
	} __data;
	char __size[__SIZEOF_PTHREAD_COND_T];
	long long int __align;
    } pthread_cond_t;

    typedef union {
	char __size[__SIZEOF_PTHREAD_CONDATTR_T];
	int __align;
    } pthread_condattr_t;

#endif				/* __LSB_VERSION__ >= 4.0 */


/* Lock structures*/
#if __LSB_VERSION__ >= 12
#if __LSB_VERSION__ < 40
#if defined __i386__
/* IA32 */
    typedef struct _pthread_rwlock_t pthread_rwlock_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef struct _pthread_rwlock_t pthread_rwlock_t;

#endif
    typedef struct {
	int __lockkind;
	int __pshared;
    } pthread_rwlockattr_t;

#endif				/* __LSB_VERSION__ < 4.0 */

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if __LSB_VERSION__ < 40
#if defined __ia64__
/* IA64 */
    typedef struct _pthread_rwlock_t pthread_rwlock_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef struct _pthread_rwlock_t pthread_rwlock_t;

#endif
#if defined __s390x__
/* S390X */
    typedef struct _pthread_rwlock_t pthread_rwlock_t;

#endif
#endif				/* __LSB_VERSION__ < 4.0 */

#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if __LSB_VERSION__ < 40
#if defined __powerpc64__
/* PPC64 */
    typedef struct _pthread_rwlock_t pthread_rwlock_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef struct _pthread_rwlock_t pthread_rwlock_t;

#endif
#endif				/* __LSB_VERSION__ < 4.0 */

#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 40
#if defined __i386__
/* IA32 */
    typedef union {
	struct {
	    int __lock;
	    unsigned int __nr_readers;
	    unsigned int __readers_wakeup;
	    unsigned int __writer_wakeup;
	    unsigned int __nr_readers_queued;
	    unsigned int __nr_writers_queued;
	    unsigned int __flags;
	    int __writer;
	} __data;
	char __size[__SIZEOF_PTHREAD_RWLOCK_T];
	long int __align;
    } pthread_rwlock_t;

#endif
#if defined __ia64__
/* IA64 */
    typedef union {
	struct {
	    int __lock;
	    unsigned int __nr_readers;
	    unsigned int __readers_wakeup;
	    unsigned int __writer_wakeup;
	    unsigned int __nr_readers_queued;
	    unsigned int __nr_writers_queued;
	    int __writer;
	    int __pad1;
	    unsigned long int __pad2;
	    unsigned long int __pad3;
	    unsigned int __flags;
	} __data;
	char __size[__SIZEOF_PTHREAD_RWLOCK_T];
	long int __align;
    } pthread_rwlock_t;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef union {
	struct {
	    int __lock;
	    unsigned int __nr_readers;
	    unsigned int __readers_wakeup;
	    unsigned int __writer_wakeup;
	    unsigned int __nr_readers_queued;
	    unsigned int __nr_writers_queued;
	    unsigned int __flags;
	    int __writer;
	} __data;
	char __size[__SIZEOF_PTHREAD_RWLOCK_T];
	long int __align;
    } pthread_rwlock_t;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef union {
	struct {
	    int __lock;
	    unsigned int __nr_readers;
	    unsigned int __readers_wakeup;
	    unsigned int __writer_wakeup;
	    unsigned int __nr_readers_queued;
	    unsigned int __nr_writers_queued;
	    int __writer;
	    int __pad1;
	    unsigned long int __pad2;
	    unsigned long int __pad3;
	    unsigned int __flags;
	} __data;
	char __size[__SIZEOF_PTHREAD_RWLOCK_T];
	long int __align;
    } pthread_rwlock_t;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef union {
	struct {
	    int __lock;
	    unsigned int __nr_readers;
	    unsigned int __readers_wakeup;
	    unsigned int __writer_wakeup;
	    unsigned int __nr_readers_queued;
	    unsigned int __nr_writers_queued;
	    unsigned int __flags;
	    int __writer;
	} __data;
	char __size[__SIZEOF_PTHREAD_RWLOCK_T];
	long int __align;
    } pthread_rwlock_t;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef union {
	struct {
	    int __lock;
	    unsigned int __nr_readers;
	    unsigned int __readers_wakeup;
	    unsigned int __writer_wakeup;
	    unsigned int __nr_readers_queued;
	    unsigned int __nr_writers_queued;
	    int __writer;
	    int __pad1;
	    unsigned long int __pad2;
	    unsigned long int __pad3;
	    unsigned int __flags;
	} __data;
	char __size[__SIZEOF_PTHREAD_RWLOCK_T];
	long int __align;
    } pthread_rwlock_t;

#endif
#if defined __s390x__
/* S390X */
    typedef union {
	struct {
	    int __lock;
	    unsigned int __nr_readers;
	    unsigned int __readers_wakeup;
	    unsigned int __writer_wakeup;
	    unsigned int __nr_readers_queued;
	    unsigned int __nr_writers_queued;
	    int __writer;
	    int __pad1;
	    unsigned long int __pad2;
	    unsigned long int __pad3;
	    unsigned int __flags;
	} __data;
	char __size[__SIZEOF_PTHREAD_RWLOCK_T];
	long int __align;
    } pthread_rwlock_t;

#endif
    typedef union {
	char __size[__SIZEOF_PTHREAD_RWLOCKATTR_T];
	long int __align;
    } pthread_rwlockattr_t;

#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 12
#if __LSB_VERSION__ < 40
#if defined __i386__
/* IA32 */
    struct _pthread_rwlock_t {
	struct _pthread_fastlock __rw_lock;	/* Lock to guarantee mutual exclusion */
	int __rw_readers;	/* Number of readers */
	_pthread_descr __rw_writer;	/* Identity of writer, or NULL if none */
	_pthread_descr __rw_read_waiting;	/* Threads waiting for reading */
	_pthread_descr __rw_write_waiting;	/* Threads waiting for writing */
	int __rw_kind;		/* Reader/Writer preference selection */
	int __rw_pshared;	/* Shared between processes or not */
    };

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    struct _pthread_rwlock_t {
	struct _pthread_fastlock __rw_lock;	/* Lock to guarantee mutual exclusion */
	int __rw_readers;	/* Number of readers */
	_pthread_descr __rw_writer;	/* Identity of writer, or NULL if none */
	_pthread_descr __rw_read_waiting;	/* Threads waiting for reading */
	_pthread_descr __rw_write_waiting;	/* Threads waiting for writing */
	int __rw_kind;		/* Reader/Writer preference selection */
	int __rw_pshared;	/* Shared between processes or not */
    };

#endif
#endif				/* __LSB_VERSION__ < 4.0 */

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
#if __LSB_VERSION__ < 40
#if defined __ia64__
/* IA64 */
    struct _pthread_rwlock_t {
	struct _pthread_fastlock __rw_lock;	/* Lock to guarantee mutual exclusion */
	int __rw_readers;	/* Number of readers */
	_pthread_descr __rw_writer;	/* Identity of writer, or NULL if none */
	_pthread_descr __rw_read_waiting;	/* Threads waiting for reading */
	_pthread_descr __rw_write_waiting;	/* Threads waiting for writing */
	int __rw_kind;		/* Reader/Writer preference selection */
	int __rw_pshared;	/* Shared between processes or not */
    };

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    struct _pthread_rwlock_t {
	struct _pthread_fastlock __rw_lock;	/* Lock to guarantee mutual exclusion */
	int __rw_readers;	/* Number of readers */
	_pthread_descr __rw_writer;	/* Identity of writer, or NULL if none */
	_pthread_descr __rw_read_waiting;	/* Threads waiting for reading */
	_pthread_descr __rw_write_waiting;	/* Threads waiting for writing */
	int __rw_kind;		/* Reader/Writer preference selection */
	int __rw_pshared;	/* Shared between processes or not */
    };

#endif
#if defined __s390x__
/* S390X */
    struct _pthread_rwlock_t {
	struct _pthread_fastlock __rw_lock;	/* Lock to guarantee mutual exclusion */
	int __rw_readers;	/* Number of readers */
	_pthread_descr __rw_writer;	/* Identity of writer, or NULL if none */
	_pthread_descr __rw_read_waiting;	/* Threads waiting for reading */
	_pthread_descr __rw_write_waiting;	/* Threads waiting for writing */
	int __rw_kind;		/* Reader/Writer preference selection */
	int __rw_pshared;	/* Shared between processes or not */
    };

#endif
#endif				/* __LSB_VERSION__ < 4.0 */

#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 20
#if __LSB_VERSION__ < 40
#if defined __powerpc64__
/* PPC64 */
    struct _pthread_rwlock_t {
	struct _pthread_fastlock __rw_lock;	/* Lock to guarantee mutual exclusion */
	int __rw_readers;	/* Number of readers */
	_pthread_descr __rw_writer;	/* Identity of writer, or NULL if none */
	_pthread_descr __rw_read_waiting;	/* Threads waiting for reading */
	_pthread_descr __rw_write_waiting;	/* Threads waiting for writing */
	int __rw_kind;		/* Reader/Writer preference selection */
	int __rw_pshared;	/* Shared between processes or not */
    };

#endif
#if defined __x86_64__
/* x86-64 */
    struct _pthread_rwlock_t {
	struct _pthread_fastlock __rw_lock;	/* Lock to guarantee mutual exclusion */
	int __rw_readers;	/* Number of readers */
	_pthread_descr __rw_writer;	/* Identity of writer, or NULL if none */
	_pthread_descr __rw_read_waiting;	/* Threads waiting for reading */
	_pthread_descr __rw_write_waiting;	/* Threads waiting for writing */
	int __rw_kind;		/* Reader/Writer preference selection */
	int __rw_pshared;	/* Shared between processes or not */
    };

#endif
#endif				/* __LSB_VERSION__ < 4.0 */

#endif				/* __LSB_VERSION__ >= 2.0 */


/* Initializers*/

/* Values for attributes.*/
#if __LSB_VERSION__ >= 11
#define PTHREAD_CREATE_JOINABLE	0
#define PTHREAD_INHERIT_SCHED	0
#define PTHREAD_ONCE_INIT	0
#define PTHREAD_PROCESS_PRIVATE	0
#define PTHREAD_CREATE_DETACHED	1
#define PTHREAD_EXPLICIT_SCHED	1
#define PTHREAD_PROCESS_SHARED	1
#endif				/* __LSB_VERSION__ >= 1.1 */




/* Cancellation*/
#if __LSB_VERSION__ >= 11
#define PTHREAD_CANCELED	((void*)-1)
#define PTHREAD_CANCEL_DEFERRED	0
#define PTHREAD_CANCEL_ENABLE	0
#define PTHREAD_CANCEL_ASYNCHRONOUS	1
#define PTHREAD_CANCEL_DISABLE	1
#endif				/* __LSB_VERSION__ >= 1.1 */




/* Function prototypes */

    extern int pthread_atfork(void (*__prepare) (void),
			      void (*__parent) (void),
			      void (*__child) (void));
    extern int pthread_attr_destroy(pthread_attr_t * __attr);
    extern int pthread_attr_getdetachstate(const pthread_attr_t * __attr,
					   int *__detachstate);
    extern int pthread_attr_getguardsize(const pthread_attr_t * __attr,
					 size_t * __guardsize);
    extern int pthread_attr_getschedparam(const pthread_attr_t * __attr,
					  struct sched_param *__param);
    /* This interface is obsolete. Use the pthread_attr_getstack function. */
    extern int pthread_attr_getstackaddr(const pthread_attr_t * __attr,
					 void **__stackaddr)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    extern int pthread_attr_getstacksize(const pthread_attr_t * __attr,
					 size_t * __stacksize);
    extern int pthread_attr_init(pthread_attr_t * __attr);
    extern int pthread_attr_setdetachstate(pthread_attr_t * __attr,
					   int __detachstate);
    extern int pthread_attr_setguardsize(pthread_attr_t * __attr,
					 size_t __guardsize);
    extern int pthread_attr_setschedparam(pthread_attr_t * __attr,
					  const struct sched_param
					  *__param);
    extern int pthread_attr_setstackaddr(pthread_attr_t * __attr,
					 void *__stackaddr)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    extern int pthread_attr_setstacksize(pthread_attr_t * __attr,
					 size_t __stacksize);
    extern int pthread_cancel(pthread_t __th);
    extern int pthread_cond_broadcast(pthread_cond_t * __cond);
    extern int pthread_cond_destroy(pthread_cond_t * __cond);
    extern int pthread_cond_init(pthread_cond_t * __cond,
				 const pthread_condattr_t * __cond_attr);
    extern int pthread_cond_signal(pthread_cond_t * __cond);
    extern int pthread_cond_timedwait(pthread_cond_t * __cond,
				      pthread_mutex_t * __mutex,
				      const struct timespec *__abstime);
    extern int pthread_cond_wait(pthread_cond_t * __cond,
				 pthread_mutex_t * __mutex);
    extern int pthread_condattr_destroy(pthread_condattr_t * __attr);
    extern int pthread_condattr_init(pthread_condattr_t * __attr);
    extern int pthread_create(pthread_t * __newthread,
			      const pthread_attr_t * __attr,
			      void *(*__start_routine) (void *),
			      void *__arg);
    extern int pthread_detach(pthread_t __th);
    extern int pthread_equal(pthread_t __thread1, pthread_t __thread2);
    extern void pthread_exit(void *__retval);
    extern void *pthread_getspecific(pthread_key_t __key);
    extern int pthread_join(pthread_t __th, void **__thread_return);
    extern int pthread_key_create(pthread_key_t * __key,
				  void (*__destr_function) (void *));
    extern int pthread_key_delete(pthread_key_t __key);
    extern int pthread_mutex_destroy(pthread_mutex_t * __mutex);
    extern int pthread_mutex_init(pthread_mutex_t * __mutex,
				  const pthread_mutexattr_t * __mutexattr);
    extern int pthread_mutex_lock(pthread_mutex_t * __mutex);
    extern int pthread_mutex_trylock(pthread_mutex_t * __mutex);
    extern int pthread_mutex_unlock(pthread_mutex_t * __mutex);
    extern int pthread_mutexattr_destroy(pthread_mutexattr_t * __attr);
    extern int pthread_mutexattr_getpshared(const pthread_mutexattr_t *
					    __attr, int *__pshared);
    extern int pthread_mutexattr_gettype(const pthread_mutexattr_t *
					 __attr, int *__kind);
    extern int pthread_mutexattr_init(pthread_mutexattr_t * __attr);
    extern int pthread_mutexattr_setpshared(pthread_mutexattr_t * __attr,
					    int __pshared);
    extern int pthread_mutexattr_settype(pthread_mutexattr_t * __attr,
					 int __kind);
    extern int pthread_once(pthread_once_t * __once_control,
			    void (*__init_routine) (void));
    extern int pthread_rwlock_destroy(pthread_rwlock_t * __rwlock);
    extern int pthread_rwlock_init(pthread_rwlock_t * __rwlock,
				   const pthread_rwlockattr_t * __attr);
    extern int pthread_rwlock_rdlock(pthread_rwlock_t * __rwlock);
    extern int pthread_rwlock_tryrdlock(pthread_rwlock_t * __rwlock);
    extern int pthread_rwlock_trywrlock(pthread_rwlock_t * __rwlock);
    extern int pthread_rwlock_unlock(pthread_rwlock_t * __rwlock);
    extern int pthread_rwlock_wrlock(pthread_rwlock_t * __rwlock);
    extern int pthread_rwlockattr_destroy(pthread_rwlockattr_t * __attr);
    extern int pthread_rwlockattr_getpshared(const pthread_rwlockattr_t *
					     __attr, int *__pshared);
    extern int pthread_rwlockattr_init(pthread_rwlockattr_t * __attr);
    extern int pthread_rwlockattr_setpshared(pthread_rwlockattr_t * __attr,
					     int __pshared);
    extern pthread_t pthread_self(void);
    extern int pthread_setcancelstate(int __state, int *__oldstate);
    extern int pthread_setcanceltype(int __type, int *__oldtype);
    extern int pthread_setspecific(pthread_key_t __key,
				   const void *__pointer);
    extern void pthread_testcancel(void);
#if __LSB_VERSION__ >= 12
    extern int pthread_rwlock_timedrdlock(pthread_rwlock_t * __rwlock,
					  const struct timespec
					  *__abstime);
    extern int pthread_rwlock_timedwrlock(pthread_rwlock_t * __rwlock,
					  const struct timespec
					  *__abstime);
    extern int pthread_setconcurrency(int __level);
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 20
    extern int __register_atfork(void (*)(void), void (*)(void),
				 void (*)(void), void *);
    extern void _pthread_cleanup_pop(struct _pthread_cleanup_buffer *,
				     int);
    extern void _pthread_cleanup_push(struct _pthread_cleanup_buffer *,
				      void (*)(void *), void *);
    extern int pthread_condattr_getpshared(const pthread_condattr_t *
					   __attr, int *__pshared);
    extern int pthread_condattr_setpshared(pthread_condattr_t * __attr,
					   int __pshared);
#endif				/* __LSB_VERSION__ >= 2.0 */

#if __LSB_VERSION__ >= 30
    extern int pthread_attr_getinheritsched(const pthread_attr_t * __attr,
					    int *__inherit);
    extern int pthread_attr_getschedpolicy(const pthread_attr_t * __attr,
					   int *__policy);
    extern int pthread_attr_getscope(const pthread_attr_t * __attr,
				     int *__scope);
    extern int pthread_attr_getstack(const pthread_attr_t * __attr,
				     void **__stackaddr,
				     size_t * __stacksize);
    extern int pthread_attr_setinheritsched(pthread_attr_t * __attr,
					    int __inherit);
    extern int pthread_attr_setschedpolicy(pthread_attr_t * __attr,
					   int __policy);
    extern int pthread_attr_setscope(pthread_attr_t * __attr, int __scope);
    extern int pthread_attr_setstack(pthread_attr_t * __attr,
				     void *__stackaddr,
				     size_t __stacksize);
    extern int pthread_getconcurrency(void);
    extern int pthread_getschedparam(pthread_t __target_thread,
				     int *__policy,
				     struct sched_param *__param);
    extern int pthread_setschedparam(pthread_t __target_thread,
				     int __policy,
				     const struct sched_param *__param);
    extern int pthread_setschedprio(pthread_t __target_thread, int __prio);
#endif				/* __LSB_VERSION__ >= 3.0 */

#if __LSB_VERSION__ >= 32
    extern int pthread_barrier_destroy(pthread_barrier_t * __barrier);
    extern int pthread_barrier_init(pthread_barrier_t * __barrier,
				    const pthread_barrierattr_t * __attr,
				    unsigned int __count);
    extern int pthread_barrier_wait(pthread_barrier_t * __barrier);
    extern int pthread_barrierattr_destroy(pthread_barrierattr_t * __attr);
    extern int pthread_barrierattr_getpshared(const pthread_barrierattr_t *
					      __attr, int *__pshared);
    extern int pthread_barrierattr_init(pthread_barrierattr_t * __attr);
    extern int pthread_barrierattr_setpshared(pthread_barrierattr_t *
					      __attr, int __pshared);
    extern int pthread_getcpuclockid(pthread_t __thread_id,
				     clockid_t * __clock_id);
    extern int pthread_mutex_timedlock(pthread_mutex_t * __mutex,
				       const struct timespec *__abstime);
    extern int pthread_spin_destroy(pthread_spinlock_t * __lock);
    extern int pthread_spin_init(pthread_spinlock_t * __lock,
				 int __pshared);
    extern int pthread_spin_lock(pthread_spinlock_t * __lock);
    extern int pthread_spin_trylock(pthread_spinlock_t * __lock);
    extern int pthread_spin_unlock(pthread_spinlock_t * __lock);
#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 40
    extern int pthread_mutex_getprioceiling(const pthread_mutex_t *
					    __mutex, int *__prioceiling);
    extern int pthread_mutex_setprioceiling(pthread_mutex_t * __mutex,
					    int __prioceiling,
					    int *__old_ceiling);
    extern int pthread_mutexattr_getprioceiling(const pthread_mutexattr_t *
						__attr,
						int *__prioceiling);
    extern int pthread_mutexattr_getprotocol(const pthread_mutexattr_t *
					     __attr, int *__protocol);
    extern int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *
						__attr, int __prioceiling);
    extern int pthread_mutexattr_setprotocol(pthread_mutexattr_t * __attr,
					     int __protocol);
#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 41
    extern int pthread_getattr_np(pthread_t thread, pthread_attr_t * attr);
    extern int pthread_mutex_consistent_np(pthread_mutex_t * __mutex);
    extern int pthread_mutexattr_getrobust_np(const pthread_mutexattr_t *
					      __attr, int *__robustness);
    extern int pthread_mutexattr_setrobust_np(pthread_mutexattr_t * __attr,
					      int __robustness);
    extern int pthread_rwlockattr_getkind_np(const pthread_rwlockattr_t *
					     __attr, int *__pref);
    extern int pthread_rwlockattr_setkind_np(pthread_rwlockattr_t * __attr,
					     int __pref);
#endif				/* __LSB_VERSION__ >= 4.1 */

#if __LSB_VERSION__ >= 50
    extern int pthread_condattr_getclock(const pthread_condattr_t * attr,
					 clockid_t * clock_id);
    extern int pthread_condattr_setclock(pthread_condattr_t * attr,
					 clockid_t clock_id);
    extern int pthread_mutex_consistent(pthread_mutex_t * mutex);
    extern int pthread_mutexattr_getrobust(const pthread_mutexattr_t *
					   attr, int *robust);
    extern int pthread_mutexattr_setrobust(pthread_mutexattr_t * attr,
					   int robust);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
