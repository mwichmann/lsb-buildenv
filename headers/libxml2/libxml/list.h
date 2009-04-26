#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_LIST_H_
#define _LIBXML2_LIBXML_LIST_H_

#include <libxml2/libxml/xmlversion.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _xmlList xmlList;

    typedef xmlList *xmlListPtr;

    typedef struct _xmlLink xmlLink;

    typedef xmlLink *xmlLinkPtr;

    typedef int (*xmlListWalker) (const void *, const void *);

    typedef void (*xmlListDeallocator) (xmlLinkPtr);

    typedef int (*xmlListDataCompare) (const void *, const void *);


/* Function prototypes */

    extern void *xmlLinkGetData(xmlLinkPtr lk);
    extern int xmlListAppend(xmlListPtr l, void *data);
    extern void xmlListClear(xmlListPtr l);
    extern int xmlListCopy(xmlListPtr cur, const xmlListPtr old);
    extern xmlListPtr xmlListCreate(xmlListDeallocator deallocator,
				    xmlListDataCompare compare);
    extern void xmlListDelete(xmlListPtr l);
    extern xmlListPtr xmlListDup(const xmlListPtr old);
    extern int xmlListEmpty(xmlListPtr l);
    extern xmlLinkPtr xmlListEnd(xmlListPtr l);
    extern xmlLinkPtr xmlListFront(xmlListPtr l);
    extern int xmlListInsert(xmlListPtr l, void *data);
    extern void xmlListMerge(xmlListPtr l1, xmlListPtr l2);
    extern void xmlListPopBack(xmlListPtr l);
    extern void xmlListPopFront(xmlListPtr l);
    extern int xmlListPushBack(xmlListPtr l, void *data);
    extern int xmlListPushFront(xmlListPtr l, void *data);
    extern int xmlListRemoveAll(xmlListPtr l, void *data);
    extern int xmlListRemoveFirst(xmlListPtr l, void *data);
    extern int xmlListRemoveLast(xmlListPtr l, void *data);
    extern void xmlListReverse(xmlListPtr l);
    extern void *xmlListReverseSearch(xmlListPtr l, void *data);
    extern void xmlListReverseWalk(xmlListPtr l, xmlListWalker walker,
				   const void *user);
    extern void *xmlListSearch(xmlListPtr l, void *data);
    extern int xmlListSize(xmlListPtr l);
    extern void xmlListSort(xmlListPtr l);
    extern void xmlListWalk(xmlListPtr l, xmlListWalker walker,
			    const void *user);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
