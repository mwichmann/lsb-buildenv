#if (__LSB_VERSION__ >= 11 )
#ifndef _SYS_SELECT_H_
#define _SYS_SELECT_H_

#include <signal.h>
#include <sys/types.h>
#include <sys/time.h>

#ifdef __cplusplus
extern "C" {
#endif


#define NFDBITS	(8 * sizeof (long))
#if __LSB_VERSION__ >= 50
#define FD_ISSET(d,set)	(((set)->fds_bits[((d)/(8*sizeof(long)))]&(1L<<((d)%(8*sizeof(long)))))!=0)
#define FD_CLR(d,set)	((set)->fds_bits[((d)/(8*sizeof(long)))]&=~(1L<<((d)%(8*sizeof(long)))))
#define FD_SET(d,set)	((set)->fds_bits[((d)/(8*sizeof(long)))]|=(1L<<((d)%(8*sizeof(long)))))
#define FD_SETSIZE	1024
#define FD_ZERO(fdsetp)	bzero(fdsetp, sizeof(*(fdsetp)))
#endif				/* __LSB_VERSION__ >= 5.0 */



#if __LSB_VERSION__ >= 50
    typedef struct {
	unsigned long int fds_bits[FD_SETSIZE / NFDBITS];
    } fd_set;

#endif				/* __LSB_VERSION__ >= 5.0 */


/* Function prototypes */

    extern int select(int __nfds, fd_set * __readfds, fd_set * __writefds,
		      fd_set * __exceptfds, struct timeval *__timeout);
#if __LSB_VERSION__ >= 32
    extern int pselect(int __nfds, fd_set * __readfds, fd_set * __writefds,
		       fd_set * __exceptfds,
		       const struct timespec *__timeout,
		       const sigset_t * __sigmask);
#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
