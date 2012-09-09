#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_PREPROC_H_
#define _LIBXSLT_PREPROC_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/xsltInternals.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern xsltElemPreCompPtr xsltDocumentComp(xsltStylesheetPtr style,
					       xmlNodePtr inst,
					       xsltTransformFunction
					       function);
    extern const unsigned char *xsltExtMarker;
    extern void xsltFreeStylePreComps(xsltStylesheetPtr style);
    extern void xsltStylePreCompute(xsltStylesheetPtr style,
				    xmlNodePtr inst);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */