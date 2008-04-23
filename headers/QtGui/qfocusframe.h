#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QFOCUSFRAME_H_
#define _QTGUI_QFOCUSFRAME_H_

class QFocusFrame;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QFocusFrame : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QFocusFrame(QWidget*);
     ~QFocusFrame();
    void setWidget(QWidget*);
    QWidget * widget() const;
protected:
    bool event(QEvent*);
    bool eventFilter(QObject*, QEvent*);
    void paintEvent(QPaintEvent*);
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN11QFocusFrame16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
