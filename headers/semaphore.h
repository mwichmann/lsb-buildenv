#if (__LSB_VERSION__ >= 10 )
#ifndef _SEMAPHORE_H_
#define _SEMAPHORE_H_

#include <pthread.h>
#include <sys/types.h>
#include <sys/time.h>
#include <netdb.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 40
#if defined __i386__
#define __SIZEOF_SEM_T	16
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define __SIZEOF_SEM_T	16
#endif
#if defined __s390__ && !defined __s390x__
#define __SIZEOF_SEM_T	16
#endif
#if defined __ia64__
#define __SIZEOF_SEM_T	32
#endif
#if defined __powerpc64__
#define __SIZEOF_SEM_T	32
#endif
#if defined __x86_64__
#define __SIZEOF_SEM_T	32
#endif
#if defined __s390x__
#define __SIZEOF_SEM_T	32
#endif
#endif				/* __LSB_VERSION__ >= 4.0 */




/* System specific semaphore definition*/
#if __LSB_VERSION__ >= 12
#if __LSB_VERSION__ < 40
    typedef struct {
	struct _pthread_fastlock __sem_lock;
	int __sem_value;
	_pthread_descr __sem_waiting;
    } sem_t;

#endif				/* __LSB_VERSION__ < 4.0 */

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 40
    typedef union {
	char __size[__SIZEOF_SEM_T];
	long int __align;
    } sem_t;

#endif				/* __LSB_VERSION__ >= 4.0 */


/* Value returned if `sem_open' failed*/
#if __LSB_VERSION__ >= 11
#define SEM_FAILED	((sem_t*)0)
#endif				/* __LSB_VERSION__ >= 1.1 */




/* Maximum value the semaphore can have*/
#if __LSB_VERSION__ >= 11
#define SEM_VALUE_MAX	((int)((~0u)>>1))
#endif				/* __LSB_VERSION__ >= 1.1 */




/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern int sem_close(sem_t *);
    extern int sem_destroy(sem_t *);
    extern int sem_getvalue(sem_t *, int *);
    extern int sem_init(sem_t *, int, unsigned int);
    extern sem_t *sem_open(const char *, int, ...);
    extern int sem_post(sem_t *);
    extern int sem_timedwait(sem_t *, const struct timespec *);
    extern int sem_trywait(sem_t *);
    extern int sem_unlink(const char *);
    extern int sem_wait(sem_t *);
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
