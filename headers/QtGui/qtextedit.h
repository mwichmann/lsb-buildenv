#ifndef _QTGUI_QTEXTEDIT_H_
#define _QTGUI_QTEXTEDIT_H_

class QFlags < QTextEdit::AutoFormattingFlag >;
// *INDENT-OFF*

typedef class QFlags<QTextEdit::AutoFormattingFlag>
{
private:
public:
}AutoFormatting	
;

class QTextEdit : public QAbstractScrollArea
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTextEdit(QWidget*);
     QTextEdit(QString const&, QWidget*);
     ~QTextEdit();
    void setDocument(QTextDocument*);
    QTextDocument * document() const;
    void setTextCursor(QTextCursor const&);
    QTextCursor textCursor() const;
    bool isReadOnly() const;
    void setReadOnly(bool);
    qreal fontPointSize() const;
    QString fontFamily() const;
    int fontWeight() const;
    bool fontUnderline() const;
    bool fontItalic() const;
    QColor textColor() const;
    QFont currentFont() const;
     alignment() const;
    void mergeCurrentCharFormat(QTextCharFormat const&);
    void setCurrentCharFormat(QTextCharFormat const&);
    QTextCharFormat currentCharFormat() const;
    QFlags<QTextEdit::AutoFormattingFlag> autoFormatting() const;
    void setAutoFormatting(QFlags<QTextEdit::AutoFormattingFlag>);
    bool tabChangesFocus() const;
    void setTabChangesFocus(bool);
    enum _ZN9QTextEdit12LineWrapModeE lineWrapMode() const;
    void setLineWrapMode(QTextEdit::LineWrapMode);
    int lineWrapColumnOrWidth() const;
    void setLineWrapColumnOrWidth(int);
    enum _ZN11QTextOption8WrapModeE wordWrapMode() const;
    void setWordWrapMode(QTextOption::WrapMode);
    bool find(QString const&, QFlags<QTextDocument::FindFlag>);
    void ensureCursorVisible();
    QVariant loadResource(int, QUrl const&);
    QMenu * createStandardContextMenu();
    QTextCursor cursorForPosition(QPoint const&) const;
    QRect cursorRect(QTextCursor const&) const;
    QRect cursorRect() const;
    QString anchorAt(QPoint const&) const;
    bool overwriteMode() const;
    void setOverwriteMode(bool);
    int tabStopWidth() const;
    void setTabStopWidth(int);
    bool acceptRichText() const;
    void setAcceptRichText(bool);
    void setFontPointSize(double);
    void setFontFamily(QString const&);
    void setFontWeight(int);
    void setFontUnderline(bool);
    void setFontItalic(bool);
    void setTextColor(QColor const&);
    void setCurrentFont(QFont const&);
    void setAlignment(QFlags<Qt::AlignmentFlag>);
    void setPlainText(QString const&);
    void setHtml(QString const&);
    void cut();
    void copy();
    void paste();
    void clear();
    void selectAll();
    void insertPlainText(QString const&);
    void insertHtml(QString const&);
    void append(QString const&);
    void scrollToAnchor(QString const&);
    void zoomIn(int);
    void zoomOut(int);
     QTextEdit(QTextEditPrivate&, QWidget*);
     QTextEdit(QWidget*, char const*);
    void moveCursor(QTextEdit::CursorAction, QTextCursor::MoveMode);
    void doKeyboardAction(QTextEdit::KeyboardAction);
    void setText(QString const&);
    QString text() const;
    void setTextFormat(Qt::TextFormat);
    enum _ZN2Qt10TextFormatE textFormat() const;
    void moveCursor(QTextCursor::MoveOperation, QTextCursor::MoveMode);
    void moveCursor(QTextEdit::CursorAction, bool);
    void setCursorWidth(int);
    void setExtraSelections(QList<QTextEdit::ExtraSelection> const&);
    void setTextInteractionFlags(QFlags<Qt::TextInteractionFlag>);
    void redo();
    void undo();
    int cursorWidth() const;
    QList<QTextEdit::ExtraSelection> extraSelections() const;
     textInteractionFlags() const;
    bool canPaste() const;
protected:
    void textChanged();
    void undoAvailable(bool);
    void redoAvailable(bool);
    void currentCharFormatChanged(QTextCharFormat const&);
    void copyAvailable(bool);
    void selectionChanged();
    void cursorPositionChanged();
    bool event(QEvent*);
    void timerEvent(QTimerEvent*);
    void keyPressEvent(QKeyEvent*);
    void resizeEvent(QResizeEvent*);
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    void mouseDoubleClickEvent(QMouseEvent*);
    bool focusNextPrevChild(bool);
    void contextMenuEvent(QContextMenuEvent*);
    void dragEnterEvent(QDragEnterEvent*);
    void dragLeaveEvent(QDragLeaveEvent*);
    void dragMoveEvent(QDragMoveEvent*);
    void dropEvent(QDropEvent*);
    void focusInEvent(QFocusEvent*);
    void focusOutEvent(QFocusEvent*);
    void showEvent(QShowEvent*);
    void changeEvent(QEvent*);
    void wheelEvent(QWheelEvent*);
    QMimeData * createMimeDataFromSelection() const;
    bool canInsertFromMimeData(QMimeData const*) const;
    void insertFromMimeData(QMimeData const*);
    void inputMethodEvent(QInputMethodEvent*);
    QVariant inputMethodQuery(Qt::InputMethodQuery) const;
    void scrollContentsBy(int, int);
    void currentFontChanged(QFont const&);
    void currentColorChanged(QColor const&);
    void keyReleaseEvent(QKeyEvent*);
};

enum LineWrapMode	
{
NoWrap = 0,	
WidgetWidth = 1,	
FixedPixelWidth = 2,	
FixedColumnWidth = 3
}
;

enum AutoFormattingFlag	
{
AutoAll = -1,	
AutoNone = 0,	
AutoBulletList = 1
}
;

class QFlags<QTextEdit::AutoFormattingFlag>
{
private:
public:
};

enum CursorAction	
{
MoveBackward = 0,	
MoveForward = 1,	
MoveWordBackward = 2,	
MoveWordForward = 3,	
MoveUp = 4,	
MoveDown = 5,	
MoveLineStart = 6,	
MoveLineEnd = 7,	
MoveHome = 8,	
MoveEnd = 9,	
MovePageUp = 10,	
MovePgUp = 10,	
MovePageDown = 11,	
MovePgDown = 11
}
;

enum KeyboardAction	
{
ActionBackspace = 0,	
ActionDelete = 1,	
ActionReturn = 2,	
ActionKill = 3,	
ActionWordBackspace = 4,	
ActionWordDelete = 5
}
;


extern struct QMetaObject _ZN9QTextEdit16staticMetaObjectE ;
// *INDENT-ON*
#endif
