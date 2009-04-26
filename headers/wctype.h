#if (__LSB_VERSION__ >= 10 )
#ifndef _WCTYPE_H_
#define _WCTYPE_H_

#include <sys/types.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef unsigned long int wctype_t;

    typedef unsigned int wint_t;

    typedef const int32_t *wctrans_t;

#if __LSB_VERSION__ >= 13
    typedef struct {
	int count;
	wint_t value;
    } __mbstate_t;

#endif				/* __LSB_VERSION__ >= 1.3 */


/* This really belongs in wchar.h, but it's presense creates a circular dependency with stdio.h, so put it here to break the circle.*/
#if __LSB_VERSION__ >= 12
    typedef __mbstate_t mbstate_t;

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

    extern int iswalnum(wint_t __wc);
    extern int iswalpha(wint_t __wc);
    extern int iswblank(wint_t __wc);
    extern int iswcntrl(wint_t __wc);
    extern int iswctype(wint_t __wc, wctype_t __desc);
    extern int iswdigit(wint_t __wc);
    extern int iswgraph(wint_t __wc);
    extern int iswlower(wint_t __wc);
    extern int iswprint(wint_t __wc);
    extern int iswpunct(wint_t __wc);
    extern int iswspace(wint_t __wc);
    extern int iswupper(wint_t __wc);
    extern int iswxdigit(wint_t __wc);
    extern wint_t towctrans(wint_t __wc, wctrans_t __desc);
    extern wint_t towlower(wint_t __wc);
    extern wint_t towupper(wint_t __wc);
    extern wctrans_t wctrans(const char *__property);
    extern wctype_t wctype(const char *__property);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
