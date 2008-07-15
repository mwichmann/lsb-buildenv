#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QACTIONGROUP_H_
#define _QTGUI_QACTIONGROUP_H_

class QActionGroup;
// *INDENT-OFF*

class QActionGroup : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QActionGroup(QObject*);
     ~QActionGroup();
    QAction * addAction(QAction*);
    QAction * addAction(QString const&);
    QAction * addAction(QIcon const&, QString const&);
    void removeAction(QAction*);
     actions() const;
    QAction * checkedAction() const;
    bool isExclusive() const;
    bool isEnabled() const;
    bool isVisible() const;
    void setEnabled(bool);
    void setVisible(bool);
    void setExclusive(bool);
protected:
    void triggered(QAction*);
    void selected(QAction*);
    void hovered(QAction*);
};


/* Function prototypes */

extern struct QMetaObject _ZN12QActionGroup16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
