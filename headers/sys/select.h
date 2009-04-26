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



/* Function prototypes */

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
