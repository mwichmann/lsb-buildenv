#ifndef _LIBXML2_LIBXML_DICT_H_
#define _LIBXML2_LIBXML_DICT_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef struct _xmlDict xmlDict;

    typedef xmlDict *xmlDictPtr;





    extern void xmlDictFree(xmlDictPtr);
    extern xmlDictPtr xmlDictCreate(void);
    extern const xmlChar *xmlDictExists(xmlDictPtr, const xmlChar *, int);
    extern xmlDictPtr xmlDictCreateSub(xmlDictPtr);
    extern int xmlDictReference(xmlDictPtr);
    extern int xmlDictSize(xmlDictPtr);
    extern void xmlDictCleanup(void);
    extern const xmlChar *xmlDictQLookup(xmlDictPtr, const xmlChar *,
					 const xmlChar *);
    extern int xmlDictOwns(xmlDictPtr, const xmlChar *);
    extern const xmlChar *xmlDictLookup(xmlDictPtr, const xmlChar *, int);
#ifdef __cplusplus
}
#endif
#endif
