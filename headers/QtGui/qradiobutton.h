#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QRADIOBUTTON_H_
#define _QTGUI_QRADIOBUTTON_H_

class QRadioButton;
// *INDENT-OFF*

class QRadioButton : public QAbstractButton
{
private:
public:
     ~QRadioButton();
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QRadioButton(QWidget*);
     QRadioButton(QString const&, QWidget*);
    QSize sizeHint() const;
     QRadioButton(QWidget*, char const*);
     QRadioButton(QString const&, QWidget*, char const*);
protected:
    bool event(QEvent*);
    bool hitButton(QPoint const&) const;
    void paintEvent(QPaintEvent*);
    void mouseMoveEvent(QMouseEvent*);
};


/* Function prototypes */

extern struct QMetaObject _ZN12QRadioButton16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
