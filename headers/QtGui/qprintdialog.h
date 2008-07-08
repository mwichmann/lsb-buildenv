#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPRINTDIALOG_H_
#define _QTGUI_QPRINTDIALOG_H_

class QPrintDialog;
// *INDENT-OFF*

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


/* Function prototypes */

extern struct QMetaObject _ZN12QPrintDialog16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
