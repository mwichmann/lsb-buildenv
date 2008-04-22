#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPRINTDIALOG_H_
#define _QTGUI_QPRINTDIALOG_H_

class QPrintDialog;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QPrintDialog : public QAbstractPrintDialog
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QPrintDialog(QPrinter*, QWidget*);
     ~QPrintDialog();
    void setPrinter(QPrinter*, bool);
    QPrinter * printer() const;
    void addButton(QPushButton*);
    int exec();
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN12QPrintDialog16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
