#ifndef _QTGUI_QIMAGE_H_
#define _QTGUI_QIMAGE_H_

class QImageTextKeyLang;
// *INDENT-OFF*




class QImageTextKeyLang
{
private:
public:
};

class QImage : public QPaintDevice
{
private:
public:
};

enum InvertMode	
{
InvertRgb = 0,	
InvertRgba = 1
}
;

enum Format	
{
Format_Invalid = 0,	
Format_Mono = 1,	
Format_MonoLSB = 2,	
Format_Indexed8 = 3,	
Format_RGB32 = 4,	
Format_ARGB32 = 5,	
Format_ARGB32_Premultiplied = 6
}
;

enum Endian	
{
BigEndian = 0,	
LittleEndian = 1,	
IgnoreEndian = 2
}
;


extern QImage _ZN6QImageC2Ev(void);
extern QImage _ZN6QImageC1Ev(void);
extern QImage _ZN6QImageC2ERK5QSizeNS_6FormatE(void);
extern QImage _ZN6QImageC1ERK5QSizeNS_6FormatE(void);
extern QImage _ZN6QImageC2EiiNS_6FormatE(void);
extern QImage _ZN6QImageC1EiiNS_6FormatE(void);
extern QImage _ZN6QImageC2EPhiiNS_6FormatE(void);
extern QImage _ZN6QImageC1EPhiiNS_6FormatE(void);
extern QImage _ZN6QImageC2EPKPKc(void);
extern QImage _ZN6QImageC1EPKPKc(void);
extern QImage _ZN6QImageC2ERK7QStringPKc(void);
extern QImage _ZN6QImageC1ERK7QStringPKc(void);
extern QImage _ZN6QImageC2EPKcS1_(void);
extern QImage _ZN6QImageC1EPKcS1_(void);
extern QImage _ZN6QImageC2ERKS_(void);
extern QImage _ZN6QImageC1ERKS_(void);
extern QImage _ZN6QImageD2Ev(void);
extern QImage _ZN6QImageD1Ev(void);
extern QImage _ZN6QImageD0Ev(void);
extern QImage _ZN6QImageaSERKS_(void);
extern bool _ZNK6QImage6isNullEv(void);
extern int _ZNK6QImage7devTypeEv(void);
extern bool _ZNK6QImageeqERKS_(void);
extern bool _ZNK6QImageneERKS_(void);
extern QImage _ZNK6QImagecv8QVariantEv(void);
extern void _ZN6QImage6detachEv(void);
extern bool _ZNK6QImage10isDetachedEv(void);
extern QImage _ZNK6QImage4copyERK5QRect(void);
extern enum N6QImage6FormatE _ZNK6QImage6formatEv(void);
extern QImage _ZNK6QImage15convertToFormatENS_6FormatE6QFlagsIN2Qt19ImageConversionFlagEE(void);
extern QImage _ZNK6QImage15convertToFormatENS_6FormatERK7QVectorIjE6QFlagsIN2Qt19ImageConversionFlagEE(void);
extern int _ZNK6QImage5widthEv(void);
extern int _ZNK6QImage6heightEv(void);
extern QSize _ZNK6QImage4sizeEv(void);
extern QRect _ZNK6QImage4rectEv(void);
extern int _ZNK6QImage5depthEv(void);
extern int _ZNK6QImage9numColorsEv(void);
extern QRgb _ZNK6QImage5colorEi(void);
extern void _ZN6QImage8setColorEij(void);
extern void _ZN6QImage12setNumColorsEi(void);
extern bool _ZNK6QImage7allGrayEv(void);
extern bool _ZNK6QImage11isGrayscaleEv(void);
extern uchar _ZN6QImage4bitsEv(void);
extern uchar _ZNK6QImage4bitsEv(void);
extern int _ZNK6QImage8numBytesEv(void);
extern uchar _ZN6QImage8scanLineEi(void);
extern uchar _ZNK6QImage8scanLineEi(void);
extern int _ZNK6QImage12bytesPerLineEv(void);
extern bool _ZNK6QImage5validEii(void);
extern int _ZNK6QImage10pixelIndexEii(void);
extern QRgb _ZNK6QImage5pixelEii(void);
extern void _ZN6QImage8setPixelEiij(void);
extern  _ZNK6QImage10colorTableEv(void);
extern void _ZN6QImage13setColorTableE7QVectorIjE(void);
extern void _ZN6QImage4fillEj(void);
extern bool _ZNK6QImage15hasAlphaChannelEv(void);
extern void _ZN6QImage15setAlphaChannelERKS_(void);
extern QImage _ZNK6QImage12alphaChannelEv(void);
extern QImage _ZNK6QImage15createAlphaMaskE6QFlagsIN2Qt19ImageConversionFlagEE(void);
extern QImage _ZNK6QImage19createHeuristicMaskEb(void);
extern QImage _ZNK6QImage6scaledERK5QSizeN2Qt15AspectRatioModeENS3_18TransformationModeE(void);
extern QImage _ZNK6QImage13scaledToWidthEiN2Qt18TransformationModeE(void);
extern QImage _ZNK6QImage14scaledToHeightEiN2Qt18TransformationModeE(void);
extern QImage _ZNK6QImage11transformedERK7QMatrixN2Qt18TransformationModeE(void);
extern  _ZN6QImage10trueMatrixERK7QMatrixii(void);
extern QImage _ZNK6QImage8mirroredEbb(void);
extern QImage _ZNK6QImage10rgbSwappedEv(void);
extern void _ZN6QImage12invertPixelsENS_10InvertModeE(void);
extern bool _ZN6QImage4loadEP9QIODevicePKc(void);
extern bool _ZN6QImage4loadERK7QStringPKc(void);
extern bool _ZN6QImage12loadFromDataEPKhiPKc(void);
extern bool _ZNK6QImage4saveERK7QStringPKci(void);
extern bool _ZNK6QImage4saveEP9QIODevicePKci(void);
extern QImage _ZN6QImage8fromDataEPKhiPKc(void);
extern int _ZNK6QImage12serialNumberEv(void);
extern  _ZNK6QImage11paintEngineEv(void);
extern int _ZNK6QImage13dotsPerMeterXEv(void);
extern int _ZNK6QImage13dotsPerMeterYEv(void);
extern void _ZN6QImage16setDotsPerMeterXEi(void);
extern void _ZN6QImage16setDotsPerMeterYEi(void);
extern QPoint _ZNK6QImage6offsetEv(void);
extern void _ZN6QImage9setOffsetERK6QPoint(void);
extern QStringList _ZNK6QImage8textKeysEv(void);
extern QString _ZNK6QImage4textERK7QString(void);
extern void _ZN6QImage7setTextERK7QStringS2_(void);
extern QString _ZNK6QImage4textEPKcS1_(void);
extern  _ZNK6QImage8textListEv(void);
extern QStringList _ZNK6QImage13textLanguagesEv(void);
extern QString _ZNK6QImage4textERK17QImageTextKeyLang(void);
extern void _ZN6QImage7setTextEPKcS1_RK7QString(void);
extern QImage _ZN6QImageC2EiiiiNS_6EndianE(void);
extern QImage _ZN6QImageC1EiiiiNS_6EndianE(void);
extern QImage _ZN6QImageC2ERK5QSizeiiNS_6EndianE(void);
extern QImage _ZN6QImageC1ERK5QSizeiiNS_6EndianE(void);
extern QImage _ZN6QImageC2EPhiiiPKjiNS_6EndianE(void);
extern QImage _ZN6QImageC1EPhiiiPKjiNS_6EndianE(void);
extern QImage _ZNK6QImage12convertDepthEi6QFlagsIN2Qt19ImageConversionFlagEE(void);
extern QImage _ZNK6QImage23convertDepthWithPaletteEiPji6QFlagsIN2Qt19ImageConversionFlagEE(void);
extern QImage _ZNK6QImage15convertBitOrderENS_6EndianE(void);
extern bool _ZNK6QImage14hasAlphaBufferEv(void);
extern void _ZN6QImage14setAlphaBufferEb(void);
extern uchar _ZN6QImage9jumpTableEv(void);
extern uchar _ZNK6QImage9jumpTableEv(void);
extern bool _ZN6QImage6createERK5QSizeiiNS_6EndianE(void);
extern bool _ZN6QImage6createEiiiiNS_6EndianE(void);
extern int _ZNK6QImage6metricEN12QPaintDevice17PaintDeviceMetricE(void);
extern QDataStream _ZlsR11QDataStreamRK6QImage(void);
extern QDataStream _ZrsR11QDataStreamR6QImage(void);
extern void _Z6bitBltP6QImageiiPKS_iiii6QFlagsIN2Qt19ImageConversionFlagEE(void);
// *INDENT-ON*
#endif
