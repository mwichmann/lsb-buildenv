#ifndef _QTCORE_QMUTEX_H_
#define _QTCORE_QMUTEX_H_

class QMutexLocker;
// *INDENT-OFF*

class QMutex
{
private:
public:
     QMutex(QMutex::RecursionMode);
     ~QMutex();
    void lock();
    bool tryLock();
    void unlock();
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

// *INDENT-ON*
#endif
