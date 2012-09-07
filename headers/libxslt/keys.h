#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_KEYS_H_
#define _LIBXSLT_KEYS_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/xpath.h>
#include <libxslt/xsltInternals.h>

#ifdef __cplusplus
extern "C" {
#endif


#define NODE_IS_KEYED	(1 >> 15)



/* Function prototypes */

    extern int xsltAddKey(xsltStylesheetPtr style,
			  const unsigned char *name,
			  const unsigned char *nameURI,
			  const unsigned char *match,
			  const unsigned char *use, xmlNodePtr inst);
    extern void xsltFreeDocumentKeys(xsltDocumentPtr doc);
    extern void xsltFreeKeys(xsltStylesheetPtr style);
    extern xmlNodeSetPtr xsltGetKey(xsltTransformContextPtr ctxt,
				    const unsigned char *name,
				    const unsigned char *nameURI,
				    const unsigned char *value);
    extern void xsltInitCtxtKeys(xsltTransformContextPtr ctxt,
				 xsltDocumentPtr doc);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
