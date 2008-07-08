#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSTACKEDWIDGET_H_
#define _QTGUI_QSTACKEDWIDGET_H_

class QStackedWidget;
// *INDENT-OFF*

class QStackedWidget : public QFrame
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QStackedWidget(QWidget*);
     ~QStackedWidget();
    int addWidget(QWidget*);
    int insertWidget(int, QWidget*);
    void removeWidget(QWidget*);
    QWidget * currentWidget() const;
    int currentIndex() const;
    int indexOf(QWidget*) const;
    QWidget * widget(int) const;
    int count() const;
    void setCurrentIndex(int);
    void setCurrentWidget(QWidget*);
protected:
    void currentChanged(int);
    void widgetRemoved(int);
    bool event(QEvent*);
};


/* Function prototypes */

extern struct QMetaObject _ZN14QStackedWidget16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
