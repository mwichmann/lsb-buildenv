#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QSEMAPHORE_H_
#define _QTCORE_QSEMAPHORE_H_

class QSemaphore;
// *INDENT-OFF*

class QSemaphore
{
private:
public:
     QSemaphore(int);
     ~QSemaphore();
    void acquire(int);
    bool tryAcquire(int);
    void release(int);
    int available() const;
};

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
