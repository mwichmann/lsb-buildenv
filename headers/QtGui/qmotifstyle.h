#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QMOTIFSTYLE_H_
#define _QTGUI_QMOTIFSTYLE_H_

class QMotifStyle;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QMotifStyle : public QCommonStyle
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QMotifStyle(bool);
     ~QMotifStyle();
    void setUseHighlightColors(bool);
    bool useHighlightColors() const;
    void polish(QPalette&);
    void polish(QWidget*);
    void unpolish(QWidget*);
    void polish(QApplication*);
    void unpolish(QApplication*);
    void drawPrimitive(QStyle::PrimitiveElement, QStyleOption const*, QPainter*, QWidget const*) const;
    void drawControl(QStyle::ControlElement, QStyleOption const*, QPainter*, QWidget const*) const;
    void drawComplexControl(QStyle::ComplexControl, QStyleOptionComplex const*, QPainter*, QWidget const*) const;
    QRect subControlRect(QStyle::ComplexControl, QStyleOptionComplex const*, QStyle::SubControl, QWidget const*) const;
    int pixelMetric(QStyle::PixelMetric, QStyleOption const*, QWidget const*) const;
    QSize sizeFromContents(QStyle::ContentsType, QStyleOption const*, QSize const&, QWidget const*) const;
    QRect subElementRect(QStyle::SubElement, QStyleOption const*, QWidget const*) const;
    QPixmap standardPixmap(QStyle::StandardPixmap, QStyleOption const*, QWidget const*) const;
    int styleHint(QStyle::StyleHint, QStyleOption const*, QWidget const*, QStyleHintReturn*) const;
    bool event(QEvent*);
    QPalette standardPalette() const;
     QMotifStyle(QMotifStylePrivate&, bool);
protected:
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*, QEvent*);
    QIcon standardIconImplementation(QStyle::StandardPixmap, QStyleOption const*, QWidget const*) const;
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN11QMotifStyle16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
