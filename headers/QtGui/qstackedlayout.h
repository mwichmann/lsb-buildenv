#ifndef _QTGUI_QSTACKEDLAYOUT_H_
#define _QTGUI_QSTACKEDLAYOUT_H_

class QStackedLayout;
// *INDENT-OFF*

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


extern struct QMetaObject _ZN14QStackedLayout16staticMetaObjectE ;
// *INDENT-ON*
#endif
