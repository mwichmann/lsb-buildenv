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




    typedef struct _xmlLocationSet xmlLocationSet;

    typedef xmlLocationSet *xmlLocationSetPtr;


    struct _xmlLocationSet {
	int locNr;
	int locMax;
	xmlXPathObjectPtr *locTab;
    };


    extern xmlLocationSetPtr xmlXPtrLocationSetCreate(xmlXPathObjectPtr);
    extern xmlXPathObjectPtr xmlXPtrNewRange(xmlNodePtr, int, xmlNodePtr,
					     int);
    extern xmlXPathObjectPtr xmlXPtrNewRangeNodeObject(xmlNodePtr,
						       xmlXPathObjectPtr);
    extern xmlXPathObjectPtr xmlXPtrEval(const xmlChar *,
					 xmlXPathContextPtr);
    extern void xmlXPtrEvalRangePredicate(xmlXPathParserContextPtr);
    extern xmlXPathContextPtr xmlXPtrNewContext(xmlDocPtr, xmlNodePtr,
						xmlNodePtr);
    extern xmlXPathObjectPtr xmlXPtrNewRangePoints(xmlXPathObjectPtr,
						   xmlXPathObjectPtr);
    extern void xmlXPtrRangeToFunction(xmlXPathParserContextPtr, int);
    extern xmlXPathObjectPtr xmlXPtrNewRangeNodePoint(xmlNodePtr,
						      xmlXPathObjectPtr);
    extern xmlLocationSetPtr xmlXPtrLocationSetMerge(xmlLocationSetPtr,
						     xmlLocationSetPtr);
    extern xmlXPathObjectPtr xmlXPtrNewRangeNodes(xmlNodePtr, xmlNodePtr);
    extern xmlNodePtr xmlXPtrBuildNodeList(xmlXPathObjectPtr);
    extern xmlXPathObjectPtr xmlXPtrWrapLocationSet(xmlLocationSetPtr);
    extern xmlXPathObjectPtr xmlXPtrNewLocationSetNodes(xmlNodePtr,
							xmlNodePtr);
    extern xmlXPathObjectPtr xmlXPtrNewLocationSetNodeSet(xmlNodeSetPtr);
    extern void xmlXPtrLocationSetDel(xmlLocationSetPtr,
				      xmlXPathObjectPtr);
    extern void xmlXPtrLocationSetRemove(xmlLocationSetPtr, int);
    extern xmlXPathObjectPtr xmlXPtrNewCollapsedRange(xmlNodePtr);
    extern xmlXPathObjectPtr xmlXPtrNewRangePointNode(xmlXPathObjectPtr,
						      xmlNodePtr);
    extern void xmlXPtrLocationSetAdd(xmlLocationSetPtr,
				      xmlXPathObjectPtr);
    extern void xmlXPtrFreeLocationSet(xmlLocationSetPtr);
#ifdef __cplusplus
}
#endif
#endif
