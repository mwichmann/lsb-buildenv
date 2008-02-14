#ifndef _QTCORE_QWAITCONDITION_H_
#define _QTCORE_QWAITCONDITION_H_

class QWaitCondition;
// *INDENT-OFF*

class QWaitCondition
{
private:
public:
     QWaitCondition();
     ~QWaitCondition();
    bool wait(QMutex*, unsigned long);
    void wakeOne();
    void wakeAll();
};

// *INDENT-ON*
#endif
