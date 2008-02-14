#ifndef _QTGUI_QCDESTYLE_H_
#define _QTGUI_QCDESTYLE_H_

class QCDEStyle;
// *INDENT-OFF*

class QCDEStyle : public QMotifStyle
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QCDEStyle(bool);
     ~QCDEStyle();
    int pixelMetric(QStyle::PixelMetric, QStyleOption const*, QWidget const*) const;
    void drawControl(QStyle::ControlElement, QStyleOption const*, QPainter*, QWidget const*) const;
    void drawPrimitive(QStyle::PrimitiveElement, QStyleOption const*, QPainter*, QWidget const*) const;
    QPalette standardPalette() const;
protected:
    QIcon standardIconImplementation(QStyle::StandardPixmap, QStyleOption const*, QWidget const*) const;
};


extern struct QMetaObject _ZN9QCDEStyle16staticMetaObjectE ;
// *INDENT-ON*
#endif
