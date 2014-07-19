#if (__LSB_VERSION__ >= 31 )
#ifndef _ERR_H_
#define _ERR_H_

#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern void err(int eval, const char *fmt, ...);
    extern void errx(int eval, const char *fmt, ...);
    extern void verrx(int eval, const char *fmt, va_list args);
    extern void warn(const char *fmt, ...);
    extern void warnx(const char *fmt, ...);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
