#if (__LSB_VERSION__ >= 10 )
#ifndef _SYS_TIMES_H_
#define _SYS_TIMES_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
    struct tms {
	clock_t tms_utime;
	clock_t tms_stime;
	clock_t tms_cutime;
	clock_t tms_cstime;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

    extern clock_t times(struct tms *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
