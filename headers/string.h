#if (__LSB_VERSION__ >= 10 )
#ifndef _STRING_H_
#define _STRING_H_

#include <stddef.h>

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
#define strerror_r __xpg_strerror_r

#endif				/* __LSB_VERSION__ >= 3.2 */



/* Function prototypes */

    extern void *__mempcpy(void *__dest, const void *__src, size_t __n);
    extern char *__stpcpy(char *__dest, const char *__src);
    extern char *__strtok_r(char *__s, const char *__delim,
			    char **__save_ptr);
    extern void *memccpy(void *__dest, const void *__src, int __c,
			 size_t __n);
    extern void *memchr(const void *__s, int __c, size_t __n);
    extern int memcmp(const void *__s1, const void *__s2, size_t __n);
    extern void *memcpy(void *__dest, const void *__src, size_t __n);
    extern void *memmem(const void *__haystack, size_t __haystacklen,
			const void *__needle, size_t __needlelen);
    extern void *memmove(void *__dest, const void *__src, size_t __n);
    extern void *memrchr(const void *__s, int __c, size_t __n);
    extern void *memset(void *__s, int __c, size_t __n);
    extern char *stpcpy(char *__dest, const char *__src);
    extern char *stpncpy(char *__dest, const char *__src, size_t __n);
    extern char *strcasestr(const char *__haystack, const char *__needle);
    extern char *strcat(char *__dest, const char *__src);
    extern char *strchr(const char *__s, int __c);
    extern int strcmp(const char *__s1, const char *__s2);
    extern int strcoll(const char *__s1, const char *__s2);
    extern char *strcpy(char *__dest, const char *__src);
    extern size_t strcspn(const char *__s, const char *__reject);
    extern char *strdup(const char *__s);
    extern char *strerror(int __errnum);
#if __LSB_VERSION__ < 32
    /* Binary strerror_r symbol does not implement POSIX-conforming behavior, __xpg_strerror_r should be used instead. Consider building the application in LSB mode. */
    extern char *strerror_r(int __errnum, char *__buf,
			    size_t __buflen) LSB_DECL_DEPRECATED;
#endif				/* __LSB_VERSION__ < 3.2 */

    extern size_t strlen(const char *__s);
    extern char *strncat(char *__dest, const char *__src, size_t __n);
    extern int strncmp(const char *__s1, const char *__s2, size_t __n);
    extern char *strncpy(char *__dest, const char *__src, size_t __n);
    extern char *strndup(const char *__string, size_t __n);
    extern size_t strnlen(const char *__string, size_t __maxlen);
    extern char *strpbrk(const char *__s, const char *__accept);
    extern char *strrchr(const char *__s, int __c);
    extern char *strsep(char **__stringp, const char *__delim);
    extern char *strsignal(int __sig);
    extern size_t strspn(const char *__s, const char *__accept);
    extern char *strstr(const char *__haystack, const char *__needle);
    extern char *strtok(char *__s, const char *__delim);
    extern char *strtok_r(char *__s, const char *__delim,
			  char **__save_ptr);
    extern size_t strxfrm(char *__dest, const char *__src, size_t __n);
#if __LSB_VERSION__ >= 32
    extern int __xpg_strerror_r(int, char *, size_t);
#endif				/* __LSB_VERSION__ >= 3.2 */

#if __LSB_VERSION__ >= 40
    extern void *__memcpy_chk(void *, const void *, size_t, size_t);
    extern void *__memmove_chk(void *, const void *, size_t, size_t);
    extern void *__mempcpy_chk(void *, const void *, size_t, size_t);
    extern void *__memset_chk(void *, int, size_t, size_t);
    extern char *__stpcpy_chk(char *, const char *, size_t);
    extern char *__strcat_chk(char *, const char *, size_t);
    extern char *__strcpy_chk(char *, const char *, size_t);
    extern char *__strncat_chk(char *, const char *, size_t, size_t);
    extern char *__strncpy_chk(char *, const char *, size_t, size_t);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
