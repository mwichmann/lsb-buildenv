#ifndef _LIBXML2_LIBXML_HASH_H_
#define _LIBXML2_LIBXML_HASH_H_

#include <libxml2/libxml/xmlstring.h>
#include <libxml2/libxml/tree.h>
#include <libxml2/libxml/dict.h>
#include <libxml2/libxml/entities.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XML_CAST_FPTR(fptr)	fptr


    typedef struct _xmlHashTable xmlHashTable;

    typedef xmlHashTable *xmlHashTablePtr;

    typedef void (*xmlHashDeallocator) (void *, xmlChar *);

    typedef void (*xmlHashScannerFull) (void *, void *, const xmlChar *,
					const xmlChar *, const xmlChar *);

    typedef void *(*xmlHashCopier) (void *, xmlChar *);

    typedef void (*xmlHashScanner) (void *, void *, xmlChar *);




    extern xmlHashTablePtr xmlHashCreate(int);
    extern xmlHashTablePtr xmlHashCreateDict(int, xmlDictPtr);
    extern int xmlHashRemoveEntry(xmlHashTablePtr, const xmlChar *,
				  xmlHashDeallocator);
    extern void xmlHashScanFull3(xmlHashTablePtr, const xmlChar *,
				 const xmlChar *, const xmlChar *,
				 xmlHashScannerFull, void *);
    extern void *xmlHashQLookup3(xmlHashTablePtr, const xmlChar *,
				 const xmlChar *, const xmlChar *,
				 const xmlChar *, const xmlChar *,
				 const xmlChar *);
    extern void *xmlHashQLookup(xmlHashTablePtr, const xmlChar *,
				const xmlChar *);
    extern void *xmlHashLookup3(xmlHashTablePtr, const xmlChar *,
				const xmlChar *, const xmlChar *);
    extern xmlHashTablePtr xmlHashCopy(xmlHashTablePtr, xmlHashCopier);
    extern int xmlHashAddEntry3(xmlHashTablePtr, const xmlChar *,
				const xmlChar *, const xmlChar *, void *);
    extern void xmlHashFree(xmlHashTablePtr, xmlHashDeallocator);
    extern void xmlHashScan3(xmlHashTablePtr, const xmlChar *,
			     const xmlChar *, const xmlChar *,
			     xmlHashScanner, void *);
    extern int xmlHashRemoveEntry2(xmlHashTablePtr, const xmlChar *,
				   const xmlChar *, xmlHashDeallocator);
    extern void *xmlHashLookup(xmlHashTablePtr, const xmlChar *);
    extern int xmlHashUpdateEntry3(xmlHashTablePtr, const xmlChar *,
				   const xmlChar *, const xmlChar *,
				   void *, xmlHashDeallocator);
    extern int xmlHashRemoveEntry3(xmlHashTablePtr, const xmlChar *,
				   const xmlChar *, const xmlChar *,
				   xmlHashDeallocator);
    extern int xmlHashSize(xmlHashTablePtr);
    extern void xmlHashScan(xmlHashTablePtr, xmlHashScanner, void *);
    extern void xmlHashScanFull(xmlHashTablePtr, xmlHashScannerFull,
				void *);
    extern int xmlHashUpdateEntry(xmlHashTablePtr, const xmlChar *, void *,
				  xmlHashDeallocator);
    extern int xmlHashAddEntry2(xmlHashTablePtr, const xmlChar *,
				const xmlChar *, void *);
    extern void *xmlHashQLookup2(xmlHashTablePtr, const xmlChar *,
				 const xmlChar *, const xmlChar *,
				 const xmlChar *);
    extern int xmlHashUpdateEntry2(xmlHashTablePtr, const xmlChar *,
				   const xmlChar *, void *,
				   xmlHashDeallocator);
    extern void *xmlHashLookup2(xmlHashTablePtr, const xmlChar *,
				const xmlChar *);
    extern int xmlHashAddEntry(xmlHashTablePtr, const xmlChar *, void *);
#ifdef __cplusplus
}
#endif
#endif
