#ifndef _QTNETWORK_QUDPSOCKET_H_
#define _QTNETWORK_QUDPSOCKET_H_

#include <QtCore/qglobal.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qiodevice.h>
#include <QtNetwork/qabstractsocket.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N10QUdpSocket8BindModeE;

    Unknown Type:".Class.";

    enum N10QUdpSocket8BindFlagE {
	DefaultForPlatform,
	ShareAddress,
	DontShareAddress,
	ReuseAddressHint
    };

    Unknown Type:".Class.";


    extern struct QMetaObject _ZN10QUdpSocket16staticMetaObjectE;
    extern struct QMetaObject _ZNK10QUdpSocket10metaObjectEv(void);
    extern void _ZN10QUdpSocket11qt_metacastEPKc(void);
    extern int _ZN10QUdpSocket11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN10QUdpSocketC2EP7QObject(void);
    extern Class _ZN10QUdpSocketC1EP7QObject(void);
    extern Class _ZN10QUdpSocketD2Ev(void);
    extern Class _ZN10QUdpSocketD1Ev(void);
    extern Class _ZN10QUdpSocketD0Ev(void);
    extern bool _ZN10QUdpSocket4bindERK12QHostAddresst(void);
    extern bool _ZN10QUdpSocket4bindEt(void);
    extern bool
	_ZN10QUdpSocket4bindERK12QHostAddresst6QFlagsINS_8BindFlagEE(void);
    extern bool _ZN10QUdpSocket4bindEt6QFlagsINS_8BindFlagEE(void);
    extern bool _ZNK10QUdpSocket19hasPendingDatagramsEv(void);
    extern qint64 _ZNK10QUdpSocket19pendingDatagramSizeEv(void);
    extern qint64 _ZN10QUdpSocket12readDatagramEPcxP12QHostAddressPt(void);
    extern qint64
	_ZN10QUdpSocket13writeDatagramEPKcxRK12QHostAddresst(void);
#ifdef __cplusplus
}
#endif
#endif
