#ifndef _QTOPENGL_QGL_H_
#define _QTOPENGL_QGL_H_

class QGLFormat;
// *INDENT-OFF*




typedef FormatOptions	
;

enum FormatOption	
{
DoubleBuffer = 1,	
DepthBuffer = 2,	
Rgba = 4,	
AlphaChannel = 8,	
AccumBuffer = 16,	
StencilBuffer = 32,	
StereoBuffers = 64,	
DirectRendering = 128,	
HasOverlay = 256,	
SampleBuffers = 512,	
SingleBuffer = 65536,	
NoDepthBuffer = 131072,	
ColorIndex = 262144,	
NoAlphaChannel = 524288,	
NoAccumBuffer = 1048576,	
NoStencilBuffer = 2097152,	
NoStereoBuffers = 4194304,	
IndirectRendering = 8388608,	
NoOverlay = 16777216,	
NoSampleBuffers = 33554432
}
;

class QFlags<QGL::FormatOption>
{
private:
public:
};

class QGLFormat
{
private:
public:
};

class QGLContext
{
private:
public:
};

class QGLWidget : public QWidget
{
private:
public:
};


extern QGLFormat _ZN9QGLFormatC2Ev(void);
extern QGLFormat _ZN9QGLFormatC1Ev(void);
extern QGLFormat _ZN9QGLFormatC2E6QFlagsIN3QGL12FormatOptionEEi(void);
extern QGLFormat _ZN9QGLFormatC1E6QFlagsIN3QGL12FormatOptionEEi(void);
extern QGLFormat _ZN9QGLFormatC2ERKS_(void);
extern QGLFormat _ZN9QGLFormatC1ERKS_(void);
extern QGLFormat _ZN9QGLFormataSERKS_(void);
extern  _ZN9QGLFormatD2Ev(void);
extern  _ZN9QGLFormatD1Ev(void);
extern void _ZN9QGLFormat18setDepthBufferSizeEi(void);
extern int _ZNK9QGLFormat15depthBufferSizeEv(void);
extern void _ZN9QGLFormat18setAccumBufferSizeEi(void);
extern int _ZNK9QGLFormat15accumBufferSizeEv(void);
extern void _ZN9QGLFormat18setAlphaBufferSizeEi(void);
extern int _ZNK9QGLFormat15alphaBufferSizeEv(void);
extern void _ZN9QGLFormat20setStencilBufferSizeEi(void);
extern int _ZNK9QGLFormat17stencilBufferSizeEv(void);
extern void _ZN9QGLFormat16setSampleBuffersEb(void);
extern void _ZN9QGLFormat10setSamplesEi(void);
extern int _ZNK9QGLFormat7samplesEv(void);
extern void _ZN9QGLFormat15setDoubleBufferEb(void);
extern void _ZN9QGLFormat8setDepthEb(void);
extern void _ZN9QGLFormat7setRgbaEb(void);
extern void _ZN9QGLFormat8setAlphaEb(void);
extern void _ZN9QGLFormat8setAccumEb(void);
extern void _ZN9QGLFormat10setStencilEb(void);
extern void _ZN9QGLFormat9setStereoEb(void);
extern void _ZN9QGLFormat18setDirectRenderingEb(void);
extern void _ZN9QGLFormat10setOverlayEb(void);
extern int _ZNK9QGLFormat5planeEv(void);
extern void _ZN9QGLFormat8setPlaneEi(void);
extern void _ZN9QGLFormat9setOptionE6QFlagsIN3QGL12FormatOptionEE(void);
extern bool _ZNK9QGLFormat10testOptionE6QFlagsIN3QGL12FormatOptionEE(void);
extern QGLFormat _ZN9QGLFormat13defaultFormatEv(void);
extern void _ZN9QGLFormat16setDefaultFormatERKS_(void);
extern QGLFormat _ZN9QGLFormat20defaultOverlayFormatEv(void);
extern void _ZN9QGLFormat23setDefaultOverlayFormatERKS_(void);
extern bool _ZN9QGLFormat9hasOpenGLEv(void);
extern bool _ZN9QGLFormat17hasOpenGLOverlaysEv(void);
extern bool _ZeqRK9QGLFormatS1_(void);
extern bool _ZneRK9QGLFormatS1_(void);
extern QGLContext _ZN10QGLContextC2ERK9QGLFormatP12QPaintDevice(void);
extern QGLContext _ZN10QGLContextC1ERK9QGLFormatP12QPaintDevice(void);
extern QGLContext _ZN10QGLContextC2ERK9QGLFormat(void);
extern QGLContext _ZN10QGLContextC1ERK9QGLFormat(void);
extern  _ZN10QGLContextD2Ev(void);
extern  _ZN10QGLContextD1Ev(void);
extern  _ZN10QGLContextD0Ev(void);
extern bool _ZN10QGLContext6createEPKS_(void);
extern bool _ZNK10QGLContext7isValidEv(void);
extern bool _ZNK10QGLContext9isSharingEv(void);
extern void _ZN10QGLContext5resetEv(void);
extern QGLFormat _ZNK10QGLContext6formatEv(void);
extern QGLFormat _ZNK10QGLContext15requestedFormatEv(void);
extern void _ZN10QGLContext9setFormatERK9QGLFormat(void);
extern void _ZN10QGLContext11makeCurrentEv(void);
extern void _ZN10QGLContext11doneCurrentEv(void);
extern void _ZNK10QGLContext11swapBuffersEv(void);
extern GLuint _ZN10QGLContext11bindTextureERK6QImageji(void);
extern GLuint _ZN10QGLContext11bindTextureERK7QPixmapji(void);
extern GLuint _ZN10QGLContext11bindTextureERK7QString(void);
extern void _ZN10QGLContext13deleteTextureEj(void);
extern void _ZN10QGLContext20setTextureCacheLimitEi(void);
extern int _ZN10QGLContext17textureCacheLimitEv(void);
extern void _ZNK10QGLContext14getProcAddressERK7QString(void);
extern QPaintDevice _ZNK10QGLContext6deviceEv(void);
extern QColor _ZNK10QGLContext23overlayTransparentColorEv(void);
extern QGLContext _ZN10QGLContext14currentContextEv(void);
extern bool _ZN10QGLContext13chooseContextEPKS_(void);
extern void _ZN10QGLContext9tryVisualERK9QGLFormati(void);
extern void _ZN10QGLContext12chooseVisualEv(void);
extern bool _ZNK10QGLContext14deviceIsPixmapEv(void);
extern bool _ZNK10QGLContext13windowCreatedEv(void);
extern void _ZN10QGLContext16setWindowCreatedEb(void);
extern bool _ZNK10QGLContext11initializedEv(void);
extern void _ZN10QGLContext14setInitializedEb(void);
extern void _ZN10QGLContext24generateFontDisplayListsERK5QFonti(void);
extern uint _ZNK10QGLContext10colorIndexERK6QColor(void);
extern void _ZN10QGLContext8setValidEb(void);
extern void _ZN10QGLContext9setDeviceEP12QPaintDevice(void);
extern QGLContext * _ZN10QGLContext10currentCtxE ;
extern struct QMetaObject _ZN9QGLWidget16staticMetaObjectE ;
extern struct QMetaObject _ZNK9QGLWidget10metaObjectEv(void);
extern void _ZN9QGLWidget11qt_metacastEPKc(void);
extern int _ZN9QGLWidget11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QGLWidget _ZN9QGLWidgetC2EP7QWidgetPKS_6QFlagsIN2Qt10WindowTypeEE(void);
extern QGLWidget _ZN9QGLWidgetC1EP7QWidgetPKS_6QFlagsIN2Qt10WindowTypeEE(void);
extern QGLWidget _ZN9QGLWidgetC2EP10QGLContextP7QWidgetPKS_6QFlagsIN2Qt10WindowTypeEE(void);
extern QGLWidget _ZN9QGLWidgetC1EP10QGLContextP7QWidgetPKS_6QFlagsIN2Qt10WindowTypeEE(void);
extern QGLWidget _ZN9QGLWidgetC2ERK9QGLFormatP7QWidgetPKS_6QFlagsIN2Qt10WindowTypeEE(void);
extern QGLWidget _ZN9QGLWidgetC1ERK9QGLFormatP7QWidgetPKS_6QFlagsIN2Qt10WindowTypeEE(void);
extern QGLWidget _ZN9QGLWidgetC2EP7QWidgetPKcPKS_6QFlagsIN2Qt10WindowTypeEE(void);
extern QGLWidget _ZN9QGLWidgetC1EP7QWidgetPKcPKS_6QFlagsIN2Qt10WindowTypeEE(void);
extern QGLWidget _ZN9QGLWidgetC2EP10QGLContextP7QWidgetPKcPKS_6QFlagsIN2Qt10WindowTypeEE(void);
extern QGLWidget _ZN9QGLWidgetC1EP10QGLContextP7QWidgetPKcPKS_6QFlagsIN2Qt10WindowTypeEE(void);
extern QGLWidget _ZN9QGLWidgetC2ERK9QGLFormatP7QWidgetPKcPKS_6QFlagsIN2Qt10WindowTypeEE(void);
extern QGLWidget _ZN9QGLWidgetC1ERK9QGLFormatP7QWidgetPKcPKS_6QFlagsIN2Qt10WindowTypeEE(void);
extern  _ZN9QGLWidgetD2Ev(void);
extern  _ZN9QGLWidgetD1Ev(void);
extern  _ZN9QGLWidgetD0Ev(void);
extern void _ZNK9QGLWidget8qglColorERK6QColor(void);
extern void _ZNK9QGLWidget13qglClearColorERK6QColor(void);
extern bool _ZNK9QGLWidget7isValidEv(void);
extern bool _ZNK9QGLWidget9isSharingEv(void);
extern void _ZN9QGLWidget11makeCurrentEv(void);
extern void _ZN9QGLWidget11doneCurrentEv(void);
extern bool _ZNK9QGLWidget12doubleBufferEv(void);
extern void _ZN9QGLWidget11swapBuffersEv(void);
extern QGLFormat _ZNK9QGLWidget6formatEv(void);
extern void _ZN9QGLWidget9setFormatERK9QGLFormat(void);
extern QGLContext _ZNK9QGLWidget7contextEv(void);
extern void _ZN9QGLWidget10setContextEP10QGLContextPKS0_b(void);
extern QPixmap _ZN9QGLWidget12renderPixmapEiib(void);
extern QImage _ZN9QGLWidget15grabFrameBufferEb(void);
extern void _ZN9QGLWidget18makeOverlayCurrentEv(void);
extern QGLContext _ZNK9QGLWidget14overlayContextEv(void);
extern QImage _ZN9QGLWidget17convertToGLFormatERK6QImage(void);
extern void _ZN9QGLWidget16setMouseTrackingEb(void);
extern QGLColormap _ZNK9QGLWidget8colormapEv(void);
extern void _ZN9QGLWidget11setColormapERK11QGLColormap(void);
extern void _ZN9QGLWidget10renderTextEiiRK7QStringRK5QFonti(void);
extern void _ZN9QGLWidget10renderTextEdddRK7QStringRK5QFonti(void);
extern QPaintEngine _ZNK9QGLWidget11paintEngineEv(void);
extern GLuint _ZN9QGLWidget11bindTextureERK6QImageji(void);
extern GLuint _ZN9QGLWidget11bindTextureERK7QPixmapji(void);
extern GLuint _ZN9QGLWidget11bindTextureERK7QString(void);
extern void _ZN9QGLWidget13deleteTextureEj(void);
extern void _ZN9QGLWidget8updateGLEv(void);
extern void _ZN9QGLWidget15updateOverlayGLEv(void);
extern bool _ZN9QGLWidget5eventEP6QEvent(void);
extern void _ZN9QGLWidget12initializeGLEv(void);
extern void _ZN9QGLWidget8resizeGLEii(void);
extern void _ZN9QGLWidget7paintGLEv(void);
extern void _ZN9QGLWidget19initializeOverlayGLEv(void);
extern void _ZN9QGLWidget15resizeOverlayGLEii(void);
extern void _ZN9QGLWidget14paintOverlayGLEv(void);
extern void _ZN9QGLWidget17setAutoBufferSwapEb(void);
extern bool _ZNK9QGLWidget14autoBufferSwapEv(void);
extern void _ZN9QGLWidget10paintEventEP11QPaintEvent(void);
extern void _ZN9QGLWidget11resizeEventEP12QResizeEvent(void);
extern void _ZN9QGLWidget6glInitEv(void);
extern void _ZN9QGLWidget6glDrawEv(void);
extern int _ZN9QGLWidget19fontDisplayListBaseERK5QFonti(void);
// *INDENT-ON*
#endif
