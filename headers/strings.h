#if (__LSB_VERSION__ >= 10 )
#ifndef _STRINGS_H_
#define _STRINGS_H_

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern int bcmp(const void *__s1, const void *__s2, size_t __n);
    extern void bcopy(const void *__src, void *__dest, size_t __n);
    extern void bzero(void *__s, size_t __n);
    extern int ffs(int __i);
    extern char *index(const char *__s, int __c);
    extern char *rindex(const char *__s, int __c);
    extern int strcasecmp(const char *__s1, const char *__s2);
    extern int strncasecmp(const char *__s1, const char *__s2, size_t __n);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
