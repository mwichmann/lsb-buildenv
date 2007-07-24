#ifndef _QTNETWORK_QABSTRACTSOCKET_H_
#define _QTNETWORK_QABSTRACTSOCKET_H_

#include <QtCore/qglobal.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qiodevice.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef enum N15QAbstractSocket11SocketStateE {
	UnconnectedState,
	Idle,
	HostLookupState,
	HostLookup,
	ConnectingState,
	Connecting,
	ConnectedState,
	Connected,
	Connection,
	BoundState,
	ListeningState,
	ClosingState,
	Closing
    } N15QAbstractSocket5StateE;

    Unknown Type:".Class.";

    enum N15QAbstractSocket10SocketTypeE {
	UnknownSocketType,
	TcpSocket,
	UdpSocket
    };

    enum N15QAbstractSocket20NetworkLayerProtocolE {
	UnknownNetworkLayerProtocol,
	IPv4Protocol,
	IPv6Protocol
    };

    enum N15QAbstractSocket11SocketErrorE {
	UnknownSocketError,
	ConnectionRefusedError,
	RemoteHostClosedError,
	HostNotFoundError,
	SocketAccessError,
	SocketResourceError,
	SocketTimeoutError,
	DatagramTooLargeError,
	NetworkError,
	AddressInUseError,
	SocketAddressNotAvailableError,
	UnsupportedSocketOperationError
    };

    enum N15QAbstractSocket11SocketStateE {
	UnconnectedState,
	Idle,
	HostLookupState,
	HostLookup,
	ConnectingState,
	Connecting,
	ConnectedState,
	Connected,
	Connection,
	BoundState,
	ListeningState,
	ClosingState,
	Closing
    };

    enum N15QAbstractSocket5ErrorE {
	ErrSocketRead,
	ErrConnectionRefused,
	ErrHostNotFound
    };


    extern struct QMetaObject _ZN15QAbstractSocket16staticMetaObjectE;
    extern struct QMetaObject _ZNK15QAbstractSocket10metaObjectEv(void);
    extern void _ZN15QAbstractSocket11qt_metacastEPKc(void);
    extern int
	_ZN15QAbstractSocket11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN15QAbstractSocketC2ENS_10SocketTypeEP7QObject(void);
    extern Class _ZN15QAbstractSocketC1ENS_10SocketTypeEP7QObject(void);
    extern Class _ZN15QAbstractSocketD2Ev(void);
    extern Class _ZN15QAbstractSocketD1Ev(void);
    extern Class _ZN15QAbstractSocketD0Ev(void);
    extern void
	_ZN15QAbstractSocket13connectToHostERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern void
	_ZN15QAbstractSocket13connectToHostERK12QHostAddresst6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern void _ZN15QAbstractSocket18disconnectFromHostEv(void);
    extern bool _ZNK15QAbstractSocket7isValidEv(void);
    extern qint64 _ZNK15QAbstractSocket14bytesAvailableEv(void);
    extern qint64 _ZNK15QAbstractSocket12bytesToWriteEv(void);
    extern bool _ZNK15QAbstractSocket11canReadLineEv(void);
    extern quint16 _ZNK15QAbstractSocket9localPortEv(void);
    extern _ZNK15QAbstractSocket12localAddressEv(void);
    extern quint16 _ZNK15QAbstractSocket8peerPortEv(void);
    extern _ZNK15QAbstractSocket11peerAddressEv(void);
    extern Class _ZNK15QAbstractSocket8peerNameEv(void);
    extern qint64 _ZNK15QAbstractSocket14readBufferSizeEv(void);
    extern void _ZN15QAbstractSocket17setReadBufferSizeEx(void);
    extern void _ZN15QAbstractSocket5abortEv(void);
    extern int _ZNK15QAbstractSocket16socketDescriptorEv(void);
    extern bool
	_ZN15QAbstractSocket19setSocketDescriptorEiNS_11SocketStateE6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern enum N15QAbstractSocket10SocketTypeE
	_ZNK15QAbstractSocket10socketTypeEv(void);
    extern enum N15QAbstractSocket11SocketStateE
	_ZNK15QAbstractSocket5stateEv(void);
    extern enum N15QAbstractSocket11SocketErrorE
	_ZNK15QAbstractSocket5errorEv(void);
    extern void _ZN15QAbstractSocket5closeEv(void);
    extern bool _ZNK15QAbstractSocket12isSequentialEv(void);
    extern bool _ZNK15QAbstractSocket5atEndEv(void);
    extern bool _ZN15QAbstractSocket5flushEv(void);
    extern bool _ZN15QAbstractSocket16waitForConnectedEi(void);
    extern bool _ZN15QAbstractSocket16waitForReadyReadEi(void);
    extern bool _ZN15QAbstractSocket19waitForBytesWrittenEi(void);
    extern bool _ZN15QAbstractSocket19waitForDisconnectedEi(void);
    extern void _ZN15QAbstractSocket8setProxyERK13QNetworkProxy(void);
    extern _ZNK15QAbstractSocket5proxyEv(void);
    extern void _ZN15QAbstractSocket9hostFoundEv(void);
    extern void _ZN15QAbstractSocket9connectedEv(void);
    extern void _ZN15QAbstractSocket12disconnectedEv(void);
    extern void _ZN15QAbstractSocket12stateChangedENS_11SocketStateE(void);
    extern void _ZN15QAbstractSocket5errorENS_11SocketErrorE(void);
    extern void
	_ZN15QAbstractSocket27connectToHostImplementationERK7QStringt6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern void
	_ZN15QAbstractSocket32disconnectFromHostImplementationEv(void);
    extern qint64 _ZN15QAbstractSocket8readDataEPcx(void);
    extern qint64 _ZN15QAbstractSocket12readLineDataEPcx(void);
    extern qint64 _ZN15QAbstractSocket9writeDataEPKcx(void);
    extern void
	_ZN15QAbstractSocket14setSocketStateENS_11SocketStateE(void);
    extern void
	_ZN15QAbstractSocket14setSocketErrorENS_11SocketErrorE(void);
    extern void _ZN15QAbstractSocket12setLocalPortEt(void);
    extern void
	_ZN15QAbstractSocket15setLocalAddressERK12QHostAddress(void);
    extern void _ZN15QAbstractSocket11setPeerPortEt(void);
    extern void
	_ZN15QAbstractSocket14setPeerAddressERK12QHostAddress(void);
    extern void _ZN15QAbstractSocket11setPeerNameERK7QString(void);
    extern Class
	_ZN15QAbstractSocketC2ENS_10SocketTypeER22QAbstractSocketPrivateP7QObject
	(void);
    extern Class
	_ZN15QAbstractSocketC1ENS_10SocketTypeER22QAbstractSocketPrivateP7QObject
	(void);
    extern void _ZN15QAbstractSocket16connectionClosedEv(void);
    extern void _ZN15QAbstractSocket20delayedCloseFinishedEv(void);
#ifdef __cplusplus
}
#endif
#endif
