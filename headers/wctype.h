
typedef unsigned long wctype_t;

typedef __int32_t *wctrans_t;

int iswblank ();
wint_t towlower (wint_t);
wint_t towupper (wint_t);
wctrans_t wctrans (char *);
int iswalnum (wint_t);
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
wctype_t wctype (char *);
wint_t towctrans (wint_t, wctrans_t);
