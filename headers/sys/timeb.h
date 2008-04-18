#if (__LSB_VERSION__ >= 12 )
#ifndef _SYS_TIMEB_H_
#define _SYS_TIMEB_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif


/* Default head group*/
#if __LSB_VERSION__ >= 12
    struct timeb {
	time_t time;		/* Seconds since epoch, as from `time'. */
	unsigned short millitm;	/* Additional milliseconds. */
	short timezone;		/* Minutes west of GMT. */
	short dstflag;		/* Nonzero if Daylight Savings Time used. */
    };

#endif				// __LSB_VERSION__ >= 1.2


// Function prototypes

#if __LSB_VERSION__ >= 10
    extern int ftime(struct timeb *);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
