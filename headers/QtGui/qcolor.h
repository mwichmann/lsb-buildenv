#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QCOLOR_H_
#define _QTGUI_QCOLOR_H_

class QColor;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QColor
{
private:
public:
     QColor(Qt::GlobalColor);
     QColor(unsigned int);
    QString name() const;
    void setNamedColor(QString const&);
    QStringList colorNames();
    int alpha() const;
    void setAlpha(int);
    qreal alphaF() const;
    void setAlphaF(double);
    int red() const;
    int green() const;
    int blue() const;
    void setRed(int);
    void setGreen(int);
    void setBlue(int);
    qreal redF() const;
    qreal greenF() const;
    qreal blueF() const;
    void setRedF(double);
    void setGreenF(double);
    void setBlueF(double);
    void getRgb(int*, int*, int*, int*) const;
    void setRgb(int, int, int, int);
    void getRgbF(double*, double*, double*, double*) const;
    void setRgbF(double, double, double, double);
    QRgb rgba() const;
    void setRgba(unsigned int);
    QRgb rgb() const;
    void setRgb(unsigned int);
    int hue() const;
    int saturation() const;
    int value() const;
    qreal hueF() const;
    qreal saturationF() const;
    qreal valueF() const;
    void getHsv(int*, int*, int*, int*) const;
    void setHsv(int, int, int, int);
    void getHsvF(double*, double*, double*, double*) const;
    void setHsvF(double, double, double, double);
    int cyan() const;
    int magenta() const;
    int yellow() const;
    int black() const;
    qreal cyanF() const;
    qreal magentaF() const;
    qreal yellowF() const;
    qreal blackF() const;
    void getCmyk(int*, int*, int*, int*, int*);
    void setCmyk(int, int, int, int, int);
    void getCmykF(double*, double*, double*, double*, double*);
    void setCmykF(double, double, double, double, double);
    QColor toRgb() const;
    QColor toHsv() const;
    QColor toCmyk() const;
    QColor convertTo(QColor::Spec) const;
    QColor fromRgb(unsigned int);
    QColor fromRgba(unsigned int);
    QColor fromRgb(int, int, int, int);
    QColor fromRgbF(double, double, double, double);
    QColor fromHsv(int, int, int, int);
    QColor fromHsvF(double, double, double, double);
    QColor fromCmyk(int, int, int, int, int);
    QColor fromCmykF(double, double, double, double, double);
    QColor light(int) const;
    QColor dark(int) const;
    QColor & operator=(QColor const&);
    QColor & operator=(Qt::GlobalColor);
    bool operator==(QColor const&) const;
    bool operator!=(QColor const&) const;
    QVariant operator QVariant() const;
    uint pixel(int) const;
     QColor(QColor::Spec);
private:
    void invalidate();
};

enum Spec	
{
Invalid = 0,	
Rgb = 1,	
Hsv = 2,	
Cmyk = 3
}
;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern QDebug _Zls6QDebugRK6QColor(const QColor &);
extern QDataStream _ZlsR11QDataStreamRK6QColor(QDataStream &, const QColor &);
extern QDataStream _ZrsR11QDataStreamR6QColor(QDataStream &, QColor &);
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
