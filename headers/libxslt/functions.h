#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_FUNCTIONS_H_
#define _LIBXSLT_FUNCTIONS_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/hash.h>
#include <libxml2/libxml/xpath.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XSLT_REGISTER_FUNCTION_LOOKUP(ctxt)	xmlXPathRegisterFuncLookup((ctxt)->xpathCtxt, (xmlXPathFuncLookupFunc) xsltXPathFunctionLookup, (void *)(ctxt->xpathCtxt));



/* Function prototypes */

    extern void xsltDocumentFunction(xmlXPathParserContextPtr ctxt,
				     int nargs);
    extern void xsltElementAvailableFunction(xmlXPathParserContextPtr ctxt,
					     int nargs);
    extern void xsltFormatNumberFunction(xmlXPathParserContextPtr ctxt,
					 int nargs);
    extern void xsltFunctionAvailableFunction(xmlXPathParserContextPtr
					      ctxt, int nargs);
    extern void xsltGenerateIdFunction(xmlXPathParserContextPtr ctxt,
				       int nargs);
    extern void xsltKeyFunction(xmlXPathParserContextPtr ctxt, int nargs);
    extern void xsltRegisterAllFunctions(xmlXPathContextPtr ctxt);
    extern void xsltSystemPropertyFunction(xmlXPathParserContextPtr ctxt,
					   int nargs);
    extern void xsltUnparsedEntityURIFunction(xmlXPathParserContextPtr
					      ctxt, int nargs);
    extern xmlXPathFunction xsltXPathFunctionLookup(xmlXPathContextPtr
						    ctxt,
						    const unsigned char
						    *name,
						    const unsigned char
						    *ns_uri);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
