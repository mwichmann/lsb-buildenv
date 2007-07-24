#ifndef _QTCORE_QIODEVICE_H_
#define _QTCORE_QIODEVICE_H_

#include <QtCore/qglobal.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N9QIODevice8OpenModeE;

    typedef qint64 N9QIODevice6OffsetE;

    typedef int N9QIODevice6StatusE;

    Unknown Type:".Class.";

    enum N9QIODevice12OpenModeFlagE {
	NotOpen,
	ReadOnly,
	WriteOnly,
	ReadWrite,
	Append,
	Truncate,
	Text,
	Unbuffered
    };

    Unknown Type:".Class.";


    extern struct QMetaObject _ZN9QIODevice16staticMetaObjectE;
    extern struct QMetaObject _ZNK9QIODevice10metaObjectEv(void);
    extern void _ZN9QIODevice11qt_metacastEPKc(void);
    extern int _ZN9QIODevice11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN9QIODeviceC2Ev(void);
    extern Class _ZN9QIODeviceC1Ev(void);
    extern Class _ZN9QIODeviceC2EP7QObject(void);
    extern Class _ZN9QIODeviceC1EP7QObject(void);
    extern Class _ZN9QIODeviceD2Ev(void);
    extern Class _ZN9QIODeviceD1Ev(void);
    extern Class _ZN9QIODeviceD0Ev(void);
    extern N9QIODevice8OpenModeE _ZNK9QIODevice8openModeEv(void);
    extern void _ZN9QIODevice18setTextModeEnabledEb(void);
    extern bool _ZNK9QIODevice17isTextModeEnabledEv(void);
    extern bool _ZNK9QIODevice6isOpenEv(void);
    extern bool _ZNK9QIODevice10isReadableEv(void);
    extern bool _ZNK9QIODevice10isWritableEv(void);
    extern bool _ZNK9QIODevice12isSequentialEv(void);
    extern bool _ZN9QIODevice4openE6QFlagsINS_12OpenModeFlagEE(void);
    extern void _ZN9QIODevice5closeEv(void);
    extern qint64 _ZNK9QIODevice3posEv(void);
    extern qint64 _ZNK9QIODevice4sizeEv(void);
    extern bool _ZN9QIODevice4seekEx(void);
    extern bool _ZNK9QIODevice5atEndEv(void);
    extern bool _ZN9QIODevice5resetEv(void);
    extern qint64 _ZNK9QIODevice14bytesAvailableEv(void);
    extern qint64 _ZNK9QIODevice12bytesToWriteEv(void);
    extern qint64 _ZN9QIODevice4readEPcx(void);
    extern Class _ZN9QIODevice4readEx(void);
    extern Class _ZN9QIODevice7readAllEv(void);
    extern qint64 _ZN9QIODevice8readLineEPcx(void);
    extern Class _ZN9QIODevice8readLineEx(void);
    extern bool _ZNK9QIODevice11canReadLineEv(void);
    extern qint64 _ZN9QIODevice5writeEPKcx(void);
    extern qint64 _ZN9QIODevice4peekEPcx(void);
    extern Class _ZN9QIODevice4peekEx(void);
    extern bool _ZN9QIODevice16waitForReadyReadEi(void);
    extern bool _ZN9QIODevice19waitForBytesWrittenEi(void);
    extern void _ZN9QIODevice9ungetCharEc(void);
    extern Class _ZNK9QIODevice11errorStringEv(void);
    extern void _ZN9QIODevice9readyReadEv(void);
    extern void _ZN9QIODevice12bytesWrittenEx(void);
    extern void _ZN9QIODevice12aboutToCloseEv(void);
    extern Class _ZN9QIODeviceC2ER16QIODevicePrivateP7QObject(void);
    extern Class _ZN9QIODeviceC1ER16QIODevicePrivateP7QObject(void);
    extern qint64 _ZN9QIODevice12readLineDataEPcx(void);
    extern void
	_ZN9QIODevice11setOpenModeE6QFlagsINS_12OpenModeFlagEE(void);
    extern void _ZN9QIODevice14setErrorStringERK7QString(void);
    extern N9QIODevice6StatusE _ZNK9QIODevice6statusEv(void);
    extern void _ZN9QIODevice11resetStatusEv(void);
    extern _Zls6QDebug6QFlagsIN9QIODevice12OpenModeFlagEE(void);
#ifdef __cplusplus
}
#endif
#endif
