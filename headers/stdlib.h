#ifndef _STDLIB_H_
#define _STDLIB_H_

#include <stddef.h>

#define MB_CUR_MAX	(__ctype_get_mb_cur_max())
#define EXIT_SUCCESS	0
#define EXIT_FAILURE	1
#define RAND_MAX	2147483647


typedef int (*__compar_fn_t) (void);


/* Returned by `div'.*/


typedef struct
{
  int quot;
  int rem;
}
div_t;


/* Returned by `ldiv'.*/


typedef struct
{
  long quot;
  long rem;
}
ldiv_t;


/* Returned by `lldiv'.*/


typedef struct
{
  long long quot;
  long long rem;
}
lldiv_t;


extern char *__secure_getenv (char *);
extern double __strtod_internal (char *, char **, int);
extern float __strtof_internal (char *, char **, int);
extern long __strtol_internal (char *, char **, int, int);
extern long double __strtold_internal (char *, char **, int);
extern long long __strtoll_internal (char *, char **, int, int);
extern unsigned long __strtoul_internal (char *, char **, int, int);
extern unsigned long long __strtoull_internal (char *, char **, int, int);
extern long a64l (char *);
extern void abort (void);
extern int abs (int);
extern int atexit (void (*atexit_func) ());
extern double atof (char *);
extern int atoi (char *);
extern long atol (char *);
extern void *bsearch (void *, void *, size_t, size_t, __compar_fn_t);
extern div_t div (int, int);
extern double drand48 (void);
extern char *ecvt (double, int, int *, int *);
extern double erand48 (unsigned short[3]);
extern void exit (int);
extern char *fcvt (double, int, int *, int *);
extern char *gcvt (double, int, char *);
extern char *getenv (char *);
extern int getsubopt (char **, char **, char **);
extern int grantpt (int);
extern long jrand48 (unsigned short[3]);
extern char *l64a (long);
extern long labs (long);
extern void lcong48 (unsigned short[7]);
extern ldiv_t ldiv (long, long);
extern long long llabs (long long);
extern lldiv_t lldiv (long long, long long);
extern long lrand48 (void);
extern int mblen (char *, size_t);
extern size_t mbstowcs (wchar_t *, char *, size_t);
extern int mbtowc (wchar_t *, char *, size_t);
extern char *mktemp (char *);
extern long mrand48 (void);
extern long nrand48 (unsigned short[3]);
extern char *ptsname (int);
extern int putenv (char *);
extern void qsort (void *, size_t, size_t, __compar_fn_t);
extern int rand (void);
extern int rand_r (unsigned int *);
extern unsigned short *seed48 (unsigned short);
extern void srand48 (long);
extern int unlockpt (int);
extern size_t wcstombs (char *, wchar_t *, size_t);
extern int wctomb (char *, wchar_t);
extern int system (char *);
extern void *calloc (size_t, size_t);
extern void free (void *);
extern void *initstate (unsigned int, void *, size_t);
extern void *malloc (size_t);
extern void *realloc (void *, size_t);
extern void *setstate (void *);
extern void srand (unsigned int);
extern void srandom (unsigned int);
extern double strtod (char *, char **);
extern float strtof (char *, char **);
extern long strtol (char *, char **, int);
extern long double strtold (char *, char **);
extern long long strtoll (char *, char **, int);
extern unsigned long strtoul (char *, char **, int);
extern unsigned long long strtoull (char *, char **, int);
extern void _Exit (int);
extern size_t __ctype_get_mb_cur_max (void);
extern char **environ;
extern char *realpath (char *, char *);
extern int setenv (char *, char *, int);
extern void unsetenv (char *);
#endif
