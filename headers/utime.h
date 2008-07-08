#if (__LSB_VERSION__ >= 10 )
#ifndef _UTIME_H_
#define _UTIME_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
    struct utimbuf {
	time_t actime;
	time_t modtime;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

    extern int utime(const char *, const struct utimbuf *);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
