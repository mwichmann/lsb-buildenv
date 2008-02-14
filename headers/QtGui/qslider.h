#ifndef _QTGUI_QSLIDER_H_
#define _QTGUI_QSLIDER_H_

class QSlider;
// *INDENT-OFF*

class QSlider : public QAbstractSlider
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSlider(QWidget*);
     QSlider(Qt::Orientation, QWidget*);
     ~QSlider();
    QSize sizeHint() const;
    QSize minimumSizeHint() const;
    void setTickPosition(QSlider::TickPosition);
    enum _ZN7QSlider12TickPositionE tickPosition() const;
    void setTickInterval(int);
    int tickInterval() const;
    bool event(QEvent*);
     QSlider(QWidget*, char const*);
     QSlider(Qt::Orientation, QWidget*, char const*);
     QSlider(int, int, int, int, Qt::Orientation, QWidget*, char const*);
protected:
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
};

enum TickPosition	
{
NoTicks = 0,	
NoMarks = 0,	
TicksAbove = 1,	
TicksLeft = 1,	
Above = 1,	
Left = 1,	
TicksBelow = 2,	
TicksRight = 2,	
Below = 2,	
Right = 2,	
TicksBothSides = 3,	
Both = 3
}
;


extern struct QMetaObject _ZN7QSlider16staticMetaObjectE ;
// *INDENT-ON*
#endif
