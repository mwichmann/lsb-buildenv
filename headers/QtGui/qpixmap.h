#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPIXMAP_H_
#define _QTGUI_QPIXMAP_H_

class QPixmap;
// *INDENT-OFF*

class QPixmap : public QPaintDevice
{
private:
public:
     QPixmap();
     QPixmap(int, int);
     QPixmap(QSize const&);
     QPixmap(QString const&, char const*, QFlags<Qt::ImageConversionFlag>);
     QPixmap(char const* const*);
     QPixmap(QPixmap const&);
     ~QPixmap();
    QPixmap & operator=(QPixmap const&);
    QVariant operator QVariant() const;
    bool isNull() const;
    int devType() const;
    int width() const;
    int height() const;
    QSize size() const;
    QRect rect() const;
    int depth() const;
    int defaultDepth();
    void fill(QColor const&);
    void fill(QWidget const*, QPoint const&);
    QBitmap mask() const;
    void setMask(QBitmap const&);
    QPixmap alphaChannel() const;
    void setAlphaChannel(QPixmap const&);
    bool hasAlpha() const;
    bool hasAlphaChannel() const;
    QBitmap createHeuristicMask(bool) const;
    QBitmap createMaskFromColor(QColor const&) const;
    QPixmap grabWindow(unsigned long, int, int, int, int);
    QPixmap grabWidget(QWidget*, QRect const&);
    QPixmap scaled(QSize const&, Qt::AspectRatioMode, Qt::TransformationMode) const;
    QPixmap scaledToWidth(int, Qt::TransformationMode) const;
    QPixmap scaledToHeight(int, Qt::TransformationMode) const;
    QPixmap transformed(QMatrix const&, Qt::TransformationMode) const;
    QMatrix trueMatrix(QMatrix const&, int, int);
    QImage toImage() const;
    QPixmap fromImage(QImage const&, QFlags<Qt::ImageConversionFlag>);
    bool load(QString const&, char const*, QFlags<Qt::ImageConversionFlag>);
    bool loadFromData(unsigned char const*, unsigned int, char const*, QFlags<Qt::ImageConversionFlag>);
    bool save(QString const&, char const*, int) const;
    bool save(QIODevice*, char const*, int) const;
    QPixmap copy(QRect const&) const;
    int serialNumber() const;
    bool isDetached() const;
    void detach();
    int x11SetDefaultScreen(int);
    void x11SetScreen(int);
     x11Info() const;
     x11PictureHandle() const;
     handle() const;
    QPaintEngine * paintEngine() const;
     QPixmap(QString const&, char const*, QPixmap::ColorMode);
    bool load(QString const&, char const*, QPixmap::ColorMode);
    bool loadFromData(unsigned char const*, unsigned int, char const*, QPixmap::ColorMode);
     QPixmap(QImage const&);
    QPixmap & operator=(QImage const&);
    bool convertFromImage(QImage const&, QPixmap::ColorMode);
protected:
    int metric(QPaintDevice::PaintDeviceMetric) const;
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


/* Function prototypes */

extern void _Z7copyBltP7QPixmapiiPKS_iiii(QPixmap *, const QPixmap *);
extern QDataStream _ZlsR11QDataStreamRK7QPixmap(QDataStream &, const QPixmap &);
extern QDataStream _ZrsR11QDataStreamR7QPixmap(QDataStream &, QPixmap &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
