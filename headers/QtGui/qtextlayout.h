#ifndef _QTGUI_QTEXTLAYOUT_H_
#define _QTGUI_QTEXTLAYOUT_H_

class QTextLine;
// *INDENT-OFF*

class QTextInlineObject
{
private:
public:
    QRectF rect() const;
    qreal width() const;
    qreal ascent() const;
    qreal descent() const;
    qreal height() const;
    enum _ZN2Qt15LayoutDirectionE textDirection() const;
    void setWidth(double);
    void setAscent(double);
    void setDescent(double);
    int textPosition() const;
    int formatIndex() const;
    QTextFormat format() const;
};

class QTextLayout
{
private:
public:
     QTextLayout();
     QTextLayout(QString const&);
     QTextLayout(QString const&, QFont const&, QPaintDevice*);
     QTextLayout(QTextBlock const&);
     ~QTextLayout();
    void setFont(QFont const&);
    QFont font() const;
    void setText(QString const&);
    QString text() const;
    void setTextOption(QTextOption const&);
    QTextOption textOption() const;
    void setPreeditArea(int, QString const&);
    int preeditAreaPosition() const;
    QString preeditAreaText() const;
    void setAdditionalFormats(QList<QTextLayout::FormatRange> const&);
    QList<QTextLayout::FormatRange> additionalFormats() const;
    void clearAdditionalFormats();
    void setCacheEnabled(bool);
    bool cacheEnabled() const;
    void beginLayout();
    void endLayout();
    QTextLine createLine();
    int lineCount() const;
    QTextLine lineAt(int) const;
    QTextLine lineForTextPosition(int) const;
    bool isValidCursorPosition(int) const;
    int nextCursorPosition(int, QTextLayout::CursorMode) const;
    int previousCursorPosition(int, QTextLayout::CursorMode) const;
    void draw(QPainter*, QPointF const&, QVector<QTextLayout::FormatRange> const&, QRectF const&) const;
    void drawCursor(QPainter*, QPointF const&, int) const;
    QPointF position() const;
    void setPosition(QPointF const&);
    QRectF boundingRect() const;
    qreal minimumWidth() const;
    qreal maximumWidth() const;
    void drawCursor(QPainter*, QPointF const&, int, int) const;
};

struct FormatRange	;

enum CursorMode	
{
SkipCharacters = 0,	
SkipWords = 1
}
;

class QTextLine
{
private:
public:
    QRectF rect() const;
    qreal x() const;
    qreal y() const;
    qreal width() const;
    qreal ascent() const;
    qreal descent() const;
    qreal height() const;
    qreal naturalTextWidth() const;
    QRectF naturalTextRect() const;
    qreal cursorToX(int*, QTextLine::Edge) const;
    int xToCursor(double, QTextLine::CursorPosition) const;
    void setLineWidth(double);
    void setNumColumns(int);
    void setPosition(QPointF const&);
    int textStart() const;
    int textLength() const;
    void draw(QPainter*, QPointF const&, QTextLayout::FormatRange const*) const;
    QPointF position() const;
};

enum Edge	
{
Leading = 0,	
Trailing = 1
}
;

enum CursorPosition	
{
CursorBetweenCharacters = 0,	
CursorOnCharacter = 1
}
;

// *INDENT-ON*
#endif
