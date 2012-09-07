#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_TEMPLATES_H_
#define _LIBXSLT_TEMPLATES_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xpath.h>
#include <libxslt/xsltInternals.h>

#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

    extern xmlAttrPtr xsltAttrListTemplateProcess(xsltTransformContextPtr
						  ctxt, xmlNode * target,
						  xmlAttrPtr cur);
    extern xmlAttrPtr xsltAttrTemplateProcess(xsltTransformContextPtr ctxt,
					      xmlNode * target,
					      xmlAttrPtr attr);
    extern xmlChar *xsltAttrTemplateValueProcess(xsltTransformContextPtr
						 ctxt,
						 const unsigned char
						 *attr);
    extern xmlChar
	*xsltAttrTemplateValueProcessNode(xsltTransformContextPtr ctxt,
					  const unsigned char *str,
					  xmlNode * node);
    extern xmlChar *xsltEvalAttrValueTemplate(xsltTransformContextPtr ctxt,
					      xmlNodePtr node,
					      const unsigned char *name,
					      const unsigned char *ns);
    extern const unsigned char
	*xsltEvalStaticAttrValueTemplate(xsltStylesheetPtr style,
					 xmlNodePtr node,
					 const unsigned char *name,
					 const unsigned char *ns,
					 int *found);
    extern xmlChar *xsltEvalTemplateString(xsltTransformContextPtr ctxt,
					   xmlNodePtr contextNode,
					   xmlNodePtr inst);
    extern int xsltEvalXPathPredicate(xsltTransformContextPtr ctxt,
				      xmlXPathCompExprPtr comp,
				      xmlNs * *nsList, int nsNr);
    extern xmlChar *xsltEvalXPathString(xsltTransformContextPtr ctxt,
					xmlXPathCompExprPtr comp);
    extern xmlChar *xsltEvalXPathStringNs(xsltTransformContextPtr ctxt,
					  xmlXPathCompExprPtr comp,
					  int nsNr, xmlNs * *nsList);
    extern xmlNode **xsltTemplateProcess(xsltTransformContextPtr ctxt,
					 xmlNode * node);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
