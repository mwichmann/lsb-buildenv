#if (__LSB_VERSION__ >= 12 )
#ifndef _SYS_TIMEB_H_
#define _SYS_TIMEB_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif


/* Default head group*/
    struct timeb {
	time_t time;		/* Seconds since epoch, as from `time'. */
	unsigned short millitm;	/* Additional milliseconds. */
	short timezone;		/* Minutes west of GMT. */
	short dstflag;		/* Nonzero if Daylight Savings Time used. */
    };


/* Function prototypes */

    extern int ftime(struct timeb *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
