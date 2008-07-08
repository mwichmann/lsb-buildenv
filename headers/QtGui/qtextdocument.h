#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTEXTDOCUMENT_H_
#define _QTGUI_QTEXTDOCUMENT_H_

class QAbstractUndoItem;
// *INDENT-OFF*

typedef class QFlags<QTextDocument::FindFlag>
{
private:
public:
}FindFlags	
;

enum HitTestAccuracy	
{
ExactHit = 0,	
FuzzyHit = 1
}
;

enum WhiteSpaceMode	
{
WhiteSpaceModeUndefined = -1,	
WhiteSpaceNormal = 0,	
WhiteSpacePre = 1,	
WhiteSpaceNoWrap = 2
}
;

class QAbstractUndoItem
{
private:
public:
};

class QTextDocument : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTextDocument(QObject*);
     QTextDocument(QString const&, QObject*);
     ~QTextDocument();
    QTextDocument * clone(QObject*) const;
    bool isEmpty() const;
    void clear();
    void setUndoRedoEnabled(bool);
    bool isUndoRedoEnabled() const;
    bool isUndoAvailable() const;
    bool isRedoAvailable() const;
    void setDocumentLayout(QAbstractTextDocumentLayout*);
    QAbstractTextDocumentLayout * documentLayout() const;
    void setMetaInformation(QTextDocument::MetaInformation, QString const&);
    QString metaInformation(QTextDocument::MetaInformation) const;
    QString toHtml(QByteArray const&) const;
    void setHtml(QString const&);
    QString toPlainText() const;
    void setPlainText(QString const&);
    QTextCursor find(QString const&, int, QFlags<QTextDocument::FindFlag>) const;
    QTextCursor find(QString const&, QTextCursor const&, QFlags<QTextDocument::FindFlag>) const;
     frameAt(int) const;
     rootFrame() const;
     object(int) const;
     objectForFormat(QTextFormat const&) const;
    QTextBlock findBlock(int) const;
    QTextBlock begin() const;
    QTextBlock end() const;
    void setPageSize(QSizeF const&);
    QSizeF pageSize() const;
    void setDefaultFont(QFont const&);
    QFont defaultFont() const;
    int pageCount() const;
    bool isModified() const;
    void print(QPrinter*) const;
    QVariant resource(int, QUrl const&) const;
    void addResource(int, QUrl const&, QVariant const&);
    QVector<QTextFormat> allFormats() const;
    void markContentsDirty(int, int);
    void setUseDesignMetrics(bool);
    bool useDesignMetrics() const;
    void undo();
    void redo();
    void appendUndoItem(QAbstractUndoItem*);
    void setModified(bool);
     docHandle() const;
    void adjustSize();
    void drawContents(QPainter*, QRectF const&);
    void setTextWidth(double);
    void setDefaultStyleSheet(QString const&);
    void setMaximumBlockCount(int);
    void redo(QTextCursor*);
    void undo(QTextCursor*);
    int blockCount() const;
    qreal idealWidth() const;
    QString defaultStyleSheet() const;
    int maximumBlockCount() const;
    QTextCursor find(QRegExp const&, int, QFlags<QTextDocument::FindFlag>) const;
    QTextCursor find(QRegExp const&, QTextCursor const&, QFlags<QTextDocument::FindFlag>) const;
    QSizeF size() const;
    qreal textWidth() const;
protected:
    void contentsChange(int, int, int);
    void contentsChanged();
    void undoAvailable(bool);
    void redoAvailable(bool);
    void modificationChanged(bool);
    void cursorPositionChanged(QTextCursor const&);
     createObject(QTextFormat const&);
    QVariant loadResource(int, QUrl const&);
};

enum MetaInformation	
{
DocumentTitle = 0
}
;

enum FindFlag	
{
FindBackward = 1,	
FindCaseSensitively = 2,	
FindWholeWords = 4
}
;

class QFlags<QTextDocument::FindFlag>
{
private:
public:
};

enum ResourceType	
{
HtmlResource = 1,	
ImageResource = 2,	
UserResource = 100
}
;


/* Function prototypes */

extern struct QMetaObject _ZN13QTextDocument16staticMetaObjectE ;
extern QTextCodec * _ZN2Qt12codecForHtmlERK10QByteArray(QByteArray & &);
extern bool _ZN2Qt15mightBeRichTextERK7QString(QString & &);
extern QString _ZN2Qt20convertFromPlainTextERK7QStringNS_14WhiteSpaceModeE(QString & &);
extern QString _ZN2Qt6escapeERK7QString(QString & &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
