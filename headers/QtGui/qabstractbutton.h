#ifndef _QTGUI_QABSTRACTBUTTON_H_
#define _QTGUI_QABSTRACTBUTTON_H_

class QAbstractButton;
// *INDENT-OFF*

class QAbstractButton : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QAbstractButton(QWidget*);
     ~QAbstractButton();
    void setText(QString const&);
    QString text() const;
    void setIcon(QIcon const&);
    QIcon icon() const;
    QSize iconSize() const;
    void setShortcut(QKeySequence const&);
    QKeySequence shortcut() const;
    void setCheckable(bool);
    bool isCheckable() const;
    bool isChecked() const;
    void setDown(bool);
    bool isDown() const;
    void setAutoRepeat(bool);
    bool autoRepeat() const;
    void setAutoExclusive(bool);
    bool autoExclusive() const;
    QButtonGroup * group() const;
    void setIconSize(QSize const&);
    void animateClick(int);
    void click();
    void toggle();
    void setChecked(bool);
     QAbstractButton(QWidget*, char const*, QFlags<Qt::WindowType>);
     iconSet() const;
     QAbstractButton(QAbstractButtonPrivate&, QWidget*);
    void setAutoRepeatDelay(int);
    void setAutoRepeatInterval(int);
    int autoRepeatDelay() const;
    int autoRepeatInterval() const;
protected:
    void pressed();
    void released();
    void clicked(bool);
    void toggled(bool);
    bool hitButton(QPoint const&) const;
    void checkStateSet();
    void nextCheckState();
    bool event(QEvent*);
    void keyPressEvent(QKeyEvent*);
    void keyReleaseEvent(QKeyEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void focusInEvent(QFocusEvent*);
    void focusOutEvent(QFocusEvent*);
    void changeEvent(QEvent*);
    void timerEvent(QTimerEvent*);
};


extern struct QMetaObject _ZN15QAbstractButton16staticMetaObjectE ;
// *INDENT-ON*
#endif
