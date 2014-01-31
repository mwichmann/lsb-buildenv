#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPALETTE_H_
#define _QTGUI_QPALETTE_H_

class QPalette;
// *INDENT-OFF*

class QPalette;

enum QPalette::ColorGroup	
{
Active = 0,	
Normal = 0,	
Disabled = 1,	
Inactive = 2,	
NColorGroups = 3,	
Current = 4,	
All = 5
}
;

enum QPalette::ColorRole	
{
WindowText = 0,	
Foreground = 0,	
Button = 1,	
Light = 2,	
Midlight = 3,	
Dark = 4,	
Mid = 5,	
Text = 6,	
BrightText = 7,	
ButtonText = 8,	
Base = 9,	
Background = 10,	
Window = 10,	
Shadow = 11,	
Highlight = 12,	
HighlightedText = 13,	
Link = 14,	
LinkVisited = 15,	
AlternateBase = 16,	
NColorRoles = 17,	
NoRole = 17
}
;

class QColorGroup;


/* Function prototypes */

extern struct QMetaObject _ZN8QPalette16staticMetaObjectE;
extern QDataStream operator<<(QDataStream&, QColorGroup const&)(QDataStream &, const QColorGroup &);
extern QDataStream operator<<(QDataStream&, QPalette const&)(QDataStream &, const QPalette &);
extern QDataStream operator>>(QDataStream&, QColorGroup&)(QDataStream &, QColorGroup &);
extern QDataStream operator>>(QDataStream&, QPalette&)(QDataStream &, QPalette &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
