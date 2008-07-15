#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QLINEEDIT_H_
#define _QTGUI_QLINEEDIT_H_

class QLineEdit;
// *INDENT-OFF*

class QLineEdit : public QWidget
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QLineEdit(QWidget*);
     QLineEdit(QString const&, QWidget*);
     QLineEdit(QWidget*, char const*);
     QLineEdit(QString const&, QWidget*, char const*);
     QLineEdit(QString const&, QString const&, QWidget*, char const*);
     ~QLineEdit();
    QString text() const;
    QString displayText() const;
    int maxLength() const;
    void setMaxLength(int);
    void setFrame(bool);
    bool hasFrame() const;
    enum _ZN9QLineEdit8EchoModeE echoMode() const;
    void setEchoMode(QLineEdit::EchoMode);
    bool isReadOnly() const;
    void setReadOnly(bool);
    void setValidator(QValidator const*);
    const QValidator * validator() const;
    QSize sizeHint() const;
    QSize minimumSizeHint() const;
    int cursorPosition() const;
    void setCursorPosition(int);
    int cursorPositionAt(QPoint const&);
    void setAlignment(QFlags<Qt::AlignmentFlag>);
     alignment() const;
    void cursorForward(bool, int);
    void cursorBackward(bool, int);
    void cursorWordForward(bool);
    void cursorWordBackward(bool);
    void backspace();
    void del();
    void home(bool);
    void end(bool);
    bool isModified() const;
    void setModified(bool);
    void setSelection(int, int);
    bool hasSelectedText() const;
    QString selectedText() const;
    int selectionStart() const;
    bool isUndoAvailable() const;
    bool isRedoAvailable() const;
    void setDragEnabled(bool);
    bool dragEnabled() const;
    QString inputMask() const;
    void setInputMask(QString const&);
    bool hasAcceptableInput() const;
    void setText(QString const&);
    void clear();
    void selectAll();
    void undo();
    void redo();
    void cut();
    void copy() const;
    void paste();
    void deselect();
    void insert(QString const&);
    QMenu * createStandardContextMenu();
    QVariant inputMethodQuery(Qt::InputMethodQuery) const;
    bool event(QEvent*);
    bool validateAndSet(QString const&, int, int, int);
    bool edited() const;
    void setEdited(bool);
    int characterAt(int, QChar*) const;
    bool getSelection(int*, int*);
    void setCompleter(QCompleter*);
    QCompleter * completer() const;
protected:
    void textChanged(QString const&);
    void textEdited(QString const&);
    void cursorPositionChanged(int, int);
    void returnPressed();
    void editingFinished();
    void selectionChanged();
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void mouseDoubleClickEvent(QMouseEvent*);
    void keyPressEvent(QKeyEvent*);
    void focusInEvent(QFocusEvent*);
    void focusOutEvent(QFocusEvent*);
    void paintEvent(QPaintEvent*);
    void dragEnterEvent(QDragEnterEvent*);
    void dragMoveEvent(QDragMoveEvent*);
    void dragLeaveEvent(QDragLeaveEvent*);
    void dropEvent(QDropEvent*);
    void changeEvent(QEvent*);
    void contextMenuEvent(QContextMenuEvent*);
    void inputMethodEvent(QInputMethodEvent*);
    void lostFocus();
};

enum EchoMode	
{
Normal = 0,	
NoEcho = 1,	
Password = 2
}
;


/* Function prototypes */

extern struct QMetaObject _ZN9QLineEdit16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
