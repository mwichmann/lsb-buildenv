#ifndef _POLL_H_
#define _POLL_H_

#include <sys/poll.h>

#ifdef __cplusplus
extern "C"
{
#endif





  extern int poll (struct pollfd *, nfds_t, int);
#ifdef __cplusplus
}
#endif
#endif
