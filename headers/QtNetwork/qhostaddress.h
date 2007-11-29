#ifndef _QTNETWORK_QHOSTADDRESS_H_
#define _QTNETWORK_QHOSTADDRESS_H_

class QHostAddress;
// *INDENT-OFF*




typedef class QIPv6Address
{
private:
public:
}Q_IPV6ADDR	
;

class QIPv6Address
{
private:
public:
};

class QHostAddress
{
private:
public:
};

enum SpecialAddress	
{
Null = 0,	
Broadcast = 1,	
LocalHost = 2,	
LocalHostIPv6 = 3,	
Any = 4,	
AnyIPv6 = 5
}
;


extern QHostAddress _ZN12QHostAddressC2Ev(void);
extern QHostAddress _ZN12QHostAddressC1Ev(void);
extern QHostAddress _ZN12QHostAddressC2Ej(void);
extern QHostAddress _ZN12QHostAddressC1Ej(void);
extern QHostAddress _ZN12QHostAddressC2EPh(void);
extern QHostAddress _ZN12QHostAddressC1EPh(void);
extern QHostAddress _ZN12QHostAddressC2ERK12QIPv6Address(void);
extern QHostAddress _ZN12QHostAddressC1ERK12QIPv6Address(void);
extern QHostAddress _ZN12QHostAddressC2EPK8sockaddr(void);
extern QHostAddress _ZN12QHostAddressC1EPK8sockaddr(void);
extern QHostAddress _ZN12QHostAddressC2ERK7QString(void);
extern QHostAddress _ZN12QHostAddressC1ERK7QString(void);
extern QHostAddress _ZN12QHostAddressC2ERKS_(void);
extern QHostAddress _ZN12QHostAddressC1ERKS_(void);
extern QHostAddress _ZN12QHostAddressC2ENS_14SpecialAddressE(void);
extern QHostAddress _ZN12QHostAddressC1ENS_14SpecialAddressE(void);
extern  _ZN12QHostAddressD2Ev(void);
extern  _ZN12QHostAddressD1Ev(void);
extern QHostAddress _ZN12QHostAddressaSERKS_(void);
extern QHostAddress _ZN12QHostAddressaSERK7QString(void);
extern void _ZN12QHostAddress10setAddressEj(void);
extern void _ZN12QHostAddress10setAddressEPh(void);
extern void _ZN12QHostAddress10setAddressERK12QIPv6Address(void);
extern void _ZN12QHostAddress10setAddressEPK8sockaddr(void);
extern bool _ZN12QHostAddress10setAddressERK7QString(void);
extern enum N15QAbstractSocket20NetworkLayerProtocolE _ZNK12QHostAddress8protocolEv(void);
extern quint32 _ZNK12QHostAddress13toIPv4AddressEv(void);
extern Q_IPV6ADDR _ZNK12QHostAddress13toIPv6AddressEv(void);
extern QString _ZNK12QHostAddress8toStringEv(void);
extern QString _ZNK12QHostAddress7scopeIdEv(void);
extern void _ZN12QHostAddress10setScopeIdERK7QString(void);
extern bool _ZNK12QHostAddresseqERKS_(void);
extern bool _ZNK12QHostAddresseqENS_14SpecialAddressE(void);
extern bool _ZNK12QHostAddress6isNullEv(void);
extern void _ZN12QHostAddress5clearEv(void);
extern QDebug _Zls6QDebugRK12QHostAddress(void);
// *INDENT-ON*
#endif
