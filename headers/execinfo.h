#if (__LSB_VERSION__ >= 41 )
#ifndef _EXECINFO_H_
#define _EXECINFO_H_


#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern int backtrace(void **__array, int __size);
    extern char **backtrace_symbols(void *const *__array, int __size);
    extern void backtrace_symbols_fd(void *const *__array, int __size,
				     int __fd);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
