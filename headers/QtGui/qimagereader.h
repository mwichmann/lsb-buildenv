#ifndef _QTGUI_QIMAGEREADER_H_
#define _QTGUI_QIMAGEREADER_H_

#include <QtCore/qlist.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qiodevice.h>
#include <QtCore/qsize.h>
#include <QtCore/qrect.h>
#include <QtGui/qcolor.h>
#include <QtGui/qpaintdevice.h>
#include <QtGui/qimage.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N12QImageReader16ImageReaderErrorE {
	UnknownError,
	FileNotFoundError,
	DeviceError,
	UnsupportedFormatError,
	InvalidDataError
    };


    extern Class _ZN12QImageReaderC2Ev(void);
    extern Class _ZN12QImageReaderC1Ev(void);
    extern Class _ZN12QImageReaderC2EP9QIODeviceRK10QByteArray(void);
    extern Class _ZN12QImageReaderC1EP9QIODeviceRK10QByteArray(void);
    extern Class _ZN12QImageReaderC2ERK7QStringRK10QByteArray(void);
    extern Class _ZN12QImageReaderC1ERK7QStringRK10QByteArray(void);
    extern Class _ZN12QImageReaderD2Ev(void);
    extern Class _ZN12QImageReaderD1Ev(void);
    extern void _ZN12QImageReader9setFormatERK10QByteArray(void);
    extern Class _ZNK12QImageReader6formatEv(void);
    extern void _ZN12QImageReader9setDeviceEP9QIODevice(void);
    extern Class _ZNK12QImageReader6deviceEv(void);
    extern void _ZN12QImageReader11setFileNameERK7QString(void);
    extern Class _ZNK12QImageReader8fileNameEv(void);
    extern Class _ZNK12QImageReader4sizeEv(void);
    extern Class _ZNK12QImageReader8textKeysEv(void);
    extern Class _ZNK12QImageReader4textERK7QString(void);
    extern void _ZN12QImageReader11setClipRectERK5QRect(void);
    extern Class _ZNK12QImageReader8clipRectEv(void);
    extern void _ZN12QImageReader13setScaledSizeERK5QSize(void);
    extern Class _ZNK12QImageReader10scaledSizeEv(void);
    extern void _ZN12QImageReader17setScaledClipRectERK5QRect(void);
    extern Class _ZNK12QImageReader14scaledClipRectEv(void);
    extern void _ZN12QImageReader18setBackgroundColorERK6QColor(void);
    extern Class _ZNK12QImageReader15backgroundColorEv(void);
    extern bool _ZNK12QImageReader17supportsAnimationEv(void);
    extern bool _ZNK12QImageReader7canReadEv(void);
    extern Class _ZN12QImageReader4readEv(void);
    extern bool _ZN12QImageReader15jumpToNextImageEv(void);
    extern bool _ZN12QImageReader11jumpToImageEi(void);
    extern int _ZNK12QImageReader9loopCountEv(void);
    extern int _ZNK12QImageReader10imageCountEv(void);
    extern int _ZNK12QImageReader14nextImageDelayEv(void);
    extern int _ZNK12QImageReader18currentImageNumberEv(void);
    extern Class _ZNK12QImageReader16currentImageRectEv(void);
    extern enum N12QImageReader16ImageReaderErrorE
	_ZNK12QImageReader5errorEv(void);
    extern Class _ZNK12QImageReader11errorStringEv(void);
    extern Class _ZN12QImageReader11imageFormatERK7QString(void);
    extern Class _ZN12QImageReader11imageFormatEP9QIODevice(void);
    extern Class _ZN12QImageReader21supportedImageFormatsEv(void);
#ifdef __cplusplus
}
#endif
#endif
