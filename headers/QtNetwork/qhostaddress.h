#if (__LSB_VERSION__ >= 31 )
#ifndef _QTNETWORK_QHOSTADDRESS_H_
#define _QTNETWORK_QHOSTADDRESS_H_

class QHostAddress;
// *INDENT-OFF*

typedef class QIPv6AddressQ_IPV6ADDR	
;

class QIPv6Address;

class QHostAddress;

enum QHostAddress::SpecialAddress	
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

extern QDebug operator<<(QDebug, QHostAddress const&)(const QHostAddress &);
#if __LSB_VERSION__ >= 32
extern 
