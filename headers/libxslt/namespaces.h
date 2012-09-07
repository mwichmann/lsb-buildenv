#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_NAMESPACES_H_
#define _LIBXSLT_NAMESPACES_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxslt/xsltInternals.h>

#ifdef __cplusplus
extern "C" {
#endif


#define UNDEFINED_DEFAULT_NS	(const xmlChar *) -1L



/* Function prototypes */

    extern xmlNsPtr xsltCopyNamespace(xsltTransformContextPtr ctxt,
				      xmlNodePtr elem, xmlNsPtr ns);
    extern xmlNsPtr xsltCopyNamespaceList(xsltTransformContextPtr ctxt,
					  xmlNodePtr node, xmlNsPtr cur);
    extern void xsltFreeNamespaceAliasHashes(xsltStylesheetPtr style);
    extern xmlNsPtr xsltGetNamespace(xsltTransformContextPtr ctxt,
				     xmlNodePtr cur, xmlNsPtr ns,
				     xmlNodePtr out);
    extern xmlNsPtr xsltGetPlainNamespace(xsltTransformContextPtr ctxt,
					  xmlNodePtr cur, xmlNsPtr ns,
					  xmlNodePtr out);
    extern xmlNsPtr xsltGetSpecialNamespace(xsltTransformContextPtr ctxt,
					    xmlNodePtr cur,
					    const unsigned char *URI,
					    const unsigned char *prefix,
					    xmlNodePtr out);
    extern void xsltNamespaceAlias(xsltStylesheetPtr style,
				   xmlNodePtr node);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
