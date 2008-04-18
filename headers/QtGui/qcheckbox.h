#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QCHECKBOX_H_
#define _QTGUI_QCHECKBOX_H_

class QCheckBox;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QCheckBox : public QAbstractButton
{
private:
public:
     ~QCheckBox();
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QCheckBox(QWidget*);
     QCheckBox(QString const&, QWidget*);
    QSize sizeHint() const;
    void setTristate(bool);
    bool isTristate() const;
    enum _ZN2Qt10CheckStateE checkState() const;
    void setCheckState(Qt::CheckState);
     QCheckBox(QWidget*, char const*);
     QCheckBox(QString const&, QWidget*, char const*);
protected:
    void stateChanged(int);
    bool event(QEvent*);
    bool hitButton(QPoint const&) const;
    void checkStateSet();
    void nextCheckState();
    void paintEvent(QPaintEvent*);
    void mouseMoveEvent(QMouseEvent*);
};

enum ToggleState	
{
Off = 0,	
NoChange = 1,	
On = 2
}
;

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN9QCheckBox16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
