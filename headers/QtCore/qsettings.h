#ifndef _QTCORE_QSETTINGS_H_
#define _QTCORE_QSETTINGS_H_

#include <QtCore/qmap.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qvariant.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".Class." N9QSettings11SettingsMapE;

    typedef bool N9QSettings8ReadFuncE;

    typedef bool N9QSettings9WriteFuncE;

    Unknown Type:".Class.";

    enum N9QSettings6StatusE {
	NoError,
	AccessError,
	FormatError
    };

    enum N9QSettings6FormatE {
	NativeFormat,
	IniFormat,
	InvalidFormat,
	CustomFormat1,
	CustomFormat2,
	CustomFormat3,
	CustomFormat4,
	CustomFormat5,
	CustomFormat6,
	CustomFormat7,
	CustomFormat8,
	CustomFormat9,
	CustomFormat10,
	CustomFormat11,
	CustomFormat12,
	CustomFormat13,
	CustomFormat14,
	CustomFormat15,
	CustomFormat16
    };

    enum N9QSettings5ScopeE {
	UserScope,
	User,
	SystemScope,
	Global
    };

    enum N9QSettings6SystemE {
	Unix,
	Windows,
	Mac
    };


    extern struct QMetaObject _ZN9QSettings16staticMetaObjectE;
    extern struct QMetaObject _ZNK9QSettings10metaObjectEv(void);
    extern void _ZN9QSettings11qt_metacastEPKc(void);
    extern int _ZN9QSettings11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN9QSettingsC2ERK7QStringS2_P7QObject(void);
    extern Class _ZN9QSettingsC1ERK7QStringS2_P7QObject(void);
    extern Class _ZN9QSettingsC2ENS_5ScopeERK7QStringS3_P7QObject(void);
    extern Class _ZN9QSettingsC1ENS_5ScopeERK7QStringS3_P7QObject(void);
    extern Class
	_ZN9QSettingsC2ENS_6FormatENS_5ScopeERK7QStringS4_P7QObject(void);
    extern Class
	_ZN9QSettingsC1ENS_6FormatENS_5ScopeERK7QStringS4_P7QObject(void);
    extern Class _ZN9QSettingsC2ERK7QStringNS_6FormatEP7QObject(void);
    extern Class _ZN9QSettingsC1ERK7QStringNS_6FormatEP7QObject(void);
    extern Class _ZN9QSettingsC2EP7QObject(void);
    extern Class _ZN9QSettingsC1EP7QObject(void);
    extern Class _ZN9QSettingsD2Ev(void);
    extern Class _ZN9QSettingsD1Ev(void);
    extern Class _ZN9QSettingsD0Ev(void);
    extern void _ZN9QSettings5clearEv(void);
    extern void _ZN9QSettings4syncEv(void);
    extern enum N9QSettings6StatusE _ZNK9QSettings6statusEv(void);
    extern void _ZN9QSettings10beginGroupERK7QString(void);
    extern void _ZN9QSettings8endGroupEv(void);
    extern Class _ZNK9QSettings5groupEv(void);
    extern int _ZN9QSettings14beginReadArrayERK7QString(void);
    extern void _ZN9QSettings15beginWriteArrayERK7QStringi(void);
    extern void _ZN9QSettings8endArrayEv(void);
    extern void _ZN9QSettings13setArrayIndexEi(void);
    extern Class _ZNK9QSettings7allKeysEv(void);
    extern Class _ZNK9QSettings9childKeysEv(void);
    extern Class _ZNK9QSettings11childGroupsEv(void);
    extern bool _ZNK9QSettings10isWritableEv(void);
    extern void _ZN9QSettings8setValueERK7QStringRK8QVariant(void);
    extern Class _ZNK9QSettings5valueERK7QStringRK8QVariant(void);
    extern void _ZN9QSettings6removeERK7QString(void);
    extern bool _ZNK9QSettings8containsERK7QString(void);
    extern void _ZN9QSettings19setFallbacksEnabledEb(void);
    extern bool _ZNK9QSettings16fallbacksEnabledEv(void);
    extern Class _ZNK9QSettings8fileNameEv(void);
    extern void _ZN9QSettings16setSystemIniPathERK7QString(void);
    extern void _ZN9QSettings14setUserIniPathERK7QString(void);
    extern void
	_ZN9QSettings7setPathENS_6FormatENS_5ScopeERK7QString(void);
    extern enum N9QSettings6FormatE
	_ZN9QSettings14registerFormatERK7QStringPFbR9QIODeviceR4QMapIS0_8QVariantEEPFbS4_RKS7_EN2Qt15CaseSensitivityE
	(void);
    extern bool _ZN9QSettings5eventEP6QEvent(void);
#ifdef __cplusplus
}
#endif
#endif
