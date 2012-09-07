#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_DOCUMENTS_H_
#define _LIBXSLT_DOCUMENTS_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/xsltInternals.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef enum {
	XSLT_LOAD_START,
	XSLT_LOAD_STYLESHEET,
	XSLT_LOAD_DOCUMENT
    } xsltLoadType;

    typedef xmlDocPtr(*xsltDocLoaderFunc) (void);


/* Function prototypes */

    extern xsltDocLoaderFunc xsltDocDefaultLoader;
    extern xsltDocumentPtr xsltFindDocument(xsltTransformContextPtr ctxt,
					    xmlDocPtr doc);
    extern void xsltFreeDocuments(xsltTransformContextPtr ctxt);
    extern void xsltFreeStyleDocuments(xsltStylesheetPtr style);
    extern xsltDocumentPtr xsltLoadDocument(xsltTransformContextPtr ctxt,
					    const unsigned char *URI);
    extern xsltDocumentPtr xsltLoadStyleDocument(xsltStylesheetPtr style,
						 const unsigned char *URI);
    extern xsltDocumentPtr xsltNewDocument(xsltTransformContextPtr ctxt,
					   xmlDocPtr doc);
    extern xsltDocumentPtr xsltNewStyleDocument(xsltStylesheetPtr style,
						xmlDocPtr doc);
    extern void xsltSetLoaderFunc(xsltDocLoaderFunc f);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
