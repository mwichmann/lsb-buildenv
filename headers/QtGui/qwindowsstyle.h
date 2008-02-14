#ifndef _QTGUI_QWINDOWSSTYLE_H_
#define _QTGUI_QWINDOWSSTYLE_H_

class QWindowsStyle;
// *INDENT-OFF*

class QWindowsStyle : public QCommonStyle
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QWindowsStyle();
     ~QWindowsStyle();
    void polish(QApplication*);
    void unpolish(QApplication*);
    void polish(QWidget*);
    void unpolish(QWidget*);
    void polish(QPalette&);
    void drawPrimitive(QStyle::PrimitiveElement, QStyleOption const*, QPainter*, QWidget const*) const;
    void drawControl(QStyle::ControlElement, QStyleOption const*, QPainter*, QWidget const*) const;
    QRect subElementRect(QStyle::SubElement, QStyleOption const*, QWidget const*) const;
    void drawComplexControl(QStyle::ComplexControl, QStyleOptionComplex const*, QPainter*, QWidget const*) const;
    QSize sizeFromContents(QStyle::ContentsType, QStyleOption const*, QSize const&, QWidget const*) const;
    int pixelMetric(QStyle::PixelMetric, QStyleOption const*, QWidget const*) const;
    int styleHint(QStyle::StyleHint, QStyleOption const*, QWidget const*, QStyleHintReturn*) const;
    QPixmap standardPixmap(QStyle::StandardPixmap, QStyleOption const*, QWidget const*) const;
     QWindowsStyle(QWindowsStylePrivate&);
protected:
    bool eventFilter(QObject*, QEvent*);
    void timerEvent(QTimerEvent*);
    QIcon standardIconImplementation(QStyle::StandardPixmap, QStyleOption const*, QWidget const*) const;
};


extern struct QMetaObject _ZN13QWindowsStyle16staticMetaObjectE ;
// *INDENT-ON*
#endif
