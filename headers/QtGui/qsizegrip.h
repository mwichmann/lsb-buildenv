#ifndef _QTGUI_QSIZEGRIP_H_
#define _QTGUI_QSIZEGRIP_H_

class QSizeGrip;
// *INDENT-OFF*

class QSizeGrip : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSizeGrip(QWidget*);
     ~QSizeGrip();
    QSize sizeHint() const;
    void setVisible(bool);
     QSizeGrip(QWidget*, char const*);
protected:
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    bool eventFilter(QObject*, QEvent*);
    bool event(QEvent*);
};


extern struct QMetaObject _ZN9QSizeGrip16staticMetaObjectE ;
// *INDENT-ON*
#endif
