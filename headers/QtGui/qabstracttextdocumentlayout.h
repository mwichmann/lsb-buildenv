#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QABSTRACTTEXTDOCUMENTLAYOUT_H_
#define _QTGUI_QABSTRACTTEXTDOCUMENTLAYOUT_H_

class QTextObjectInterface;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QAbstractTextDocumentLayout : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QAbstractTextDocumentLayout(QTextDocument*);
     ~QAbstractTextDocumentLayout();
    QString anchorAt(QPointF const&) const;
    void setPaintDevice(QPaintDevice*);
    QPaintDevice * paintDevice() const;
    QTextDocument * document() const;
    void registerHandler(int, QObject*);
     handlerForObject(int) const;
     QAbstractTextDocumentLayout(QAbstractTextDocumentLayoutPrivate&, QTextDocument*);
protected:
    void update(QRectF const&);
    void documentSizeChanged(QSizeF const&);
    void pageCountChanged(int);
    void resizeInlineObject(QTextInlineObject, int, QTextFormat const&);
    void positionInlineObject(QTextInlineObject, int, QTextFormat const&);
    void drawInlineObject(QPainter*, QRectF const&, QTextInlineObject, int, QTextFormat const&);
    int formatIndex(int);
    QTextCharFormat format(int);
};

struct Selection	;

struct PaintContext	;

class QTextObjectInterface
{
private:
public:
     ~QTextObjectInterface();
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN27QAbstractTextDocumentLayout16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
