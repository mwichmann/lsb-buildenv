#if (__LSB_VERSION__ >= 31 )
#ifndef _ERR_H_
#define _ERR_H_


#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern void err(int __status, const char *__format, ...);
    extern void error(int, int, const char *, ...);
    extern void errx(int __status, const char *__format, ...);
    extern void warn(const char *__format, ...);
    extern void warnx(const char *__format, ...);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
