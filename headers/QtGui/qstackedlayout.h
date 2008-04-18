#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSTACKEDLAYOUT_H_
#define _QTGUI_QSTACKEDLAYOUT_H_

class QStackedLayout;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QStackedLayout : public QLayout
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QStackedLayout();
     QStackedLayout(QWidget*);
     QStackedLayout(QLayout*);
     ~QStackedLayout();
    int addWidget(QWidget*);
    int insertWidget(int, QWidget*);
    QWidget * currentWidget() const;
    int currentIndex() const;
    QWidget * widget(int) const;
    int count() const;
    void addItem(QLayoutItem*);
    QSize sizeHint() const;
    QSize minimumSize() const;
    QLayoutItem * itemAt(int) const;
    QLayoutItem * takeAt(int);
    void setGeometry(QRect const&);
    void setCurrentIndex(int);
    void setCurrentWidget(QWidget*);
protected:
    void widgetRemoved(int);
    void currentChanged(int);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN14QStackedLayout16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
