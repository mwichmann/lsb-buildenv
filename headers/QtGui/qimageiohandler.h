#ifndef _QTGUI_QIMAGEIOHANDLER_H_
#define _QTGUI_QIMAGEIOHANDLER_H_

class QFlags < QImageIOPlugin::Capability >;
// *INDENT-OFF*




typedef Capabilities	
;

class QImageIOHandler
{
private:
public:
};

enum ImageOption	
{
Size = 0,	
ClipRect = 1,	
Description = 2,	
ScaledClipRect = 3,	
ScaledSize = 4,	
CompressionRatio = 5,	
Gamma = 6,	
Quality = 7,	
Name = 8,	
SubType = 9,	
IncrementalReading = 10,	
Endianness = 11,	
Animation = 12,	
BackgroundColor = 13
}
;

struct QImageIOHandlerFactoryInterface	;

class QImageIOPlugin :  QImageIOHandlerFactoryInterface,  QObject
{
private:
public:
};

enum Capability	
{
CanRead = 1,	
CanWrite = 2,	
CanReadIncremental = 4
}
;

class QFlags<QImageIOPlugin::Capability>
{
private:
public:
};


extern QImageIOHandler _ZN15QImageIOHandlerC2Ev(void);
extern QImageIOHandler _ZN15QImageIOHandlerC1Ev(void);
extern  _ZN15QImageIOHandlerD2Ev(void);
extern  _ZN15QImageIOHandlerD1Ev(void);
extern  _ZN15QImageIOHandlerD0Ev(void);
extern void _ZN15QImageIOHandler9setDeviceEP9QIODevice(void);
extern QIODevice _ZNK15QImageIOHandler6deviceEv(void);
extern void _ZN15QImageIOHandler9setFormatERK10QByteArray(void);
extern void _ZNK15QImageIOHandler9setFormatERK10QByteArray(void);
extern QByteArray _ZNK15QImageIOHandler6formatEv(void);
extern QByteArray _ZNK15QImageIOHandler4nameEv(void);
extern bool _ZN15QImageIOHandler5writeERK6QImage(void);
extern QVariant _ZNK15QImageIOHandler6optionENS_11ImageOptionE(void);
extern void _ZN15QImageIOHandler9setOptionENS_11ImageOptionERK8QVariant(void);
extern bool _ZNK15QImageIOHandler14supportsOptionENS_11ImageOptionE(void);
extern bool _ZN15QImageIOHandler15jumpToNextImageEv(void);
extern bool _ZN15QImageIOHandler11jumpToImageEi(void);
extern int _ZNK15QImageIOHandler9loopCountEv(void);
extern int _ZNK15QImageIOHandler10imageCountEv(void);
extern int _ZNK15QImageIOHandler14nextImageDelayEv(void);
extern int _ZNK15QImageIOHandler18currentImageNumberEv(void);
extern QRect _ZNK15QImageIOHandler16currentImageRectEv(void);
extern QImageIOHandler _ZN15QImageIOHandlerC2ER22QImageIOHandlerPrivate(void);
extern QImageIOHandler _ZN15QImageIOHandlerC1ER22QImageIOHandlerPrivate(void);
extern  _ZN31QImageIOHandlerFactoryInterfaceD0Ev(void);
extern  _ZN31QImageIOHandlerFactoryInterfaceD1Ev(void);
extern struct QMetaObject _ZN14QImageIOPlugin16staticMetaObjectE ;
extern struct QMetaObject _ZNK14QImageIOPlugin10metaObjectEv(void);
extern void _ZN14QImageIOPlugin11qt_metacastEPKc(void);
extern int _ZN14QImageIOPlugin11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QImageIOPlugin _ZN14QImageIOPluginC2EP7QObject(void);
extern QImageIOPlugin _ZN14QImageIOPluginC1EP7QObject(void);
extern  _ZN14QImageIOPluginD2Ev(void);
extern  _ZN14QImageIOPluginD1Ev(void);
extern  _ZN14QImageIOPluginD0Ev(void);
// *INDENT-ON*
#endif
