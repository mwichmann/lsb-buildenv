#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QABSTRACTPAGESETUPDIALOG_H_
#define _QTGUI_QABSTRACTPAGESETUPDIALOG_H_

class QAbstractPageSetupDialog;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QAbstractPageSetupDialog : public QDialog
{
private:
public:
     ~QAbstractPageSetupDialog();
     QAbstractPageSetupDialog(QPrinter*, QWidget*);
     QAbstractPageSetupDialog(QAbstractPageSetupDialogPrivate&, QPrinter*, QWidget*);
    QPrinter * printer();
    int qt_metacall(QMetaObject::Call, int, void**);
    void * qt_metacast(char const*);
    struct QMetaObject * metaObject() const;
};

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
