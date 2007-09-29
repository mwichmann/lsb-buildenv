#ifndef _QTCORE_QMUTEX_H_
#define _QTCORE_QMUTEX_H_

class QMutexLocker;
// *INDENT-OFF*



class QMutex
{
private:
public:
};

enum RecursionMode	
{
NonRecursive = 0,	
Recursive = 1
}
;

class QMutexLocker
{
private:
public:
};


extern QMutex _ZN6QMutexC2ENS_13RecursionModeE(void);
extern QMutex _ZN6QMutexC1ENS_13RecursionModeE(void);
extern QMutex _ZN6QMutexD2Ev(void);
extern QMutex _ZN6QMutexD1Ev(void);
extern void _ZN6QMutex4lockEv(void);
extern bool _ZN6QMutex7tryLockEv(void);
extern void _ZN6QMutex6unlockEv(void);
// *INDENT-ON*
#endif
