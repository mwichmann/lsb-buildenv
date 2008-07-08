#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QBUTTONGROUP_H_
#define _QTGUI_QBUTTONGROUP_H_

class QButtonGroup;
// *INDENT-OFF*

class QButtonGroup : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QButtonGroup(QObject*);
     ~QButtonGroup();
    void setExclusive(bool);
    bool exclusive() const;
    void addButton(QAbstractButton*);
    void addButton(QAbstractButton*, int);
    void removeButton(QAbstractButton*);
     buttons() const;
    QAbstractButton * checkedButton() const;
    QAbstractButton * button(int) const;
    void setId(QAbstractButton*, int);
    int id(QAbstractButton*) const;
    int checkedId() const;
protected:
    void buttonClicked(QAbstractButton*);
    void buttonClicked(int);
    void buttonPressed(int);
    void buttonPressed(QAbstractButton*);
    void buttonReleased(int);
    void buttonReleased(QAbstractButton*);
};


/* Function prototypes */

extern struct QMetaObject _ZN12QButtonGroup16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
