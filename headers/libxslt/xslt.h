#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_XSLT_H_
#define _LIBXSLT_XSLT_H_


#ifdef __cplusplus
extern "C" {
#endif


#define XSLT_NAMESPACE	((xmlChar *) "http://www.w3.org/1999/XSL/Transform")
#define XSLT_DEFAULT_VERSION	"1.0"
#define XSLT_DEFAULT_URL	"http://xmlsoft.org/XSLT/"
#define XSLT_DEFAULT_VENDOR	"libxslt"
#define XSLT_PARSE_OPTIONS	XML_PARSE_NOENT | XML_PARSE_DTDLOAD | XML_PARSE_DTDATTR | XML_PARSE_NOCDATA



/* Function prototypes */

    extern void xsltCleanupGlobals(void);
    extern const char *xsltEngineVersion;
    extern void xsltInit(void);
    extern const int xsltLibxmlVersion;
    extern const int xsltLibxsltVersion;
    extern int xsltMaxDepth;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
