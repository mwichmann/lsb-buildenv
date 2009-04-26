#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_XMLMEMORY_H_
#define _LIBXML2_LIBXML_XMLMEMORY_H_

#include <stdio.h>
#include <stddef.h>
#include <libxml2/libxml/xmlversion.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef void (*xmlFreeFunc) (void *);

    typedef void *(*xmlMallocFunc) (size_t);

    typedef void *(*xmlReallocFunc) (void *, size_t);

    typedef char *(*xmlStrdupFunc) (const char *);


/* Function prototypes */

    extern void xmlCleanupMemory(void);
    extern int xmlGcMemGet(xmlFreeFunc * freeFunc,
			   xmlMallocFunc * mallocFunc,
			   xmlMallocFunc * mallocAtomicFunc,
			   xmlReallocFunc * reallocFunc,
			   xmlStrdupFunc * strdupFunc);
    extern int xmlGcMemSetup(xmlFreeFunc freeFunc,
			     xmlMallocFunc mallocFunc,
			     xmlMallocFunc mallocAtomicFunc,
			     xmlReallocFunc reallocFunc,
			     xmlStrdupFunc strdupFunc);
    extern int xmlInitMemory(void);
    extern void *xmlMallocAtomicLoc(size_t size, const char *file,
				    int line);
    extern void *xmlMallocLoc(size_t size, const char *file, int line);
    extern int xmlMemBlocks(void);
    extern void xmlMemDisplay(FILE * fp);
    extern void xmlMemFree(void *ptr);
    extern int xmlMemGet(xmlFreeFunc * freeFunc,
			 xmlMallocFunc * mallocFunc,
			 xmlReallocFunc * reallocFunc,
			 xmlStrdupFunc * strdupFunc);
    extern void *xmlMemMalloc(size_t size);
    extern void *xmlMemRealloc(void *ptr, size_t size);
    extern int xmlMemSetup(xmlFreeFunc freeFunc, xmlMallocFunc mallocFunc,
			   xmlReallocFunc reallocFunc,
			   xmlStrdupFunc strdupFunc);
    extern void xmlMemShow(FILE * fp, int nr);
    extern char *xmlMemStrdupLoc(const char *str, const char *file,
				 int line);
    extern int xmlMemUsed(void);
    extern void xmlMemoryDump(void);
    extern char *xmlMemoryStrdup(const char *str);
    extern void *xmlReallocLoc(void *ptr, size_t size, const char *file,
			       int line);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
