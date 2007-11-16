#ifndef _LIBXML2_LIBXML_LIST_H_
#define _LIBXML2_LIBXML_LIST_H_


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








    extern int xmlListRemoveFirst(xmlListPtr, void *);
    extern xmlLinkPtr xmlListFront(xmlListPtr);
    extern xmlListPtr xmlListDup(const xmlListPtr);
    extern void xmlListWalk(xmlListPtr, xmlListWalker, const void *);
    extern void xmlListSort(xmlListPtr);
    extern void *xmlLinkGetData(xmlLinkPtr);
    extern int xmlListRemoveAll(xmlListPtr, void *);
    extern int xmlListAppend(xmlListPtr, void *);
    extern void xmlListDelete(xmlListPtr);
    extern void *xmlListReverseSearch(xmlListPtr, void *);
    extern void xmlListReverse(xmlListPtr);
    extern void *xmlListSearch(xmlListPtr, void *);
    extern int xmlListCopy(xmlListPtr, const xmlListPtr);
    extern int xmlListSize(xmlListPtr);
    extern int xmlListRemoveLast(xmlListPtr, void *);
    extern int xmlListPushFront(xmlListPtr, void *);
    extern int xmlListInsert(xmlListPtr, void *);
    extern int xmlListPushBack(xmlListPtr, void *);
    extern void xmlListReverseWalk(xmlListPtr, xmlListWalker,
				   const void *);
    extern xmlLinkPtr xmlListEnd(xmlListPtr);
    extern xmlListPtr xmlListCreate(xmlListDeallocator,
				    xmlListDataCompare);
    extern int xmlListEmpty(xmlListPtr);
    extern void xmlListPopFront(xmlListPtr);
    extern void xmlListPopBack(xmlListPtr);
    extern void xmlListClear(xmlListPtr);
    extern void xmlListMerge(xmlListPtr, xmlListPtr);
#ifdef __cplusplus
}
#endif
#endif
