#if (__LSB_VERSION__ >= 10 )
#ifndef _MONETARY_H_
#define _MONETARY_H_

#include <sys/types.h>
#include <stddef.h>
#include <stdint.h>

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



/* Function prototypes */

    extern ssize_t strfmon(char *__s, size_t __maxsize,
			   const char *__format, ...);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
