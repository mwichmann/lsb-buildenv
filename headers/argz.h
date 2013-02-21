#if (__LSB_VERSION__ >= 50 )
#ifndef _ARGZ_H_
#define _ARGZ_H_

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef int error_t;


/* Function prototypes */

    extern error_t argz_add(char **argz, size_t * argz_len,
			    const char *str);
    extern error_t argz_add_sep(char **argz, size_t * argz_len,
				const char *str, int delim);
    extern error_t argz_append(char **argz, size_t * argz_len,
			       const char *buf, size_t buf_len);
    extern size_t argz_count(const char *argz, size_t * len);
    extern error_t argz_create(char *const argv[], char **argz,
			       size_t * len);
    extern error_t argz_create_sep(const char *str, int sep, char **argz,
				   size_t * len);
    extern void argz_delete(char **argz, size_t * argz_len, char *entry);
    extern void argz_extract(const char *argz, size_t len, char **argv);
    extern error_t argz_insert(char **argz_insert, size_t * argz_len,
			       char *before, const char *entry);
    extern char argz_next(const char *argz, size_t argz_len,
			  const char *entry);
    extern error_t argz_replace(char **argz, size_t * argz_len,
				const char *str, const char *with,
				unsigned int *replace_count);
    extern void argz_stringify(char *argz, size_t len, int sep);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
