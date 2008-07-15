#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QINPUTCONTEXT_H_
#define _QTGUI_QINPUTCONTEXT_H_

class QInputContext;
// *INDENT-OFF*

class QInputContext : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QInputContext(QObject*);
     ~QInputContext();
    void update();
    void mouseHandler(int, QMouseEvent*);
    QFont font() const;
    QWidget * focusWidget() const;
    void setFocusWidget(QWidget*);
    void widgetDestroyed(QWidget*);
     actions();
    bool x11FilterEvent(QWidget*, _XEvent*);
    bool filterEvent(QEvent const*);
    void sendEvent(QInputMethodEvent const&);
    QTextFormat standardFormat(QInputContext::StandardFormat) const;
};

enum StandardFormat	
{
PreeditFormat = 0,	
SelectionFormat = 1
}
;


/* Function prototypes */

extern struct QMetaObject _ZN13QInputContext16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
