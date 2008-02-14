#ifndef _QTGUI_QERRORMESSAGE_H_
#define _QTGUI_QERRORMESSAGE_H_

class QErrorMessage;
// *INDENT-OFF*

class QErrorMessage : public QDialog
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QErrorMessage(QWidget*);
     ~QErrorMessage();
    QErrorMessage * qtHandler();
    void showMessage(QString const&);
protected:
    void done(int);
};


extern struct QMetaObject _ZN13QErrorMessage16staticMetaObjectE ;
// *INDENT-ON*
#endif
