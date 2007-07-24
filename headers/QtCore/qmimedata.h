#ifndef _QTCORE_QMIMEDATA_H_
#define _QTCORE_QMIMEDATA_H_

#include <QtCore/qlist.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qvariant.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";


    extern struct QMetaObject _ZN9QMimeData16staticMetaObjectE;
    extern struct QMetaObject _ZNK9QMimeData10metaObjectEv(void);
    extern void _ZN9QMimeData11qt_metacastEPKc(void);
    extern int _ZN9QMimeData11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN9QMimeDataC2Ev(void);
    extern Class _ZN9QMimeDataC1Ev(void);
    extern Class _ZN9QMimeDataD2Ev(void);
    extern Class _ZN9QMimeDataD1Ev(void);
    extern Class _ZN9QMimeDataD0Ev(void);
    extern Class _ZNK9QMimeData4urlsEv(void);
    extern void _ZN9QMimeData7setUrlsERK5QListI4QUrlE(void);
    extern bool _ZNK9QMimeData7hasUrlsEv(void);
    extern Class _ZNK9QMimeData4textEv(void);
    extern void _ZN9QMimeData7setTextERK7QString(void);
    extern bool _ZNK9QMimeData7hasTextEv(void);
    extern Class _ZNK9QMimeData4htmlEv(void);
    extern void _ZN9QMimeData7setHtmlERK7QString(void);
    extern bool _ZNK9QMimeData7hasHtmlEv(void);
    extern Class _ZNK9QMimeData9imageDataEv(void);
    extern void _ZN9QMimeData12setImageDataERK8QVariant(void);
    extern bool _ZNK9QMimeData8hasImageEv(void);
    extern Class _ZNK9QMimeData9colorDataEv(void);
    extern void _ZN9QMimeData12setColorDataERK8QVariant(void);
    extern bool _ZNK9QMimeData8hasColorEv(void);
    extern Class _ZNK9QMimeData4dataERK7QString(void);
    extern void _ZN9QMimeData7setDataERK7QStringRK10QByteArray(void);
    extern bool _ZNK9QMimeData9hasFormatERK7QString(void);
    extern Class _ZNK9QMimeData7formatsEv(void);
    extern void _ZN9QMimeData5clearEv(void);
    extern Class
	_ZNK9QMimeData12retrieveDataERK7QStringN8QVariant4TypeE(void);
#ifdef __cplusplus
}
#endif
#endif
