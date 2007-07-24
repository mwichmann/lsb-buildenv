#ifndef _QTCORE_QEVENTLOOP_H_
#define _QTCORE_QEVENTLOOP_H_

#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N10QEventLoop18ProcessEventsFlagsE;

    Unknown Type:".Class.";

    enum N10QEventLoop17ProcessEventsFlagE {
	AllEvents,
	ExcludeUserInputEvents,
	ExcludeUserInput,
	ExcludeSocketNotifiers,
	WaitForMoreEvents,
	WaitForMore,
	X11ExcludeTimers,
	DeferredDeletion
    };

    Unknown Type:".Class.";


    extern struct QMetaObject _ZN10QEventLoop16staticMetaObjectE;
    extern struct QMetaObject _ZNK10QEventLoop10metaObjectEv(void);
    extern void _ZN10QEventLoop11qt_metacastEPKc(void);
    extern int _ZN10QEventLoop11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN10QEventLoopC2EP7QObject(void);
    extern Class _ZN10QEventLoopC1EP7QObject(void);
    extern Class _ZN10QEventLoopD2Ev(void);
    extern Class _ZN10QEventLoopD1Ev(void);
    extern Class _ZN10QEventLoopD0Ev(void);
    extern bool
	_ZN10QEventLoop13processEventsE6QFlagsINS_17ProcessEventsFlagEE
	(void);
    extern void
	_ZN10QEventLoop13processEventsE6QFlagsINS_17ProcessEventsFlagEEi
	(void);
    extern int _ZN10QEventLoop4execE6QFlagsINS_17ProcessEventsFlagEE(void);
    extern void _ZN10QEventLoop4exitEi(void);
    extern bool _ZNK10QEventLoop9isRunningEv(void);
    extern void _ZN10QEventLoop6wakeUpEv(void);
    extern void _ZN10QEventLoop4quitEv(void);
#ifdef __cplusplus
}
#endif
#endif
