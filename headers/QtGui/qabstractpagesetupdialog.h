#ifndef _QTGUI_QABSTRACTPAGESETUPDIALOG_H_
#define _QTGUI_QABSTRACTPAGESETUPDIALOG_H_

class QAbstractPageSetupDialog;
// *INDENT-OFF*

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

// *INDENT-ON*
#endif
