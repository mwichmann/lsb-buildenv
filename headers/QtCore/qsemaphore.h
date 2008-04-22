#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QSEMAPHORE_H_
#define _QTCORE_QSEMAPHORE_H_

class QSemaphore;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
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

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
