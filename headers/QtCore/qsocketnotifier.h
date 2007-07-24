#ifndef _QTCORE_QSOCKETNOTIFIER_H_
#define _QTCORE_QSOCKETNOTIFIER_H_

#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N15QSocketNotifier4TypeE {
	Read,
	Write,
	Exception
    };


    extern struct QMetaObject _ZN15QSocketNotifier16staticMetaObjectE;
    extern struct QMetaObject _ZNK15QSocketNotifier10metaObjectEv(void);
    extern void _ZN15QSocketNotifier11qt_metacastEPKc(void);
    extern int
	_ZN15QSocketNotifier11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN15QSocketNotifierC2EiNS_4TypeEP7QObject(void);
    extern Class _ZN15QSocketNotifierC1EiNS_4TypeEP7QObject(void);
    extern Class _ZN15QSocketNotifierC2EiNS_4TypeEP7QObjectPKc(void);
    extern Class _ZN15QSocketNotifierC1EiNS_4TypeEP7QObjectPKc(void);
    extern Class _ZN15QSocketNotifierD2Ev(void);
    extern Class _ZN15QSocketNotifierD1Ev(void);
    extern Class _ZN15QSocketNotifierD0Ev(void);
    extern void _ZN15QSocketNotifier10setEnabledEb(void);
    extern void _ZN15QSocketNotifier9activatedEi(void);
    extern bool _ZN15QSocketNotifier5eventEP6QEvent(void);
#ifdef __cplusplus
}
#endif
#endif
