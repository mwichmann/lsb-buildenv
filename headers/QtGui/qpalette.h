#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPALETTE_H_
#define _QTGUI_QPALETTE_H_

class QPalette;
// *INDENT-OFF*

class QPalette;

enum _ZN8QPalette10ColorGroupE	
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

enum _ZN8QPalette9ColorRoleE	
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

extern struct QMetaObject _ZN8QPalette16staticMetaObjectE ;
extern QDataStream _ZlsR11QDataStreamRK11QColorGroup(QDataStream &, const QColorGroup &);
extern QDataStream _ZlsR11QDataStreamRK8QPalette(QDataStream &, const QPalette &);
extern QDataStream _ZrsR11QDataStreamR11QColorGroup(QDataStream &, QColorGroup &);
extern QDataStream _ZrsR11QDataStreamR8QPalette(QDataStream &, QPalette &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
