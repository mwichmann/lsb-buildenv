#if (__LSB_VERSION__ >= 50 )
#ifndef _ENVZ_H_
#define _ENVZ_H_

#include <stddef.h>
#include <argz.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern error_t envz_add(char **envz, size_t * envz_len,
			    const char *name, const char *value);
    extern char envz_entry(const char *envz, size_t envz_len,
			   const char *name);
    extern char envz_get(const char *envz, size_t envz_len,
			 const char *name);
    extern error_t envz_merge(char **envz, size_t * envz_len,
			      const char *envz2, size_t envz2_len,
			      int override);
    extern void envz_remove(char **envz, size_t * envz_len,
			    const char *name);
    extern void envz_strip(char **envz, size_t * envz_len);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
