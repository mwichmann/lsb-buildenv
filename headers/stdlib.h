#if (__LSB_VERSION__ >= 10 )
#ifndef _STDLIB_H_
#define _STDLIB_H_

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


#if __LSB_VERSION__ >= 11
#define MB_CUR_MAX	(__ctype_get_mb_cur_max())
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
#define EXIT_SUCCESS	0
#define EXIT_FAILURE	1
#define RAND_MAX	2147483647
#endif				/* __LSB_VERSION__ >= 1.2 */



    typedef int (*__compar_fn_t) (const void *, const void *);

#if __LSB_VERSION__ >= 13
    struct random_data {
	int32_t *fptr;		/* Front pointer. */
	int32_t *rptr;		/* Rear pointer. */
	int32_t *state;		/* Array of state values. */
	int rand_type;		/* Type of random number generator. */
	int rand_deg;		/* Degree of random number generator. */
	int rand_sep;		/* Distance between front and rear. */
	int32_t *end_ptr;	/* Pointer behind state table. */
    };

#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 40
    struct drand48_data {
	unsigned short __x[3];
	unsigned short __old_x[3];
	unsigned short __c;
	unsigned short __init;
	unsigned long long int __a;
    };

#endif				/* __LSB_VERSION__ >= 4.0 */


/* Returned by `div'.*/
    typedef struct {
	int quot;
	int rem;
    } div_t;


/* Returned by `ldiv'.*/
    typedef struct {
	long int quot;
	long int rem;
    } ldiv_t;


/* Returned by `lldiv'.*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	long long int quot;
	long long int rem;
    } lldiv_t;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

    extern void _Exit(int __status);
    extern size_t __ctype_get_mb_cur_max(void);
    extern double __strtod_internal(const char *, char **, int);
    extern float __strtof_internal(const char *, char **, int);
    extern long int __strtol_internal(const char *, char **, int, int);
    extern long double __strtold_internal(const char *, char **, int);
    extern long long int __strtoll_internal(const char *, char **, int,
					    int);
    extern unsigned long int __strtoul_internal(const char *, char **, int,
						int);
    extern unsigned long long int __strtoull_internal(const char *,
						      char **, int, int);
    extern long int a64l(const char *__s);
    extern void abort(void);
    extern int abs(int __x);
    extern int atexit(void (*__func) (void));
    extern double atof(const char *__nptr);
    extern int atoi(const char *__nptr);
    extern long int atol(const char *__nptr);
    extern void *bsearch(const void *__key, const void *__base,
			 size_t __nmemb, size_t __size,
			 __compar_fn_t __compar);
    extern void *calloc(size_t __nmemb, size_t __size);
    extern div_t div(int __numer, int __denom);
    extern double drand48(void);
    extern char *ecvt(double __value, int __ndigit, int *__decpt,
		      int *__sign);
    extern char **environ;
    extern double erand48(unsigned short __xsubi[3]);
    extern void exit(int __status);
    extern char *fcvt(double __value, int __ndigit, int *__decpt,
		      int *__sign);
    extern void free(void *__ptr);
    extern char *gcvt(double __value, int __ndigit, char *__buf);
    extern char *getenv(const char *__name);
    extern int getloadavg(double __loadavg[], int __nelem);
    extern int getsubopt(char **__optionp, char *const *__tokens,
			 char **__valuep);
    extern int grantpt(int __fd);
    extern char *initstate(unsigned int __seed, char *__statebuf,
			   size_t __statelen);
    extern long int jrand48(unsigned short __xsubi[3]);
    extern char *l64a(long int __n);
    extern long int labs(long int __x);
    extern ldiv_t ldiv(long int __numer, long int __denom);
    extern long long int llabs(long long int __x);
    extern lldiv_t lldiv(long long int __numer, long long int __denom);
    extern long int lrand48(void);
    extern void *malloc(size_t __size);
    extern int mblen(const char *__s, size_t __n);
    extern size_t mbstowcs(wchar_t * __pwcs, const char *__s, size_t __n);
    extern int mbtowc(wchar_t * __pwc, const char *__s, size_t __n);
    extern int mkstemp(char *__template);
    extern int mkstemp64(char *__template);
    extern char *mktemp(char *__template);
    extern long int mrand48(void);
    extern long int nrand48(unsigned short __xsubi[3]);
#ifdef __cplusplus
    extern int posix_memalign(void **__memptr, size_t __alignment,
			      size_t __size) throw();
#else
    extern int posix_memalign(void **__memptr, size_t __alignment,
			      size_t __size);
#endif
    extern char *ptsname(int __fd);
    extern int putenv(char *__string);
    extern void qsort(void *__base, size_t __nmemb, size_t __size,
		      const __compar_fn_t __compar);
    extern int rand(void);
    extern long int random(void);
    extern void *realloc(void *__ptr, size_t __size);
    extern char *realpath(const char *__name, char *__resolved);
    extern unsigned short *seed48(unsigned short __seed16v[3]);
    extern char *setstate(char *__statebuf);
    extern void srand(unsigned int __seed);
    extern void srand48(long int __seedval);
    extern void srandom(unsigned int __seed);
    extern double strtod(const char *__nptr, char **__endptr);
    extern float strtof(const char *__nptr, char **__endptr);
    extern long int strtol(const char *__nptr, char **__endptr,
			   int __base);
    extern long double strtold(const char *__nptr, char **__endptr);
    extern long long int strtoll(const char *__nptr, char **__endptr,
				 int __base);
    extern long long int strtoq(const char *__nptr, char **__endptr,
				int __base);
    extern unsigned long int strtoul(const char *__nptr, char **__endptr,
				     int __base);
    extern unsigned long long int strtoull(const char *__nptr,
					   char **__endptr, int __base);
    extern unsigned long long int strtouq(const char *__nptr,
					  char **__endptr, int __base);
    extern int system(const char *__command);
    extern int unlockpt(int __fd);
    extern size_t wcstombs(char *__s, const wchar_t * __pwcs, size_t __n);
    extern int wctomb(char *__s, wchar_t __wchar);
#if __LSB_VERSION__ >= 11
    extern int rand_r(unsigned int *__seed);
#endif				/* __LSB_VERSION__ >= 1.1 */

#if __LSB_VERSION__ >= 12
    extern void lcong48(unsigned short __param[7]);
    extern int setenv(const char *__name, const char *__value,
		      int __replace);
    extern int unsetenv(const char *__name);
#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 13
    extern long long int atoll(const char *__nptr);
#endif				/* __LSB_VERSION__ >= 1.3 */

#if __LSB_VERSION__ >= 30
    extern int posix_openpt(int __oflag);
#endif				/* __LSB_VERSION__ >= 3.0 */

#if __LSB_VERSION__ >= 40
    extern size_t __mbstowcs_chk(wchar_t *, const char *, size_t, size_t);
    extern char *__realpath_chk(const char *, char *, size_t);
    extern size_t __wcstombs_chk(char *, const wchar_t *, size_t, size_t);
    extern int __wctomb_chk(char *, wchar_t, size_t);
    extern int drand48_r(struct drand48_data *__buffer, double *__result);
    extern int erand48_r(unsigned short __xsubi[3],
			 struct drand48_data *__buffer, double *__result);
    extern int initstate_r(unsigned int __seed, char *__statebuf,
			   size_t __statelen, struct random_data *__buf);
    extern int jrand48_r(unsigned short __xsubi[3],
			 struct drand48_data *__buffer,
			 long int *__result);
    extern int lcong48_r(unsigned short __param[7],
			 struct drand48_data *__buffer);
    extern int lrand48_r(struct drand48_data *__buffer,
			 long int *__result);
    extern char *mkdtemp(char *__template);
    extern int mrand48_r(struct drand48_data *__buffer,
			 long int *__result);
    extern int nrand48_r(unsigned short __xsubi[3],
			 struct drand48_data *__buffer,
			 long int *__result);
    extern int random_r(struct random_data *__buf, int32_t * __result);
    extern int seed48_r(unsigned short __seed16v[3],
			struct drand48_data *__buffer);
    extern int setstate_r(char *__statebuf, struct random_data *__buf);
    extern int srand48_r(long int __seedval,
			 struct drand48_data *__buffer);
    extern int srandom_r(unsigned int __seed, struct random_data *__buf);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
