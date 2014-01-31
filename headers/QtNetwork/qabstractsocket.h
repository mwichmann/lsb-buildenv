#if (__LSB_VERSION__ >= 31 )
#ifndef _QTNETWORK_QABSTRACTSOCKET_H_
#define _QTNETWORK_QABSTRACTSOCKET_H_

class QAbstractSocket;
// *INDENT-OFF*

typedef enum QAbstractSocket::SocketState	
{
UnconnectedState = 0,	
Idle = 0,	
HostLookupState = 1,	
HostLookup = 1,	
ConnectingState = 2,	
Connecting = 2,	
Connected = 3,	
Connection = 3,	
ConnectedState = 3,	
BoundState = 4,	
ListeningState = 5,	
Closing = 6,	
ClosingState = 6
}
QAbstractSocket::State	
;

class QAbstractSocket;

enum QAbstractSocket::SocketType	
{
UnknownSocketType = -1,	
TcpSocket = 0,	
UdpSocket = 1
}
;

enum QAbstractSocket::NetworkLayerProtocol	
{
UnknownNetworkLayerProtocol = -1,	
IPv4Protocol = 0,	
IPv6Protocol = 1
}
;

enum QAbstractSocket::SocketError	
{
UnknownSocketError = -1,	
ConnectionRefusedError = 0,	
RemoteHostClosedError = 1,	
HostNotFoundError = 2,	
SocketAccessError = 3,	
SocketResourceError = 4,	
SocketTimeoutError = 5,	
DatagramTooLargeError = 6,	
NetworkError = 7,	
AddressInUseError = 8,	
SocketAddressNotAvailableError = 9,	
UnsupportedSocketOperationError = 10
}
;

enum QAbstractSocket::SocketState	
{
UnconnectedState = 0,	
Idle = 0,	
HostLookupState = 1,	
HostLookup = 1,	
ConnectingState = 2,	
Connecting = 2,	
Connected = 3,	
Connection = 3,	
ConnectedState = 3,	
BoundState = 4,	
ListeningState = 5,	
Closing = 6,	
ClosingState = 6
}
;

enum QAbstractSocket::Error	
{
ErrSocketRead = -1,	
ErrConnectionRefused = 0,	
ErrHostNotFound = 2
}
;


/* Function prototypes */

extern struct QMetaObject _ZN15QAbstractSocket16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
