#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTEXTCURSOR_H_
#define _QTGUI_QTEXTCURSOR_H_

class QTextCursor;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QTextCursor
{
private:
public:
     QTextCursor();
     QTextCursor(QTextDocument*);
     QTextCursor(QTextFrame*);
     QTextCursor(QTextBlock const&);
     QTextCursor(QTextCursor const&);
    QTextCursor & operator=(QTextCursor const&);
     ~QTextCursor();
    bool isNull() const;
    void setPosition(int, QTextCursor::MoveMode);
    int position() const;
    int anchor() const;
    void insertText(QString const&);
    void insertText(QString const&, QTextCharFormat const&);
    bool movePosition(QTextCursor::MoveOperation, QTextCursor::MoveMode, int);
    void deleteChar();
    void deletePreviousChar();
    void select(QTextCursor::SelectionType);
    bool hasSelection() const;
    bool hasComplexSelection() const;
    void removeSelectedText();
    void clearSelection();
    int selectionStart() const;
    int selectionEnd() const;
    QString selectedText() const;
    QTextDocumentFragment selection() const;
    void selectedTableCells(int*, int*, int*, int*) const;
    QTextBlock block() const;
    QTextCharFormat charFormat() const;
    void setCharFormat(QTextCharFormat const&);
    void mergeCharFormat(QTextCharFormat const&);
    QTextBlockFormat blockFormat() const;
    void setBlockFormat(QTextBlockFormat const&);
    void mergeBlockFormat(QTextBlockFormat const&);
    QTextCharFormat blockCharFormat() const;
    void setBlockCharFormat(QTextCharFormat const&);
    void mergeBlockCharFormat(QTextCharFormat const&);
    bool atBlockStart() const;
    bool atBlockEnd() const;
    bool atStart() const;
    bool atEnd() const;
    void insertBlock();
    void insertBlock(QTextBlockFormat const&);
    void insertBlock(QTextBlockFormat const&, QTextCharFormat const&);
     insertList(QTextListFormat const&);
     insertList(QTextListFormat::Style);
     createList(QTextListFormat const&);
     createList(QTextListFormat::Style);
     currentList() const;
    QTextTable * insertTable(int, int, QTextTableFormat const&);
    QTextTable * insertTable(int, int);
    QTextTable * currentTable() const;
     insertFrame(QTextFrameFormat const&);
     currentFrame() const;
    void insertFragment(QTextDocumentFragment const&);
    void insertImage(QTextImageFormat const&);
    void insertImage(QString const&);
    void beginEditBlock();
    void joinPreviousEditBlock();
    void endEditBlock();
    bool operator!=(QTextCursor const&) const;
    bool operator<(QTextCursor const&) const;
    bool operator<=(QTextCursor const&) const;
    bool operator==(QTextCursor const&) const;
    bool operator>=(QTextCursor const&) const;
    bool operator>(QTextCursor const&) const;
    bool isCopyOf(QTextCursor const&) const;
    void insertHtml(QString const&);
    void insertImage(QTextImageFormat const&, QTextFrameFormat::Position);
    int blockNumber() const;
    int columnNumber() const;
};

enum MoveMode	
{
MoveAnchor = 0,	
KeepAnchor = 1
}
;

enum MoveOperation	
{
NoMove = 0,	
Start = 1,	
Up = 2,	
StartOfLine = 3,	
StartOfBlock = 4,	
StartOfWord = 5,	
PreviousBlock = 6,	
PreviousCharacter = 7,	
PreviousWord = 8,	
Left = 9,	
WordLeft = 10,	
End = 11,	
Down = 12,	
EndOfLine = 13,	
EndOfWord = 14,	
EndOfBlock = 15,	
NextBlock = 16,	
NextCharacter = 17,	
NextWord = 18,	
Right = 19,	
WordRight = 20
}
;

enum SelectionType	
{
WordUnderCursor = 0,	
LineUnderCursor = 1,	
BlockUnderCursor = 2
}
;

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
