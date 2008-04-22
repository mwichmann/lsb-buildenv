#if (__LSB_VERSION__ >= 31 )
#ifndef _ERR_H_
#define _ERR_H_


#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern void err(int, const char *, ...);
    extern void error(int, int, const char *, ...);
    extern void errx(int, const char *, ...);
    extern void warn(const char *, ...);
    extern void warnx(const char *, ...);
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
