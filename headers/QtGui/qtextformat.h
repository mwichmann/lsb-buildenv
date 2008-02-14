#ifndef _QTGUI_QTEXTFORMAT_H_
#define _QTGUI_QTEXTFORMAT_H_

class QTextImageFormat;
// *INDENT-OFF*

class QTextLength
{
private:
public:
    QVariant operator QVariant() const;
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
     QTextFormat();
     QTextFormat(int);
     QTextFormat(QTextFormat const&);
    QTextFormat & operator=(QTextFormat const&);
     ~QTextFormat();
    void merge(QTextFormat const&);
    int type() const;
    int objectIndex() const;
    void setObjectIndex(int);
    QVariant property(int) const;
    void setProperty(int, QVariant const&);
    void clearProperty(int);
    bool hasProperty(int) const;
    bool boolProperty(int) const;
    int intProperty(int) const;
    qreal doubleProperty(int) const;
    QString stringProperty(int) const;
    QColor colorProperty(int) const;
    QPen penProperty(int) const;
    QBrush brushProperty(int) const;
    QTextLength lengthProperty(int) const;
    QVector<QTextLength> lengthVectorProperty(int) const;
    void setProperty(int, QVector<QTextLength> const&);
     properties() const;
    QTextBlockFormat toBlockFormat() const;
    QTextCharFormat toCharFormat() const;
    QTextListFormat toListFormat() const;
    QTextTableFormat toTableFormat() const;
    QTextFrameFormat toFrameFormat() const;
    QTextImageFormat toImageFormat() const;
    bool operator==(QTextFormat const&) const;
    QVariant operator QVariant() const;
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
     QTextCharFormat();
    void setFont(QFont const&);
    QFont font() const;
    void setUnderlineStyle(QTextCharFormat::UnderlineStyle);
    bool fontUnderline() const;
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
     QTextBlockFormat();
};

class QTextListFormat :  
{
private:
public:
     QTextListFormat();
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
     QTextImageFormat();
};

class QTextFrameFormat :  
{
private:
public:
     QTextFrameFormat();
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
     QTextTableFormat();
};


extern QDataStream _ZlsR11QDataStreamRK11QTextLength(QDataStream &, const QTextLength &);
extern QDataStream _ZrsR11QDataStreamR11QTextLength(QDataStream &, QTextLength &);
extern QDataStream _ZlsR11QDataStreamRK11QTextFormat(QDataStream &, const QTextFormat &);
extern QDataStream _ZrsR11QDataStreamR11QTextFormat(QDataStream &, QTextFormat &);
extern struct QMetaObject _ZN11QTextFormat16staticMetaObjectE ;
// *INDENT-ON*
#endif
