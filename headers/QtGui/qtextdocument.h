#ifndef _QTGUI_QTEXTDOCUMENT_H_
#define _QTGUI_QTEXTDOCUMENT_H_

#include <QtCore/qobjectdefs.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qtextcodec.h>
#include <QtCore/qvariant.h>
#include <QtCore/qsize.h>
#include <QtGui/qfont.h>
#include <QtGui/qtextobject.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N13QTextDocument9FindFlagsE;

    enum N2Qt15HitTestAccuracyE {
	ExactHit,
	FuzzyHit
    };

    enum N2Qt14WhiteSpaceModeE {
	WhiteSpaceModeUndefined,
	WhiteSpaceNormal,
	WhiteSpacePre,
	WhiteSpaceNoWrap
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    enum N13QTextDocument15MetaInformationE {
	DocumentTitle
    };

    enum N13QTextDocument8FindFlagE {
	FindBackward,
	FindCaseSensitively,
	FindWholeWords
    };

    Unknown Type:".Class.";

    enum N13QTextDocument12ResourceTypeE {
	HtmlResource,
	ImageResource,
	UserResource
    };


    extern bool _ZN2Qt15mightBeRichTextERK7QString(void);
    extern Class _ZN2Qt6escapeERK7QString(void);
    extern Class
	_ZN2Qt20convertFromPlainTextERK7QStringNS_14WhiteSpaceModeE(void);
    extern Class _ZN2Qt12codecForHtmlERK10QByteArray(void);
    extern struct QMetaObject _ZN13QTextDocument16staticMetaObjectE;
    extern struct QMetaObject _ZNK13QTextDocument10metaObjectEv(void);
    extern void _ZN13QTextDocument11qt_metacastEPKc(void);
    extern int
	_ZN13QTextDocument11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN13QTextDocumentC2EP7QObject(void);
    extern Class _ZN13QTextDocumentC1EP7QObject(void);
    extern Class _ZN13QTextDocumentC2ERK7QStringP7QObject(void);
    extern Class _ZN13QTextDocumentC1ERK7QStringP7QObject(void);
    extern Class _ZN13QTextDocumentD2Ev(void);
    extern Class _ZN13QTextDocumentD1Ev(void);
    extern Class _ZN13QTextDocumentD0Ev(void);
    extern Class _ZNK13QTextDocument5cloneEP7QObject(void);
    extern bool _ZNK13QTextDocument7isEmptyEv(void);
    extern void _ZN13QTextDocument5clearEv(void);
    extern void _ZN13QTextDocument18setUndoRedoEnabledEb(void);
    extern bool _ZNK13QTextDocument17isUndoRedoEnabledEv(void);
    extern bool _ZNK13QTextDocument15isUndoAvailableEv(void);
    extern bool _ZNK13QTextDocument15isRedoAvailableEv(void);
    extern void
	_ZN13QTextDocument17setDocumentLayoutEP27QAbstractTextDocumentLayout
	(void);
    extern _ZNK13QTextDocument14documentLayoutEv(void);
    extern void
	_ZN13QTextDocument18setMetaInformationENS_15MetaInformationERK7QString
	(void);
    extern Class
	_ZNK13QTextDocument15metaInformationENS_15MetaInformationE(void);
    extern Class _ZNK13QTextDocument6toHtmlERK10QByteArray(void);
    extern void _ZN13QTextDocument7setHtmlERK7QString(void);
    extern Class _ZNK13QTextDocument11toPlainTextEv(void);
    extern void _ZN13QTextDocument12setPlainTextERK7QString(void);
    extern
	_ZNK13QTextDocument4findERK7QStringi6QFlagsINS_8FindFlagEE(void);
    extern
	_ZNK13QTextDocument4findERK7QStringRK11QTextCursor6QFlagsINS_8FindFlagEE
	(void);
    extern Class _ZNK13QTextDocument7frameAtEi(void);
    extern Class _ZNK13QTextDocument9rootFrameEv(void);
    extern Class _ZNK13QTextDocument6objectEi(void);
    extern Class
	_ZNK13QTextDocument15objectForFormatERK11QTextFormat(void);
    extern Class _ZNK13QTextDocument9findBlockEi(void);
    extern Class _ZNK13QTextDocument5beginEv(void);
    extern Class _ZNK13QTextDocument3endEv(void);
    extern void _ZN13QTextDocument11setPageSizeERK6QSizeF(void);
    extern Class _ZNK13QTextDocument8pageSizeEv(void);
    extern void _ZN13QTextDocument14setDefaultFontERK5QFont(void);
    extern Class _ZNK13QTextDocument11defaultFontEv(void);
    extern int _ZNK13QTextDocument9pageCountEv(void);
    extern bool _ZNK13QTextDocument10isModifiedEv(void);
    extern void _ZNK13QTextDocument5printEP8QPrinter(void);
    extern Class _ZNK13QTextDocument8resourceEiRK4QUrl(void);
    extern void _ZN13QTextDocument11addResourceEiRK4QUrlRK8QVariant(void);
    extern _ZNK13QTextDocument10allFormatsEv(void);
    extern void _ZN13QTextDocument17markContentsDirtyEii(void);
    extern void _ZN13QTextDocument19setUseDesignMetricsEb(void);
    extern bool _ZNK13QTextDocument16useDesignMetricsEv(void);
    extern void _ZN13QTextDocument14contentsChangeEiii(void);
    extern void _ZN13QTextDocument15contentsChangedEv(void);
    extern void _ZN13QTextDocument13undoAvailableEb(void);
    extern void _ZN13QTextDocument13redoAvailableEb(void);
    extern void _ZN13QTextDocument19modificationChangedEb(void);
    extern void
	_ZN13QTextDocument21cursorPositionChangedERK11QTextCursor(void);
    extern void _ZN13QTextDocument4undoEv(void);
    extern void _ZN13QTextDocument4redoEv(void);
    extern void
	_ZN13QTextDocument14appendUndoItemEP17QAbstractUndoItem(void);
    extern void _ZN13QTextDocument11setModifiedEb(void);
    extern Class _ZN13QTextDocument12createObjectERK11QTextFormat(void);
    extern Class _ZN13QTextDocument12loadResourceEiRK4QUrl(void);
    extern _ZNK13QTextDocument9docHandleEv(void);
#ifdef __cplusplus
}
#endif
#endif
