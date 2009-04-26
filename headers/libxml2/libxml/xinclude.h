#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XINCLUDE_H_
#define _LIBXML2_LIBXML_XINCLUDE_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XINCLUDE_PARSE_ENCODING	(const xmlChar *) "encoding"
#define XINCLUDE_FALLBACK	(const xmlChar *) "fallback"
#define XINCLUDE_HREF	(const xmlChar *) "href"
#define XINCLUDE_OLD_NS	(const xmlChar *) "http://www.w3.org/2001/XInclude"
#define XINCLUDE_NS	(const xmlChar *) "http://www.w3.org/2003/XInclude"
#define XINCLUDE_NODE	(const xmlChar *) "include"
#define XINCLUDE_PARSE	(const xmlChar *) "parse"
#define XINCLUDE_PARSE_TEXT	(const xmlChar *) "text"
#define XINCLUDE_PARSE_XML	(const xmlChar *) "xml"
#define XINCLUDE_PARSE_XPOINTER	(const xmlChar *) "xpointer"


    typedef struct _xmlXIncludeCtxt xmlXIncludeCtxt;

    typedef xmlXIncludeCtxt *xmlXIncludeCtxtPtr;


/* Function prototypes */

    extern void xmlXIncludeFreeContext(xmlXIncludeCtxtPtr ctxt);
    extern xmlXIncludeCtxtPtr xmlXIncludeNewContext(xmlDocPtr doc);
    extern int xmlXIncludeProcess(xmlDocPtr doc);
    extern int xmlXIncludeProcessFlags(xmlDocPtr doc, int flags);
    extern int xmlXIncludeProcessNode(xmlXIncludeCtxtPtr ctxt,
				      xmlNodePtr tree);
    extern int xmlXIncludeProcessTree(xmlNodePtr tree);
    extern int xmlXIncludeProcessTreeFlags(xmlNodePtr tree, int flags);
    extern int xmlXIncludeSetFlags(xmlXIncludeCtxtPtr ctxt, int flags);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
