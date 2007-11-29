#ifndef _QTGUI_QTEXTFORMAT_H_
#define _QTGUI_QTEXTFORMAT_H_

class QTextImageFormat;
// *INDENT-OFF*




class QTextLength
{
private:
public:
};

enum Type	
{
VariableLength = 0,	
FixedLength = 1,	
PercentageLength = 2
}
;

class QTextFormat
{
private:
public:
};

enum FormatType	
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

enum Property	
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

enum ObjectTypes	
{
NoObject = 0,	
ImageObject = 1,	
TableObject = 2,	
UserObject = 4096
}
;

class QTextCharFormat :  
{
private:
public:
};

enum VerticalAlignment	
{
AlignNormal = 0,	
AlignSuperScript = 1,	
AlignSubScript = 2
}
;

class QTextBlockFormat :  
{
private:
public:
};

class QTextListFormat :  
{
private:
public:
};

enum Style	
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

class QTextImageFormat :  
{
private:
public:
};

class QTextFrameFormat :  
{
private:
public:
};

enum Position	
{
InFlow = 0,	
FloatLeft = 1,	
FloatRight = 2
}
;

class QTextTableFormat :  
{
private:
public:
};


extern QDataStream _ZlsR11QDataStreamRK11QTextLength(void);
extern QDataStream _ZrsR11QDataStreamR11QTextLength(void);
extern QTextLength _ZNK11QTextLengthcv8QVariantEv(void);
extern QDataStream _ZlsR11QDataStreamRK11QTextFormat(void);
extern QDataStream _ZrsR11QDataStreamR11QTextFormat(void);
extern struct QMetaObject _ZN11QTextFormat16staticMetaObjectE ;
extern QTextFormat _ZN11QTextFormatC2Ev(void);
extern QTextFormat _ZN11QTextFormatC1Ev(void);
extern QTextFormat _ZN11QTextFormatC2Ei(void);
extern QTextFormat _ZN11QTextFormatC1Ei(void);
extern QTextFormat _ZN11QTextFormatC2ERKS_(void);
extern QTextFormat _ZN11QTextFormatC1ERKS_(void);
extern QTextFormat _ZN11QTextFormataSERKS_(void);
extern  _ZN11QTextFormatD2Ev(void);
extern  _ZN11QTextFormatD1Ev(void);
extern void _ZN11QTextFormat5mergeERKS_(void);
extern int _ZNK11QTextFormat4typeEv(void);
extern int _ZNK11QTextFormat11objectIndexEv(void);
extern void _ZN11QTextFormat14setObjectIndexEi(void);
extern QVariant _ZNK11QTextFormat8propertyEi(void);
extern void _ZN11QTextFormat11setPropertyEiRK8QVariant(void);
extern void _ZN11QTextFormat13clearPropertyEi(void);
extern bool _ZNK11QTextFormat11hasPropertyEi(void);
extern bool _ZNK11QTextFormat12boolPropertyEi(void);
extern int _ZNK11QTextFormat11intPropertyEi(void);
extern qreal _ZNK11QTextFormat14doublePropertyEi(void);
extern QString _ZNK11QTextFormat14stringPropertyEi(void);
extern QColor _ZNK11QTextFormat13colorPropertyEi(void);
extern QPen _ZNK11QTextFormat11penPropertyEi(void);
extern QBrush _ZNK11QTextFormat13brushPropertyEi(void);
extern QTextLength _ZNK11QTextFormat14lengthPropertyEi(void);
extern  _ZNK11QTextFormat20lengthVectorPropertyEi(void);
extern void _ZN11QTextFormat11setPropertyEiRK7QVectorI11QTextLengthE(void);
extern QMap<int, QVariant> _ZNK11QTextFormat10propertiesEv(void);
extern  _ZNK11QTextFormat13toBlockFormatEv(void);
extern  _ZNK11QTextFormat12toCharFormatEv(void);
extern  _ZNK11QTextFormat12toListFormatEv(void);
extern  _ZNK11QTextFormat13toTableFormatEv(void);
extern  _ZNK11QTextFormat13toFrameFormatEv(void);
extern  _ZNK11QTextFormat13toImageFormatEv(void);
extern bool _ZNK11QTextFormateqERKS_(void);
extern QTextFormat _ZNK11QTextFormatcv8QVariantEv(void);
extern QTextCharFormat _ZN15QTextCharFormatC2Ev(void);
extern QTextCharFormat _ZN15QTextCharFormatC1Ev(void);
extern void _ZN15QTextCharFormat7setFontERK5QFont(void);
extern QFont _ZNK15QTextCharFormat4fontEv(void);
extern QTextBlockFormat _ZN16QTextBlockFormatC2Ev(void);
extern QTextBlockFormat _ZN16QTextBlockFormatC1Ev(void);
extern QTextListFormat _ZN15QTextListFormatC2Ev(void);
extern QTextListFormat _ZN15QTextListFormatC1Ev(void);
extern QTextImageFormat _ZN16QTextImageFormatC2Ev(void);
extern QTextImageFormat _ZN16QTextImageFormatC1Ev(void);
extern QTextFrameFormat _ZN16QTextFrameFormatC2Ev(void);
extern QTextFrameFormat _ZN16QTextFrameFormatC1Ev(void);
extern QTextTableFormat _ZN16QTextTableFormatC2Ev(void);
extern QTextTableFormat _ZN16QTextTableFormatC1Ev(void);
// *INDENT-ON*
#endif
