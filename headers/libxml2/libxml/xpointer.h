#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XPOINTER_H_
#define _LIBXML2_LIBXML_XPOINTER_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/xmlerror.h>
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/hash.h>
#include <libxml2/libxml/xmlIO.h>
#include <libxml2/libxml/xpath.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
    typedef struct _xmlLocationSet xmlLocationSet;

    typedef xmlLocationSet *xmlLocationSetPtr;

#endif				/* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31

    struct _xmlLocationSet {
	int locNr;
	int locMax;
	xmlXPathObjectPtr *locTab;
    };

#endif				/* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
    extern xmlNodePtr xmlXPtrBuildNodeList(xmlXPathObjectPtr);
    extern xmlXPathObjectPtr xmlXPtrEval(const xmlChar *,
					 xmlXPathContextPtr);
    extern void xmlXPtrEvalRangePredicate(xmlXPathParserContextPtr);
    extern void xmlXPtrFreeLocationSet(xmlLocationSetPtr);
    extern void xmlXPtrLocationSetAdd(xmlLocationSetPtr,
				      xmlXPathObjectPtr);
    extern xmlLocationSetPtr xmlXPtrLocationSetCreate(xmlXPathObjectPtr);
    extern void xmlXPtrLocationSetDel(xmlLocationSetPtr,
				      xmlXPathObjectPtr);
    extern xmlLocationSetPtr xmlXPtrLocationSetMerge(xmlLocationSetPtr,
						     xmlLocationSetPtr);
    extern void xmlXPtrLocationSetRemove(xmlLocationSetPtr, int);
    extern xmlXPathObjectPtr xmlXPtrNewCollapsedRange(xmlNodePtr);
    extern xmlXPathContextPtr xmlXPtrNewContext(xmlDocPtr, xmlNodePtr,
						xmlNodePtr);
    extern xmlXPathObjectPtr xmlXPtrNewLocationSetNodeSet(xmlNodeSetPtr);
    extern xmlXPathObjectPtr xmlXPtrNewLocationSetNodes(xmlNodePtr,
							xmlNodePtr);
    extern xmlXPathObjectPtr xmlXPtrNewRange(xmlNodePtr, int, xmlNodePtr,
					     int);
    extern xmlXPathObjectPtr xmlXPtrNewRangeNodeObject(xmlNodePtr,
						       xmlXPathObjectPtr);
    extern xmlXPathObjectPtr xmlXPtrNewRangeNodePoint(xmlNodePtr,
						      xmlXPathObjectPtr);
    extern xmlXPathObjectPtr xmlXPtrNewRangeNodes(xmlNodePtr, xmlNodePtr);
    extern xmlXPathObjectPtr xmlXPtrNewRangePointNode(xmlXPathObjectPtr,
						      xmlNodePtr);
    extern xmlXPathObjectPtr xmlXPtrNewRangePoints(xmlXPathObjectPtr,
						   xmlXPathObjectPtr);
    extern void xmlXPtrRangeToFunction(xmlXPathParserContextPtr, int);
    extern xmlXPathObjectPtr xmlXPtrWrapLocationSet(xmlLocationSetPtr);
#endif				/* __LSB_VERSION__ >= 3.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
