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


    typedef struct _xmlLocationSet xmlLocationSet;

    typedef xmlLocationSet *xmlLocationSetPtr;

    struct _xmlLocationSet {
	int locNr;
	int locMax;
	xmlXPathObjectPtr *locTab;
    };


/* Function prototypes */

    extern xmlNodePtr xmlXPtrBuildNodeList(xmlXPathObjectPtr obj);
    extern xmlXPathObjectPtr xmlXPtrEval(const xmlChar * str,
					 xmlXPathContextPtr ctx);
    extern void xmlXPtrEvalRangePredicate(xmlXPathParserContextPtr ctxt);
    extern void xmlXPtrFreeLocationSet(xmlLocationSetPtr obj);
    extern void xmlXPtrLocationSetAdd(xmlLocationSetPtr cur,
				      xmlXPathObjectPtr val);
    extern xmlLocationSetPtr xmlXPtrLocationSetCreate(xmlXPathObjectPtr
						      val);
    extern void xmlXPtrLocationSetDel(xmlLocationSetPtr cur,
				      xmlXPathObjectPtr val);
    extern xmlLocationSetPtr xmlXPtrLocationSetMerge(xmlLocationSetPtr
						     val1,
						     xmlLocationSetPtr
						     val2);
    extern void xmlXPtrLocationSetRemove(xmlLocationSetPtr cur, int val);
    extern xmlXPathObjectPtr xmlXPtrNewCollapsedRange(xmlNodePtr start);
    extern xmlXPathContextPtr xmlXPtrNewContext(xmlDocPtr doc,
						xmlNodePtr here,
						xmlNodePtr origin);
    extern xmlXPathObjectPtr xmlXPtrNewLocationSetNodeSet(xmlNodeSetPtr
							  set);
    extern xmlXPathObjectPtr xmlXPtrNewLocationSetNodes(xmlNodePtr start,
							xmlNodePtr end);
    extern xmlXPathObjectPtr xmlXPtrNewRange(xmlNodePtr start,
					     int startindex,
					     xmlNodePtr end, int endindex);
    extern xmlXPathObjectPtr xmlXPtrNewRangeNodeObject(xmlNodePtr start,
						       xmlXPathObjectPtr
						       end);
    extern xmlXPathObjectPtr xmlXPtrNewRangeNodePoint(xmlNodePtr start,
						      xmlXPathObjectPtr
						      end);
    extern xmlXPathObjectPtr xmlXPtrNewRangeNodes(xmlNodePtr start,
						  xmlNodePtr end);
    extern xmlXPathObjectPtr xmlXPtrNewRangePointNode(xmlXPathObjectPtr
						      start,
						      xmlNodePtr end);
    extern xmlXPathObjectPtr xmlXPtrNewRangePoints(xmlXPathObjectPtr start,
						   xmlXPathObjectPtr end);
    extern void xmlXPtrRangeToFunction(xmlXPathParserContextPtr ctxt,
				       int nargs);
    extern xmlXPathObjectPtr xmlXPtrWrapLocationSet(xmlLocationSetPtr val);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
