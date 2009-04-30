#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTEXTDOCUMENT_H_
#define _QTGUI_QTEXTDOCUMENT_H_

class QAbstractUndoItem;
// *INDENT-OFF*

typedef class QFlags<QTextDocument::FindFlag>QTextDocument::FindFlags	
;

enum _ZN2Qt15HitTestAccuracyE	
{
ExactHit = 0,	
FuzzyHit = 1
}
;

enum _ZN2Qt14WhiteSpaceModeE	
{
WhiteSpaceModeUndefined = -1,	
WhiteSpaceNormal = 0,	
WhiteSpacePre = 1,	
WhiteSpaceNoWrap = 2
}
;

class QAbstractUndoItem;

class QTextDocument;

enum _ZN13QTextDocument15MetaInformationE	
{
DocumentTitle = 0
}
;

enum _ZN13QTextDocument8FindFlagE	
{
FindBackward = 1,	
FindCaseSensitively = 2,	
FindWholeWords = 4
}
;

class QFlags<QTextDocument::FindFlag>;

enum _ZN13QTextDocument12ResourceTypeE	
{
HtmlResource = 1,	
ImageResource = 2,	
UserResource = 100
}
;


/* Function prototypes */

extern struct QMetaObject _ZN13QTextDocument16staticMetaObjectE;
extern QTextCodec * _ZN2Qt12codecForHtmlERK10QByteArray(QByteArray & &);
extern bool _ZN2Qt15mightBeRichTextERK7QString(QString & &);
extern QString _ZN2Qt20convertFromPlainTextERK7QStringNS_14WhiteSpaceModeE(QString & &);
extern QString _ZN2Qt6escapeERK7QString(QString & &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
