#if (__LSB_VERSION__ >= 31 )
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
     QImage();
     QImage(QSize const&, QImage::Format);
     QImage(int, int, QImage::Format);
     QImage(unsigned char*, int, int, QImage::Format);
     QImage(char const* const*);
     QImage(QString const&, char const*);
     QImage(char const*, char const*);
     QImage(QImage const&);
     ~QImage();
    QImage & operator=(QImage const&);
    bool isNull() const;
    int devType() const;
    bool operator==(QImage const&) const;
    bool operator!=(QImage const&) const;
    QVariant operator QVariant() const;
    void detach();
    bool isDetached() const;
    QImage copy(QRect const&) const;
    enum _ZN6QImage6FormatE format() const;
    QImage convertToFormat(QImage::Format, QFlags<Qt::ImageConversionFlag>) const;
    QImage convertToFormat(QImage::Format, QVector<unsigned int> const&, QFlags<Qt::ImageConversionFlag>) const;
    int width() const;
    int height() const;
    QSize size() const;
    QRect rect() const;
    int depth() const;
    int numColors() const;
    QRgb color(int) const;
    void setColor(int, unsigned int);
    void setNumColors(int);
    bool allGray() const;
    bool isGrayscale() const;
    uchar * bits();
    const uchar * bits() const;
    int numBytes() const;
    uchar * scanLine(int);
    const uchar * scanLine(int) const;
    int bytesPerLine() const;
    bool valid(int, int) const;
    int pixelIndex(int, int) const;
    QRgb pixel(int, int) const;
    void setPixel(int, int, unsigned int);
    QVector<unsigned int> colorTable() const;
    void setColorTable(QVector<unsigned int>);
    void fill(unsigned int);
    bool hasAlphaChannel() const;
    void setAlphaChannel(QImage const&);
    QImage alphaChannel() const;
    QImage createAlphaMask(QFlags<Qt::ImageConversionFlag>) const;
    QImage createHeuristicMask(bool) const;
    QImage scaled(QSize const&, Qt::AspectRatioMode, Qt::TransformationMode) const;
    QImage scaledToWidth(int, Qt::TransformationMode) const;
    QImage scaledToHeight(int, Qt::TransformationMode) const;
    QImage transformed(QMatrix const&, Qt::TransformationMode) const;
    QMatrix trueMatrix(QMatrix const&, int, int);
    QImage mirrored(bool, bool) const;
    QImage rgbSwapped() const;
    void invertPixels(QImage::InvertMode);
    bool load(QIODevice*, char const*);
    bool load(QString const&, char const*);
    bool loadFromData(unsigned char const*, int, char const*);
    bool save(QString const&, char const*, int) const;
    bool save(QIODevice*, char const*, int) const;
    QImage fromData(unsigned char const*, int, char const*);
    int serialNumber() const;
    QPaintEngine * paintEngine() const;
    int dotsPerMeterX() const;
    int dotsPerMeterY() const;
    void setDotsPerMeterX(int);
    void setDotsPerMeterY(int);
    QPoint offset() const;
    void setOffset(QPoint const&);
    QStringList textKeys() const;
    QString text(QString const&) const;
    void setText(QString const&, QString const&);
    QString text(char const*, char const*) const;
    QList<QImageTextKeyLang> textList() const;
    QStringList textLanguages() const;
    QString text(QImageTextKeyLang const&) const;
    void setText(char const*, char const*, QString const&);
     QImage(int, int, int, int, QImage::Endian);
     QImage(QSize const&, int, int, QImage::Endian);
     QImage(unsigned char*, int, int, int, unsigned int const*, int, QImage::Endian);
    QImage convertDepth(int, QFlags<Qt::ImageConversionFlag>) const;
    QImage convertDepthWithPalette(int, unsigned int*, int, QFlags<Qt::ImageConversionFlag>) const;
    QImage convertBitOrder(QImage::Endian) const;
    bool hasAlphaBuffer() const;
    void setAlphaBuffer(bool);
     jumpTable();
     jumpTable() const;
    bool create(QSize const&, int, int, QImage::Endian);
    bool create(int, int, int, int, QImage::Endian);
     QImage(unsigned char const*, int, int, QImage::Format);
protected:
    int metric(QPaintDevice::PaintDeviceMetric) const;
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


/* Function prototypes */

extern void _Z6bitBltP6QImageiiPKS_iiii6QFlagsIN2Qt19ImageConversionFlagEE(QImage *, const QImage *);
extern QDataStream _ZlsR11QDataStreamRK6QImage(QDataStream &, const QImage &);
extern QDataStream _ZrsR11QDataStreamR6QImage(QDataStream &, QImage &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
