#ifndef _QTCORE_QEVENTLOOP_H_
#define _QTCORE_QEVENTLOOP_H_

class QFlags < QEventLoop::ProcessEventsFlag >;
// *INDENT-OFF*




typedef ProcessEventsFlags	
;

class QEventLoop : public QObject
{
private:
public:
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


extern struct QMetaObject _ZN10QEventLoop16staticMetaObjectE ;
extern struct QMetaObject _ZNK10QEventLoop10metaObjectEv(void);
extern void _ZN10QEventLoop11qt_metacastEPKc(void);
extern int _ZN10QEventLoop11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QEventLoop _ZN10QEventLoopC2EP7QObject(void);
extern QEventLoop _ZN10QEventLoopC1EP7QObject(void);
extern QEventLoop _ZN10QEventLoopD2Ev(void);
extern QEventLoop _ZN10QEventLoopD1Ev(void);
extern QEventLoop _ZN10QEventLoopD0Ev(void);
extern bool _ZN10QEventLoop13processEventsE6QFlagsINS_17ProcessEventsFlagEE(void);
extern void _ZN10QEventLoop13processEventsE6QFlagsINS_17ProcessEventsFlagEEi(void);
extern int _ZN10QEventLoop4execE6QFlagsINS_17ProcessEventsFlagEE(void);
extern void _ZN10QEventLoop4exitEi(void);
extern bool _ZNK10QEventLoop9isRunningEv(void);
extern void _ZN10QEventLoop6wakeUpEv(void);
extern void _ZN10QEventLoop4quitEv(void);
// *INDENT-ON*
#endif
