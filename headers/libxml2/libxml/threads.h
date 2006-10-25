#ifndef _LIBXML2_LIBXML_THREADS_H_
#define _LIBXML2_LIBXML_THREADS_H_

#include <libxml2/libxml/globals.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef struct _xmlRMutex xmlRMutex;

    typedef xmlRMutex *xmlRMutexPtr;

    typedef struct _xmlMutex xmlMutex;

    typedef xmlMutex *xmlMutexPtr;






    extern int xmlGetThreadId(void);
    extern xmlRMutexPtr xmlNewRMutex(void);
    extern void xmlCleanupThreads(void);
    extern void xmlFreeRMutex(xmlRMutexPtr);
    extern xmlMutexPtr xmlNewMutex(void);
    extern int xmlIsMainThread(void);
    extern void xmlUnlockLibrary(void);
    extern void xmlRMutexLock(xmlRMutexPtr);
    extern void xmlRMutexUnlock(xmlRMutexPtr);
    extern void xmlMutexUnlock(xmlMutexPtr);
    extern void xmlMutexLock(xmlMutexPtr);
    extern xmlGlobalStatePtr xmlGetGlobalState(void);
    extern void xmlInitThreads(void);
    extern void xmlLockLibrary(void);
    extern void xmlFreeMutex(xmlMutexPtr);
#ifdef __cplusplus
}
#endif
#endif
