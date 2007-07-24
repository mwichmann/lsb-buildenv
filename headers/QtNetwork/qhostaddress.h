#ifndef _QTNETWORK_QHOSTADDRESS_H_
#define _QTNETWORK_QHOSTADDRESS_H_

#include <QtCore/qglobal.h>
#include <QtCore/qstring.h>
#include <QtCore/qdebug.h>
#include <QtNetwork/qabstractsocket.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".Class." Q_IPV6ADDR;

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    enum N12QHostAddress14SpecialAddressE {
	Null,
	Broadcast,
	LocalHost,
	LocalHostIPv6,
	Any,
	AnyIPv6
    };


    extern Class _ZN12QHostAddressC2Ev(void);
    extern Class _ZN12QHostAddressC1Ev(void);
    extern Class _ZN12QHostAddressC2Ej(void);
    extern Class _ZN12QHostAddressC1Ej(void);
    extern Class _ZN12QHostAddressC2EPh(void);
    extern Class _ZN12QHostAddressC1EPh(void);
    extern Class _ZN12QHostAddressC2ERK12QIPv6Address(void);
    extern Class _ZN12QHostAddressC1ERK12QIPv6Address(void);
    extern Class _ZN12QHostAddressC2EPK8sockaddr(void);
    extern Class _ZN12QHostAddressC1EPK8sockaddr(void);
    extern Class _ZN12QHostAddressC2ERK7QString(void);
    extern Class _ZN12QHostAddressC1ERK7QString(void);
    extern Class _ZN12QHostAddressC2ERKS_(void);
    extern Class _ZN12QHostAddressC1ERKS_(void);
    extern Class _ZN12QHostAddressC2ENS_14SpecialAddressE(void);
    extern Class _ZN12QHostAddressC1ENS_14SpecialAddressE(void);
    extern Class _ZN12QHostAddressD2Ev(void);
    extern Class _ZN12QHostAddressD1Ev(void);
    extern Class _ZN12QHostAddressaSERKS_(void);
    extern Class _ZN12QHostAddressaSERK7QString(void);
    extern void _ZN12QHostAddress10setAddressEj(void);
    extern void _ZN12QHostAddress10setAddressEPh(void);
    extern void _ZN12QHostAddress10setAddressERK12QIPv6Address(void);
    extern void _ZN12QHostAddress10setAddressEPK8sockaddr(void);
    extern bool _ZN12QHostAddress10setAddressERK7QString(void);
    extern enum N15QAbstractSocket20NetworkLayerProtocolE
	_ZNK12QHostAddress8protocolEv(void);
    extern quint32 _ZNK12QHostAddress13toIPv4AddressEv(void);
    extern Q_IPV6ADDR _ZNK12QHostAddress13toIPv6AddressEv(void);
    extern Class _ZNK12QHostAddress8toStringEv(void);
    extern Class _ZNK12QHostAddress7scopeIdEv(void);
    extern void _ZN12QHostAddress10setScopeIdERK7QString(void);
    extern bool _ZNK12QHostAddresseqERKS_(void);
    extern bool _ZNK12QHostAddresseqENS_14SpecialAddressE(void);
    extern bool _ZNK12QHostAddress6isNullEv(void);
    extern void _ZN12QHostAddress5clearEv(void);
    extern Class _Zls6QDebugRK12QHostAddress(void);
#ifdef __cplusplus
}
#endif
#endif
