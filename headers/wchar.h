

typedef long wchar_t;

typedef unsigned int wint_t;

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
long long wcstoll (wchar_t *, wchar_t * *, int);
unsigned long long wcstoull (wchar_t *, wchar_t * *, int);
wint_t btowc (int);
int fputws ();
int fwide ();
int fwprintf ();
int fwscanf ();
int vfwprintf ();
int vswscanf ();
int vwprintf ();
int vwscanf ();
int wprintf ();
int wscanf ();
