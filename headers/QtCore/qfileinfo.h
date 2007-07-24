#ifndef _QTCORE_QFILEINFO_H_
#define _QTCORE_QFILEINFO_H_

#include <QtCore/qlist.h>
#include <QtCore/qglobal.h>
#include <QtCore/qstring.h>
#include <QtCore/qfile.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N9QFileInfo14PermissionSpecE;

    typedef Unknown Type:".Class." QFileInfoList;

    Unknown Type:".Class.";

    enum N9QFileInfo10PermissionE {
	ExeOther,
	WriteOther,
	ReadOther,
	ExeGroup,
	WriteGroup,
	ReadGroup,
	ExeUser,
	WriteUser,
	ReadUser,
	ExeOwner,
	WriteOwner,
	ReadOwner
    };

    Unknown Type:".Class.";


    extern Class _ZN9QFileInfoC2Ev(void);
    extern Class _ZN9QFileInfoC1Ev(void);
    extern Class _ZN9QFileInfoC2ERK7QString(void);
    extern Class _ZN9QFileInfoC1ERK7QString(void);
    extern Class _ZN9QFileInfoC2ERK5QFile(void);
    extern Class _ZN9QFileInfoC1ERK5QFile(void);
    extern Class _ZN9QFileInfoC2ERK4QDirRK7QString(void);
    extern Class _ZN9QFileInfoC1ERK4QDirRK7QString(void);
    extern Class _ZN9QFileInfoC2ERKS_(void);
    extern Class _ZN9QFileInfoC1ERKS_(void);
    extern Class _ZN9QFileInfoD2Ev(void);
    extern Class _ZN9QFileInfoD1Ev(void);
    extern Class _ZN9QFileInfoaSERKS_(void);
    extern bool _ZN9QFileInfoeqERKS_(void);
    extern bool _ZNK9QFileInfoeqERKS_(void);
    extern void _ZN9QFileInfo7setFileERK7QString(void);
    extern void _ZN9QFileInfo7setFileERK5QFile(void);
    extern void _ZN9QFileInfo7setFileERK4QDirRK7QString(void);
    extern bool _ZNK9QFileInfo6existsEv(void);
    extern void _ZN9QFileInfo7refreshEv(void);
    extern Class _ZNK9QFileInfo8filePathEv(void);
    extern Class _ZNK9QFileInfo16absoluteFilePathEv(void);
    extern Class _ZNK9QFileInfo17canonicalFilePathEv(void);
    extern Class _ZNK9QFileInfo8fileNameEv(void);
    extern Class _ZNK9QFileInfo8baseNameEv(void);
    extern Class _ZNK9QFileInfo16completeBaseNameEv(void);
    extern Class _ZNK9QFileInfo6suffixEv(void);
    extern Class _ZNK9QFileInfo14completeSuffixEv(void);
    extern Class _ZNK9QFileInfo4pathEv(void);
    extern Class _ZNK9QFileInfo12absolutePathEv(void);
    extern Class _ZNK9QFileInfo13canonicalPathEv(void);
    extern _ZNK9QFileInfo3dirEv(void);
    extern _ZNK9QFileInfo11absoluteDirEv(void);
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
    extern Class _ZNK9QFileInfo8readLinkEv(void);
    extern Class _ZNK9QFileInfo5ownerEv(void);
    extern uint _ZNK9QFileInfo7ownerIdEv(void);
    extern Class _ZNK9QFileInfo5groupEv(void);
    extern uint _ZNK9QFileInfo7groupIdEv(void);
    extern bool
	_ZNK9QFileInfo10permissionE6QFlagsIN5QFile10PermissionEE(void);
    extern N5QFile11PermissionsE _ZNK9QFileInfo11permissionsEv(void);
    extern qint64 _ZNK9QFileInfo4sizeEv(void);
    extern _ZNK9QFileInfo7createdEv(void);
    extern _ZNK9QFileInfo12lastModifiedEv(void);
    extern _ZNK9QFileInfo8lastReadEv(void);
    extern void _ZN9QFileInfo6detachEv(void);
    extern bool _ZNK9QFileInfo7cachingEv(void);
    extern void _ZN9QFileInfo10setCachingEb(void);
    extern _ZNK9QFileInfo3dirEb(void);
#ifdef __cplusplus
}
#endif
#endif
