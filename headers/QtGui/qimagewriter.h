#ifndef _QTGUI_QIMAGEWRITER_H_
#define _QTGUI_QIMAGEWRITER_H_

#include <QtCore/qlist.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qiodevice.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N12QImageWriter16ImageWriterErrorE {
	UnknownError,
	DeviceError,
	UnsupportedFormatError
    };


    extern Class _ZN12QImageWriterC2Ev(void);
    extern Class _ZN12QImageWriterC1Ev(void);
    extern Class _ZN12QImageWriterC2EP9QIODeviceRK10QByteArray(void);
    extern Class _ZN12QImageWriterC1EP9QIODeviceRK10QByteArray(void);
    extern Class _ZN12QImageWriterC2ERK7QStringRK10QByteArray(void);
    extern Class _ZN12QImageWriterC1ERK7QStringRK10QByteArray(void);
    extern Class _ZN12QImageWriterD2Ev(void);
    extern Class _ZN12QImageWriterD1Ev(void);
    extern void _ZN12QImageWriter9setFormatERK10QByteArray(void);
    extern Class _ZNK12QImageWriter6formatEv(void);
    extern void _ZN12QImageWriter9setDeviceEP9QIODevice(void);
    extern Class _ZNK12QImageWriter6deviceEv(void);
    extern void _ZN12QImageWriter11setFileNameERK7QString(void);
    extern Class _ZNK12QImageWriter8fileNameEv(void);
    extern void _ZN12QImageWriter10setQualityEi(void);
    extern int _ZNK12QImageWriter7qualityEv(void);
    extern void _ZN12QImageWriter8setGammaEf(void);
    extern float _ZNK12QImageWriter5gammaEv(void);
    extern void _ZN12QImageWriter14setDescriptionERK7QString(void);
    extern Class _ZNK12QImageWriter11descriptionEv(void);
    extern void _ZN12QImageWriter7setTextERK7QStringS2_(void);
    extern bool _ZNK12QImageWriter8canWriteEv(void);
    extern bool _ZN12QImageWriter5writeERK6QImage(void);
    extern enum N12QImageWriter16ImageWriterErrorE
	_ZNK12QImageWriter5errorEv(void);
    extern Class _ZNK12QImageWriter11errorStringEv(void);
    extern Class _ZN12QImageWriter21supportedImageFormatsEv(void);
#ifdef __cplusplus
}
#endif
#endif
