#ifndef _SYS_SELECT_H_
#define _SYS_SELECT_H_

#include <signal.h>
#include <sys/types.h>
#include <sys/time.h>

#ifdef __cplusplus
extern "C" {
#endif


#define NFDBITS	(8 * sizeof (long))



    extern int pselect(int, fd_set *, fd_set *, fd_set *,
		       const struct timespec *, const sigset_t *);
#ifdef __cplusplus
}
#endif
#endif
