#if (__LSB_VERSION__ >= 13 )
#ifndef _PTY_H_
#define _PTY_H_

#include <termios.h>
#include <sys/ioctl.h>

#ifdef __cplusplus
extern "C" {
#endif



// Function prototypes

#if __LSB_VERSION__ >= 10
    extern int forkpty(int *, char *, struct termios *, struct winsize *);
    extern int openpty(int *, int *, char *, struct termios *,
		       struct winsize *);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
