#ifndef _WCHAR_H_
#define _WCHAR_H_

#include <wctype.h>
#include <stdio.h>
#include <stddef.h>

#define WEOF	(0xffffffffu)
#define WCHAR_MAX	__WCHAR_MAX
#define WCHAR_MIN	__WCHAR_MIN





typedef struct
{
  int count;
  wint_t value;
}
mbstate_t;


size_t __mbrlen (char *, size_t, mbstate_t *);
double __wcstod_internal (wchar_t *, wchar_t * *, int);
float __wcstof_internal (wchar_t *, wchar_t * *, int);
long __wcstol_internal (wchar_t *, wchar_t * *, int, int);
long double __wcstold_internal (wchar_t *, wchar_t * *, int);
long long __wcstoll_internal (wchar_t *, wchar_t * *, int, int);
unsigned long __wcstoul_internal (wchar_t *, wchar_t * *, int, int);
unsigned long long __wcstoull_internal (wchar_t *, wchar_t * *, int, int);
int iswblank (void);
wint_t towlower (wint_t);
wint_t towupper (wint_t);
wchar_t *wcscat (wchar_t *, wchar_t *);
wchar_t *wcschr (wchar_t *, wchar_t);
int wcscmp (wchar_t *, wchar_t *);
int wcscoll (wchar_t *, wchar_t *);
wchar_t *wcscpy (wchar_t *, wchar_t *);
size_t wcscspn (wchar_t *, wchar_t *);
wchar_t *wcsncat (wchar_t *, wchar_t *, size_t);
int wcsncmp (wchar_t *, wchar_t *, size_t);
wchar_t *wcsncpy (wchar_t *, wchar_t *, size_t);
wchar_t *wcspbrk (wchar_t *, wchar_t *);
wchar_t *wcsrchr (wchar_t *, wchar_t);
size_t wcsspn (wchar_t *, wchar_t *);
wchar_t *wcsstr (wchar_t *, wchar_t *);
wchar_t *wcstok (wchar_t *, wchar_t *, wchar_t * *);
int wcswidth (wchar_t *, size_t);
size_t wcsxfrm (wchar_t *, wchar_t *, size_t);
int wctob (wint_t);
int wcwidth (wint_t);
wchar_t *wmemchr (wchar_t *, wchar_t, size_t);
int wmemcmp (wchar_t *, wchar_t *, size_t);
wchar_t *wmemcpy (wchar_t *, wchar_t *, size_t);
wchar_t *wmemmove (wchar_t *, wchar_t *, size_t);
wchar_t *wmemset (wchar_t *, wchar_t, size_t);
int iswalpha (wint_t);
int iswcntrl (wint_t);
int iswctype (wint_t, wctype_t);
int iswdigit (wint_t);
int iswgraph (wint_t);
int iswlower (wint_t);
int iswprint (wint_t);
int iswpunct (wint_t);
int iswspace (wint_t);
int iswupper (wint_t);
int iswxdigit (wint_t);
size_t mbrlen (char *, size_t, mbstate_t *);
size_t mbrtowc (wchar_t *, char *, size_t, mbstate_t *);
int mbsinit (mbstate_t *);
size_t mbsrtowcs (wchar_t *, char **, size_t, mbstate_t *);
size_t wcrtomb (char *, wchar_t, mbstate_t *);
size_t wcslen (wchar_t *);
size_t wcsrtombs (char *, wchar_t * *, size_t, mbstate_t *);
double wcstod (wchar_t *, wchar_t * *);
long wcstol (wchar_t *, wchar_t * *, int);
unsigned long wcstoul (wchar_t *, wchar_t * *, int);
wchar_t wcswcs (void);
long long wcstoll (wchar_t *, wchar_t * *, int);
unsigned long long wcstoull (wchar_t *, wchar_t * *, int);
wint_t btowc (int);
wint_t towctrans (wint_t, wctrans_t);
wint_t fgetwc (FILE *);
wchar_t fgetws (void);
wint_t fputwc (void);
int fputws (void);
int fwide (void);
int fwprintf (void);
int fwscanf (void);
wint_t getwc (FILE *);
wint_t getwchar (void);
wint_t putwc (void);
wchar_t putwchar (void);
int swprintf (void);
int swscanf (void);
wint_t ungetwc (void);
int vfwprintf (void);
int vfwscanf (void);
int vswprintf (void);
int vswscanf (void);
int vwprintf (void);
int vwscanf (void);
size_t wcsftime (void);
int wprintf (void);
int wscanf (void);
#endif
