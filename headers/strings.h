#if (__LSB_VERSION__ >= 10 )
#ifndef _STRINGS_H_
#define _STRINGS_H_

#include <locale.h>
#include <sys/types.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern int bcmp(const void *__s1, const void *__s2, size_t __n);
    extern void bcopy(const void *__src, void *__dest, size_t __n);
#undef bzero
    extern void bzero(void *__s, size_t __n);
    extern int ffs(int __i);
    extern char *index(const char *__s, int __c);
    extern char *rindex(const char *__s, int __c);
    extern int strcasecmp(const char *__s1, const char *__s2);
    extern int strncasecmp(const char *__s1, const char *__s2, size_t __n);
#if __LSB_VERSION__ >= 50
    extern int stncasecmp_l(const char *s1, const char *s2, size_t n,
			    locale_t locale);
    extern int strcasecmp_l(const char *s1, const char *s2,
			    locale_t locale);
    extern int strcoll_l(const char *s1, const char *s2, locale_t locale);
    extern ssize_t strfmon_l(char *s, size_t maxsize, locale_t locale,
			     const char *format);
    extern size_t strxfrm_l(char *s1, const char *s2, size_t n,
			    locale_t locale);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
