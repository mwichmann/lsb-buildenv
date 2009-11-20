#if (__LSB_VERSION__ >= 13 )
#ifndef _PTY_H_
#define _PTY_H_

#include <termios.h>
#include <sys/ioctl.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern int forkpty(int *__amaster, char *__name,
		       const struct termios *__termp,
		       const struct winsize *__winp);
    extern int openpty(int *__amaster, int *__aslave, char *__name,
		       const struct termios *__termp,
		       const struct winsize *__winp);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
