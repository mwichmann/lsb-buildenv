#if (__LSB_VERSION__ >= 41 )
#ifndef _GNU_LIBC_VERSION_H_
#define _GNU_LIBC_VERSION_H_


#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern const char *gnu_get_libc_release(void);
    extern const char *gnu_get_libc_version(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
