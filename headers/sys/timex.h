#ifndef _SYS_TIMEX_H_
#define _SYS_TIMEX_H_

#include <sys/types.h>
#include <sys/time.h>

#ifdef __cplusplus
extern "C"
{
#endif





  extern int adjtimex (struct timex *);
#ifdef __cplusplus
}
#endif
#endif
