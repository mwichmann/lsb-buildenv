#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPROGRESSDIALOG_H_
#define _QTGUI_QPROGRESSDIALOG_H_

class QProgressDialog;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QProgressDialog : public QDialog
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QProgressDialog(QWidget*, QFlags<Qt::WindowType>);
     QProgressDialog(QString const&, QString const&, int, int, QWidget*, QFlags<Qt::WindowType>);
     ~QProgressDialog();
    void setLabel(QLabel*);
    void setCancelButton(QPushButton*);
    void setBar(QProgressBar*);
    bool wasCanceled() const;
    int minimum() const;
    int maximum() const;
    void setRange(int, int);
    int value() const;
    QSize sizeHint() const;
    QString labelText() const;
    int minimumDuration() const;
    void setAutoReset(bool);
    bool autoReset() const;
    void setAutoClose(bool);
    bool autoClose() const;
    void cancel();
    void reset();
    void setMaximum(int);
    void setMinimum(int);
    void setValue(int);
    void setLabelText(QString const&);
    void setCancelButtonText(QString const&);
    void setMinimumDuration(int);
protected:
    void canceled();
    void resizeEvent(QResizeEvent*);
    void closeEvent(QCloseEvent*);
    void changeEvent(QEvent*);
    void showEvent(QShowEvent*);
    void forceShow();
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN15QProgressDialog16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
