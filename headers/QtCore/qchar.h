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
Null = 0,	
null = 0,	
Nbsp = 160,	
nbsp = 160,	
LineSeparator = 8232,	
ParagraphSeparator = 8233,	
ByteOrderMark = 65279,	
byteOrderMark = 65279,	
ObjectReplacementCharacter = 65532,	
ReplacementCharacter = 65533,	
replacement = 65533,	
ByteOrderSwapped = 65534,	
byteOrderSwapped = 65534
}
;

enum Category	
{
NoCategory = 0,	
Mark_NonSpacing = 1,	
Mark_SpacingCombining = 2,	
Mark_Enclosing = 3,	
Number_DecimalDigit = 4,	
Number_Letter = 5,	
Number_Other = 6,	
Separator_Space = 7,	
Separator_Line = 8,	
Separator_Paragraph = 9,	
Other_Control = 10,	
Other_Format = 11,	
Other_Surrogate = 12,	
Other_PrivateUse = 13,	
Other_NotAssigned = 14,	
Letter_Uppercase = 15,	
Letter_Lowercase = 16,	
Letter_Titlecase = 17,	
Letter_Modifier = 18,	
Letter_Other = 19,	
Punctuation_Connector = 20,	
Punctuation_Dash = 21,	
Punctuation_Dask = 21,	
Punctuation_Open = 22,	
Punctuation_Close = 23,	
Punctuation_InitialQuote = 24,	
Punctuation_FinalQuote = 25,	
Punctuation_Other = 26,	
Symbol_Math = 27,	
Symbol_Currency = 28,	
Symbol_Modifier = 29,	
Symbol_Other = 30
}
;

enum Direction	
{
DirL = 0,	
DirR = 1,	
DirEN = 2,	
DirES = 3,	
DirET = 4,	
DirAN = 5,	
DirCS = 6,	
DirB = 7,	
DirS = 8,	
DirWS = 9,	
DirON = 10,	
DirLRE = 11,	
DirLRO = 12,	
DirAL = 13,	
DirRLE = 14,	
DirRLO = 15,	
DirPDF = 16,	
DirNSM = 17,	
DirBN = 18
}
;

enum Decomposition	
{
NoDecomposition = 0,	
Single = 0,	
Canonical = 1,	
Font = 2,	
NoBreak = 3,	
Initial = 4,	
Medial = 5,	
Final = 6,	
Isolated = 7,	
Circle = 8,	
Super = 9,	
Sub = 10,	
Vertical = 11,	
Wide = 12,	
Narrow = 13,	
Small = 14,	
Square = 15,	
Compat = 16,	
Fraction = 17
}
;

enum Joining	
{
OtherJoining = 0,	
Dual = 1,	
Right = 2,	
Center = 3
}
;

enum CombiningClass	
{
Combining_BelowLeftAttached = 200,	
Combining_BelowAttached = 202,	
Combining_BelowRightAttached = 204,	
Combining_LeftAttached = 208,	
Combining_RightAttached = 210,	
Combining_AboveLeftAttached = 212,	
Combining_AboveAttached = 214,	
Combining_AboveRightAttached = 216,	
Combining_BelowLeft = 218,	
Combining_Below = 220,	
Combining_BelowRight = 222,	
Combining_Left = 224,	
Combining_Right = 226,	
Combining_AboveLeft = 228,	
Combining_Above = 230,	
Combining_AboveRight = 232,	
Combining_DoubleBelow = 233,	
Combining_DoubleAbove = 234,	
Combining_IotaSubscript = 240
}
;

enum UnicodeVersion	
{
Unicode_Unassigned = 0,	
Unicode_1_1 = 1,	
Unicode_2_0 = 2,	
Unicode_2_1_2 = 3,	
Unicode_3_0 = 4,	
Unicode_3_1 = 5,	
Unicode_3_2 = 6,	
Unicode_4_0 = 7
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