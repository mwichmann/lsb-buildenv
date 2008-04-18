#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QDIAL_H_
#define _QTGUI_QDIAL_H_

class QDial;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef enum QtValidLicenseForGuiModule	QtGuiModule	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
class QDial : public QAbstractSlider
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QDial(QWidget*);
     ~QDial();
    bool wrapping() const;
    int notchSize() const;
    void setNotchTarget(double);
    qreal notchTarget() const;
    bool notchesVisible() const;
    QSize sizeHint() const;
    QSize minimumSizeHint() const;
    void setNotchesVisible(bool);
    void setWrapping(bool);
     QDial(int, int, int, int, QWidget*, char const*);
     QDial(QWidget*, char const*);
protected:
    bool event(QEvent*);
    void resizeEvent(QResizeEvent*);
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void sliderChange(QAbstractSlider::SliderChange);
    void dialPressed();
    void dialMoved(int);
    void dialReleased();
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN5QDial16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
