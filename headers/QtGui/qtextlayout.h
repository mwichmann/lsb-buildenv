#ifndef _QTGUI_QTEXTLAYOUT_H_
#define _QTGUI_QTEXTLAYOUT_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qglobal.h>
#include <QtCore/qstring.h>
#include <QtCore/qpoint.h>
#include <QtCore/qrect.h>
#include <QtGui/qfont.h>
#include <QtGui/qtextformat.h>
#include <QtGui/qtextoption.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    Unknown Type:".Class.";

    struct N11QTextLayout11FormatRangeE;

    enum N11QTextLayout10CursorModeE {
	SkipCharacters,
	SkipWords
    };

    Unknown Type:".Class.";

    enum N9QTextLine4EdgeE {
	Leading,
	Trailing
    };

    enum N9QTextLine14CursorPositionE {
	CursorBetweenCharacters,
	CursorOnCharacter
    };


    extern Class _ZNK17QTextInlineObject4rectEv(void);
    extern qreal _ZNK17QTextInlineObject5widthEv(void);
    extern qreal _ZNK17QTextInlineObject6ascentEv(void);
    extern qreal _ZNK17QTextInlineObject7descentEv(void);
    extern qreal _ZNK17QTextInlineObject6heightEv(void);
    extern enum N2Qt15LayoutDirectionE
	_ZNK17QTextInlineObject13textDirectionEv(void);
    extern void _ZN17QTextInlineObject8setWidthEd(void);
    extern void _ZN17QTextInlineObject9setAscentEd(void);
    extern void _ZN17QTextInlineObject10setDescentEd(void);
    extern int _ZNK17QTextInlineObject12textPositionEv(void);
    extern int _ZNK17QTextInlineObject11formatIndexEv(void);
    extern Class _ZNK17QTextInlineObject6formatEv(void);
    extern Class _ZN11QTextLayoutC2Ev(void);
    extern Class _ZN11QTextLayoutC1Ev(void);
    extern Class _ZN11QTextLayoutC2ERK7QString(void);
    extern Class _ZN11QTextLayoutC1ERK7QString(void);
    extern Class
	_ZN11QTextLayoutC2ERK7QStringRK5QFontP12QPaintDevice(void);
    extern Class
	_ZN11QTextLayoutC1ERK7QStringRK5QFontP12QPaintDevice(void);
    extern Class _ZN11QTextLayoutC2ERK10QTextBlock(void);
    extern Class _ZN11QTextLayoutC1ERK10QTextBlock(void);
    extern Class _ZN11QTextLayoutD2Ev(void);
    extern Class _ZN11QTextLayoutD1Ev(void);
    extern void _ZN11QTextLayout7setFontERK5QFont(void);
    extern Class _ZNK11QTextLayout4fontEv(void);
    extern void _ZN11QTextLayout7setTextERK7QString(void);
    extern Class _ZNK11QTextLayout4textEv(void);
    extern void _ZN11QTextLayout13setTextOptionERK11QTextOption(void);
    extern Class _ZNK11QTextLayout10textOptionEv(void);
    extern void _ZN11QTextLayout14setPreeditAreaEiRK7QString(void);
    extern int _ZNK11QTextLayout19preeditAreaPositionEv(void);
    extern Class _ZNK11QTextLayout15preeditAreaTextEv(void);
    extern void
	_ZN11QTextLayout20setAdditionalFormatsERK5QListINS_11FormatRangeEE
	(void);
    extern _ZNK11QTextLayout17additionalFormatsEv(void);
    extern void _ZN11QTextLayout22clearAdditionalFormatsEv(void);
    extern void _ZN11QTextLayout15setCacheEnabledEb(void);
    extern bool _ZNK11QTextLayout12cacheEnabledEv(void);
    extern void _ZN11QTextLayout11beginLayoutEv(void);
    extern void _ZN11QTextLayout9endLayoutEv(void);
    extern _ZN11QTextLayout10createLineEv(void);
    extern int _ZNK11QTextLayout9lineCountEv(void);
    extern _ZNK11QTextLayout6lineAtEi(void);
    extern _ZNK11QTextLayout19lineForTextPositionEi(void);
    extern bool _ZNK11QTextLayout21isValidCursorPositionEi(void);
    extern int
	_ZNK11QTextLayout18nextCursorPositionEiNS_10CursorModeE(void);
    extern int
	_ZNK11QTextLayout22previousCursorPositionEiNS_10CursorModeE(void);
    extern void
	_ZNK11QTextLayout4drawEP8QPainterRK7QPointFRK7QVectorINS_11FormatRangeEERK6QRectF
	(void);
    extern void _ZNK11QTextLayout10drawCursorEP8QPainterRK7QPointFi(void);
    extern Class _ZNK11QTextLayout8positionEv(void);
    extern void _ZN11QTextLayout11setPositionERK7QPointF(void);
    extern Class _ZNK11QTextLayout12boundingRectEv(void);
    extern qreal _ZNK11QTextLayout12minimumWidthEv(void);
    extern qreal _ZNK11QTextLayout12maximumWidthEv(void);
    extern Class _ZNK9QTextLine4rectEv(void);
    extern qreal _ZNK9QTextLine1xEv(void);
    extern qreal _ZNK9QTextLine1yEv(void);
    extern qreal _ZNK9QTextLine5widthEv(void);
    extern qreal _ZNK9QTextLine6ascentEv(void);
    extern qreal _ZNK9QTextLine7descentEv(void);
    extern qreal _ZNK9QTextLine6heightEv(void);
    extern qreal _ZNK9QTextLine16naturalTextWidthEv(void);
    extern Class _ZNK9QTextLine15naturalTextRectEv(void);
    extern qreal _ZNK9QTextLine9cursorToXEPiNS_4EdgeE(void);
    extern int _ZNK9QTextLine9xToCursorEdNS_14CursorPositionE(void);
    extern void _ZN9QTextLine12setLineWidthEd(void);
    extern void _ZN9QTextLine13setNumColumnsEi(void);
    extern void _ZN9QTextLine11setPositionERK7QPointF(void);
    extern int _ZNK9QTextLine9textStartEv(void);
    extern int _ZNK9QTextLine10textLengthEv(void);
    extern void
	_ZNK9QTextLine4drawEP8QPainterRK7QPointFPKN11QTextLayout11FormatRangeE
	(void);
#ifdef __cplusplus
}
#endif
#endif
