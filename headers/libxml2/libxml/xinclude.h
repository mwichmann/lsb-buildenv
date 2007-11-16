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





    extern int xmlXIncludeProcess(xmlDocPtr);
    extern void xmlXIncludeFreeContext(xmlXIncludeCtxtPtr);
    extern int xmlXIncludeProcessTree(xmlNodePtr);
    extern xmlXIncludeCtxtPtr xmlXIncludeNewContext(xmlDocPtr);
    extern int xmlXIncludeSetFlags(xmlXIncludeCtxtPtr, int);
    extern int xmlXIncludeProcessNode(xmlXIncludeCtxtPtr, xmlNodePtr);
    extern int xmlXIncludeProcessTreeFlags(xmlNodePtr, int);
    extern int xmlXIncludeProcessFlags(xmlDocPtr, int);
#ifdef __cplusplus
}
#endif
#endif
