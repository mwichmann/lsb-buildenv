#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTOOLBOX_H_
#define _QTGUI_QTOOLBOX_H_

class QToolBox;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QToolBox : public QFrame
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QToolBox(QWidget*, QFlags<Qt::WindowType>);
     ~QToolBox();
    int insertItem(int, QWidget*, QIcon const&, QString const&);
    void removeItem(int);
    void setItemEnabled(int, bool);
    bool isItemEnabled(int) const;
    void setItemText(int, QString const&);
    QString itemText(int) const;
    void setItemIcon(int, QIcon const&);
    QIcon itemIcon(int) const;
    void setItemToolTip(int, QString const&);
    QString itemToolTip(int) const;
    int currentIndex() const;
    QWidget * currentWidget() const;
    QWidget * widget(int) const;
    int indexOf(QWidget*) const;
    int count() const;
    void setCurrentIndex(int);
    void setCurrentWidget(QWidget*);
     QToolBox(QWidget*, char const*, QFlags<Qt::WindowType>);
protected:
    void currentChanged(int);
    bool event(QEvent*);
    void itemInserted(int);
    void itemRemoved(int);
    void showEvent(QShowEvent*);
    void changeEvent(QEvent*);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN8QToolBox16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
