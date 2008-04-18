#if (__LSB_VERSION__ >= 31 )
#ifndef _LIBXML2_LIBXML_THREADS_H_
#define _LIBXML2_LIBXML_THREADS_H_

#include <libxml2/libxml/globals.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
    typedef struct _xmlRMutex xmlRMutex;

    typedef xmlRMutex *xmlRMutexPtr;

    typedef struct _xmlMutex xmlMutex;

    typedef xmlMutex *xmlMutexPtr;

#endif				// __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31




#endif				// __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
    extern void xmlCleanupThreads(void);
    extern void xmlFreeMutex(xmlMutexPtr);
    extern void xmlFreeRMutex(xmlRMutexPtr);
    extern xmlGlobalStatePtr xmlGetGlobalState(void);
    extern int xmlGetThreadId(void);
    extern void xmlInitThreads(void);
    extern int xmlIsMainThread(void);
    extern void xmlLockLibrary(void);
    extern void xmlMutexLock(xmlMutexPtr);
    extern void xmlMutexUnlock(xmlMutexPtr);
    extern xmlMutexPtr xmlNewMutex(void);
    extern xmlRMutexPtr xmlNewRMutex(void);
    extern void xmlRMutexLock(xmlRMutexPtr);
    extern void xmlRMutexUnlock(xmlRMutexPtr);
    extern void xmlUnlockLibrary(void);
#endif				// __LSB_VERSION__ >= 3.1

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
