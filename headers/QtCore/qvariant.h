#ifndef _QTCORE_QVARIANT_H_
#define _QTCORE_QVARIANT_H_

#include <QtCore/qlist.h>
#include <QtCore/qmap.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qglobal.h>
#include <QtCore/qchar.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qstring.h>
#include <QtCore/qdatastream.h>
#include <QtCore/qdebug.h>
#include <QtCore/qregexp.h>
#include <QtCore/qurl.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef void N8QVariant11f_constructE;

    typedef void N8QVariant7f_clearE;

    typedef bool N8QVariant6f_nullE;

    typedef void N8QVariant6f_loadE;

    typedef void N8QVariant6f_saveE;

    typedef bool N8QVariant9f_compareE;

    typedef bool N8QVariant9f_convertE;

    typedef bool N8QVariant12f_canConvertE;

    typedef void N8QVariant13f_debugStreamE;

    typedef Unknown Type:".Class." QVariantList;

    typedef Unknown Type:".Class." QVariantMap;

    Unknown Type:".Class.";

    enum N8QVariant4TypeE {
	LastType,
	Invalid,
	Bool,
	Int,
	UInt,
	LongLong,
	ULongLong,
	Double,
	Char,
	Map,
	List,
	String,
	StringList,
	ByteArray,
	CString,
	BitArray,
	Date,
	Time,
	DateTime,
	Url,
	Locale,
	Rect,
	RectF,
	Size,
	SizeF,
	Line,
	LineF,
	Point,
	PointF,
	RegExp,
	ColorGroup,
	Font,
	Pixmap,
	Brush,
	Color,
	Palette,
	Icon,
	IconSet,
	Image,
	Polygon,
	PointArray,
	Region,
	Bitmap,
	Cursor,
	SizePolicy,
	KeySequence,
	Pen,
	TextLength,
	TextFormat,
	UserType
    };

    struct N8QVariant13PrivateSharedE;

    struct N8QVariant7PrivateE;

    union N8QVariant7Private4DataE;

    struct N8QVariant7HandlerE;

    Unknown Type:".Class.";


    extern Class _ZN8QVariantD2Ev(void);
    extern Class _ZN8QVariantD1Ev(void);
    extern Class _ZN8QVariantC2ENS_4TypeE(void);
    extern Class _ZN8QVariantC1ENS_4TypeE(void);
    extern Class _ZN8QVariantC2EiPKv(void);
    extern Class _ZN8QVariantC1EiPKv(void);
    extern Class _ZN8QVariantC2ERKS_(void);
    extern Class _ZN8QVariantC1ERKS_(void);
    extern Class _ZN8QVariantC2ER11QDataStream(void);
    extern Class _ZN8QVariantC1ER11QDataStream(void);
    extern Class _ZN8QVariantC2Ei(void);
    extern Class _ZN8QVariantC1Ei(void);
    extern Class _ZN8QVariantC2Ej(void);
    extern Class _ZN8QVariantC1Ej(void);
    extern Class _ZN8QVariantC2Ex(void);
    extern Class _ZN8QVariantC1Ex(void);
    extern Class _ZN8QVariantC2Ey(void);
    extern Class _ZN8QVariantC1Ey(void);
    extern Class _ZN8QVariantC2Eb(void);
    extern Class _ZN8QVariantC1Eb(void);
    extern Class _ZN8QVariantC2Ed(void);
    extern Class _ZN8QVariantC1Ed(void);
    extern Class _ZN8QVariantC2EPKc(void);
    extern Class _ZN8QVariantC1EPKc(void);
    extern Class _ZN8QVariantC2ERK10QByteArray(void);
    extern Class _ZN8QVariantC1ERK10QByteArray(void);
    extern Class _ZN8QVariantC2ERK9QBitArray(void);
    extern Class _ZN8QVariantC1ERK9QBitArray(void);
    extern Class _ZN8QVariantC2ERK7QString(void);
    extern Class _ZN8QVariantC1ERK7QString(void);
    extern Class _ZN8QVariantC2ERK13QLatin1String(void);
    extern Class _ZN8QVariantC1ERK13QLatin1String(void);
    extern Class _ZN8QVariantC2ERK11QStringList(void);
    extern Class _ZN8QVariantC1ERK11QStringList(void);
    extern Class _ZN8QVariantC2ERK5QChar(void);
    extern Class _ZN8QVariantC1ERK5QChar(void);
    extern Class _ZN8QVariantC2ERK5QDate(void);
    extern Class _ZN8QVariantC1ERK5QDate(void);
    extern Class _ZN8QVariantC2ERK5QTime(void);
    extern Class _ZN8QVariantC1ERK5QTime(void);
    extern Class _ZN8QVariantC2ERK9QDateTime(void);
    extern Class _ZN8QVariantC1ERK9QDateTime(void);
    extern Class _ZN8QVariantC2ERK5QListIS_E(void);
    extern Class _ZN8QVariantC1ERK5QListIS_E(void);
    extern Class _ZN8QVariantC2ERK4QMapI7QStringS_E(void);
    extern Class _ZN8QVariantC1ERK4QMapI7QStringS_E(void);
    extern Class _ZN8QVariantC2ERK5QSize(void);
    extern Class _ZN8QVariantC1ERK5QSize(void);
    extern Class _ZN8QVariantC2ERK6QSizeF(void);
    extern Class _ZN8QVariantC1ERK6QSizeF(void);
    extern Class _ZN8QVariantC2ERK6QPoint(void);
    extern Class _ZN8QVariantC1ERK6QPoint(void);
    extern Class _ZN8QVariantC2ERK7QPointF(void);
    extern Class _ZN8QVariantC1ERK7QPointF(void);
    extern Class _ZN8QVariantC2ERK5QLine(void);
    extern Class _ZN8QVariantC1ERK5QLine(void);
    extern Class _ZN8QVariantC2ERK6QLineF(void);
    extern Class _ZN8QVariantC1ERK6QLineF(void);
    extern Class _ZN8QVariantC2ERK5QRect(void);
    extern Class _ZN8QVariantC1ERK5QRect(void);
    extern Class _ZN8QVariantC2ERK6QRectF(void);
    extern Class _ZN8QVariantC1ERK6QRectF(void);
    extern Class _ZN8QVariantC2ERK4QUrl(void);
    extern Class _ZN8QVariantC1ERK4QUrl(void);
    extern Class _ZN8QVariantC2ERK7QLocale(void);
    extern Class _ZN8QVariantC1ERK7QLocale(void);
    extern Class _ZN8QVariantC2ERK7QRegExp(void);
    extern Class _ZN8QVariantC1ERK7QRegExp(void);
    extern Class _ZN8QVariantaSERKS_(void);
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
    extern Class _ZNK8QVariant11toByteArrayEv(void);
    extern _ZNK8QVariant10toBitArrayEv(void);
    extern Class _ZNK8QVariant8toStringEv(void);
    extern Class _ZNK8QVariant12toStringListEv(void);
    extern Class _ZNK8QVariant6toCharEv(void);
    extern _ZNK8QVariant6toDateEv(void);
    extern _ZNK8QVariant6toTimeEv(void);
    extern _ZNK8QVariant10toDateTimeEv(void);
    extern Class _ZNK8QVariant6toListEv(void);
    extern Class _ZNK8QVariant5toMapEv(void);
    extern _ZNK8QVariant7toPointEv(void);
    extern _ZNK8QVariant8toPointFEv(void);
    extern _ZNK8QVariant6toRectEv(void);
    extern _ZNK8QVariant6toSizeEv(void);
    extern _ZNK8QVariant7toSizeFEv(void);
    extern _ZNK8QVariant6toLineEv(void);
    extern _ZNK8QVariant7toLineFEv(void);
    extern _ZNK8QVariant7toRectFEv(void);
    extern Class _ZNK8QVariant5toUrlEv(void);
    extern _ZNK8QVariant8toLocaleEv(void);
    extern Class _ZNK8QVariant8toRegExpEv(void);
    extern void _ZN8QVariant4loadER11QDataStream(void);
    extern void _ZNK8QVariant4saveER11QDataStream(void);
    extern char _ZN8QVariant10typeToNameENS_4TypeE(void);
    extern enum N8QVariant4TypeE _ZN8QVariant10nameToTypeEPKc(void);
    extern void _ZN8QVariant4dataEv(void);
    extern void _ZNK8QVariant9constDataEv(void);
    extern struct N8QVariant7HandlerE *_ZN8QVariant7handlerE;
    extern void _ZN8QVariant6createEiPKv(void);
    extern void _ZN8QVariant12castOrDetachENS_4TypeE(void);
    extern bool _ZNK8QVariant3cmpERKS_(void);
    extern Class _ZrsR11QDataStreamR8QVariant(void);
    extern Class _ZlsR11QDataStreamRK8QVariant(void);
    extern Class _ZrsR11QDataStreamRN8QVariant4TypeE(void);
    extern Class _ZlsR11QDataStreamN8QVariant4TypeE(void);
    extern Class _Zls6QDebugRK8QVariant(void);
    extern Class _Zls6QDebugN8QVariant4TypeE(void);
#ifdef __cplusplus
}
#endif
#endif
