#ifndef _SYS_TIMES_H_
#define _SYS_TIMES_H_

#include <sys/types.h>



struct tms
{
  clock_t tms_utime;
  clock_t tms_stime;
  clock_t tms_cutime;
  clock_t tms_cstime;
}
 ;


extern clock_t times (struct tms *);
#endif
