#if (__LSB_VERSION__ >= 20 )
#ifndef _LIBGEN_H_
#define _LIBGEN_H_


#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
#define basename __xpg_basename

#endif				/* __LSB_VERSION__ >= 3.2 */



/* Function prototypes */

#if __LSB_VERSION__ < 32
    extern char *basename(const char *__filename) LSB_DECL_DEPRECATED;
#endif				/* __LSB_VERSION__ < 3.2 */

    extern char *dirname(char *__path);
#if __LSB_VERSION__ >= 32
    extern char *__xpg_basename(char *__path);
#endif				/* __LSB_VERSION__ >= 3.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
