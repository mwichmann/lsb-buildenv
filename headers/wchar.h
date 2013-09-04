#if (__LSB_VERSION__ >= 10 )
#ifndef _WCHAR_H_
#define _WCHAR_H_

#include <locale.h>
#include <stdio.h>
#include <sys/types.h>
#include <time.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdint.h>
#include <lsb/wchar.h>

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


#if __LSB_VERSION__ >= 11
#define WEOF	(0xffffffffu)
#define WCHAR_MAX	0x7FFFFFFF
#define WCHAR_MIN	0x80000000
#endif				/* __LSB_VERSION__ >= 1.1 */



    typedef unsigned long int wctype_t;

    typedef const int32_t *wctrans_t;



/* Function prototypes */

    extern double __wcstod_internal(const wchar_t *, wchar_t * *, int);
    extern float __wcstof_internal(const wchar_t *, wchar_t * *, int);
    extern long int __wcstol_internal(const wchar_t *, wchar_t * *, int,
				      int);
    extern long double __wcstold_internal(const wchar_t *, wchar_t * *,
					  int);
    extern unsigned long int __wcstoul_internal(const wchar_t *,
						wchar_t * *, int, int);
    extern wint_t btowc(int __c);
    extern wint_t fgetwc(FILE * __stream);
    extern wint_t fgetwc_unlocked(FILE * __stream);
    extern wchar_t *fgetws(wchar_t * __ws, int __n, FILE * __stream);
    extern wint_t fputwc(wchar_t __wc, FILE * __stream);
    extern int fputws(const wchar_t * __ws, FILE * __stream);
    extern int fwide(FILE * __fp, int __mode);
    extern int fwprintf(FILE * __stream, const wchar_t * __format, ...);
    extern int fwscanf(FILE * __stream, const wchar_t * __format, ...);
    extern wint_t getwc(FILE * __stream);
    extern size_t mbrlen(const char *__s, size_t __n, mbstate_t * __ps);
    extern size_t mbrtowc(wchar_t * __pwc, const char *__s, size_t __n,
			  mbstate_t * __p);
    extern int mbsinit(const mbstate_t * __ps);
    extern size_t mbsnrtowcs(wchar_t * __dst, const char **__src,
			     size_t __nmc, size_t __len, mbstate_t * __ps);
    extern size_t mbsrtowcs(wchar_t * __dst, const char **__src,
			    size_t __len, mbstate_t * __ps);
    extern wint_t putwc(wchar_t __wc, FILE * __stream);
    extern wint_t putwchar(wchar_t __wc);
    extern int swprintf(wchar_t * __s, size_t __n,
			const wchar_t * __format, ...);
    extern int swscanf(const wchar_t * __s, const wchar_t * __format, ...);
    extern wint_t ungetwc(wint_t __wc, FILE * __stream);
    extern int vfwprintf(FILE * __s, const wchar_t * __format,
			 va_list __arg);
    extern int vfwscanf(FILE * __s, const wchar_t * __format,
			va_list __arg);
    extern int vswprintf(wchar_t * __s, size_t __n,
			 const wchar_t * __format, va_list __arg);
    extern int vswscanf(const wchar_t * __s, const wchar_t * __format,
			va_list __arg);
    extern int vwprintf(const wchar_t * __format, va_list __arg);
    extern int vwscanf(const wchar_t * __format, va_list __arg);
    extern wchar_t *wcpcpy(wchar_t * __dest, const wchar_t * __src);
    extern wchar_t *wcpncpy(wchar_t * __dest, const wchar_t * __src,
			    size_t __n);
    extern size_t wcrtomb(char *__s, wchar_t __wc, mbstate_t * __ps);
    extern int wcscasecmp(const wchar_t * __s1, const wchar_t * __s2);
    extern wchar_t *wcscat(wchar_t * __dest, const wchar_t * __src);
    extern wchar_t *wcschr(const wchar_t * __wcs, wchar_t __wc);
    extern int wcscmp(const wchar_t * __s1, const wchar_t * __s2);
    extern int wcscoll(const wchar_t * __s1, const wchar_t * __s2);
    extern wchar_t *wcscpy(wchar_t * __dest, const wchar_t * __src);
    extern size_t wcscspn(const wchar_t * __wcs, const wchar_t * __reject);
    extern wchar_t *wcsdup(const wchar_t * __s);
    extern size_t wcsftime(wchar_t * __s, size_t __maxsize,
			   const wchar_t * __format,
			   const struct tm *__tp);
    extern size_t wcslen(const wchar_t * __s);
    extern int wcsncasecmp(const wchar_t * __s1, const wchar_t * __s2,
			   size_t __n);
    extern wchar_t *wcsncat(wchar_t * __dest, const wchar_t * __src,
			    size_t __n);
    extern int wcsncmp(const wchar_t * __s1, const wchar_t * __s2,
		       size_t __n);
    extern wchar_t *wcsncpy(wchar_t * __dest, const wchar_t * __src,
			    size_t __n);
    extern size_t wcsnlen(const wchar_t * __s, size_t __maxlen);
    extern size_t wcsnrtombs(char *__dst, const wchar_t * *__src,
			     size_t __nwc, size_t __len, mbstate_t * __ps);
    extern wchar_t *wcspbrk(const wchar_t * __wcs,
			    const wchar_t * __accept);
    extern wchar_t *wcsrchr(const wchar_t * __wcs, wchar_t __wc);
    extern size_t wcsrtombs(char *__dst, const wchar_t * *__src,
			    size_t __len, mbstate_t * __ps);
    extern size_t wcsspn(const wchar_t * __wcs, const wchar_t * __accept);
    extern wchar_t *wcsstr(const wchar_t * __haystack,
			   const wchar_t * __needle);
    extern double wcstod(const wchar_t * __nptr, wchar_t * *__endptr);
    extern float wcstof(const wchar_t * __nptr, wchar_t * *__endptr);
    extern wchar_t *wcstok(wchar_t * __s, const wchar_t * __delim,
			   wchar_t * *__ptr);
    extern long int wcstol(const wchar_t * __nptr, wchar_t * *__endptr,
			   int __base);
    extern long double wcstold(const wchar_t * __nptr,
			       wchar_t * *__endptr);
    extern long long int wcstoll(const wchar_t * __nptr,
				 wchar_t * *__endptr, int __base);
    extern long long int wcstoq(const wchar_t * __nptr,
				wchar_t * *__endptr, int __base);
    extern unsigned long int wcstoul(const wchar_t * __nptr,
				     wchar_t * *__endptr, int __base);
    extern unsigned long long int wcstoull(const wchar_t * __nptr,
					   wchar_t * *__endptr,
					   int __base);
    extern unsigned long long int wcstouq(const wchar_t * __nptr,
					  wchar_t * *__endptr, int __base);
    extern wchar_t *wcswcs(const wchar_t * __haystack,
			   const wchar_t * __needle);
    extern int wcswidth(const wchar_t * __s, size_t __n);
    extern size_t wcsxfrm(wchar_t * __s1, const wchar_t * __s2,
			  size_t __n);
    extern int wctob(wint_t __c);
    extern int wcwidth(wchar_t __c);
    extern wchar_t *wmemchr(const wchar_t * __s, wchar_t __c, size_t __n);
    extern int wmemcmp(const wchar_t * __s1, const wchar_t * __s2,
		       size_t __n);
    extern wchar_t *wmemcpy(wchar_t * __s1, const wchar_t * __s2,
			    size_t __n);
    extern wchar_t *wmemmove(wchar_t * __s1, const wchar_t * __s2,
			     size_t __n);
    extern wchar_t *wmemset(wchar_t * __s, wchar_t __c, size_t __n);
    extern int wprintf(const wchar_t * __format, ...);
    extern int wscanf(const wchar_t * __format, ...);
#if __LSB_VERSION__ >= 11
    extern wint_t getwchar(void);
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 40
    extern wchar_t *__fgetws_chk(wchar_t *, size_t, int, FILE *);
    extern wchar_t *__fgetws_unlocked_chk(wchar_t *, size_t, int, FILE *);
    extern int __fwprintf_chk(FILE *, int, const wchar_t *, ...);
    extern size_t __mbsnrtowcs_chk(wchar_t *, const char **, size_t,
				   size_t, mbstate_t *, size_t);
    extern size_t __mbsrtowcs_chk(wchar_t *, const char **, size_t,
				  mbstate_t *, size_t);
    extern int __swprintf_chk(wchar_t *, size_t, int, size_t,
			      const wchar_t *, ...);
    extern int __vfwprintf_chk(FILE *, int, const wchar_t *, va_list);
    extern int __vswprintf_chk(wchar_t *, size_t, int, size_t,
			       const wchar_t *, va_list);
    extern int __vwprintf_chk(int, const wchar_t *, va_list);
    extern wchar_t *__wcpcpy_chk(wchar_t *, const wchar_t *, size_t);
    extern wchar_t *__wcpncpy_chk(wchar_t *, const wchar_t *, size_t,
				  size_t);
    extern size_t __wcrtomb_chk(char *, wchar_t, mbstate_t *, size_t);
    extern wchar_t *__wcscat_chk(wchar_t *, const wchar_t *, size_t);
    extern wchar_t *__wcscpy_chk(wchar_t *, const wchar_t *, size_t);
    extern wchar_t *__wcsncat_chk(wchar_t *, const wchar_t *, size_t,
				  size_t);
    extern wchar_t *__wcsncpy_chk(wchar_t *, const wchar_t *, size_t,
				  size_t);
    extern size_t __wcsnrtombs_chk(char *, const wchar_t * *, size_t,
				   size_t, mbstate_t *, size_t);
    extern size_t __wcsrtombs_chk(char *, const wchar_t * *, size_t,
				  mbstate_t *, size_t);
    extern wchar_t *__wmemcpy_chk(wchar_t *, const wchar_t *, size_t,
				  size_t);
    extern wchar_t *__wmemmove_chk(wchar_t *, const wchar_t *, size_t,
				   size_t);
    extern wchar_t *__wmempcpy_chk(wchar_t *, const wchar_t *, size_t,
				   size_t);
    extern wchar_t *__wmemset_chk(wchar_t *, wchar_t, size_t, size_t);
    extern int __wprintf_chk(int, const wchar_t *, ...);
    extern wchar_t *fgetws_unlocked(wchar_t * __ws, int __n,
				    FILE * __stream);
    extern wint_t fputwc_unlocked(wchar_t __wc, FILE * __stream);
    extern int fputws_unlocked(const wchar_t * __ws, FILE * __stream);
    extern wint_t getwc_unlocked(FILE * __stream);
    extern wint_t getwchar_unlocked(void);
    extern FILE *open_wmemstream(wchar_t * *__bufloc, size_t * __sizeloc);
    extern wint_t putwc_unlocked(wchar_t __wc, FILE * __stream);
    extern wint_t putwchar_unlocked(wchar_t __wc);
#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 50
    extern int wcscasecmp_l(const wchar_t * ws1, const wchar_t * ws2,
			    locale_t locale);
    extern int wcscoll_l(const wchar_t * ws1, const wchar_t * ws2,
			 locale_t locale);
    extern int wcsncasecmp_l(const wchar_t * ws1, const wchar_t * ws2,
			     size_t n, locale_t locale);
    extern size_t wcsxfrm_l(const wchar_t * ws1, const wchar_t * ws2,
			    size_t n, locale_t locale);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
