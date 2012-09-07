#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_XSLTLOCALE_H_
#define _LIBXSLT_XSLTLOCALE_H_


#ifdef __cplusplus
extern "C" {
#endif


#define XSLT_LOCALE_NONE


    typedef void *xsltLocale;

    typedef unsigned char xsltLocaleChar;


/* Function prototypes */

    extern void xsltFreeLocale(xsltLocale locale);
    extern int xsltLocaleStrcmp(xsltLocale locale,
				const xsltLocaleChar * str1,
				const xsltLocaleChar * str2);
    extern xsltLocale xsltNewLocale(const unsigned char *langName);
    extern xsltLocaleChar *xsltStrxfrm(xsltLocale locale,
				       const unsigned char *string);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
