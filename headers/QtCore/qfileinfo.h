#ifndef _QTCORE_QFILEINFO_H_
#define _QTCORE_QFILEINFO_H_

class QFlags < QFileInfo::Permission >;
// *INDENT-OFF*




typedef PermissionSpec	
;

typedef QList<QFileInfo> QFileInfoList	
;

class QFileInfo
{
private:
public:
};

enum Permission	
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

class QFlags<QFileInfo::Permission>
{
private:
public:
};


extern QFileInfo _ZN9QFileInfoC2Ev(void);
extern QFileInfo _ZN9QFileInfoC1Ev(void);
extern QFileInfo _ZN9QFileInfoC2ERK7QString(void);
extern QFileInfo _ZN9QFileInfoC1ERK7QString(void);
extern QFileInfo _ZN9QFileInfoC2ERK5QFile(void);
extern QFileInfo _ZN9QFileInfoC1ERK5QFile(void);
extern QFileInfo _ZN9QFileInfoC2ERK4QDirRK7QString(void);
extern QFileInfo _ZN9QFileInfoC1ERK4QDirRK7QString(void);
extern QFileInfo _ZN9QFileInfoC2ERKS_(void);
extern QFileInfo _ZN9QFileInfoC1ERKS_(void);
extern QFileInfo _ZN9QFileInfoD2Ev(void);
extern QFileInfo _ZN9QFileInfoD1Ev(void);
extern QFileInfo _ZN9QFileInfoaSERKS_(void);
extern bool _ZN9QFileInfoeqERKS_(void);
extern bool _ZNK9QFileInfoeqERKS_(void);
extern void _ZN9QFileInfo7setFileERK7QString(void);
extern void _ZN9QFileInfo7setFileERK5QFile(void);
extern void _ZN9QFileInfo7setFileERK4QDirRK7QString(void);
extern bool _ZNK9QFileInfo6existsEv(void);
extern void _ZN9QFileInfo7refreshEv(void);
extern QString _ZNK9QFileInfo8filePathEv(void);
extern QString _ZNK9QFileInfo16absoluteFilePathEv(void);
extern QString _ZNK9QFileInfo17canonicalFilePathEv(void);
extern QString _ZNK9QFileInfo8fileNameEv(void);
extern QString _ZNK9QFileInfo8baseNameEv(void);
extern QString _ZNK9QFileInfo16completeBaseNameEv(void);
extern QString _ZNK9QFileInfo6suffixEv(void);
extern QString _ZNK9QFileInfo14completeSuffixEv(void);
extern QString _ZNK9QFileInfo4pathEv(void);
extern QString _ZNK9QFileInfo12absolutePathEv(void);
extern QString _ZNK9QFileInfo13canonicalPathEv(void);
extern  _ZNK9QFileInfo3dirEv(void);
extern  _ZNK9QFileInfo11absoluteDirEv(void);
extern bool _ZNK9QFileInfo10isReadableEv(void);
extern bool _ZNK9QFileInfo10isWritableEv(void);
extern bool _ZNK9QFileInfo12isExecutableEv(void);
extern bool _ZNK9QFileInfo8isHiddenEv(void);
extern bool _ZNK9QFileInfo10isRelativeEv(void);
extern bool _ZN9QFileInfo12makeAbsoluteEv(void);
extern bool _ZNK9QFileInfo6isFileEv(void);
extern bool _ZNK9QFileInfo5isDirEv(void);
extern bool _ZNK9QFileInfo9isSymLinkEv(void);
extern bool _ZNK9QFileInfo6isRootEv(void);
extern QString _ZNK9QFileInfo8readLinkEv(void);
extern QString _ZNK9QFileInfo5ownerEv(void);
extern uint _ZNK9QFileInfo7ownerIdEv(void);
extern QString _ZNK9QFileInfo5groupEv(void);
extern uint _ZNK9QFileInfo7groupIdEv(void);
extern bool _ZNK9QFileInfo10permissionE6QFlagsIN5QFile10PermissionEE(void);
extern N5QFile11PermissionsE _ZNK9QFileInfo11permissionsEv(void);
extern qint64 _ZNK9QFileInfo4sizeEv(void);
extern  _ZNK9QFileInfo7createdEv(void);
extern  _ZNK9QFileInfo12lastModifiedEv(void);
extern  _ZNK9QFileInfo8lastReadEv(void);
extern void _ZN9QFileInfo6detachEv(void);
extern bool _ZNK9QFileInfo7cachingEv(void);
extern void _ZN9QFileInfo10setCachingEb(void);
extern  _ZNK9QFileInfo3dirEb(void);
// *INDENT-ON*
#endif
