#ifndef _WCHAR_H_
#define _WCHAR_H_

#include <wctype.h>
#include <stdio.h>
#include <stddef.h>

#define WEOF	(0xffffffffu)
#define WCHAR_MIN	0
#define WCHAR_MAX	0xffffff





typedef struct
{
  int count;
  wint_t value;
}
mbstate_t;


extern size_t __mbrlen (char *, size_t, mbstate_t *);
extern double __wcstod_internal (wchar_t *, wchar_t * *, int);
extern float __wcstof_internal (wchar_t *, wchar_t * *, int);
extern long __wcstol_internal (wchar_t *, wchar_t * *, int, int);
extern long double __wcstold_internal (wchar_t *, wchar_t * *, int);
extern long long __wcstoll_internal (wchar_t *, wchar_t * *, int, int);
extern unsigned long __wcstoul_internal (wchar_t *, wchar_t * *, int, int);
extern unsigned long long __wcstoull_internal (wchar_t *, wchar_t * *, int,
					       int);
extern int iswblank (void);
extern wint_t towlower (wint_t);
extern wint_t towupper (wint_t);
extern wchar_t *wcscat (wchar_t *, wchar_t *);
extern wchar_t *wcschr (wchar_t *, wchar_t);
extern int wcscmp (wchar_t *, wchar_t *);
extern int wcscoll (wchar_t *, wchar_t *);
extern wchar_t *wcscpy (wchar_t *, wchar_t *);
extern size_t wcscspn (wchar_t *, wchar_t *);
extern wchar_t *wcsncat (wchar_t *, wchar_t *, size_t);
extern int wcsncmp (wchar_t *, wchar_t *, size_t);
extern wchar_t *wcsncpy (wchar_t *, wchar_t *, size_t);
extern wchar_t *wcspbrk (wchar_t *, wchar_t *);
extern wchar_t *wcsrchr (wchar_t *, wchar_t);
extern size_t wcsspn (wchar_t *, wchar_t *);
extern wchar_t *wcsstr (wchar_t *, wchar_t *);
extern wchar_t *wcstok (wchar_t *, wchar_t *, wchar_t * *);
extern int wcswidth (wchar_t *, size_t);
extern size_t wcsxfrm (wchar_t *, wchar_t *, size_t);
extern int wctob (wint_t);
extern int wcwidth (wint_t);
extern wchar_t *wmemchr (wchar_t *, wchar_t, size_t);
extern int wmemcmp (wchar_t *, wchar_t *, size_t);
extern wchar_t *wmemcpy (wchar_t *, wchar_t *, size_t);
extern wchar_t *wmemmove (wchar_t *, wchar_t *, size_t);
extern wchar_t *wmemset (wchar_t *, wchar_t, size_t);
extern int iswalpha (wint_t);
extern int iswcntrl (wint_t);
extern int iswctype (wint_t, wctype_t);
extern int iswdigit (wint_t);
extern int iswgraph (wint_t);
extern int iswlower (wint_t);
extern int iswprint (wint_t);
extern int iswpunct (wint_t);
extern int iswspace (wint_t);
extern int iswupper (wint_t);
extern int iswxdigit (wint_t);
extern size_t mbrlen (char *, size_t, mbstate_t *);
extern size_t mbrtowc (wchar_t *, char *, size_t, mbstate_t *);
extern int mbsinit (mbstate_t *);
extern size_t mbsrtowcs (wchar_t *, char **, size_t, mbstate_t *);
extern size_t wcrtomb (char *, wchar_t, mbstate_t *);
extern size_t wcslen (wchar_t *);
extern size_t wcsrtombs (char *, wchar_t * *, size_t, mbstate_t *);
extern double wcstod (wchar_t *, wchar_t * *);
extern long wcstol (wchar_t *, wchar_t * *, int);
extern unsigned long wcstoul (wchar_t *, wchar_t * *, int);
extern wchar_t wcswcs (void);
extern long long wcstoll (wchar_t *, wchar_t * *, int);
extern unsigned long long wcstoull (wchar_t *, wchar_t * *, int);
extern wint_t btowc (int);
extern wint_t towctrans (wint_t, wctrans_t);
extern wint_t fgetwc (FILE *);
extern wchar_t fgetws (void);
extern wint_t fputwc (void);
extern int fputws (void);
extern int fwide (void);
extern int fwprintf (void);
extern int fwscanf (void);
extern wint_t getwc (FILE *);
extern wint_t getwchar (void);
extern wint_t putwc (void);
extern wchar_t putwchar (void);
extern int swprintf (void);
extern int swscanf (void);
extern wint_t ungetwc (void);
extern int vfwprintf (void);
extern int vfwscanf (void);
extern int vswprintf (void);
extern int vswscanf (void);
extern int vwprintf (void);
extern int vwscanf (void);
extern size_t wcsftime (void);
extern int wprintf (void);
extern int wscanf (void);
#endif
