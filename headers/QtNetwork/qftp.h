#ifndef _QTNETWORK_QFTP_H_
#define _QTNETWORK_QFTP_H_

#include <QtCore/qglobal.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qiodevice.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N4QFtp5StateE {
	Unconnected,
	HostLookup,
	Connecting,
	Connected,
	LoggedIn,
	Closing
    };

    enum N4QFtp5ErrorE {
	NoError,
	UnknownError,
	HostNotFound,
	ConnectionRefused,
	NotConnected
    };

    enum N4QFtp7CommandE {
	None,
	SetTransferMode,
	SetProxy,
	ConnectToHost,
	Login,
	Close,
	List,
	Cd,
	Get,
	Put,
	Remove,
	Mkdir,
	Rmdir,
	Rename,
	RawCommand
    };

    enum N4QFtp12TransferModeE {
	Active,
	Passive
    };

    enum N4QFtp12TransferTypeE {
	Binary,
	Ascii
    };


    extern struct QMetaObject _ZN4QFtp16staticMetaObjectE;
    extern struct QMetaObject _ZNK4QFtp10metaObjectEv(void);
    extern void _ZN4QFtp11qt_metacastEPKc(void);
    extern int _ZN4QFtp11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN4QFtpC2EP7QObject(void);
    extern Class _ZN4QFtpC1EP7QObject(void);
    extern Class _ZN4QFtpD2Ev(void);
    extern Class _ZN4QFtpD1Ev(void);
    extern Class _ZN4QFtpD0Ev(void);
    extern int _ZN4QFtp8setProxyERK7QStringt(void);
    extern int _ZN4QFtp13connectToHostERK7QStringt(void);
    extern int _ZN4QFtp5loginERK7QStringS2_(void);
    extern int _ZN4QFtp5closeEv(void);
    extern int _ZN4QFtp15setTransferModeENS_12TransferModeE(void);
    extern int _ZN4QFtp4listERK7QString(void);
    extern int _ZN4QFtp2cdERK7QString(void);
    extern int _ZN4QFtp3getERK7QStringP9QIODeviceNS_12TransferTypeE(void);
    extern int
	_ZN4QFtp3putERK10QByteArrayRK7QStringNS_12TransferTypeE(void);
    extern int _ZN4QFtp3putEP9QIODeviceRK7QStringNS_12TransferTypeE(void);
    extern int _ZN4QFtp6removeERK7QString(void);
    extern int _ZN4QFtp5mkdirERK7QString(void);
    extern int _ZN4QFtp5rmdirERK7QString(void);
    extern int _ZN4QFtp6renameERK7QStringS2_(void);
    extern int _ZN4QFtp10rawCommandERK7QString(void);
    extern qint64 _ZNK4QFtp14bytesAvailableEv(void);
    extern qint64 _ZN4QFtp4readEPcx(void);
    extern Class _ZN4QFtp7readAllEv(void);
    extern int _ZNK4QFtp9currentIdEv(void);
    extern Class _ZNK4QFtp13currentDeviceEv(void);
    extern enum N4QFtp7CommandE _ZNK4QFtp14currentCommandEv(void);
    extern bool _ZNK4QFtp18hasPendingCommandsEv(void);
    extern void _ZN4QFtp20clearPendingCommandsEv(void);
    extern enum N4QFtp5StateE _ZNK4QFtp5stateEv(void);
    extern enum N4QFtp5ErrorE _ZNK4QFtp5errorEv(void);
    extern Class _ZNK4QFtp11errorStringEv(void);
    extern void _ZN4QFtp5abortEv(void);
    extern void _ZN4QFtp12stateChangedEi(void);
    extern void _ZN4QFtp8listInfoERK8QUrlInfo(void);
    extern void _ZN4QFtp9readyReadEv(void);
    extern void _ZN4QFtp20dataTransferProgressExx(void);
    extern void _ZN4QFtp15rawCommandReplyEiRK7QString(void);
    extern void _ZN4QFtp14commandStartedEi(void);
    extern void _ZN4QFtp15commandFinishedEib(void);
    extern void _ZN4QFtp4doneEb(void);
    extern Class _ZN4QFtpC2EP7QObjectPKc(void);
    extern Class _ZN4QFtpC1EP7QObjectPKc(void);
#ifdef __cplusplus
}
#endif
#endif
