#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QSETTINGS_H_
#define _QTCORE_QSETTINGS_H_

class QSettings;
// *INDENT-OFF*

typedef class QMap<QString, QVariant>QSettings::SettingsMap	
;

typedef bool	QSettings::ReadFunc	
;

typedef bool	QSettings::WriteFunc	
;

class QSettings;

enum _ZN9QSettings6StatusE	
{
NoError = 0,	
AccessError = 1,	
FormatError = 2
}
;

enum _ZN9QSettings6FormatE	
{
NativeFormat = 0,	
IniFormat = 1,	
InvalidFormat = 16,	
CustomFormat1 = 17,	
CustomFormat2 = 18,	
CustomFormat3 = 19,	
CustomFormat4 = 20,	
CustomFormat5 = 21,	
CustomFormat6 = 22,	
CustomFormat7 = 23,	
CustomFormat8 = 24,	
CustomFormat9 = 25,	
CustomFormat10 = 26,	
CustomFormat11 = 27,	
CustomFormat12 = 28,	
CustomFormat13 = 29,	
CustomFormat14 = 30,	
CustomFormat15 = 31,	
CustomFormat16 = 32
}
;

enum _ZN9QSettings5ScopeE	
{
UserScope = 0,	
User = 0,	
SystemScope = 1,	
Global = 1
}
;

enum _ZN9QSettings6SystemE	
{
Unix = 0,	
Windows = 1,	
Mac = 2
}
;


/* Function prototypes */

extern struct QMetaObject _ZN9QSettings16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
