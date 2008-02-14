#ifndef _LIBXML2_LIBXML_PATTERN_H_
#define _LIBXML2_LIBXML_PATTERN_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/xmlregexp.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _xmlStreamCtxt xmlStreamCtxt;

    typedef xmlStreamCtxt *xmlStreamCtxtPtr;

    typedef struct _xmlPattern xmlPattern;

    typedef xmlPattern *xmlPatternPtr;

    typedef enum {
	XML_PATTERN_DEFAULT = 0,
	XML_PATTERN_XPATH = 1 << 0,
	XML_PATTERN_XSSEL = 1 << 1,
	XML_PATTERN_XSFIELD = 1 << 2
    } xmlPatternFlags;








    extern int xmlStreamPush(xmlStreamCtxtPtr, const xmlChar *,
			     const xmlChar *);
    extern int xmlStreamPushAttr(xmlStreamCtxtPtr, const xmlChar *,
				 const xmlChar *);
    extern void xmlFreePattern(xmlPatternPtr);
    extern int xmlPatternFromRoot(xmlPatternPtr);
    extern xmlPatternPtr xmlPatterncompile(const xmlChar *, xmlDict *, int,
					   const xmlChar * *);
    extern int xmlPatternMatch(xmlPatternPtr, xmlNodePtr);
    extern void xmlFreePatternList(xmlPatternPtr);
    extern int xmlPatternMaxDepth(xmlPatternPtr);
    extern int xmlPatternStreamable(xmlPatternPtr);
    extern int xmlPatternMinDepth(xmlPatternPtr);
    extern int xmlStreamPop(xmlStreamCtxtPtr);
    extern void xmlFreeStreamCtxt(xmlStreamCtxtPtr);
    extern xmlStreamCtxtPtr xmlPatternGetStreamCtxt(xmlPatternPtr);
#ifdef __cplusplus
}
#endif
#endif
