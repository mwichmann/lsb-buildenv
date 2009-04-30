#if (__LSB_VERSION__ >= 31 )
#ifndef _QTNETWORK_QUDPSOCKET_H_
#define _QTNETWORK_QUDPSOCKET_H_

class QUdpSocket;
// *INDENT-OFF*

typedef class QFlags<QUdpSocket::BindFlag>QUdpSocket::BindMode	
;

class QUdpSocket;

enum _ZN10QUdpSocket8BindFlagE	
{
DefaultForPlatform = 0,	
ShareAddress = 1,	
DontShareAddress = 2,	
ReuseAddressHint = 4
}
;

class QFlags<QUdpSocket::BindFlag>;


/* Function prototypes */

extern struct QMetaObject _ZN10QUdpSocket16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
