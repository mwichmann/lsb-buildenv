#ifndef _PTY_H_
#define _PTY_H_

#include <termios.h>

#ifdef __cplusplus
extern "C"
{
#endif




  struct winsize
  {
    unsigned short ws_row;
    unsigned short ws_col;
    unsigned short ws_xpixel;
    unsigned short ws_ypixel;
  }
   ;


  extern int openpty (int *, int *, char *, struct termios *,
		      struct winsize *);
  extern int forkpty (int *, char *, struct termios *, struct winsize *);
#ifdef __cplusplus
}
#endif
#endif
