#ifndef _SYS_TIMES_H_
#define _SYS_TIMES_H_

#include <sys/types.h>
#include <time.h>



struct tms
{
  clock_t tms_utime;
  clock_t tms_stime;
  clock_t tms_cutime;
  clock_t tms_cstime;
}
 ;


clock_t times (struct tms *);
#endif
