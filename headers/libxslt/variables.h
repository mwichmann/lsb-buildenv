#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_VARIABLES_H_
#define _LIBXSLT_VARIABLES_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xpath.h>
#include <libxslt/xsltInternals.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XSLT_REGISTER_VARIABLE_LOOKUP(ctxt)	xmlXPathRegisterVariableLookup((ctxt)->xpathCtxt, xsltXPathVariableLookup, (void *)(ctxt)); xsltRegisterAllFunctions((ctxt)->xpathCtxt); xsltRegisterAllElement(ctxt); (ctxt)->xpathCtxt->extra = ctxt



/* Function prototypes */

    extern int xsltAddStackElemList(xsltTransformContextPtr ctxt,
				    xsltStackElemPtr elems);
    extern int xsltEvalGlobalVariables(xsltTransformContextPtr ctxt);
    extern int xsltEvalOneUserParam(xsltTransformContextPtr ctxt,
				    const unsigned char *name,
				    const unsigned char *value);
    extern int xsltEvalUserParams(xsltTransformContextPtr ctxt,
				  const char **params);
    extern void xsltFreeGlobalVariables(xsltTransformContextPtr ctxt);
    extern void xsltParseGlobalParam(xsltStylesheetPtr style,
				     xmlNodePtr cur);
    extern void xsltParseGlobalVariable(xsltStylesheetPtr style,
					xmlNodePtr cur);
    extern xsltStackElemPtr
	xsltParseStylesheetCallerParam(xsltTransformContextPtr ctxt,
				       xmlNodePtr cur);
    extern void xsltParseStylesheetParam(xsltTransformContextPtr ctxt,
					 xmlNodePtr cur);
    extern void xsltParseStylesheetVariable(xsltTransformContextPtr ctxt,
					    xmlNodePtr cur);
    extern int xsltQuoteOneUserParam(xsltTransformContextPtr ctxt,
				     const unsigned char *name,
				     const unsigned char *value);
    extern int xsltQuoteUserParams(xsltTransformContextPtr ctxt,
				   const char **params);
    extern xmlXPathObjectPtr xsltVariableLookup(xsltTransformContextPtr
						ctxt,
						const unsigned char *name,
						const unsigned char
						*ns_uri);
    extern xmlXPathObjectPtr xsltXPathVariableLookup(void *ctxt,
						     const unsigned char
						     *name,
						     const unsigned char
						     *ns_uri);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
