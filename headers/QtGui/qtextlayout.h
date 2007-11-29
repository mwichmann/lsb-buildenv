#ifndef _QTGUI_QTEXTLAYOUT_H_
#define _QTGUI_QTEXTLAYOUT_H_

class QTextLine;
// *INDENT-OFF*




class QTextInlineObject
{
private:
public:
};

class QTextLayout
{
private:
public:
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


extern QRectF _ZNK17QTextInlineObject4rectEv(void);
extern qreal _ZNK17QTextInlineObject5widthEv(void);
extern qreal _ZNK17QTextInlineObject6ascentEv(void);
extern qreal _ZNK17QTextInlineObject7descentEv(void);
extern qreal _ZNK17QTextInlineObject6heightEv(void);
extern enum N2Qt15LayoutDirectionE _ZNK17QTextInlineObject13textDirectionEv(void);
extern void _ZN17QTextInlineObject8setWidthEd(void);
extern void _ZN17QTextInlineObject9setAscentEd(void);
extern void _ZN17QTextInlineObject10setDescentEd(void);
extern int _ZNK17QTextInlineObject12textPositionEv(void);
extern int _ZNK17QTextInlineObject11formatIndexEv(void);
extern QTextFormat _ZNK17QTextInlineObject6formatEv(void);
extern QTextLayout _ZN11QTextLayoutC2Ev(void);
extern QTextLayout _ZN11QTextLayoutC1Ev(void);
extern QTextLayout _ZN11QTextLayoutC2ERK7QString(void);
extern QTextLayout _ZN11QTextLayoutC1ERK7QString(void);
extern QTextLayout _ZN11QTextLayoutC2ERK7QStringRK5QFontP12QPaintDevice(void);
extern QTextLayout _ZN11QTextLayoutC1ERK7QStringRK5QFontP12QPaintDevice(void);
extern QTextLayout _ZN11QTextLayoutC2ERK10QTextBlock(void);
extern QTextLayout _ZN11QTextLayoutC1ERK10QTextBlock(void);
extern  _ZN11QTextLayoutD2Ev(void);
extern  _ZN11QTextLayoutD1Ev(void);
extern void _ZN11QTextLayout7setFontERK5QFont(void);
extern QFont _ZNK11QTextLayout4fontEv(void);
extern void _ZN11QTextLayout7setTextERK7QString(void);
extern QString _ZNK11QTextLayout4textEv(void);
extern void _ZN11QTextLayout13setTextOptionERK11QTextOption(void);
extern QTextOption _ZNK11QTextLayout10textOptionEv(void);
extern void _ZN11QTextLayout14setPreeditAreaEiRK7QString(void);
extern int _ZNK11QTextLayout19preeditAreaPositionEv(void);
extern QString _ZNK11QTextLayout15preeditAreaTextEv(void);
extern void _ZN11QTextLayout20setAdditionalFormatsERK5QListINS_11FormatRangeEE(void);
extern  _ZNK11QTextLayout17additionalFormatsEv(void);
extern void _ZN11QTextLayout22clearAdditionalFormatsEv(void);
extern void _ZN11QTextLayout15setCacheEnabledEb(void);
extern bool _ZNK11QTextLayout12cacheEnabledEv(void);
extern void _ZN11QTextLayout11beginLayoutEv(void);
extern void _ZN11QTextLayout9endLayoutEv(void);
extern  _ZN11QTextLayout10createLineEv(void);
extern int _ZNK11QTextLayout9lineCountEv(void);
extern  _ZNK11QTextLayout6lineAtEi(void);
extern  _ZNK11QTextLayout19lineForTextPositionEi(void);
extern bool _ZNK11QTextLayout21isValidCursorPositionEi(void);
extern int _ZNK11QTextLayout18nextCursorPositionEiNS_10CursorModeE(void);
extern int _ZNK11QTextLayout22previousCursorPositionEiNS_10CursorModeE(void);
extern void _ZNK11QTextLayout4drawEP8QPainterRK7QPointFRK7QVectorINS_11FormatRangeEERK6QRectF(void);
extern void _ZNK11QTextLayout10drawCursorEP8QPainterRK7QPointFi(void);
extern QPointF _ZNK11QTextLayout8positionEv(void);
extern void _ZN11QTextLayout11setPositionERK7QPointF(void);
extern QRectF _ZNK11QTextLayout12boundingRectEv(void);
extern qreal _ZNK11QTextLayout12minimumWidthEv(void);
extern qreal _ZNK11QTextLayout12maximumWidthEv(void);
extern QRectF _ZNK9QTextLine4rectEv(void);
extern qreal _ZNK9QTextLine1xEv(void);
extern qreal _ZNK9QTextLine1yEv(void);
extern qreal _ZNK9QTextLine5widthEv(void);
extern qreal _ZNK9QTextLine6ascentEv(void);
extern qreal _ZNK9QTextLine7descentEv(void);
extern qreal _ZNK9QTextLine6heightEv(void);
extern qreal _ZNK9QTextLine16naturalTextWidthEv(void);
extern QRectF _ZNK9QTextLine15naturalTextRectEv(void);
extern qreal _ZNK9QTextLine9cursorToXEPiNS_4EdgeE(void);
extern int _ZNK9QTextLine9xToCursorEdNS_14CursorPositionE(void);
extern void _ZN9QTextLine12setLineWidthEd(void);
extern void _ZN9QTextLine13setNumColumnsEi(void);
extern void _ZN9QTextLine11setPositionERK7QPointF(void);
extern int _ZNK9QTextLine9textStartEv(void);
extern int _ZNK9QTextLine10textLengthEv(void);
extern void _ZNK9QTextLine4drawEP8QPainterRK7QPointFPKN11QTextLayout11FormatRangeE(void);
// *INDENT-ON*
#endif
