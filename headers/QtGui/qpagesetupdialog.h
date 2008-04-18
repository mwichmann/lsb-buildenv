#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPAGESETUPDIALOG_H_
#define _QTGUI_QPAGESETUPDIALOG_H_

class QPageSetupDialog;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
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

#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
