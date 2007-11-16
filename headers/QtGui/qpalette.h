#ifndef _QTGUI_QPALETTE_H_
#define _QTGUI_QPALETTE_H_

class QPalette;
// *INDENT-OFF*




class QPalette
{
private:
public:
};

enum ColorGroup	
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

enum ColorRole	
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
Window = 10,	
Background = 10,	
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

class QColorGroup :  
{
private:
public:
};


extern struct QMetaObject _ZN8QPalette16staticMetaObjectE ;
extern QPalette _ZN8QPaletteC2Ev(void);
extern QPalette _ZN8QPaletteC1Ev(void);
extern QPalette _ZN8QPaletteC2ERK6QColor(void);
extern QPalette _ZN8QPaletteC1ERK6QColor(void);
extern QPalette _ZN8QPaletteC2EN2Qt11GlobalColorE(void);
extern QPalette _ZN8QPaletteC1EN2Qt11GlobalColorE(void);
extern QPalette _ZN8QPaletteC2ERK6QColorS2_(void);
extern QPalette _ZN8QPaletteC1ERK6QColorS2_(void);
extern QPalette _ZN8QPaletteC2ERK6QBrushS2_S2_S2_S2_S2_S2_S2_S2_(void);
extern QPalette _ZN8QPaletteC1ERK6QBrushS2_S2_S2_S2_S2_S2_S2_S2_(void);
extern QPalette _ZN8QPaletteC2ERK6QColorS2_S2_S2_S2_S2_S2_(void);
extern QPalette _ZN8QPaletteC1ERK6QColorS2_S2_S2_S2_S2_S2_(void);
extern QPalette _ZN8QPaletteC2ERK11QColorGroupS2_S2_(void);
extern QPalette _ZN8QPaletteC1ERK11QColorGroupS2_S2_(void);
extern QPalette _ZN8QPaletteC2ERKS_(void);
extern QPalette _ZN8QPaletteC1ERKS_(void);
extern QPalette _ZN8QPaletteD2Ev(void);
extern QPalette _ZN8QPaletteD1Ev(void);
extern QPalette _ZN8QPaletteaSERKS_(void);
extern QPalette _ZNK8QPalettecv8QVariantEv(void);
extern QBrush _ZNK8QPalette5brushENS_10ColorGroupENS_9ColorRoleE(void);
extern void _ZN8QPalette8setBrushENS_10ColorGroupENS_9ColorRoleERK6QBrush(void);
extern void _ZN8QPalette13setColorGroupENS_10ColorGroupERK6QBrushS3_S3_S3_S3_S3_S3_S3_S3_(void);
extern bool _ZNK8QPalette7isEqualENS_10ColorGroupES0_(void);
extern bool _ZNK8QPaletteeqERKS_(void);
extern bool _ZNK8QPalette8isCopyOfERKS_(void);
extern int _ZNK8QPalette12serialNumberEv(void);
extern QPalette _ZNK8QPalette7resolveERKS_(void);
extern bool _ZNK11QColorGroupeqERKS_(void);
extern QColorGroup _ZNK11QColorGroupcv8QVariantEv(void);
extern QDataStream _ZlsR11QDataStreamRK11QColorGroup(void);
extern QDataStream _ZrsR11QDataStreamR11QColorGroup(void);
extern QDataStream _ZlsR11QDataStreamRK8QPalette(void);
extern QDataStream _ZrsR11QDataStreamR8QPalette(void);
// *INDENT-ON*
#endif
