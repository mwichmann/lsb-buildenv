#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTEXTDOCUMENT_H_
#define _QTGUI_QTEXTDOCUMENT_H_

class QAbstractUndoItem;
// *INDENT-OFF*

typedef class QFlags<QTextDocument::FindFlag>QTextDocument::FindFlags	
;

enum Qt::HitTestAccuracy	
{
ExactHit = 0,	
FuzzyHit = 1
}
;

enum Qt::WhiteSpaceMode	
{
WhiteSpaceModeUndefined = -1,	
WhiteSpaceNormal = 0,	
WhiteSpacePre = 1,	
WhiteSpaceNoWrap = 2
}
;

class QAbstractUndoItem;

class QTextDocument;

enum QTextDocument::MetaInformation	
{
DocumentTitle = 0
}
;

enum QTextDocument::FindFlag	
{
FindBackward = 1,	
FindCaseSensitively = 2,	
FindWholeWords = 4
}
;

class QFlags<QTextDocument::FindFlag>;

enum QTextDocument::ResourceType	
{
HtmlResource = 1,	
ImageResource = 2,	
UserResource = 100
}
;


/* Function prototypes */

extern struct QMetaObject _ZN13QTextDocument16staticMetaObjectE;
extern QTextCodec * Qt::codecForHtml(QByteArray const&)(QByteArray & &);
extern bool Qt::mightBeRichText(QString const&)(QString & &);
extern QString Qt::convertFromPlainText(QString const&, Qt::WhiteSpaceMode)(QString & &);
extern QString Qt::escape(QString const&)(QString & &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
