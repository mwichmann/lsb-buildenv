#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_IMPORTS_H_
#define _LIBXSLT_IMPORTS_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/hash.h>
#include <libxml2/libxml/xpath.h>
#include <libxslt/xsltInternals.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XSLT_GET_IMPORT_INT(res,style,name)	{ xsltStylesheetPtr st = style; res = -1; while (st != NULL) { if (st->name != -1) { res = st->name; break; } st = xsltNextImport(st); }}
#define XSLT_GET_IMPORT_PTR(res,style,name)	{ xsltStylesheetPtr st = style; res = NULL; while (st != NULL) { if (st->name != NULL) { res = st->name; break; } st = xsltNextImport(st); }}



/* Function prototypes */

    extern int xsltFindElemSpaceHandling(xsltTransformContextPtr ctxt,
					 xmlNodePtr node);
    extern xsltTemplatePtr xsltFindTemplate(xsltTransformContextPtr ctxt,
					    const unsigned char *name,
					    const unsigned char *nameURI);
    extern int xsltNeedElemSpaceHandling(xsltTransformContextPtr ctxt);
    extern xsltStylesheetPtr xsltNextImport(xsltStylesheetPtr style);
    extern int xsltParseStylesheetImport(xsltStylesheetPtr style,
					 xmlNodePtr cur);
    extern int xsltParseStylesheetInclude(xsltStylesheetPtr style,
					  xmlNodePtr cur);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
