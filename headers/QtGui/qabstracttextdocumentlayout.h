#ifndef _QTGUI_QABSTRACTTEXTDOCUMENTLAYOUT_H_
#define _QTGUI_QABSTRACTTEXTDOCUMENTLAYOUT_H_

class QTextObjectInterface;
// *INDENT-OFF*



class QAbstractTextDocumentLayout : public QObject
{
private:
public:
};

struct Selection	;

struct PaintContext	;

class QTextObjectInterface
{
private:
public:
};


extern struct QMetaObject _ZN27QAbstractTextDocumentLayout16staticMetaObjectE ;
extern struct QMetaObject _ZNK27QAbstractTextDocumentLayout10metaObjectEv(void);
extern void _ZN27QAbstractTextDocumentLayout11qt_metacastEPKc(void);
extern int _ZN27QAbstractTextDocumentLayout11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QAbstractTextDocumentLayout _ZN27QAbstractTextDocumentLayoutC2EP13QTextDocument(void);
extern QAbstractTextDocumentLayout _ZN27QAbstractTextDocumentLayoutC1EP13QTextDocument(void);
extern QAbstractTextDocumentLayout _ZN27QAbstractTextDocumentLayoutD2Ev(void);
extern QAbstractTextDocumentLayout _ZN27QAbstractTextDocumentLayoutD1Ev(void);
extern QAbstractTextDocumentLayout _ZN27QAbstractTextDocumentLayoutD0Ev(void);
extern QString _ZNK27QAbstractTextDocumentLayout8anchorAtERK7QPointF(void);
extern void _ZN27QAbstractTextDocumentLayout14setPaintDeviceEP12QPaintDevice(void);
extern  _ZNK27QAbstractTextDocumentLayout11paintDeviceEv(void);
extern QTextDocument _ZNK27QAbstractTextDocumentLayout8documentEv(void);
extern void _ZN27QAbstractTextDocumentLayout15registerHandlerEiP7QObject(void);
extern  _ZNK27QAbstractTextDocumentLayout16handlerForObjectEi(void);
extern void _ZN27QAbstractTextDocumentLayout6updateERK6QRectF(void);
extern void _ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(void);
extern void _ZN27QAbstractTextDocumentLayout16pageCountChangedEi(void);
extern QAbstractTextDocumentLayout _ZN27QAbstractTextDocumentLayoutC2ER34QAbstractTextDocumentLayoutPrivateP13QTextDocument(void);
extern QAbstractTextDocumentLayout _ZN27QAbstractTextDocumentLayoutC1ER34QAbstractTextDocumentLayoutPrivateP13QTextDocument(void);
extern void _ZN27QAbstractTextDocumentLayout18resizeInlineObjectE17QTextInlineObjectiRK11QTextFormat(void);
extern void _ZN27QAbstractTextDocumentLayout20positionInlineObjectE17QTextInlineObjectiRK11QTextFormat(void);
extern void _ZN27QAbstractTextDocumentLayout16drawInlineObjectEP8QPainterRK6QRectF17QTextInlineObjectiRK11QTextFormat(void);
extern int _ZN27QAbstractTextDocumentLayout11formatIndexEi(void);
extern QTextCharFormat _ZN27QAbstractTextDocumentLayout6formatEi(void);
extern  _ZN20QTextObjectInterfaceD0Ev(void);
extern  _ZN20QTextObjectInterfaceD1Ev(void);
// *INDENT-ON*
#endif