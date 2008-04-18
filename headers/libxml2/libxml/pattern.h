#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_PATTERN_H_
#define _LIBXML2_LIBXML_PATTERN_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/xmlregexp.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
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

#endif				// __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31




#endif				// __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
    extern void xmlFreePattern(xmlPatternPtr);
    extern void xmlFreePatternList(xmlPatternPtr);
    extern void xmlFreeStreamCtxt(xmlStreamCtxtPtr);
    extern int xmlPatternFromRoot(xmlPatternPtr);
    extern xmlStreamCtxtPtr xmlPatternGetStreamCtxt(xmlPatternPtr);
    extern int xmlPatternMatch(xmlPatternPtr, xmlNodePtr);
    extern int xmlPatternMaxDepth(xmlPatternPtr);
    extern int xmlPatternMinDepth(xmlPatternPtr);
    extern int xmlPatternStreamable(xmlPatternPtr);
    extern xmlPatternPtr xmlPatterncompile(const xmlChar *, xmlDict *, int,
					   const xmlChar * *);
    extern int xmlStreamPop(xmlStreamCtxtPtr);
    extern int xmlStreamPush(xmlStreamCtxtPtr, const xmlChar *,
			     const xmlChar *);
    extern int xmlStreamPushAttr(xmlStreamCtxtPtr, const xmlChar *,
				 const xmlChar *);
#endif				// __LSB_VERSION__ >= 3.1

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
