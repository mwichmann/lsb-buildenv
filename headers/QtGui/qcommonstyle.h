#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QCOMMONSTYLE_H_
#define _QTGUI_QCOMMONSTYLE_H_

class QCommonStyle;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QCommonStyle : public QStyle
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QCommonStyle();
     ~QCommonStyle();
    void drawPrimitive(QStyle::PrimitiveElement, QStyleOption const*, QPainter*, QWidget const*) const;
    void drawControl(QStyle::ControlElement, QStyleOption const*, QPainter*, QWidget const*) const;
    QRect subElementRect(QStyle::SubElement, QStyleOption const*, QWidget const*) const;
    void drawComplexControl(QStyle::ComplexControl, QStyleOptionComplex const*, QPainter*, QWidget const*) const;
    enum _ZN6QStyle10SubControlE hitTestComplexControl(QStyle::ComplexControl, QStyleOptionComplex const*, QPoint const&, QWidget const*) const;
    QRect subControlRect(QStyle::ComplexControl, QStyleOptionComplex const*, QStyle::SubControl, QWidget const*) const;
    QSize sizeFromContents(QStyle::ContentsType, QStyleOption const*, QSize const&, QWidget const*) const;
    int pixelMetric(QStyle::PixelMetric, QStyleOption const*, QWidget const*) const;
    int styleHint(QStyle::StyleHint, QStyleOption const*, QWidget const*, QStyleHintReturn*) const;
    QPixmap standardPixmap(QStyle::StandardPixmap, QStyleOption const*, QWidget const*) const;
    QPixmap generatedIconPixmap(QIcon::Mode, QPixmap const&, QStyleOption const*) const;
protected:
    QIcon standardIconImplementation(QStyle::StandardPixmap, QStyleOption const*, QWidget const*) const;
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN12QCommonStyle16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
