#ifndef _QTGUI_QIMAGEIOHANDLER_H_
#define _QTGUI_QIMAGEIOHANDLER_H_

#include <QtCore/qobjectdefs.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qobject.h>
#include <QtCore/qiodevice.h>
#include <QtCore/qvariant.h>
#include <QtCore/qrect.h>
#include <QtCore/qfactoryinterface.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N14QImageIOPlugin12CapabilitiesE;

    Unknown Type:".Class.";

    enum N15QImageIOHandler11ImageOptionE {
	Size,
	ClipRect,
	Description,
	ScaledClipRect,
	ScaledSize,
	CompressionRatio,
	Gamma,
	Quality,
	Name,
	SubType,
	IncrementalReading,
	Endianness,
	Animation,
	BackgroundColor
    };

    struct QImageIOHandlerFactoryInterface;

    Unknown Type:".Class.";

    enum N14QImageIOPlugin10CapabilityE {
	CanRead,
	CanWrite,
	CanReadIncremental
    };

    Unknown Type:".Class.";


    extern Class _ZN15QImageIOHandlerC2Ev(void);
    extern Class _ZN15QImageIOHandlerC1Ev(void);
    extern Class _ZN15QImageIOHandlerD2Ev(void);
    extern Class _ZN15QImageIOHandlerD1Ev(void);
    extern Class _ZN15QImageIOHandlerD0Ev(void);
    extern void _ZN15QImageIOHandler9setDeviceEP9QIODevice(void);
    extern Class _ZNK15QImageIOHandler6deviceEv(void);
    extern void _ZN15QImageIOHandler9setFormatERK10QByteArray(void);
    extern void _ZNK15QImageIOHandler9setFormatERK10QByteArray(void);
    extern Class _ZNK15QImageIOHandler6formatEv(void);
    extern Class _ZNK15QImageIOHandler4nameEv(void);
    extern bool _ZN15QImageIOHandler5writeERK6QImage(void);
    extern Class _ZNK15QImageIOHandler6optionENS_11ImageOptionE(void);
    extern void
	_ZN15QImageIOHandler9setOptionENS_11ImageOptionERK8QVariant(void);
    extern bool
	_ZNK15QImageIOHandler14supportsOptionENS_11ImageOptionE(void);
    extern bool _ZN15QImageIOHandler15jumpToNextImageEv(void);
    extern bool _ZN15QImageIOHandler11jumpToImageEi(void);
    extern int _ZNK15QImageIOHandler9loopCountEv(void);
    extern int _ZNK15QImageIOHandler10imageCountEv(void);
    extern int _ZNK15QImageIOHandler14nextImageDelayEv(void);
    extern int _ZNK15QImageIOHandler18currentImageNumberEv(void);
    extern Class _ZNK15QImageIOHandler16currentImageRectEv(void);
    extern Class _ZN15QImageIOHandlerC2ER22QImageIOHandlerPrivate(void);
    extern Class _ZN15QImageIOHandlerC1ER22QImageIOHandlerPrivate(void);
    extern _ZN31QImageIOHandlerFactoryInterfaceD0Ev(void);
    extern _ZN31QImageIOHandlerFactoryInterfaceD1Ev(void);
    extern struct QMetaObject _ZN14QImageIOPlugin16staticMetaObjectE;
    extern struct QMetaObject _ZNK14QImageIOPlugin10metaObjectEv(void);
    extern void _ZN14QImageIOPlugin11qt_metacastEPKc(void);
    extern int
	_ZN14QImageIOPlugin11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN14QImageIOPluginC2EP7QObject(void);
    extern Class _ZN14QImageIOPluginC1EP7QObject(void);
    extern Class _ZN14QImageIOPluginD2Ev(void);
    extern Class _ZN14QImageIOPluginD1Ev(void);
    extern Class _ZN14QImageIOPluginD0Ev(void);
#ifdef __cplusplus
}
#endif
#endif
