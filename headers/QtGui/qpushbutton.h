#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPUSHBUTTON_H_
#define _QTGUI_QPUSHBUTTON_H_

class QPushButton;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QPushButton : public QAbstractButton
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QPushButton(QWidget*);
     QPushButton(QString const&, QWidget*);
     QPushButton(QIcon const&, QString const&, QWidget*);
     ~QPushButton();
    QSize sizeHint() const;
    bool autoDefault() const;
    void setAutoDefault(bool);
    bool isDefault() const;
    void setDefault(bool);
    void setMenu(QMenu*);
    QMenu * menu() const;
    void setFlat(bool);
    bool isFlat() const;
    void showMenu();
     QPushButton(QWidget*, char const*);
     QPushButton(QString const&, QWidget*, char const*);
     QPushButton(QIcon const&, QString const&, QWidget*, char const*);
protected:
    bool event(QEvent*);
    void paintEvent(QPaintEvent*);
    void keyPressEvent(QKeyEvent*);
    void focusInEvent(QFocusEvent*);
    void focusOutEvent(QFocusEvent*);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN11QPushButton16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
