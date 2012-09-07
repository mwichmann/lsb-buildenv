#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_ATTRIBUTES_H_
#define _LIBXSLT_ATTRIBUTES_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/xsltInternals.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern void xsltApplyAttributeSet(xsltTransformContextPtr ctxt,
				      xmlNodePtr node, xmlNodePtr inst,
				      const unsigned char *attributes);
    extern void xsltFreeAttributeSetsHashes(xsltStylesheetPtr style);
    extern void xsltParseStylesheetAttributeSet(xsltStylesheetPtr style,
						xmlNodePtr cur);
    extern void xsltResolveStylesheetAttributeSet(xsltStylesheetPtr style);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
