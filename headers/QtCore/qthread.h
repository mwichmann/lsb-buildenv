#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QTHREAD_H_
#define _QTCORE_QTHREAD_H_

class QThread;
// *INDENT-OFF*

class QThread : public QObject
{
private:
public:
    static  currentThreadId();
    static QThread * currentThread();
     QThread(QObject*);
     ~QThread();
    void setPriority(QThread::Priority);
    enum _ZN7QThread8PriorityE priority() const;
    bool isFinished() const;
    bool isRunning() const;
    void setStackSize(unsigned int);
    uint stackSize() const;
    void exit(int);
    void start(QThread::Priority);
    void terminate();
    void quit();
    bool wait(unsigned long);
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
protected:
    void started();
    void finished();
    void terminated();
    int exec();
    static void setTerminationEnabled(bool);
    static void sleep(unsigned long);
    static void msleep(unsigned long);
    static void usleep(unsigned long);
};

enum Priority	
{
IdlePriority = 0,	
LowestPriority = 1,	
LowPriority = 2,	
NormalPriority = 3,	
HighPriority = 4,	
HighestPriority = 5,	
TimeCriticalPriority = 6,	
InheritPriority = 7
}
;


/* Function prototypes */

extern struct QMetaObject _ZN7QThread16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
