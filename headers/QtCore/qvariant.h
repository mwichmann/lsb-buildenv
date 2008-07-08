#if (__LSB_VERSION__ >= 31 )
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
     ~QVariant();
     QVariant(QVariant::Type);
     QVariant(int, void const*);
     QVariant(QVariant const&);
     QVariant(QDataStream&);
     QVariant(int);
     QVariant(unsigned int);
     QVariant(long long);
     QVariant(unsigned long long);
     QVariant(bool);
     QVariant(double);
     QVariant(char const*);
     QVariant(QByteArray const&);
     QVariant(QBitArray const&);
     QVariant(QString const&);
     QVariant(QLatin1String const&);
     QVariant(QStringList const&);
     QVariant(QChar const&);
     QVariant(QDate const&);
     QVariant(QTime const&);
     QVariant(QDateTime const&);
     QVariant(QList<QVariant> const&);
     QVariant(QMap<QString, QVariant> const&);
     QVariant(QSize const&);
     QVariant(QSizeF const&);
     QVariant(QPoint const&);
     QVariant(QPointF const&);
     QVariant(QLine const&);
     QVariant(QLineF const&);
     QVariant(QRect const&);
     QVariant(QRectF const&);
     QVariant(QUrl const&);
     QVariant(QLocale const&);
     QVariant(QRegExp const&);
    QVariant & operator=(QVariant const&);
    enum _ZN8QVariant4TypeE type() const;
    int userType() const;
    const char * typeName() const;
    bool canConvert(QVariant::Type) const;
    bool convert(QVariant::Type);
    bool isNull() const;
    void clear();
    void detach();
    int toInt(bool*) const;
    uint toUInt(bool*) const;
    qlonglong toLongLong(bool*) const;
    qulonglong toULongLong(bool*) const;
    bool toBool() const;
    double toDouble(bool*) const;
    QByteArray toByteArray() const;
    QBitArray toBitArray() const;
    QString toString() const;
    QStringList toStringList() const;
    QChar toChar() const;
    QDate toDate() const;
    QTime toTime() const;
    QDateTime toDateTime() const;
    QList<QVariant> toList() const;
     toMap() const;
    QPoint toPoint() const;
    QPointF toPointF() const;
    QRect toRect() const;
    QSize toSize() const;
    QSizeF toSizeF() const;
    QLine toLine() const;
    QLineF toLineF() const;
    QRectF toRectF() const;
    QUrl toUrl() const;
    QLocale toLocale() const;
    QRegExp toRegExp() const;
    void load(QDataStream&);
    void save(QDataStream&) const;
    static const char * typeToName(QVariant::Type);
    static enum _ZN8QVariant4TypeE nameToType(char const*);
    void * data();
    const void * constData() const;
     QVariant(Qt::GlobalColor);
protected:
    void create(int, void const*);
    void * castOrDetach(QVariant::Type);
    bool cmp(QVariant const&) const;
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

struct PrivateShared	;

struct Private	;

union Private::Data	;

struct Handler	;

class QVariantComparisonHelper
{
private:
public:
};


/* Function prototypes */

extern struct Handler * _ZN8QVariant7handlerE ;
extern QDebug _Zls6QDebugN8QVariant4TypeE(enum _ZN8QVariant4TypeE);
extern QDebug _Zls6QDebugRK8QVariant(const QVariant &);
extern QDataStream _ZlsR11QDataStreamN8QVariant4TypeE(enum _ZN8QVariant4TypeE);
extern QDataStream _ZlsR11QDataStreamRK8QVariant(const QVariant &);
extern QDataStream _ZrsR11QDataStreamR8QVariant(QVariant &);
extern QDataStream _ZrsR11QDataStreamRN8QVariant4TypeE(enum _ZN8QVariant4TypeE &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
