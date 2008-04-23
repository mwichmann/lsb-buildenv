#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QBASICTIMER_H_
#define _QTCORE_QBASICTIMER_H_

class QBasicTimer;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QBasicTimer
{
private:
public:
    void start(int, QObject*);
    void stop();
};

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
