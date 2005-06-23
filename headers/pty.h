#ifndef _PTY_H_
#define _PTY_H_

#include <termios.h>
#include <sys/ioctl.h>

#ifdef __cplusplus
extern "C"
{
#endif





  extern int openpty (int *, int *, char *, struct termios *,
		      struct winsize *);
  extern int forkpty (int *, char *, struct termios *, struct winsize *);
#ifdef __cplusplus
}
#endif
#endif
