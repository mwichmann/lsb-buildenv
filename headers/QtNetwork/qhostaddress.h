#if (__LSB_VERSION__ >= 31 )
#ifndef _QTNETWORK_QHOSTADDRESS_H_
#define _QTNETWORK_QHOSTADDRESS_H_

class QHostAddress;
// *INDENT-OFF*

typedef class QIPv6AddressQ_IPV6ADDR	
;

class QIPv6Address;

class QHostAddress;

enum _ZN12QHostAddress14SpecialAddressE	
{
Null = 0,	
Broadcast = 1,	
LocalHost = 2,	
LocalHostIPv6 = 3,	
Any = 4,	
AnyIPv6 = 5
}
;


/* Function prototypes */

extern QDebug _Zls6QDebugRK12QHostAddress(const QHostAddress &);
#if __LSB_VERSION__ >= 32
extern  _Z5qHashRK12QHostAddress(const QHostAddress &);
extern  _ZlsR11QDataStreamRK12QHostAddress(QDataStream &, const QHostAddress &);
extern  _ZrsR11QDataStreamR12QHostAddress(QDataStream &, QHostAddress &);
#endif /* __LSB_VERSION__ >= 3.2 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
