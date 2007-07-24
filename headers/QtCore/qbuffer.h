#ifndef _QTCORE_QBUFFER_H_
#define _QTCORE_QBUFFER_H_

#include <QtCore/qglobal.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qobject.h>
#include <QtCore/qiodevice.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";


    extern struct QMetaObject _ZN7QBuffer16staticMetaObjectE;
    extern struct QMetaObject _ZNK7QBuffer10metaObjectEv(void);
    extern void _ZN7QBuffer11qt_metacastEPKc(void);
    extern int _ZN7QBuffer11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN7QBufferC2EP7QObject(void);
    extern Class _ZN7QBufferC1EP7QObject(void);
    extern Class _ZN7QBufferC2EP10QByteArrayP7QObject(void);
    extern Class _ZN7QBufferC1EP10QByteArrayP7QObject(void);
    extern Class _ZN7QBufferD2Ev(void);
    extern Class _ZN7QBufferD1Ev(void);
    extern Class _ZN7QBufferD0Ev(void);
    extern Class _ZN7QBuffer6bufferEv(void);
    extern Class _ZNK7QBuffer6bufferEv(void);
    extern void _ZN7QBuffer9setBufferEP10QByteArray(void);
    extern void _ZN7QBuffer7setDataERK10QByteArray(void);
    extern Class _ZNK7QBuffer4dataEv(void);
    extern bool _ZN7QBuffer4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void);
    extern void _ZN7QBuffer5closeEv(void);
    extern qint64 _ZNK7QBuffer4sizeEv(void);
    extern qint64 _ZNK7QBuffer3posEv(void);
    extern bool _ZN7QBuffer4seekEx(void);
    extern bool _ZNK7QBuffer5atEndEv(void);
    extern bool _ZNK7QBuffer11canReadLineEv(void);
    extern qint64 _ZN7QBuffer8readDataEPcx(void);
    extern qint64 _ZN7QBuffer9writeDataEPKcx(void);
#ifdef __cplusplus
}
#endif
#endif
