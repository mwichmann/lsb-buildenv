#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QERRORMESSAGE_H_
#define _QTGUI_QERRORMESSAGE_H_

class QErrorMessage;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
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

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN13QErrorMessage16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
