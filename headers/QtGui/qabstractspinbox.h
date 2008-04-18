#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QABSTRACTSPINBOX_H_
#define _QTGUI_QABSTRACTSPINBOX_H_

class QAbstractSpinBox;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef class QFlags<QAbstractSpinBox::StepEnabledFlag>
{
private:
public:
}StepEnabled	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
class QAbstractSpinBox : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QAbstractSpinBox(QWidget*);
     ~QAbstractSpinBox();
    enum _ZN16QAbstractSpinBox13ButtonSymbolsE buttonSymbols() const;
    void setButtonSymbols(QAbstractSpinBox::ButtonSymbols);
    QString text() const;
    QString specialValueText() const;
    void setSpecialValueText(QString const&);
    bool wrapping() const;
    void setWrapping(bool);
    void setReadOnly(bool);
    bool isReadOnly() const;
    void setAlignment(QFlags<Qt::AlignmentFlag>);
     alignment() const;
    void setFrame(bool);
    bool hasFrame() const;
    QSize sizeHint() const;
    QSize minimumSizeHint() const;
    void interpretText();
    bool event(QEvent*);
    enum _ZN10QValidator5StateE validate(QString&, int&) const;
    void fixup(QString&) const;
    void stepBy(int);
    void stepUp();
    void stepDown();
    void selectAll();
    void clear();
     QAbstractSpinBox(QAbstractSpinBoxPrivate&, QWidget*);
    void setAccelerated(bool);
    void setCorrectionMode(QAbstractSpinBox::CorrectionMode);
    bool isAccelerated() const;
    enum _ZN16QAbstractSpinBox14CorrectionModeE correctionMode() const;
    bool hasAcceptableInput() const;
protected:
    void resizeEvent(QResizeEvent*);
    void keyPressEvent(QKeyEvent*);
    void keyReleaseEvent(QKeyEvent*);
    void wheelEvent(QWheelEvent*);
    void focusInEvent(QFocusEvent*);
    void focusOutEvent(QFocusEvent*);
    void contextMenuEvent(QContextMenuEvent*);
    void changeEvent(QEvent*);
    void closeEvent(QCloseEvent*);
    void hideEvent(QHideEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void timerEvent(QTimerEvent*);
    void paintEvent(QPaintEvent*);
    void showEvent(QShowEvent*);
    QLineEdit * lineEdit() const;
    void setLineEdit(QLineEdit*);
    QFlags<QAbstractSpinBox::StepEnabledFlag> stepEnabled() const;
    void editingFinished();
};

enum StepEnabledFlag	
{
StepNone = 0,	
StepUpEnabled = 1,	
StepDownEnabled = 2
}
;

class QFlags<QAbstractSpinBox::StepEnabledFlag>
{
private:
public:
};

enum ButtonSymbols	
{
UpDownArrows = 0,	
PlusMinus = 1
}
;

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN16QAbstractSpinBox16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
