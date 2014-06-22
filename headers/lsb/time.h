#if (__LSB_VERSION__ >= 10 )
#ifndef _LSB_TIME_H_
#define _LSB_TIME_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif


/* 
   Special header to avoid header inclusion loops.
   DO NOT include this header directly.
*/
#if __LSB_VERSION__ >= 12
    struct timeval {
	time_t tv_sec;
	suseconds_t tv_usec;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
