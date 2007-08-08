#ifndef _QTCORE_QCHAR_H_
#define _QTCORE_QCHAR_H_

class QChar;
// *INDENT-OFF*



struct QLatin1Char	;

class QChar
{
private:
public:
};

enum SpecialCharacter	
{
Null,	
null,	
Nbsp,	
nbsp,	
LineSeparator,	
ParagraphSeparator,	
ByteOrderMark,	
byteOrderMark,	
ObjectReplacementCharacter,	
ReplacementCharacter,	
replacement,	
ByteOrderSwapped,	
byteOrderSwapped
}
;

enum Category	
{
NoCategory,	
Mark_NonSpacing,	
Mark_SpacingCombining,	
Mark_Enclosing,	
Number_DecimalDigit,	
Number_Letter,	
Number_Other,	
Separator_Space,	
Separator_Line,	
Separator_Paragraph,	
Other_Control,	
Other_Format,	
Other_Surrogate,	
Other_PrivateUse,	
Other_NotAssigned,	
Letter_Uppercase,	
Letter_Lowercase,	
Letter_Titlecase,	
Letter_Modifier,	
Letter_Other,	
Punctuation_Connector,	
Punctuation_Dash,	
Punctuation_Dask,	
Punctuation_Open,	
Punctuation_Close,	
Punctuation_InitialQuote,	
Punctuation_FinalQuote,	
Punctuation_Other,	
Symbol_Math,	
Symbol_Currency,	
Symbol_Modifier,	
Symbol_Other
}
;

enum Direction	
{
DirL,	
DirR,	
DirEN,	
DirES,	
DirET,	
DirAN,	
DirCS,	
DirB,	
DirS,	
DirWS,	
DirON,	
DirLRE,	
DirLRO,	
DirAL,	
DirRLE,	
DirRLO,	
DirPDF,	
DirNSM,	
DirBN
}
;

enum Decomposition	
{
NoDecomposition,	
Single,	
Canonical,	
Font,	
NoBreak,	
Initial,	
Medial,	
Final,	
Isolated,	
Circle,	
Super,	
Sub,	
Vertical,	
Wide,	
Narrow,	
Small,	
Square,	
Compat,	
Fraction
}
;

enum Joining	
{
OtherJoining,	
Dual,	
Right,	
Center
}
;

enum CombiningClass	
{
Combining_BelowLeftAttached,	
Combining_BelowAttached,	
Combining_BelowRightAttached,	
Combining_LeftAttached,	
Combining_RightAttached,	
Combining_AboveLeftAttached,	
Combining_AboveAttached,	
Combining_AboveRightAttached,	
Combining_BelowLeft,	
Combining_Below,	
Combining_BelowRight,	
Combining_Left,	
Combining_Right,	
Combining_AboveLeft,	
Combining_Above,	
Combining_AboveRight,	
Combining_DoubleBelow,	
Combining_DoubleAbove,	
Combining_IotaSubscript
}
;

enum UnicodeVersion	
{
Unicode_Unassigned,	
Unicode_1_1,	
Unicode_2_0,	
Unicode_2_1_2,	
Unicode_3_0,	
Unicode_3_1,	
Unicode_3_2,	
Unicode_4_0
}
;


extern QChar _ZN5QCharC2Ec(void);
extern QChar _ZN5QCharC1Ec(void);
extern QChar _ZN5QCharC2Eh(void);
extern QChar _ZN5QCharC1Eh(void);
extern int _ZNK5QChar10digitValueEv(void);
extern QChar _ZNK5QChar7toLowerEv(void);
extern QChar _ZNK5QChar7toUpperEv(void);
extern enum N5QChar8CategoryE _ZNK5QChar8categoryEv(void);
extern enum N5QChar9DirectionE _ZNK5QChar9directionEv(void);
extern enum N5QChar7JoiningE _ZNK5QChar7joiningEv(void);
extern bool _ZNK5QChar11hasMirroredEv(void);
extern QChar _ZNK5QChar12mirroredCharEv(void);
extern  _ZNK5QChar13decompositionEv(void);
extern enum N5QChar13DecompositionE _ZNK5QChar16decompositionTagEv(void);
extern unsigned char _ZNK5QChar14combiningClassEv(void);
extern enum N5QChar14UnicodeVersionE _ZNK5QChar14unicodeVersionEv(void);
extern char _ZNK5QChar7toAsciiEv(void);
extern QChar _ZN5QChar9fromAsciiEc(void);
extern bool _ZNK5QChar7isPrintEv(void);
extern bool _ZNK5QChar7isPunctEv(void);
extern bool _ZNK5QChar7isSpaceEv(void);
extern bool _ZNK5QChar6isMarkEv(void);
extern bool _ZNK5QChar8isLetterEv(void);
extern bool _ZNK5QChar8isNumberEv(void);
extern bool _ZNK5QChar16isLetterOrNumberEv(void);
extern bool _ZNK5QChar7isDigitEv(void);
extern bool _ZNK5QChar8isSymbolEv(void);
extern  _ZlsR11QDataStreamRK5QChar(void);
extern  _ZrsR11QDataStreamR5QChar(void);
// *INDENT-ON*
#endif
