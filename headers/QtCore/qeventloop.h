#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QEVENTLOOP_H_
#define _QTCORE_QEVENTLOOP_H_

class QFlags < QEventLoop::ProcessEventsFlag >;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef class QFlags<QEventLoop::ProcessEventsFlag>
{
private:
public:
}ProcessEventsFlags	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
class QEventLoop : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QEventLoop(QObject*);
     ~QEventLoop();
    bool processEvents(QFlags<QEventLoop::ProcessEventsFlag>);
    void processEvents(QFlags<QEventLoop::ProcessEventsFlag>, int);
    int exec(QFlags<QEventLoop::ProcessEventsFlag>);
    void exit(int);
    bool isRunning() const;
    void wakeUp();
    void quit();
};

enum ProcessEventsFlag	
{
AllEvents = 0,	
ExcludeUserInputEvents = 1,	
ExcludeUserInput = 1,	
ExcludeSocketNotifiers = 2,	
WaitForMoreEvents = 4,	
WaitForMore = 4,	
X11ExcludeTimers = 8,	
DeferredDeletion = 16
}
;

class QFlags<QEventLoop::ProcessEventsFlag>
{
private:
public:
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN10QEventLoop16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
