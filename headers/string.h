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

    extern void *__mempcpy(void *, const void *, size_t);
    extern char *__stpcpy(char *, const char *);
    extern char *__strtok_r(char *, const char *, char **);
    extern void *memccpy(void *, const void *, int, size_t);
    extern void *memchr(const void *, int, size_t);
    extern int memcmp(const void *, const void *, size_t);
    extern void *memcpy(void *, const void *, size_t);
    extern void *memmem(const void *, size_t, const void *, size_t);
    extern void *memmove(void *, const void *, size_t);
    extern void *memrchr(const void *, int, size_t);
    extern void *memset(void *, int, size_t);
    extern char *stpcpy(char *, const char *);
    extern char *stpncpy(char *, const char *, size_t);
    extern char *strcasestr(const char *, const char *);
    extern char *strcat(char *, const char *);
    extern char *strchr(const char *, int);
    extern int strcmp(const char *, const char *);
    extern int strcoll(const char *, const char *);
    extern char *strcpy(char *, const char *);
    extern size_t strcspn(const char *, const char *);
    extern char *strdup(const char *);
    extern char *strerror(int);
    extern size_t strlen(const char *);
    extern char *strncat(char *, const char *, size_t);
    extern int strncmp(const char *, const char *, size_t);
    extern char *strncpy(char *, const char *, size_t);
    extern char *strndup(const char *, size_t);
    extern size_t strnlen(const char *, size_t);
    extern char *strpbrk(const char *, const char *);
    extern char *strrchr(const char *, int);
    extern char *strsep(char **, const char *);
    extern char *strsignal(int);
    extern size_t strspn(const char *, const char *);
    extern char *strstr(const char *, const char *);
    extern char *strtok(char *, const char *);
    extern char *strtok_r(char *, const char *, char **);
    extern size_t strxfrm(char *, const char *, size_t);
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
