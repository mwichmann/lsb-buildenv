#ifndef _UTMPX_H_
#define _UTMPX_H_

#include <sys/types.h>
#include <sys/time.h>
#include <utmp.h>

#ifdef __cplusplus
extern "C"
{
#endif


  extern void endutxent (void);
  extern struct utmp *getutxent (void);
  extern getutxid (void);
  extern getutxline (void);
  extern pututxline (void);
  extern void setutxent (void);
#ifdef __cplusplus
}
#endif
#endif
