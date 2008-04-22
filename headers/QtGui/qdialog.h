#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QDIALOG_H_
#define _QTGUI_QDIALOG_H_

class QDialog;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QDialog : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QDialog(QWidget*, QFlags<Qt::WindowType>);
     QDialog(QWidget*, char const*, bool, QFlags<Qt::WindowType>);
     ~QDialog();
    int result() const;
    void setVisible(bool);
    void setOrientation(Qt::Orientation);
    enum _ZN2Qt11OrientationE orientation() const;
    void setExtension(QWidget*);
    QWidget * extension() const;
    QSize sizeHint() const;
    QSize minimumSizeHint() const;
    void setSizeGripEnabled(bool);
    bool isSizeGripEnabled() const;
    void setModal(bool);
    void setResult(int);
    int exec();
    void done(int);
    void accept();
    void reject();
    void showExtension(bool);
     QDialog(QDialogPrivate&, QWidget*, QFlags<Qt::WindowType>);
protected:
    void finished(int);
    void accepted();
    void rejected();
    void keyPressEvent(QKeyEvent*);
    void closeEvent(QCloseEvent*);
    void showEvent(QShowEvent*);
    void resizeEvent(QResizeEvent*);
    void contextMenuEvent(QContextMenuEvent*);
    bool eventFilter(QObject*, QEvent*);
    void adjustPosition(QWidget*);
};

enum DialogCode	
{
Rejected = 0,	
Accepted = 1
}
;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN7QDialog16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
