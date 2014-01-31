#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QFONT_H_
#define _QTGUI_QFONT_H_

class QFont;
// *INDENT-OFF*

class QFont;

enum QFont::StyleHint	
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

enum QFont::StyleStrategy	
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

enum QFont::Weight	
{
Light = 25,	
Normal = 50,	
DemiBold = 63,	
Bold = 75,	
Black = 87
}
;

enum QFont::Style	
{
StyleNormal = 0,	
StyleItalic = 1,	
StyleOblique = 2
}
;

enum QFont::Stretch	
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

extern QDataStream operator<<(QDataStream&, QFont const&)(QDataStream &, const QFont &);
extern QDataStream operator>>(QDataStream&, QFont&)(QDataStream &, QFont &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
