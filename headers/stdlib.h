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
  long quot;
  long rem;
}
lldiv_t;


char *__secure_getenv (char *);
double __strtod_internal (char *, char **, int);
float __strtof_internal (char *, char **, int);
long __strtol_internal (char *, char **, int, int);
long double __strtold_internal (char *, char **, int);
long long __strtoll_internal (char *, char **, int, int);
unsigned long __strtoul_internal (char *, char **, int, int);
unsigned long long __strtoull_internal (char *, char **, int, int);
long a64l (char *);
void abort (void);
int abs (int);
int atexit (void *(*atexit_func) ());
double atof (char *);
int atoi (char *);
long atol (char *);
void *bsearch (void *, void *, size_t, size_t, __compar_fn_t);
div_t div (int, int);
double drand48 (void);
char *ecvt (double, int, int *, int *);
double erand48 (unsigned short);
void exit (int);
char *fcvt (double, int, int *, int *);
char *gcvt (double, int, char *);
char *getenv (char *);
int getsubopt (char **, char **, char **);
int grantpt (int);
long jrand48 (unsigned short);
char *l64a (long);
long labs (long);
ldiv_t ldiv (long, long);
long long llabs (long long);
lldiv_t lldiv (long long, long long);
long lrand48 (void);
int mblen (char *, size_t);
size_t mbstowcs (wchar_t *, char *, size_t);
int mbtowc (wchar_t *, char *, size_t);
char *mktemp (char *);
long mrand48 (void);
long nrand48 (unsigned short);
char *ptsname (int);
int putenv (char *);
void qsort (void *, size_t, size_t, __compar_fn_t);
int rand (void);
int rand_r (unsigned int *);
unsigned short *seed48 (unsigned short);
void srand48 (long);
int unlockpt (int);
size_t wcstombs (char *, wchar_t *, size_t);
int wctomb (char *, wchar_t);
int system (char *);
void *calloc (size_t, size_t);
void free (void *);
void *initstate (unsigned int, void *, size_t);
void *malloc (size_t);
void *realloc (void *, size_t);
void *setstate (void *);
void srand (unsigned int);
void srandom (unsigned int);
double strtod (char *, char **);
float strtof (char *, char **);
long strtol (char *, char **, int);
long double strtold (char *, char **);
long long strtoll (char *, char **, int);
unsigned long strtoul (char *, char **, int);
unsigned long long strtoull (char *, char **, int);
void _Exit (int);
size_t __ctype_get_mb_cur_max (void);
extern char **environ;
char *realpath (char *, char *);
int setenv (void);
void unsetenv (void);
#endif
