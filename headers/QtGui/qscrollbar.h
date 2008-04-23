#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSCROLLBAR_H_
#define _QTGUI_QSCROLLBAR_H_

class QScrollBar;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QScrollBar : public QAbstractSlider
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QScrollBar(QWidget*);
     QScrollBar(Qt::Orientation, QWidget*);
     ~QScrollBar();
    QSize sizeHint() const;
    bool event(QEvent*);
     QScrollBar(QWidget*, char const*);
     QScrollBar(Qt::Orientation, QWidget*, char const*);
     QScrollBar(int, int, int, int, int, Qt::Orientation, QWidget*, char const*);
protected:
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void hideEvent(QHideEvent*);
    void sliderChange(QAbstractSlider::SliderChange);
    void contextMenuEvent(QContextMenuEvent*);
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN10QScrollBar16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
