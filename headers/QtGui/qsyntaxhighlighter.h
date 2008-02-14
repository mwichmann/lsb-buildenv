#ifndef _QTGUI_QSYNTAXHIGHLIGHTER_H_
#define _QTGUI_QSYNTAXHIGHLIGHTER_H_

class QSyntaxHighlighter;
// *INDENT-OFF*

class QSyntaxHighlighter : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSyntaxHighlighter(QObject*);
     QSyntaxHighlighter(QTextDocument*);
     QSyntaxHighlighter(QTextEdit*);
     ~QSyntaxHighlighter();
    void setDocument(QTextDocument*);
    QTextDocument * document() const;
    void rehighlight();
protected:
    void setFormat(int, int, QTextCharFormat const&);
    void setFormat(int, int, QColor const&);
    void setFormat(int, int, QFont const&);
    QTextCharFormat format(int) const;
    int previousBlockState() const;
    int currentBlockState() const;
    void setCurrentBlockState(int);
    void setCurrentBlockUserData(QTextBlockUserData*);
    QTextBlockUserData * currentBlockUserData() const;
};


extern struct QMetaObject _ZN18QSyntaxHighlighter16staticMetaObjectE ;
// *INDENT-ON*
#endif
