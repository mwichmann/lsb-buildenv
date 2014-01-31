#if (__LSB_VERSION__ >= 31 )
#ifndef _QTNETWORK_QFTP_H_
#define _QTNETWORK_QFTP_H_

class QFtp;
// *INDENT-OFF*

class QFtp;

enum QFtp::State	
{
Unconnected = 0,	
HostLookup = 1,	
Connecting = 2,	
Connected = 3,	
LoggedIn = 4,	
Closing = 5
}
;

enum QFtp::Error	
{
NoError = 0,	
UnknownError = 1,	
HostNotFound = 2,	
ConnectionRefused = 3,	
NotConnected = 4
}
;

enum QFtp::Command	
{
None = 0,	
SetTransferMode = 1,	
SetProxy = 2,	
ConnectToHost = 3,	
Login = 4,	
Close = 5,	
List = 6,	
Cd = 7,	
Get = 8,	
Put = 9,	
Remove = 10,	
Mkdir = 11,	
Rmdir = 12,	
Rename = 13,	
RawCommand = 14
}
;

enum QFtp::TransferMode	
{
Active = 0,	
Passive = 1
}
;

enum QFtp::TransferType	
{
Binary = 0,	
Ascii = 1
}
;


/* Function prototypes */

extern struct QMetaObject _ZN4QFtp16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
