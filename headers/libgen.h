#if (__LSB_VERSION__ >= 20 )
#ifndef _LIBGEN_H_
#define _LIBGEN_H_


#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
#define basename __xpg_basename

#endif				// __LSB_VERSION__ >= 3.2



// Function prototypes

#if __LSB_VERSION__ >= 10
    extern char *dirname(char *);
#endif				// __LSB_VERSION__ >= 1.0

#if __LSB_VERSION__ >= 32
    extern char *__xpg_basename(char *);
#endif				// __LSB_VERSION__ >= 3.2

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
