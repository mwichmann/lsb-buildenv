#ifndef _SYS_TIMEB_H_
#define _SYS_TIMEB_H_

#include <sys/types.h>

/* Default head group*/


struct timeb
{
  time_t time;			/* Seconds since epoch, as from `time'. */
  unsigned short millitm;	/* Additional milliseconds. */
  short timezone;		/* Minutes west of GMT. */
  short dstflag;		/* Nonzero if Daylight Savings Time used. */
}
 ;


int ftime (void);
#endif
