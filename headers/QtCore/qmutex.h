#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QMUTEX_H_
#define _QTCORE_QMUTEX_H_

class QMutexLocker;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
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

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
