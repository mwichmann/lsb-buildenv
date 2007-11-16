#ifndef _QTCORE_QVARIANT_H_
#define _QTCORE_QVARIANT_H_

class QVariantComparisonHelper;
// *INDENT-OFF*




typedef void	f_construct	
;

typedef void	f_clear	
;

typedef bool	f_null	
;

typedef void	f_load	
;

typedef void	f_save	
;

typedef bool	f_compare	
;

typedef bool	f_convert	
;

typedef bool	f_canConvert	
;

typedef void	f_debugStream	
;

typedef QList<QVariant> QVariantList	
;

typedef QMap<QString, QVariant> QVariantMap	
;

class QVariant
{
private:
public:
};

enum Type	
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
Icon = 69,	
IconSet = 69,	
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

struct PrivateShared	;

struct Private	;

union Private::Data	;

struct Handler	;

class QVariantComparisonHelper
{
private:
public:
};


extern QVariant _ZN8QVariantD2Ev(void);
extern QVariant _ZN8QVariantD1Ev(void);
extern QVariant _ZN8QVariantC2ENS_4TypeE(void);
extern QVariant _ZN8QVariantC1ENS_4TypeE(void);
extern QVariant _ZN8QVariantC2EiPKv(void);
extern QVariant _ZN8QVariantC1EiPKv(void);
extern QVariant _ZN8QVariantC2ERKS_(void);
extern QVariant _ZN8QVariantC1ERKS_(void);
extern QVariant _ZN8QVariantC2ER11QDataStream(void);
extern QVariant _ZN8QVariantC1ER11QDataStream(void);
extern QVariant _ZN8QVariantC2Ei(void);
extern QVariant _ZN8QVariantC1Ei(void);
extern QVariant _ZN8QVariantC2Ej(void);
extern QVariant _ZN8QVariantC1Ej(void);
extern QVariant _ZN8QVariantC2Ex(void);
extern QVariant _ZN8QVariantC1Ex(void);
extern QVariant _ZN8QVariantC2Ey(void);
extern QVariant _ZN8QVariantC1Ey(void);
extern QVariant _ZN8QVariantC2Eb(void);
extern QVariant _ZN8QVariantC1Eb(void);
extern QVariant _ZN8QVariantC2Ed(void);
extern QVariant _ZN8QVariantC1Ed(void);
extern QVariant _ZN8QVariantC2EPKc(void);
extern QVariant _ZN8QVariantC1EPKc(void);
extern QVariant _ZN8QVariantC2ERK10QByteArray(void);
extern QVariant _ZN8QVariantC1ERK10QByteArray(void);
extern QVariant _ZN8QVariantC2ERK9QBitArray(void);
extern QVariant _ZN8QVariantC1ERK9QBitArray(void);
extern QVariant _ZN8QVariantC2ERK7QString(void);
extern QVariant _ZN8QVariantC1ERK7QString(void);
extern QVariant _ZN8QVariantC2ERK13QLatin1String(void);
extern QVariant _ZN8QVariantC1ERK13QLatin1String(void);
extern QVariant _ZN8QVariantC2ERK11QStringList(void);
extern QVariant _ZN8QVariantC1ERK11QStringList(void);
extern QVariant _ZN8QVariantC2ERK5QChar(void);
extern QVariant _ZN8QVariantC1ERK5QChar(void);
extern QVariant _ZN8QVariantC2ERK5QDate(void);
extern QVariant _ZN8QVariantC1ERK5QDate(void);
extern QVariant _ZN8QVariantC2ERK5QTime(void);
extern QVariant _ZN8QVariantC1ERK5QTime(void);
extern QVariant _ZN8QVariantC2ERK9QDateTime(void);
extern QVariant _ZN8QVariantC1ERK9QDateTime(void);
extern QVariant _ZN8QVariantC2ERK5QListIS_E(void);
extern QVariant _ZN8QVariantC1ERK5QListIS_E(void);
extern QVariant _ZN8QVariantC2ERK4QMapI7QStringS_E(void);
extern QVariant _ZN8QVariantC1ERK4QMapI7QStringS_E(void);
extern QVariant _ZN8QVariantC2ERK5QSize(void);
extern QVariant _ZN8QVariantC1ERK5QSize(void);
extern QVariant _ZN8QVariantC2ERK6QSizeF(void);
extern QVariant _ZN8QVariantC1ERK6QSizeF(void);
extern QVariant _ZN8QVariantC2ERK6QPoint(void);
extern QVariant _ZN8QVariantC1ERK6QPoint(void);
extern QVariant _ZN8QVariantC2ERK7QPointF(void);
extern QVariant _ZN8QVariantC1ERK7QPointF(void);
extern QVariant _ZN8QVariantC2ERK5QLine(void);
extern QVariant _ZN8QVariantC1ERK5QLine(void);
extern QVariant _ZN8QVariantC2ERK6QLineF(void);
extern QVariant _ZN8QVariantC1ERK6QLineF(void);
extern QVariant _ZN8QVariantC2ERK5QRect(void);
extern QVariant _ZN8QVariantC1ERK5QRect(void);
extern QVariant _ZN8QVariantC2ERK6QRectF(void);
extern QVariant _ZN8QVariantC1ERK6QRectF(void);
extern QVariant _ZN8QVariantC2ERK4QUrl(void);
extern QVariant _ZN8QVariantC1ERK4QUrl(void);
extern QVariant _ZN8QVariantC2ERK7QLocale(void);
extern QVariant _ZN8QVariantC1ERK7QLocale(void);
extern QVariant _ZN8QVariantC2ERK7QRegExp(void);
extern QVariant _ZN8QVariantC1ERK7QRegExp(void);
extern QVariant _ZN8QVariantaSERKS_(void);
extern enum N8QVariant4TypeE _ZNK8QVariant4typeEv(void);
extern int _ZNK8QVariant8userTypeEv(void);
extern char _ZNK8QVariant8typeNameEv(void);
extern bool _ZNK8QVariant10canConvertENS_4TypeE(void);
extern bool _ZN8QVariant7convertENS_4TypeE(void);
extern bool _ZNK8QVariant6isNullEv(void);
extern void _ZN8QVariant5clearEv(void);
extern void _ZN8QVariant6detachEv(void);
extern int _ZNK8QVariant5toIntEPb(void);
extern uint _ZNK8QVariant6toUIntEPb(void);
extern qlonglong _ZNK8QVariant10toLongLongEPb(void);
extern qulonglong _ZNK8QVariant11toULongLongEPb(void);
extern bool _ZNK8QVariant6toBoolEv(void);
extern double _ZNK8QVariant8toDoubleEPb(void);
extern QByteArray _ZNK8QVariant11toByteArrayEv(void);
extern  _ZNK8QVariant10toBitArrayEv(void);
extern QString _ZNK8QVariant8toStringEv(void);
extern QStringList _ZNK8QVariant12toStringListEv(void);
extern QChar _ZNK8QVariant6toCharEv(void);
extern  _ZNK8QVariant6toDateEv(void);
extern  _ZNK8QVariant6toTimeEv(void);
extern  _ZNK8QVariant10toDateTimeEv(void);
extern QList<QVariant> _ZNK8QVariant6toListEv(void);
extern QMap<QString, QVariant> _ZNK8QVariant5toMapEv(void);
extern  _ZNK8QVariant7toPointEv(void);
extern  _ZNK8QVariant8toPointFEv(void);
extern  _ZNK8QVariant6toRectEv(void);
extern  _ZNK8QVariant6toSizeEv(void);
extern  _ZNK8QVariant7toSizeFEv(void);
extern  _ZNK8QVariant6toLineEv(void);
extern  _ZNK8QVariant7toLineFEv(void);
extern  _ZNK8QVariant7toRectFEv(void);
extern QUrl _ZNK8QVariant5toUrlEv(void);
extern  _ZNK8QVariant8toLocaleEv(void);
extern QRegExp _ZNK8QVariant8toRegExpEv(void);
extern void _ZN8QVariant4loadER11QDataStream(void);
extern void _ZNK8QVariant4saveER11QDataStream(void);
extern char _ZN8QVariant10typeToNameENS_4TypeE(void);
extern enum N8QVariant4TypeE _ZN8QVariant10nameToTypeEPKc(void);
extern void _ZN8QVariant4dataEv(void);
extern void _ZNK8QVariant9constDataEv(void);
extern struct Handler * _ZN8QVariant7handlerE ;
extern void _ZN8QVariant6createEiPKv(void);
extern void _ZN8QVariant12castOrDetachENS_4TypeE(void);
extern bool _ZNK8QVariant3cmpERKS_(void);
extern QDataStream _ZrsR11QDataStreamR8QVariant(void);
extern QDataStream _ZlsR11QDataStreamRK8QVariant(void);
extern QDataStream _ZrsR11QDataStreamRN8QVariant4TypeE(void);
extern QDataStream _ZlsR11QDataStreamN8QVariant4TypeE(void);
extern QDebug _Zls6QDebugRK8QVariant(void);
extern QDebug _Zls6QDebugN8QVariant4TypeE(void);
// *INDENT-ON*
#endif
