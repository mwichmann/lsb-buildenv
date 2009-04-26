#if (__LSB_VERSION__ >= 31 )
#ifndef _QTNETWORK_QHTTP_H_
#define _QTNETWORK_QHTTP_H_

class QHttpResponseHeader;
// *INDENT-OFF*

class QHttpHeader;

class QHttpResponseHeader;

class QHttpRequestHeader;

class QHttp;

enum _ZN5QHttp5StateE	
{
Unconnected = 0,	
HostLookup = 1,	
Connecting = 2,	
Sending = 3,	
Reading = 4,	
Connected = 5,	
Closing = 6
}
;

enum _ZN5QHttp5ErrorE	
{
NoError = 0,	
UnknownError = 1,	
HostNotFound = 2,	
ConnectionRefused = 3,	
UnexpectedClose = 4,	
InvalidResponseHeader = 5,	
WrongContentLength = 6,	
Aborted = 7
}
;


/* Function prototypes */

extern struct QMetaObject _ZN5QHttp16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
