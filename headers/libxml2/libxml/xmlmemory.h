#ifndef _LIBXML2_LIBXML_XMLMEMORY_H_
#define _LIBXML2_LIBXML_XMLMEMORY_H_

#include <stdio.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif





    typedef void (*xmlFreeFunc) (void *);

    typedef void *(*xmlMallocFunc) (size_t);

    typedef void *(*xmlReallocFunc) (void *, size_t);

    typedef char *(*xmlStrdupFunc) (const char *);


    extern void xmlCleanupMemory(void);
    extern void xmlMemFree(void *);
    extern void xmlMemShow(FILE *, int);
    extern int xmlMemSetup(xmlFreeFunc, xmlMallocFunc, xmlReallocFunc,
			   xmlStrdupFunc);
    extern void *xmlMemRealloc(void *, size_t);
    extern void *xmlMemMalloc(size_t);
    extern void xmlMemoryDump(void);
    extern int xmlInitMemory(void);
    extern int xmlMemGet(xmlFreeFunc *, xmlMallocFunc *, xmlReallocFunc *,
			 xmlStrdupFunc *);
    extern char *xmlMemoryStrdup(const char *);
    extern void *xmlReallocLoc(void *, size_t, const char *, int);
    extern int xmlGcMemSetup(xmlFreeFunc, xmlMallocFunc, xmlMallocFunc,
			     xmlReallocFunc, xmlStrdupFunc);
    extern int xmlMemUsed(void);
    extern void xmlMemDisplay(FILE *);
    extern int xmlMemBlocks(void);
    extern int xmlGcMemGet(xmlFreeFunc *, xmlMallocFunc *, xmlMallocFunc *,
			   xmlReallocFunc *, xmlStrdupFunc *);
    extern void *xmlMallocLoc(size_t, const char *, int);
    extern void *xmlMallocAtomicLoc(size_t, const char *, int);
    extern char *xmlMemStrdupLoc(const char *, const char *, int);
#ifdef __cplusplus
}
#endif
#endif
