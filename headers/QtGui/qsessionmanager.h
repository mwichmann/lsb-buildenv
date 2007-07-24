#ifndef _QTGUI_QSESSIONMANAGER_H_
#define _QTGUI_QSESSIONMANAGER_H_

#include <QtCore/qstringlist.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N15QSessionManager11RestartHintE {
	RestartIfRunning,
	RestartAnyway,
	RestartImmediately,
	RestartNever
    };


    extern struct QMetaObject _ZN15QSessionManager16staticMetaObjectE;
    extern struct QMetaObject _ZNK15QSessionManager10metaObjectEv(void);
    extern void _ZN15QSessionManager11qt_metacastEPKc(void);
    extern int
	_ZN15QSessionManager11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZNK15QSessionManager9sessionIdEv(void);
    extern Class _ZNK15QSessionManager10sessionKeyEv(void);
    extern void _ZNK15QSessionManager6handleEv(void);
    extern bool _ZN15QSessionManager17allowsInteractionEv(void);
    extern bool _ZN15QSessionManager22allowsErrorInteractionEv(void);
    extern void _ZN15QSessionManager7releaseEv(void);
    extern void _ZN15QSessionManager6cancelEv(void);
    extern void
	_ZN15QSessionManager14setRestartHintENS_11RestartHintE(void);
    extern enum N15QSessionManager11RestartHintE
	_ZNK15QSessionManager11restartHintEv(void);
    extern void
	_ZN15QSessionManager17setRestartCommandERK11QStringList(void);
    extern Class _ZNK15QSessionManager14restartCommandEv(void);
    extern void
	_ZN15QSessionManager17setDiscardCommandERK11QStringList(void);
    extern Class _ZNK15QSessionManager14discardCommandEv(void);
    extern void
	_ZN15QSessionManager18setManagerPropertyERK7QStringS2_(void);
    extern void
	_ZN15QSessionManager18setManagerPropertyERK7QStringRK11QStringList
	(void);
    extern bool _ZNK15QSessionManager8isPhase2Ev(void);
    extern void _ZN15QSessionManager13requestPhase2Ev(void);
    extern Class _ZN15QSessionManagerD2Ev(void);
    extern Class _ZN15QSessionManagerD1Ev(void);
    extern Class _ZN15QSessionManagerD0Ev(void);
#ifdef __cplusplus
}
#endif
#endif
