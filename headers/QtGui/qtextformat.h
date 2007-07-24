#ifndef _QTGUI_QTEXTFORMAT_H_
#define _QTGUI_QTEXTFORMAT_H_

#include <QtCore/qmap.h>
#include <QtCore/qglobal.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qstring.h>
#include <QtCore/qdatastream.h>
#include <QtCore/qvariant.h>
#include <QtGui/qcolor.h>
#include <QtGui/qfont.h>
#include <QtGui/qpen.h>
#include <QtGui/qbrush.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N11QTextLength4TypeE {
	VariableLength,
	FixedLength,
	PercentageLength
    };

    Unknown Type:".Class.";

    enum N11QTextFormat10FormatTypeE {
	InvalidFormat,
	BlockFormat,
	CharFormat,
	ListFormat,
	TableFormat,
	FrameFormat,
	UserFormat
    };

    enum N11QTextFormat8PropertyE {
	ObjectIndex,
	CssFloat,
	LayoutDirection,
	OutlinePen,
	BackgroundBrush,
	ForegroundBrush,
	BlockAlignment,
	BlockTopMargin,
	BlockBottomMargin,
	BlockLeftMargin,
	BlockRightMargin,
	TextIndent,
	BlockIndent,
	BlockNonBreakableLines,
	BlockTrailingHorizontalRulerWidth,
	FontFamily,
	FontPointSize,
	FontSizeAdjustment,
	FontSizeIncrement,
	FontWeight,
	FontItalic,
	FontUnderline,
	FontOverline,
	FontStrikeOut,
	FontFixedPitch,
	FontPixelSize,
	TextUnderlineColor,
	TextVerticalAlignment,
	TextOutline,
	IsAnchor,
	AnchorHref,
	AnchorName,
	ObjectType,
	ListStyle,
	ListIndent,
	FrameBorder,
	FrameMargin,
	FramePadding,
	FrameWidth,
	FrameHeight,
	TableColumns,
	TableColumnWidthConstraints,
	TableCellSpacing,
	TableCellPadding,
	TableCellRowSpan,
	TableCellColumnSpan,
	ImageName,
	ImageWidth,
	ImageHeight,
	UserProperty
    };

    enum N11QTextFormat11ObjectTypesE {
	NoObject,
	ImageObject,
	TableObject,
	UserObject
    };

    Unknown Type:".Class.";

    enum N15QTextCharFormat17VerticalAlignmentE {
	AlignNormal,
	AlignSuperScript,
	AlignSubScript
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    enum N15QTextListFormat5StyleE {
	ListUpperAlpha,
	ListLowerAlpha,
	ListDecimal,
	ListSquare,
	ListCircle,
	ListDisc,
	ListStyleUndefined
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    enum N16QTextFrameFormat8PositionE {
	InFlow,
	FloatLeft,
	FloatRight
    };

    Unknown Type:".Class.";


    extern Class _ZlsR11QDataStreamRK11QTextLength(void);
    extern Class _ZrsR11QDataStreamR11QTextLength(void);
    extern Class _ZNK11QTextLengthcv8QVariantEv(void);
    extern Class _ZlsR11QDataStreamRK11QTextFormat(void);
    extern Class _ZrsR11QDataStreamR11QTextFormat(void);
    extern struct QMetaObject _ZN11QTextFormat16staticMetaObjectE;
    extern Class _ZN11QTextFormatC2Ev(void);
    extern Class _ZN11QTextFormatC1Ev(void);
    extern Class _ZN11QTextFormatC2Ei(void);
    extern Class _ZN11QTextFormatC1Ei(void);
    extern Class _ZN11QTextFormatC2ERKS_(void);
    extern Class _ZN11QTextFormatC1ERKS_(void);
    extern Class _ZN11QTextFormataSERKS_(void);
    extern Class _ZN11QTextFormatD2Ev(void);
    extern Class _ZN11QTextFormatD1Ev(void);
    extern void _ZN11QTextFormat5mergeERKS_(void);
    extern int _ZNK11QTextFormat4typeEv(void);
    extern int _ZNK11QTextFormat11objectIndexEv(void);
    extern void _ZN11QTextFormat14setObjectIndexEi(void);
    extern Class _ZNK11QTextFormat8propertyEi(void);
    extern void _ZN11QTextFormat11setPropertyEiRK8QVariant(void);
    extern void _ZN11QTextFormat13clearPropertyEi(void);
    extern bool _ZNK11QTextFormat11hasPropertyEi(void);
    extern bool _ZNK11QTextFormat12boolPropertyEi(void);
    extern int _ZNK11QTextFormat11intPropertyEi(void);
    extern qreal _ZNK11QTextFormat14doublePropertyEi(void);
    extern Class _ZNK11QTextFormat14stringPropertyEi(void);
    extern Class _ZNK11QTextFormat13colorPropertyEi(void);
    extern Class _ZNK11QTextFormat11penPropertyEi(void);
    extern Class _ZNK11QTextFormat13brushPropertyEi(void);
    extern Class _ZNK11QTextFormat14lengthPropertyEi(void);
    extern _ZNK11QTextFormat20lengthVectorPropertyEi(void);
    extern void
	_ZN11QTextFormat11setPropertyEiRK7QVectorI11QTextLengthE(void);
    extern Class _ZNK11QTextFormat10propertiesEv(void);
    extern _ZNK11QTextFormat13toBlockFormatEv(void);
    extern _ZNK11QTextFormat12toCharFormatEv(void);
    extern _ZNK11QTextFormat12toListFormatEv(void);
    extern _ZNK11QTextFormat13toTableFormatEv(void);
    extern _ZNK11QTextFormat13toFrameFormatEv(void);
    extern _ZNK11QTextFormat13toImageFormatEv(void);
    extern bool _ZNK11QTextFormateqERKS_(void);
    extern Class _ZNK11QTextFormatcv8QVariantEv(void);
    extern Class _ZN15QTextCharFormatC2Ev(void);
    extern Class _ZN15QTextCharFormatC1Ev(void);
    extern void _ZN15QTextCharFormat7setFontERK5QFont(void);
    extern Class _ZNK15QTextCharFormat4fontEv(void);
    extern Class _ZN16QTextBlockFormatC2Ev(void);
    extern Class _ZN16QTextBlockFormatC1Ev(void);
    extern Class _ZN15QTextListFormatC2Ev(void);
    extern Class _ZN15QTextListFormatC1Ev(void);
    extern Class _ZN16QTextImageFormatC2Ev(void);
    extern Class _ZN16QTextImageFormatC1Ev(void);
    extern Class _ZN16QTextFrameFormatC2Ev(void);
    extern Class _ZN16QTextFrameFormatC1Ev(void);
    extern Class _ZN16QTextTableFormatC2Ev(void);
    extern Class _ZN16QTextTableFormatC1Ev(void);
#ifdef __cplusplus
}
#endif
#endif
