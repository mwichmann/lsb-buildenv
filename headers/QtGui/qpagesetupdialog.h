#ifndef _QTGUI_QPAGESETUPDIALOG_H_
#define _QTGUI_QPAGESETUPDIALOG_H_

class QPageSetupDialog;
// *INDENT-OFF*

class QPageSetupDialog : public QAbstractPageSetupDialog
{
private:
public:
     ~QPageSetupDialog();
     QPageSetupDialog(QPrinter*, QWidget*);
    int exec();
    int qt_metacall(QMetaObject::Call, int, void**);
    void * qt_metacast(char const*);
    struct QMetaObject * metaObject() const;
};

// *INDENT-ON*
#endif
