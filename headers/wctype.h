#if (__LSB_VERSION__ >= 10 )
#ifndef _WCTYPE_H_
#define _WCTYPE_H_

#include <locale.h>
#include <sys/types.h>
#include <wchar.h>
#include <stddef.h>
#include <stdint.h>
#include <lsb/wchar.h>

#ifdef __cplusplus
extern "C" {
#endif



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
#if __LSB_VERSION__ >= 50
    extern int iswalnum_l(wint_t wc, locale_t locale);
    extern int iswalpha_l(wint_t wc, locale_t locale);
    extern int iswblank_l(wint_t wc, locale_t locale);
    extern int iswcntrl_l(wint_t wc, locale_t locale);
    extern int iswctype_l(wint_t wc, locale_t locale);
    extern int iswdigit_l(wint_t wc, locale_t locale);
    extern int iswgraph_l(wint_t wc, locale_t locale);
    extern int iswlower_l(wint_t wc, locale_t locale);
    extern int iswprint_l(wint_t wc, locale_t locale);
    extern int iswpunct_l(wint_t wc, locale_t locale);
    extern int iswspace_l(wint_t wc, locale_t locale);
    extern int iswupper_l(wint_t wc, locale_t locale);
    extern int iswxdigit_l(wint_t wc, locale_t locale);
    extern wint_t towctrans_l(wint_t wc, wctrans_t desc, locale_t locale);
    extern wint_t towlower_l(wint_t wc, locale_t locale);
    extern wint_t towupper_l(wint_t wc, locale_t locale);
    extern size_t wctrans_l(const char *charclass, locale_t locale);
    extern size_t wctype_l(const char *property, locale_t locale);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
