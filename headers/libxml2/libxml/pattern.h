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


/* Function prototypes */

    extern void xmlFreePattern(xmlPatternPtr comp);
    extern void xmlFreePatternList(xmlPatternPtr comp);
    extern void xmlFreeStreamCtxt(xmlStreamCtxtPtr stream);
    extern int xmlPatternFromRoot(xmlPatternPtr comp);
    extern xmlStreamCtxtPtr xmlPatternGetStreamCtxt(xmlPatternPtr comp);
    extern int xmlPatternMatch(xmlPatternPtr comp, xmlNodePtr node);
    extern int xmlPatternMaxDepth(xmlPatternPtr comp);
    extern int xmlPatternMinDepth(xmlPatternPtr comp);
    extern int xmlPatternStreamable(xmlPatternPtr comp);
    extern xmlPatternPtr xmlPatterncompile(const xmlChar * pattern,
					   xmlDict * dict, int flags,
					   const xmlChar * *namespaces);
    extern int xmlStreamPop(xmlStreamCtxtPtr stream);
    extern int xmlStreamPush(xmlStreamCtxtPtr stream, const xmlChar * name,
			     const xmlChar * ns);
    extern int xmlStreamPushAttr(xmlStreamCtxtPtr stream,
				 const xmlChar * name, const xmlChar * ns);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
