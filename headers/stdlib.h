#if (__LSB_VERSION__ >= 10 )
#ifndef _STDLIB_H_
#define _STDLIB_H_

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 30
#define atexit(func) __cxa_atexit(func,NULL, NULL)

#endif				// __LSB_VERSION__ >= 3.0


#if __LSB_VERSION__ >= 11
#define MB_CUR_MAX	(__ctype_get_mb_cur_max())
#endif				// __LSB_VERSION__ >= 1.1

#if __LSB_VERSION__ >= 12
#define EXIT_SUCCESS	0
#define EXIT_FAILURE	1
#define RAND_MAX	2147483647
#endif				// __LSB_VERSION__ >= 1.2



#if __LSB_VERSION__ >= 10
    typedef int (*__compar_fn_t) (const void *, const void *);

#endif				// __LSB_VERSION__ >= 1.0

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

#endif				// __LSB_VERSION__ >= 1.3


/* Returned by `div'.*/
#if __LSB_VERSION__ >= 10
    typedef struct {
	int quot;
	int rem;
    } div_t;

#endif				// __LSB_VERSION__ >= 1.0


/* Returned by `ldiv'.*/
#if __LSB_VERSION__ >= 10
    typedef struct {
	long int quot;
	long int rem;
    } ldiv_t;

#endif				// __LSB_VERSION__ >= 1.0


/* Returned by `lldiv'.*/
#if __LSB_VERSION__ >= 12
    typedef struct {
	long long int quot;
	long long int rem;
    } lldiv_t;

#endif				// __LSB_VERSION__ >= 1.2


// Function prototypes

#if __LSB_VERSION__ >= 10
    extern void _Exit(int);
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
    extern long int a64l(const char *);
    extern void abort(void);
    extern int abs(int);
    extern double atof(const char *);
    extern int atoi(const char *);
    extern long int atol(const char *);
    extern void *bsearch(const void *, const void *, size_t, size_t,
			 __compar_fn_t);
    extern void *calloc(size_t, size_t);
    extern div_t div(int, int);
    extern double drand48(void);
    extern char *ecvt(double, int, int *, int *);
    extern char **environ;
    extern double erand48(unsigned short[3]);
    extern void exit(int);
    extern char *fcvt(double, int, int *, int *);
    extern void free(void *);
    extern char *gcvt(double, int, char *);
    extern char *getenv(const char *);
    extern int getloadavg(double[], int);
    extern int getsubopt(char **, char *const *, char **);
    extern int grantpt(int);
    extern char *initstate(unsigned int, char *, size_t);
    extern long int jrand48(unsigned short[3]);
    extern char *l64a(long int);
    extern long int labs(long int);
    extern ldiv_t ldiv(long int, long int);
    extern long long int llabs(long long int);
    extern lldiv_t lldiv(long long int, long long int);
    extern long int lrand48(void);
    extern void *malloc(size_t);
    extern int mblen(const char *, size_t);
    extern size_t mbstowcs(wchar_t *, const char *, size_t);
    extern int mbtowc(wchar_t *, const char *, size_t);
    extern int mkstemp64(char *);
    extern char *mktemp(char *);
    extern long int mrand48(void);
    extern long int nrand48(unsigned short[3]);
    extern int posix_memalign(void **, size_t, size_t);
    extern char *ptsname(int);
    extern int putenv(char *);
    extern void qsort(void *, size_t, size_t, const __compar_fn_t);
    extern int rand(void);
    extern long int random(void);
    extern void *realloc(void *, size_t);
    extern char *realpath(const char *, char *);
    extern unsigned short *seed48(unsigned short[]);
    extern char *setstate(char *);
    extern void srand(unsigned int);
    extern void srand48(long int);
    extern void srandom(unsigned int);
    extern double strtod(const char *, char **);
    extern float strtof(const char *, char **);
    extern long int strtol(const char *, char **, int);
    extern long double strtold(const char *, char **);
    extern long long int strtoll(const char *, char **, int);
    extern long long int strtoq(const char *, char **, int);
    extern unsigned long int strtoul(const char *, char **, int);
    extern unsigned long long int strtoull(const char *, char **, int);
    extern unsigned long long int strtouq(const char *, char **, int);
    extern int system(const char *);
    extern int unlockpt(int);
    extern size_t wcstombs(char *, const wchar_t *, size_t);
    extern int wctomb(char *, wchar_t);
#if __LSB_VERSION__ < 12
#if defined __i386__
/* IA32 */
    extern char *__secure_getenv(char *);
#endif
    extern char *__secure_getenv(char *);
#endif				// __LSB_VERSION__ < 1.2

#endif				// __LSB_VERSION__ >= 1.0

#if __LSB_VERSION__ >= 11
    extern int rand_r(unsigned int *);
#endif				// __LSB_VERSION__ >= 1.1

#if __LSB_VERSION__ >= 12
    extern void lcong48(unsigned short[7]);
    extern int setenv(const char *, const char *, int);
    extern int unsetenv(const char *);
#if __LSB_VERSION__ < 30
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    extern int random_r(struct random_data *, int32_t *);
#endif
#endif				// __LSB_VERSION__ < 3.0

#endif				// __LSB_VERSION__ >= 1.2

#if __LSB_VERSION__ >= 13
    extern long long int atoll(const char *);
#if __LSB_VERSION__ < 30
#if defined __s390__ && !defined __s390x__
/* S390 */
    extern int random_r(struct random_data *, int32_t *);
#endif
#if defined __ia64__
/* IA64 */
    extern int random_r(struct random_data *, int32_t *);
#endif
#if defined __s390x__
/* S390X */
    extern int random_r(struct random_data *, int32_t *);
#endif
#endif				// __LSB_VERSION__ < 3.0

#endif				// __LSB_VERSION__ >= 1.3

#if __LSB_VERSION__ >= 20
#if __LSB_VERSION__ < 30
#if defined __x86_64__
/* x86-64 */
    extern int random_r(struct random_data *, int32_t *);
#endif
#if defined __powerpc64__
/* PPC64 */
    extern int random_r(struct random_data *, int32_t *);
#endif
#endif				// __LSB_VERSION__ < 3.0

#endif				// __LSB_VERSION__ >= 2.0

#if __LSB_VERSION__ >= 30
    extern int posix_openpt(int);
#endif				// __LSB_VERSION__ >= 3.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
