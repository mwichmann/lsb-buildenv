#if (__LSB_VERSION__ >= 50 )
#ifndef _LIBXSLT_EXTRA_H_
#define _LIBXSLT_EXTRA_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/hash.h>
#include <libxml2/libxml/xpath.h>
#include <libxslt/numbersInternals.h>
#include <libxslt/xsltlocale.h>
#include <libxslt/xsltInternals.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XSLT_SAXON_NAMESPACE	((xmlChar *) "http://icl.com/saxon")
#define XSLT_NORM_SAXON_NAMESPACE	((xmlChar *) "http://nwalsh.com/xslt/ext/com.nwalsh.saxon.CVS")
#define XSLT_XT_NAMESPACE	((xmlChar *) "http://www.jclark.com/xt")
#define XSLT_LIBXSLT_NAMESPACE	((xmlChar *) "http://xmlsoft.org/XSLT/namespace")
#define XSLT_XALAN_NAMESPACE	((xmlChar *) "org.apache.xalan.xslt.extensions.Redirect")



/* Function prototypes */

    extern void xsltDebug(xsltTransformContextPtr ctxt, xmlNodePtr node,
			  xmlNodePtr inst, xsltStylePreCompPtr comp);
    extern void xsltFunctionNodeSet(xmlXPathParserContextPtr ctxt,
				    int nargs);
    extern void xsltRegisterAllExtras(void);
    extern void xsltRegisterExtras(xsltTransformContextPtr ctxt);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
