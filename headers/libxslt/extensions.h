#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_EXTENSIONS_H_
#define _LIBXSLT_EXTENSIONS_H_

#include <stdio.h>
#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/entities.h>
#include <libxml2/libxml/hash.h>
#include <libxml2/libxml/xpath.h>
#include <libxslt/xsltInternals.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef void *(*xsltStyleExtInitFunction) (void);

    typedef void (*xsltStyleExtShutdownFunction) (void);

    typedef void *(*xsltExtInitFunction) (void);

    typedef void (*xsltExtShutdownFunction) (void);

    typedef xsltElemPreCompPtr(*xsltPreComputeFunction) (void);

    typedef void (*xsltTopLevelFunction) (void);


/* Function prototypes */

    extern int xsltCheckExtPrefix(xsltStylesheetPtr style,
				  const unsigned char *URI);
    extern int xsltCheckExtURI(xsltStylesheetPtr style,
			       const unsigned char *URI);
    extern void xsltDebugDumpExtensions(FILE * output);
    extern xsltTransformFunction
	xsltExtElementLookup(xsltTransformContextPtr ctxt,
			     const unsigned char *name,
			     const unsigned char *URI);
    extern xsltTransformFunction xsltExtModuleElementLookup(const unsigned
							    char *name,
							    const unsigned
							    char *URI);
    extern xsltPreComputeFunction
	xsltExtModuleElementPreComputeLookup(const unsigned char *name,
					     const unsigned char *URI);
    extern xmlXPathFunction xsltExtModuleFunctionLookup(const unsigned char
							*name,
							const unsigned char
							*URI);
    extern xsltTopLevelFunction xsltExtModuleTopLevelLookup(const unsigned
							    char *name,
							    const unsigned
							    char *URI);
    extern void xsltFreeCtxtExts(xsltTransformContextPtr ctxt);
    extern void xsltFreeExts(xsltStylesheetPtr style);
    extern void *xsltGetExtData(xsltTransformContextPtr ctxt,
				const unsigned char *URI);
    extern xmlHashTablePtr xsltGetExtInfo(xsltStylesheetPtr style,
					  const unsigned char *URI);
    extern int xsltInitCtxtExts(xsltTransformContextPtr ctxt);
    extern void xsltInitElemPreComp(xsltElemPreCompPtr comp,
				    xsltStylesheetPtr style,
				    xmlNodePtr inst,
				    xsltTransformFunction function,
				    xsltElemPreCompDeallocator freeFunc);
    extern void xsltInitGlobals(void);
    extern xsltElemPreCompPtr xsltNewElemPreComp(xsltStylesheetPtr style,
						 xmlNodePtr inst,
						 xsltTransformFunction
						 function);
    extern xsltElemPreCompPtr
	xsltPreComputeExtModuleElement(xsltStylesheetPtr style,
				       xmlNodePtr inst);
    extern int xsltRegisterExtElement(xsltTransformContextPtr ctxt,
				      const unsigned char *name,
				      const unsigned char *URI,
				      xsltTransformFunction function);
    extern int xsltRegisterExtFunction(xsltTransformContextPtr ctxt,
				       const unsigned char *name,
				       const unsigned char *URI,
				       xmlXPathFunction function);
    extern int xsltRegisterExtModule(const unsigned char *URI,
				     xsltExtInitFunction initFunc,
				     xsltExtShutdownFunction shutdownFunc);
    extern int xsltRegisterExtModuleElement(const unsigned char *name,
					    const unsigned char *URI,
					    xsltPreComputeFunction precomp,
					    xsltTransformFunction
					    transform);
    extern int xsltRegisterExtModuleFull(const unsigned char *URI,
					 xsltExtInitFunction initFunc,
					 xsltExtShutdownFunction
					 shutdownFunc,
					 xsltStyleExtInitFunction
					 styleInitFunc,
					 xsltStyleExtShutdownFunction
					 styleShutdownFunc);
    extern int xsltRegisterExtModuleFunction(const unsigned char *name,
					     const unsigned char *URI,
					     xmlXPathFunction function);
    extern int xsltRegisterExtModuleTopLevel(const unsigned char *name,
					     const unsigned char *URI,
					     xsltTopLevelFunction
					     function);
    extern int xsltRegisterExtPrefix(xsltStylesheetPtr style,
				     const unsigned char *prefix,
				     const unsigned char *URI);
    extern void xsltRegisterTestModule(void);
    extern void xsltShutdownCtxtExts(xsltTransformContextPtr ctxt);
    extern void xsltShutdownExts(xsltStylesheetPtr style);
    extern void *xsltStyleGetExtData(xsltStylesheetPtr style,
				     const unsigned char *URI);
    extern int xsltUnregisterExtModule(const unsigned char *URI);
    extern int xsltUnregisterExtModuleElement(const unsigned char *name,
					      const unsigned char *URI);
    extern int xsltUnregisterExtModuleFunction(const unsigned char *name,
					       const unsigned char *URI);
    extern int xsltUnregisterExtModuleTopLevel(const unsigned char *name,
					       const unsigned char *URI);
    extern xsltTransformContextPtr
	xsltXPathGetTransformContext(xmlXPathParserContextPtr ctxt);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
