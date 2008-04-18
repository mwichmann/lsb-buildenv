#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XMLMEMORY_H_
#define _LIBXML2_LIBXML_XMLMEMORY_H_

#include <stdio.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
    typedef void (*xmlFreeFunc) (void *);

    typedef void *(*xmlMallocFunc) (size_t);

    typedef void *(*xmlReallocFunc) (void *, size_t);

    typedef char *(*xmlStrdupFunc) (const char *);

#endif				// __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
    extern void xmlCleanupMemory(void);
    extern int xmlGcMemGet(xmlFreeFunc *, xmlMallocFunc *, xmlMallocFunc *,
			   xmlReallocFunc *, xmlStrdupFunc *);
    extern int xmlGcMemSetup(xmlFreeFunc, xmlMallocFunc, xmlMallocFunc,
			     xmlReallocFunc, xmlStrdupFunc);
    extern int xmlInitMemory(void);
    extern void *xmlMallocAtomicLoc(size_t, const char *, int);
    extern void *xmlMallocLoc(size_t, const char *, int);
    extern int xmlMemBlocks(void);
    extern void xmlMemDisplay(FILE *);
    extern void xmlMemFree(void *);
    extern int xmlMemGet(xmlFreeFunc *, xmlMallocFunc *, xmlReallocFunc *,
			 xmlStrdupFunc *);
    extern void *xmlMemMalloc(size_t);
    extern void *xmlMemRealloc(void *, size_t);
    extern int xmlMemSetup(xmlFreeFunc, xmlMallocFunc, xmlReallocFunc,
			   xmlStrdupFunc);
    extern void xmlMemShow(FILE *, int);
    extern char *xmlMemStrdupLoc(const char *, const char *, int);
    extern int xmlMemUsed(void);
    extern void xmlMemoryDump(void);
    extern char *xmlMemoryStrdup(const char *);
    extern void *xmlReallocLoc(void *, size_t, const char *, int);
#endif				// __LSB_VERSION__ >= 3.1

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
