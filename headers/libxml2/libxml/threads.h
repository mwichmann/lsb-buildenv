#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_THREADS_H_
#define _LIBXML2_LIBXML_THREADS_H_

#include <libxml2/libxml/xmlversion.h>
#include <libxml2/libxml/globals.h>

#ifdef __cplusplus
extern "C" {
#endif


    typedef struct _xmlRMutex xmlRMutex;

    typedef xmlRMutex *xmlRMutexPtr;

    typedef struct _xmlMutex xmlMutex;

    typedef xmlMutex *xmlMutexPtr;


/* Function prototypes */

    extern void xmlCleanupThreads(void);
    extern void xmlFreeMutex(xmlMutexPtr tok);
    extern void xmlFreeRMutex(xmlRMutexPtr tok);
    extern xmlGlobalStatePtr xmlGetGlobalState(void);
    extern int xmlGetThreadId(void);
    extern void xmlInitThreads(void);
    extern int xmlIsMainThread(void);
    extern void xmlLockLibrary(void);
    extern void xmlMutexLock(xmlMutexPtr tok);
    extern void xmlMutexUnlock(xmlMutexPtr tok);
    extern xmlMutexPtr xmlNewMutex(void);
    extern xmlRMutexPtr xmlNewRMutex(void);
    extern void xmlRMutexLock(xmlRMutexPtr tok);
    extern void xmlRMutexUnlock(xmlRMutexPtr tok);
    extern void xmlUnlockLibrary(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
