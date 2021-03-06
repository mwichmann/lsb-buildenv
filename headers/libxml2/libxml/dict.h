#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_DICT_H_
#define _LIBXML2_LIBXML_DICT_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _xmlDict xmlDict;

    typedef xmlDict *xmlDictPtr;


/* Function prototypes */

    extern void xmlDictCleanup(void);
    extern xmlDictPtr xmlDictCreate(void);
    extern xmlDictPtr xmlDictCreateSub(xmlDictPtr);
    extern const xmlChar *xmlDictExists(xmlDictPtr, const xmlChar *, int);
    extern void xmlDictFree(xmlDictPtr);
    extern const xmlChar *xmlDictLookup(xmlDictPtr, const xmlChar *, int);
    extern int xmlDictOwns(xmlDictPtr, const xmlChar *);
    extern const xmlChar *xmlDictQLookup(xmlDictPtr, const xmlChar *,
					 const xmlChar *);
    extern int xmlDictReference(xmlDictPtr);
    extern int xmlDictSize(xmlDictPtr);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
