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


#define basename __xpg_basename



    extern char *dirname(char *);
    extern char *__xpg_basename(char *);
#ifdef __cplusplus
}
#endif
#endif
