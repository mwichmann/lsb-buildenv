#ifndef _QTNETWORK_QURLINFO_H_
#define _QTNETWORK_QURLINFO_H_

#include <QtCore/qglobal.h>
#include <QtCore/qstring.h>
#include <QtCore/qdatetime.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N8QUrlInfo14PermissionSpecE {
	ExeOther,
	WriteOther,
	ReadOther,
	ExeGroup,
	WriteGroup,
	ReadGroup,
	ExeOwner,
	WriteOwner,
	ReadOwner
    };


    extern Class _ZN8QUrlInfoC2Ev(void);
    extern Class _ZN8QUrlInfoC1Ev(void);
    extern Class _ZN8QUrlInfoC2ERKS_(void);
    extern Class _ZN8QUrlInfoC1ERKS_(void);
    extern Class
	_ZN8QUrlInfoC2ERK7QStringiS2_S2_xRK9QDateTimeS5_bbbbbb(void);
    extern Class
	_ZN8QUrlInfoC1ERK7QStringiS2_S2_xRK9QDateTimeS5_bbbbbb(void);
    extern Class
	_ZN8QUrlInfoC2ERK4QUrliRK7QStringS5_xRK9QDateTimeS8_bbbbbb(void);
    extern Class
	_ZN8QUrlInfoC1ERK4QUrliRK7QStringS5_xRK9QDateTimeS8_bbbbbb(void);
    extern Class _ZN8QUrlInfoaSERKS_(void);
    extern Class _ZN8QUrlInfoD2Ev(void);
    extern Class _ZN8QUrlInfoD1Ev(void);
    extern Class _ZN8QUrlInfoD0Ev(void);
    extern void _ZN8QUrlInfo7setNameERK7QString(void);
    extern void _ZN8QUrlInfo6setDirEb(void);
    extern void _ZN8QUrlInfo7setFileEb(void);
    extern void _ZN8QUrlInfo10setSymLinkEb(void);
    extern void _ZN8QUrlInfo8setOwnerERK7QString(void);
    extern void _ZN8QUrlInfo8setGroupERK7QString(void);
    extern void _ZN8QUrlInfo7setSizeEx(void);
    extern void _ZN8QUrlInfo11setWritableEb(void);
    extern void _ZN8QUrlInfo11setReadableEb(void);
    extern void _ZN8QUrlInfo14setPermissionsEi(void);
    extern void _ZN8QUrlInfo15setLastModifiedERK9QDateTime(void);
    extern bool _ZNK8QUrlInfo7isValidEv(void);
    extern Class _ZNK8QUrlInfo4nameEv(void);
    extern int _ZNK8QUrlInfo11permissionsEv(void);
    extern Class _ZNK8QUrlInfo5ownerEv(void);
    extern Class _ZNK8QUrlInfo5groupEv(void);
    extern qint64 _ZNK8QUrlInfo4sizeEv(void);
    extern Class _ZNK8QUrlInfo12lastModifiedEv(void);
    extern Class _ZNK8QUrlInfo8lastReadEv(void);
    extern bool _ZNK8QUrlInfo5isDirEv(void);
    extern bool _ZNK8QUrlInfo6isFileEv(void);
    extern bool _ZNK8QUrlInfo9isSymLinkEv(void);
    extern bool _ZNK8QUrlInfo10isWritableEv(void);
    extern bool _ZNK8QUrlInfo10isReadableEv(void);
    extern bool _ZNK8QUrlInfo12isExecutableEv(void);
    extern bool _ZN8QUrlInfo11greaterThanERKS_S1_i(void);
    extern bool _ZN8QUrlInfo8lessThanERKS_S1_i(void);
    extern bool _ZN8QUrlInfo5equalERKS_S1_i(void);
    extern bool _ZNK8QUrlInfoeqERKS_(void);
#ifdef __cplusplus
}
#endif
#endif
