#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QTEXTFORMAT_H_
#define _QTGUI_QTEXTFORMAT_H_

class QTextImageFormat;
// *INDENT-OFF*

class QTextLength;

enum QTextLength::Type	
{
VariableLength = 0,	
FixedLength = 1,	
PercentageLength = 2
}
;

class QTextFormat;

enum QTextFormat::FormatType	
{
InvalidFormat = -1,	
BlockFormat = 1,	
CharFormat = 2,	
ListFormat = 3,	
TableFormat = 4,	
FrameFormat = 5,	
UserFormat = 100
}
;

enum QTextFormat::Property	
{
ObjectIndex = 0,	
CssFloat = 2048,	
LayoutDirection = 2049,	
OutlinePen = 2064,	
BackgroundBrush = 2080,	
ForegroundBrush = 2081,	
BlockAlignment = 4112,	
BlockTopMargin = 4144,	
BlockBottomMargin = 4145,	
BlockLeftMargin = 4146,	
BlockRightMargin = 4147,	
TextIndent = 4148,	
BlockIndent = 4160,	
BlockNonBreakableLines = 4176,	
BlockTrailingHorizontalRulerWidth = 4192,	
FontFamily = 8192,	
FontPointSize = 8193,	
FontSizeAdjustment = 8194,	
FontSizeIncrement = 8194,	
FontWeight = 8195,	
FontItalic = 8196,	
FontUnderline = 8197,	
FontOverline = 8198,	
FontStrikeOut = 8199,	
FontFixedPitch = 8200,	
FontPixelSize = 8201,	
TextUnderlineColor = 8208,	
TextVerticalAlignment = 8225,	
TextOutline = 8226,	
IsAnchor = 8240,	
AnchorHref = 8241,	
AnchorName = 8242,	
ObjectType = 12032,	
ListStyle = 12288,	
ListIndent = 12289,	
FrameBorder = 16384,	
FrameMargin = 16385,	
FramePadding = 16386,	
FrameWidth = 16387,	
FrameHeight = 16388,	
TableColumns = 16640,	
TableColumnWidthConstraints = 16641,	
TableCellSpacing = 16642,	
TableCellPadding = 16643,	
TableCellRowSpan = 18448,	
TableCellColumnSpan = 18449,	
ImageName = 20480,	
ImageWidth = 20496,	
ImageHeight = 20497,	
UserProperty = 1048576
}
;

enum QTextFormat::ObjectTypes	
{
NoObject = 0,	
ImageObject = 1,	
TableObject = 2,	
UserObject = 4096
}
;

class QTextCharFormat;

enum QTextCharFormat::VerticalAlignment	
{
AlignNormal = 0,	
AlignSuperScript = 1,	
AlignSubScript = 2
}
;

class QTextBlockFormat;

class QTextListFormat;

enum QTextListFormat::Style	
{
ListUpperAlpha = -6,	
ListLowerAlpha = -5,	
ListDecimal = -4,	
ListSquare = -3,	
ListCircle = -2,	
ListDisc = -1,	
ListStyleUndefined = 0
}
;

class QTextImageFormat;

class QTextFrameFormat;

enum QTextFrameFormat::Position	
{
InFlow = 0,	
FloatLeft = 1,	
FloatRight = 2
}
;

class QTextTableFormat;


/* Function prototypes */

extern struct QMetaObject _ZN11QTextFormat16staticMetaObjectE;
extern QDataStream operator<<(QDataStream&, QTextFormat const&)(QDataStream &, const QTextFormat &);
extern QDataStream operator<<(QDataStream&, QTextLength const&)(QDataStream &);
extern QDataStream operator>>(QDataStream&, QTextFormat&)(QDataStream &, QTextFormat &);
extern QDataStream operator>>(QDataStream&, QTextLength&)(QDataStream &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
