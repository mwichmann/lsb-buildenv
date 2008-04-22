#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_LIST_H_
#define _LIBXML2_LIBXML_LIST_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
    typedef struct _xmlList xmlList;

    typedef xmlList *xmlListPtr;

    typedef struct _xmlLink xmlLink;

    typedef xmlLink *xmlLinkPtr;

    typedef int (*xmlListWalker) (const void *, const void *);

    typedef void (*xmlListDeallocator) (xmlLinkPtr);

    typedef int (*xmlListDataCompare) (const void *, const void *);

#endif				/* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31




#endif				/* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
    extern void *xmlLinkGetData(xmlLinkPtr);
    extern int xmlListAppend(xmlListPtr, void *);
    extern void xmlListClear(xmlListPtr);
    extern int xmlListCopy(xmlListPtr, const xmlListPtr);
    extern xmlListPtr xmlListCreate(xmlListDeallocator,
				    xmlListDataCompare);
    extern void xmlListDelete(xmlListPtr);
    extern xmlListPtr xmlListDup(const xmlListPtr);
    extern int xmlListEmpty(xmlListPtr);
    extern xmlLinkPtr xmlListEnd(xmlListPtr);
    extern xmlLinkPtr xmlListFront(xmlListPtr);
    extern int xmlListInsert(xmlListPtr, void *);
    extern void xmlListMerge(xmlListPtr, xmlListPtr);
    extern void xmlListPopBack(xmlListPtr);
    extern void xmlListPopFront(xmlListPtr);
    extern int xmlListPushBack(xmlListPtr, void *);
    extern int xmlListPushFront(xmlListPtr, void *);
    extern int xmlListRemoveAll(xmlListPtr, void *);
    extern int xmlListRemoveFirst(xmlListPtr, void *);
    extern int xmlListRemoveLast(xmlListPtr, void *);
    extern void xmlListReverse(xmlListPtr);
    extern void *xmlListReverseSearch(xmlListPtr, void *);
    extern void xmlListReverseWalk(xmlListPtr, xmlListWalker,
				   const void *);
    extern void *xmlListSearch(xmlListPtr, void *);
    extern int xmlListSize(xmlListPtr);
    extern void xmlListSort(xmlListPtr);
    extern void xmlListWalk(xmlListPtr, xmlListWalker, const void *);
#endif				/* __LSB_VERSION__ >= 3.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
