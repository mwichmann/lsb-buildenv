#if (__LSB_VERSION__ >= 12 )
#ifndef _POLL_H_
#define _POLL_H_

#include <sys/poll.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern int poll(struct pollfd *__fds, nfds_t __nfds, int __timeout);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
