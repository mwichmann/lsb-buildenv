#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QVARIANT_H_
#define _QTCORE_QVARIANT_H_

class QVariantComparisonHelper;
// *INDENT-OFF*

typedef void	QVariant::f_construct	
;

typedef void	QVariant::f_clear	
;

typedef bool	QVariant::f_null	
;

typedef void	QVariant::f_load	
;

typedef void	QVariant::f_save	
;

typedef bool	QVariant::f_compare	
;

typedef bool	QVariant::f_convert	
;

typedef bool	QVariant::f_canConvert	
;

typedef void	QVariant::f_debugStream	
;

typedef class QList<QVariant>QVariantList	
;

typedef class QMap<QString, QVariant>QVariantMap	
;

class QVariant;

enum _ZN8QVariant4TypeE	
{
LastType = -1,	
Invalid = 0,	
Bool = 1,	
Int = 2,	
UInt = 3,	
LongLong = 4,	
ULongLong = 5,	
Double = 6,	
Char = 7,	
Map = 8,	
List = 9,	
String = 10,	
StringList = 11,	
ByteArray = 12,	
CString = 12,	
BitArray = 13,	
Date = 14,	
Time = 15,	
DateTime = 16,	
Url = 17,	
Locale = 18,	
Rect = 19,	
RectF = 20,	
Size = 21,	
SizeF = 22,	
Line = 23,	
LineF = 24,	
Point = 25,	
PointF = 26,	
RegExp = 27,	
ColorGroup = 63,	
Font = 64,	
Pixmap = 65,	
Brush = 66,	
Color = 67,	
Palette = 68,	
IconSet = 69,	
Icon = 69,	
Image = 70,	
Polygon = 71,	
PointArray = 71,	
Region = 72,	
Bitmap = 73,	
Cursor = 74,	
SizePolicy = 75,	
KeySequence = 76,	
Pen = 77,	
TextLength = 78,	
TextFormat = 79,	
UserType = 127
}
;

struct QVariant::PrivateShared	;

struct QVariant::Private	;

union _ZN8QVariant7Private4DataE	;

struct QVariant::Handler	;

class QVariantComparisonHelper;


/* Function prototypes */

extern struct QVariant::Handler * _ZN8QVariant7handlerE;
extern QDebug _Zls6QDebugN8QVariant4TypeE(enum _ZN8QVariant4TypeE);
extern QDebug _Zls6QDebugRK8QVariant(const QVariant &);
extern QDataStream _ZlsR11QDataStreamN8QVariant4TypeE(enum _ZN8QVariant4TypeE);
extern QDataStream _ZlsR11QDataStreamRK8QVariant(const QVariant &);
extern QDataStream _ZrsR11QDataStreamR8QVariant(QVariant &);
extern QDataStream _ZrsR11QDataStreamRN8QVariant4TypeE(enum _ZN8QVariant4TypeE &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
