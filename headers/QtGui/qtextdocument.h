#ifndef _QTGUI_QTEXTDOCUMENT_H_
#define _QTGUI_QTEXTDOCUMENT_H_

class QAbstractUndoItem;
// *INDENT-OFF*



typedef FindFlags	
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


extern bool _ZN2Qt15mightBeRichTextERK7QString(void);
extern QString _ZN2Qt6escapeERK7QString(void);
extern QString _ZN2Qt20convertFromPlainTextERK7QStringNS_14WhiteSpaceModeE(void);
extern QTextCodec _ZN2Qt12codecForHtmlERK10QByteArray(void);
extern struct QMetaObject _ZN13QTextDocument16staticMetaObjectE ;
extern struct QMetaObject _ZNK13QTextDocument10metaObjectEv(void);
extern void _ZN13QTextDocument11qt_metacastEPKc(void);
extern int _ZN13QTextDocument11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QTextDocument _ZN13QTextDocumentC2EP7QObject(void);
extern QTextDocument _ZN13QTextDocumentC1EP7QObject(void);
extern QTextDocument _ZN13QTextDocumentC2ERK7QStringP7QObject(void);
extern QTextDocument _ZN13QTextDocumentC1ERK7QStringP7QObject(void);
extern QTextDocument _ZN13QTextDocumentD2Ev(void);
extern QTextDocument _ZN13QTextDocumentD1Ev(void);
extern QTextDocument _ZN13QTextDocumentD0Ev(void);
extern QTextDocument _ZNK13QTextDocument5cloneEP7QObject(void);
extern bool _ZNK13QTextDocument7isEmptyEv(void);
extern void _ZN13QTextDocument5clearEv(void);
extern void _ZN13QTextDocument18setUndoRedoEnabledEb(void);
extern bool _ZNK13QTextDocument17isUndoRedoEnabledEv(void);
extern bool _ZNK13QTextDocument15isUndoAvailableEv(void);
extern bool _ZNK13QTextDocument15isRedoAvailableEv(void);
extern void _ZN13QTextDocument17setDocumentLayoutEP27QAbstractTextDocumentLayout(void);
extern  _ZNK13QTextDocument14documentLayoutEv(void);
extern void _ZN13QTextDocument18setMetaInformationENS_15MetaInformationERK7QString(void);
extern QString _ZNK13QTextDocument15metaInformationENS_15MetaInformationE(void);
extern QString _ZNK13QTextDocument6toHtmlERK10QByteArray(void);
extern void _ZN13QTextDocument7setHtmlERK7QString(void);
extern QString _ZNK13QTextDocument11toPlainTextEv(void);
extern void _ZN13QTextDocument12setPlainTextERK7QString(void);
extern  _ZNK13QTextDocument4findERK7QStringi6QFlagsINS_8FindFlagEE(void);
extern  _ZNK13QTextDocument4findERK7QStringRK11QTextCursor6QFlagsINS_8FindFlagEE(void);
extern QTextFrame _ZNK13QTextDocument7frameAtEi(void);
extern QTextFrame _ZNK13QTextDocument9rootFrameEv(void);
extern QTextObject _ZNK13QTextDocument6objectEi(void);
extern QTextObject _ZNK13QTextDocument15objectForFormatERK11QTextFormat(void);
extern QTextBlock _ZNK13QTextDocument9findBlockEi(void);
extern QTextBlock _ZNK13QTextDocument5beginEv(void);
extern QTextBlock _ZNK13QTextDocument3endEv(void);
extern void _ZN13QTextDocument11setPageSizeERK6QSizeF(void);
extern QSizeF _ZNK13QTextDocument8pageSizeEv(void);
extern void _ZN13QTextDocument14setDefaultFontERK5QFont(void);
extern QFont _ZNK13QTextDocument11defaultFontEv(void);
extern int _ZNK13QTextDocument9pageCountEv(void);
extern bool _ZNK13QTextDocument10isModifiedEv(void);
extern void _ZNK13QTextDocument5printEP8QPrinter(void);
extern QVariant _ZNK13QTextDocument8resourceEiRK4QUrl(void);
extern void _ZN13QTextDocument11addResourceEiRK4QUrlRK8QVariant(void);
extern  _ZNK13QTextDocument10allFormatsEv(void);
extern void _ZN13QTextDocument17markContentsDirtyEii(void);
extern void _ZN13QTextDocument19setUseDesignMetricsEb(void);
extern bool _ZNK13QTextDocument16useDesignMetricsEv(void);
extern void _ZN13QTextDocument14contentsChangeEiii(void);
extern void _ZN13QTextDocument15contentsChangedEv(void);
extern void _ZN13QTextDocument13undoAvailableEb(void);
extern void _ZN13QTextDocument13redoAvailableEb(void);
extern void _ZN13QTextDocument19modificationChangedEb(void);
extern void _ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(void);
extern void _ZN13QTextDocument4undoEv(void);
extern void _ZN13QTextDocument4redoEv(void);
extern void _ZN13QTextDocument14appendUndoItemEP17QAbstractUndoItem(void);
extern void _ZN13QTextDocument11setModifiedEb(void);
extern QTextObject _ZN13QTextDocument12createObjectERK11QTextFormat(void);
extern QVariant _ZN13QTextDocument12loadResourceEiRK4QUrl(void);
extern  _ZNK13QTextDocument9docHandleEv(void);
// *INDENT-ON*
#endif
