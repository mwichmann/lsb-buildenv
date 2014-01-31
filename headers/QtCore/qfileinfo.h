#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QFILEINFO_H_
#define _QTCORE_QFILEINFO_H_

class QFlags < QFileInfo::Permission >;
// *INDENT-OFF*

typedef class QFlags<QFileInfo::Permission>QFileInfo::PermissionSpec	
;

typedef class QList<QFileInfo>QFileInfoList	
;

class QFileInfo;

enum QFileInfo::Permission	
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

class QFlags<QFileInfo::Permission>;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
