#ifndef _QTGUI_QINPUTDIALOG_H_
#define _QTGUI_QINPUTDIALOG_H_

class QInputDialog;
// *INDENT-OFF*

class QInputDialog : public QDialog
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
    QString getText(QWidget*, QString const&, QString const&, QLineEdit::EchoMode, QString const&, bool*, QFlags<Qt::WindowType>);
    int getInteger(QWidget*, QString const&, QString const&, int, int, int, int, bool*, QFlags<Qt::WindowType>);
    double getDouble(QWidget*, QString const&, QString const&, double, double, double, int, bool*, QFlags<Qt::WindowType>);
    QString getItem(QWidget*, QString const&, QString const&, QStringList const&, int, bool, bool*, QFlags<Qt::WindowType>);
     ~QInputDialog();
};

enum Type	
{
LineEdit = 0,	
SpinBox = 1,	
DoubleSpinBox = 2,	
ComboBox = 3,	
EditableComboBox = 4
}
;


extern struct QMetaObject _ZN12QInputDialog16staticMetaObjectE ;
// *INDENT-ON*
#endif
