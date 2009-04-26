#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QFONT_H_
#define _QTGUI_QFONT_H_

class QFont;
// *INDENT-OFF*

class QFont;

enum _ZN5QFont9StyleHintE	
{
Helvetica = 0,	
SansSerif = 0,	
Times = 1,	
Serif = 1,	
TypeWriter = 2,	
Courier = 2,	
OldEnglish = 3,	
Decorative = 3,	
System = 4,	
AnyStyle = 5
}
;

enum _ZN5QFont13StyleStrategyE	
{
PreferDefault = 1,	
PreferBitmap = 2,	
PreferDevice = 4,	
PreferOutline = 8,	
ForceOutline = 16,	
PreferMatch = 32,	
PreferQuality = 64,	
PreferAntialias = 128,	
NoAntialias = 256,	
OpenGLCompatible = 512
}
;

enum _ZN5QFont6WeightE	
{
Light = 25,	
Normal = 50,	
DemiBold = 63,	
Bold = 75,	
Black = 87
}
;

enum _ZN5QFont5StyleE	
{
StyleNormal = 0,	
StyleItalic = 1,	
StyleOblique = 2
}
;

enum _ZN5QFont7StretchE	
{
UltraCondensed = 50,	
ExtraCondensed = 62,	
Condensed = 75,	
SemiCondensed = 87,	
Unstretched = 100,	
SemiExpanded = 112,	
Expanded = 125,	
ExtraExpanded = 150,	
UltraExpanded = 200
}
;


/* Function prototypes */

extern QDataStream _ZlsR11QDataStreamRK5QFont(QDataStream &, const QFont &);
extern QDataStream _ZrsR11QDataStreamR5QFont(QDataStream &, QFont &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
