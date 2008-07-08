#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPROGRESSBAR_H_
#define _QTGUI_QPROGRESSBAR_H_

class QProgressBar;
// *INDENT-OFF*

class QProgressBar : public QWidget
{
private:
public:
     ~QProgressBar();
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QProgressBar(QWidget*);
    int minimum() const;
    int maximum() const;
    void setRange(int, int);
    int value() const;
    QString text() const;
    void setTextVisible(bool);
    bool isTextVisible() const;
     alignment() const;
    void setAlignment(QFlags<Qt::AlignmentFlag>);
    QSize sizeHint() const;
    QSize minimumSizeHint() const;
    enum _ZN2Qt11OrientationE orientation() const;
    void setInvertedAppearance(bool);
    bool invertedAppearance();
    void setTextDirection(QProgressBar::Direction);
    enum _ZN12QProgressBar9DirectionE textDirection();
    void reset();
    void setMinimum(int);
    void setMaximum(int);
    void setValue(int);
    void setOrientation(Qt::Orientation);
    void setFormat(QString const&);
    QString format() const;
protected:
    void valueChanged(int);
    bool event(QEvent*);
    void paintEvent(QPaintEvent*);
};

enum Direction	
{
TopToBottom = 0,	
BottomToTop = 1
}
;


/* Function prototypes */

extern struct QMetaObject _ZN12QProgressBar16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
