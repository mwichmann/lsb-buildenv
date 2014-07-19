#if (__LSB_VERSION__ >= 31 )
#ifndef _ERROR_H_
#define _ERROR_H_


#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern void error(int status, int errnum, const char *format, ...);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
