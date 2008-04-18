#if (__LSB_VERSION__ >= 12 )
#ifndef _POLL_H_
#define _POLL_H_

#include <sys/poll.h>

#ifdef __cplusplus
extern "C" {
#endif



// Function prototypes

#if __LSB_VERSION__ >= 10
    extern int poll(struct pollfd *, nfds_t, int);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
