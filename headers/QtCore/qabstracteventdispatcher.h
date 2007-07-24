#ifndef _QTCORE_QABSTRACTEVENTDISPATCHER_H_
#define _QTCORE_QABSTRACTEVENTDISPATCHER_H_

#include <QtCore/qpair.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef struct N5QPairIiiEE N24QAbstractEventDispatcher9TimerInfoE;

    typedef bool N24QAbstractEventDispatcher11EventFilterE;

    Unknown Type:".Class.";





    extern struct QMetaObject
	_ZN24QAbstractEventDispatcher16staticMetaObjectE;
    extern struct QMetaObject
	_ZNK24QAbstractEventDispatcher10metaObjectEv(void);
    extern void _ZN24QAbstractEventDispatcher11qt_metacastEPKc(void);
    extern int
	_ZN24QAbstractEventDispatcher11qt_metacallEN11QMetaObject4CallEiPPv
	(void);
    extern Class _ZN24QAbstractEventDispatcherC2EP7QObject(void);
    extern Class _ZN24QAbstractEventDispatcherC1EP7QObject(void);
    extern Class _ZN24QAbstractEventDispatcherD2Ev(void);
    extern Class _ZN24QAbstractEventDispatcherD1Ev(void);
    extern Class _ZN24QAbstractEventDispatcherD0Ev(void);
    extern Class _ZN24QAbstractEventDispatcher8instanceEP7QThread(void);
    extern int
	_ZN24QAbstractEventDispatcher13registerTimerEiP7QObject(void);
    extern void _ZN24QAbstractEventDispatcher10startingUpEv(void);
    extern void _ZN24QAbstractEventDispatcher11closingDownEv(void);
    extern N24QAbstractEventDispatcher11EventFilterE
	_ZN24QAbstractEventDispatcher14setEventFilterEPFbPvE(void);
    extern bool _ZN24QAbstractEventDispatcher11filterEventEPv(void);
    extern void _ZN24QAbstractEventDispatcher12aboutToBlockEv(void);
    extern void _ZN24QAbstractEventDispatcher5awakeEv(void);
    extern Class
	_ZN24QAbstractEventDispatcherC2ER31QAbstractEventDispatcherPrivateP7QObject
	(void);
    extern Class
	_ZN24QAbstractEventDispatcherC1ER31QAbstractEventDispatcherPrivateP7QObject
	(void);
#ifdef __cplusplus
}
#endif
#endif
