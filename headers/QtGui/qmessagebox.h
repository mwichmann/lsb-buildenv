#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QMESSAGEBOX_H_
#define _QTGUI_QMESSAGEBOX_H_

class QMessageBox;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QMessageBox : public QDialog
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QMessageBox(QWidget*);
     QMessageBox(QString const&, QString const&, QMessageBox::Icon, int, int, int, QWidget*, QFlags<Qt::WindowType>);
     ~QMessageBox();
    QString text() const;
    void setText(QString const&);
    enum _ZN11QMessageBox4IconE icon() const;
    void setIcon(QMessageBox::Icon);
    QPixmap iconPixmap() const;
    void setIconPixmap(QPixmap const&);
    QString buttonText(int) const;
    void setButtonText(int, QString const&);
    enum _ZN2Qt10TextFormatE textFormat() const;
    void setTextFormat(Qt::TextFormat);
    int information(QWidget*, QString const&, QString const&, int, int, int);
    int information(QWidget*, QString const&, QString const&, QString const&, QString const&, QString const&, int, int);
    int question(QWidget*, QString const&, QString const&, int, int, int);
    int question(QWidget*, QString const&, QString const&, QString const&, QString const&, QString const&, int, int);
    int warning(QWidget*, QString const&, QString const&, int, int, int);
    int warning(QWidget*, QString const&, QString const&, QString const&, QString const&, QString const&, int, int);
    int critical(QWidget*, QString const&, QString const&, int, int, int);
    int critical(QWidget*, QString const&, QString const&, QString const&, QString const&, QString const&, int, int);
    void about(QWidget*, QString const&, QString const&);
    void aboutQt(QWidget*, QString const&);
    QSize sizeHint() const;
     QMessageBox(QString const&, QString const&, QMessageBox::Icon, int, int, int, QWidget*, char const*, bool, QFlags<Qt::WindowType>);
     QMessageBox(QWidget*, char const*);
    QPixmap standardIcon(QMessageBox::Icon, Qt::GUIStyle);
    QPixmap standardIcon(QMessageBox::Icon);
     QMessageBox(QMessageBox::Icon, QString const&, QString const&, QFlags<QMessageBox::StandardButton>, QWidget*, QFlags<Qt::WindowType>);
     information(QWidget*, QString const&, QString const&, QFlags<QMessageBox::StandardButton>, QMessageBox::StandardButton);
    void removeButton(QAbstractButton*);
    void setWindowTitle(QString const&);
    void setDetailedText(QString const&);
    void setEscapeButton(QAbstractButton*);
    void setDefaultButton(QPushButton*);
    void setWindowModality(Qt::WindowModality);
    void setInformativeText(QString const&);
    void setStandardButtons(QFlags<QMessageBox::StandardButton>);
     warning(QWidget*, QString const&, QString const&, QFlags<QMessageBox::StandardButton>, QMessageBox::StandardButton);
     critical(QWidget*, QString const&, QString const&, QFlags<QMessageBox::StandardButton>, QMessageBox::StandardButton);
     question(QWidget*, QString const&, QString const&, QFlags<QMessageBox::StandardButton>, QMessageBox::StandardButton);
    QPushButton * addButton(QMessageBox::StandardButton);
    void addButton(QAbstractButton*, QMessageBox::ButtonRole);
    QPushButton * addButton(QString const&, QMessageBox::ButtonRole);
    QString detailedText() const;
    QAbstractButton * escapeButton() const;
    QAbstractButton * clickedButton() const;
    QPushButton * defaultButton() const;
     standardButton(QAbstractButton*) const;
    QString informativeText() const;
    QFlags<QMessageBox::StandardButton> standardButtons() const;
    QAbstractButton * button(QMessageBox::StandardButton) const;
protected:
    void resizeEvent(QResizeEvent*);
    void showEvent(QShowEvent*);
    void closeEvent(QCloseEvent*);
    void keyPressEvent(QKeyEvent*);
    void changeEvent(QEvent*);
};

enum Icon	
{
NoIcon = 0,	
Information = 1,	
Warning = 2,	
Critical = 3,	
Question = 4
}
;

enum Button	
{
NoButton = 0,	
Ok = 1,	
Cancel = 2,	
Yes = 3,	
No = 4,	
Abort = 5,	
Retry = 6,	
Ignore = 7,	
YesAll = 8,	
NoAll = 9,	
ButtonMask = 255,	
Default = 256,	
Escape = 512,	
FlagMask = 768
}
;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN11QMessageBox16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
