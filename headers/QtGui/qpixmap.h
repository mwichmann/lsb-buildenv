#ifndef _QTGUI_QPIXMAP_H_
#define _QTGUI_QPIXMAP_H_

class QPixmap;
// *INDENT-OFF*



class QPixmap : public QPaintDevice
{
private:
public:
};

enum ColorMode	
{
Auto = 0,	
Color = 1,	
Mono = 2
}
;

enum Type	
{
PixmapType = 0,	
BitmapType = 1
}
;


extern QPixmap _ZN7QPixmapC2Ev(void);
extern QPixmap _ZN7QPixmapC1Ev(void);
extern QPixmap _ZN7QPixmapC2Eii(void);
extern QPixmap _ZN7QPixmapC1Eii(void);
extern QPixmap _ZN7QPixmapC2ERK5QSize(void);
extern QPixmap _ZN7QPixmapC1ERK5QSize(void);
extern QPixmap _ZN7QPixmapC2ERK7QStringPKc6QFlagsIN2Qt19ImageConversionFlagEE(void);
extern QPixmap _ZN7QPixmapC1ERK7QStringPKc6QFlagsIN2Qt19ImageConversionFlagEE(void);
extern QPixmap _ZN7QPixmapC2EPKPKc(void);
extern QPixmap _ZN7QPixmapC1EPKPKc(void);
extern QPixmap _ZN7QPixmapC2ERKS_(void);
extern QPixmap _ZN7QPixmapC1ERKS_(void);
extern QPixmap _ZN7QPixmapD2Ev(void);
extern QPixmap _ZN7QPixmapD1Ev(void);
extern QPixmap _ZN7QPixmapD0Ev(void);
extern QPixmap _ZN7QPixmapaSERKS_(void);
extern QPixmap _ZNK7QPixmapcv8QVariantEv(void);
extern bool _ZNK7QPixmap6isNullEv(void);
extern int _ZNK7QPixmap7devTypeEv(void);
extern int _ZNK7QPixmap5widthEv(void);
extern int _ZNK7QPixmap6heightEv(void);
extern QSize _ZNK7QPixmap4sizeEv(void);
extern QRect _ZNK7QPixmap4rectEv(void);
extern int _ZNK7QPixmap5depthEv(void);
extern int _ZN7QPixmap12defaultDepthEv(void);
extern void _ZN7QPixmap4fillERK6QColor(void);
extern void _ZN7QPixmap4fillEPK7QWidgetRK6QPoint(void);
extern  _ZNK7QPixmap4maskEv(void);
extern void _ZN7QPixmap7setMaskERK7QBitmap(void);
extern QPixmap _ZNK7QPixmap12alphaChannelEv(void);
extern void _ZN7QPixmap15setAlphaChannelERKS_(void);
extern bool _ZNK7QPixmap8hasAlphaEv(void);
extern bool _ZNK7QPixmap15hasAlphaChannelEv(void);
extern  _ZNK7QPixmap19createHeuristicMaskEb(void);
extern  _ZNK7QPixmap19createMaskFromColorERK6QColor(void);
extern QPixmap _ZN7QPixmap10grabWindowEmiiii(void);
extern QPixmap _ZN7QPixmap10grabWidgetEP7QWidgetRK5QRect(void);
extern QPixmap _ZNK7QPixmap6scaledERK5QSizeN2Qt15AspectRatioModeENS3_18TransformationModeE(void);
extern QPixmap _ZNK7QPixmap13scaledToWidthEiN2Qt18TransformationModeE(void);
extern QPixmap _ZNK7QPixmap14scaledToHeightEiN2Qt18TransformationModeE(void);
extern QPixmap _ZNK7QPixmap11transformedERK7QMatrixN2Qt18TransformationModeE(void);
extern  _ZN7QPixmap10trueMatrixERK7QMatrixii(void);
extern QImage _ZNK7QPixmap7toImageEv(void);
extern QPixmap _ZN7QPixmap9fromImageERK6QImage6QFlagsIN2Qt19ImageConversionFlagEE(void);
extern bool _ZN7QPixmap4loadERK7QStringPKc6QFlagsIN2Qt19ImageConversionFlagEE(void);
extern bool _ZN7QPixmap12loadFromDataEPKhjPKc6QFlagsIN2Qt19ImageConversionFlagEE(void);
extern bool _ZNK7QPixmap4saveERK7QStringPKci(void);
extern bool _ZNK7QPixmap4saveEP9QIODevicePKci(void);
extern QPixmap _ZNK7QPixmap4copyERK5QRect(void);
extern int _ZNK7QPixmap12serialNumberEv(void);
extern bool _ZNK7QPixmap10isDetachedEv(void);
extern void _ZN7QPixmap6detachEv(void);
extern int _ZN7QPixmap19x11SetDefaultScreenEi(void);
extern void _ZN7QPixmap12x11SetScreenEi(void);
extern  _ZNK7QPixmap7x11InfoEv(void);
extern N2Qt6HANDLEE _ZNK7QPixmap16x11PictureHandleEv(void);
extern N2Qt6HANDLEE _ZNK7QPixmap6handleEv(void);
extern  _ZNK7QPixmap11paintEngineEv(void);
extern int _ZNK7QPixmap6metricEN12QPaintDevice17PaintDeviceMetricE(void);
extern QPixmap _ZN7QPixmapC2ERK7QStringPKcNS_9ColorModeE(void);
extern QPixmap _ZN7QPixmapC1ERK7QStringPKcNS_9ColorModeE(void);
extern bool _ZN7QPixmap4loadERK7QStringPKcNS_9ColorModeE(void);
extern bool _ZN7QPixmap12loadFromDataEPKhjPKcNS_9ColorModeE(void);
extern QPixmap _ZN7QPixmapC2ERK6QImage(void);
extern QPixmap _ZN7QPixmapC1ERK6QImage(void);
extern QPixmap _ZN7QPixmapaSERK6QImage(void);
extern bool _ZN7QPixmap16convertFromImageERK6QImageNS_9ColorModeE(void);
extern QDataStream _ZlsR11QDataStreamRK7QPixmap(void);
extern QDataStream _ZrsR11QDataStreamR7QPixmap(void);
extern void _Z7copyBltP7QPixmapiiPKS_iiii(void);
// *INDENT-ON*
#endif
