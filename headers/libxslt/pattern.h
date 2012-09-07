#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_PATTERN_H_
#define _LIBXSLT_PATTERN_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/xsltInternals.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _xsltCompMatch xsltCompMatch;

    typedef xsltCompMatch *xsltCompMatchPtr;


/* Function prototypes */

    extern int xsltAddTemplate(xsltStylesheetPtr style,
			       xsltTemplatePtr cur,
			       const unsigned char *mode,
			       const unsigned char *modeURI);
    extern void xsltCleanupTemplates(xsltStylesheetPtr style);
    extern xsltCompMatchPtr xsltCompilePattern(const unsigned char
					       *pattern, xmlDocPtr doc,
					       xmlNodePtr node,
					       xsltStylesheetPtr style,
					       xsltTransformContextPtr
					       runtime);
    extern void xsltFreeCompMatchList(xsltCompMatchPtr comp);
    extern void xsltFreeTemplateHashes(xsltStylesheetPtr style);
    extern xsltTemplatePtr xsltGetTemplate(xsltTransformContextPtr ctxt,
					   xmlNodePtr node,
					   xsltStylesheetPtr style);
    extern void xsltNormalizeCompSteps(void *payload, void *data,
				       const unsigned char *name);
    extern int xsltTestCompMatchList(xsltTransformContextPtr ctxt,
				     xmlNodePtr node,
				     xsltCompMatchPtr comp);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
