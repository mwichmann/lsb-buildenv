#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QBASICTIMER_H_
#define _QTCORE_QBASICTIMER_H_

class QBasicTimer;
// *INDENT-OFF*

class QBasicTimer
{
private:
public:
    void start(int, QObject*);
    void stop();
};

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
