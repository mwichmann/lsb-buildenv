#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QFILE_H_
#define _QTCORE_QFILE_H_

class QFile;
// *INDENT-OFF*

typedef class QFlags<QFile::Permission>QFile::Permissions	
;

typedef class QByteArrayQFile::EncoderFn	
;

typedef class QStringQFile::DecoderFn	
;

typedef enum _ZN5QFile10PermissionE	
{
ExeOther = 1,	
WriteOther = 2,	
ReadOther = 4,	
ExeGroup = 16,	
WriteGroup = 32,	
ReadGroup = 64,	
ExeUser = 256,	
WriteUser = 512,	
ReadUser = 1024,	
ExeOwner = 4096,	
WriteOwner = 8192,	
ReadOwner = 16384
}
QFile::PermissionSpec	
;

class QFile;

enum _ZN5QFile9FileErrorE	
{
NoError = 0,	
ReadError = 1,	
WriteError = 2,	
FatalError = 3,	
ResourceError = 4,	
OpenError = 5,	
AbortError = 6,	
TimeOutError = 7,	
UnspecifiedError = 8,	
RemoveError = 9,	
RenameError = 10,	
PositionError = 11,	
ResizeError = 12,	
PermissionsError = 13,	
CopyError = 14,	
ConnectError = 30
}
;

enum _ZN5QFile10PermissionE	
{
ExeOther = 1,	
WriteOther = 2,	
ReadOther = 4,	
ExeGroup = 16,	
WriteGroup = 32,	
ReadGroup = 64,	
ExeUser = 256,	
WriteUser = 512,	
ReadUser = 1024,	
ExeOwner = 4096,	
WriteOwner = 8192,	
ReadOwner = 16384
}
;

class QFlags<QFile::Permission>;


/* Function prototypes */

extern struct QMetaObject _ZN5QFile16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
