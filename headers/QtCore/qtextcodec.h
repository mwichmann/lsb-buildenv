#ifndef _QTCORE_QTEXTCODEC_H_
#define _QTCORE_QTEXTCODEC_H_

class QTextCodec;
// *INDENT-OFF*

typedef class QFlags<QTextCodec::ConversionFlag>
{
private:
public:
}ConversionFlags	
;

class QTextCodec
{
private:
public:
    static QTextCodec * codecForName(QByteArray const&);
    static QTextCodec * codecForMib(int);
    static QList<QByteArray> availableCodecs();
    static QList<int> availableMibs();
    static QTextCodec * codecForLocale();
    static void setCodecForLocale(QTextCodec*);
    static QTextCodec * codecForHtml(QByteArray const&);
    QTextDecoder * makeDecoder() const;
    QTextEncoder * makeEncoder() const;
    bool canEncode(QChar) const;
    bool canEncode(QString const&) const;
    QString toUnicode(QByteArray const&) const;
    QString toUnicode(char const*) const;
    QByteArray fromUnicode(QString const&) const;
    QList<QByteArray> aliases() const;
     QTextCodec();
     ~QTextCodec();
    static const char * locale();
    QByteArray fromUnicode(QString const&, int&) const;
    QString toUnicode(QByteArray const&, int) const;
};

enum ConversionFlag	
{
ConvertInvalidToNull = -2147483648,	
DefaultConversion = 0,	
IgnoreHeader = 1
}
;

class QFlags<QTextCodec::ConversionFlag>
{
private:
public:
};

struct ConverterState	;

class QTextEncoder
{
private:
public:
     ~QTextEncoder();
    QByteArray fromUnicode(QString const&);
    QByteArray fromUnicode(QChar const*, int);
    QByteArray fromUnicode(QString const&, int&);
};

class QTextDecoder
{
private:
public:
     ~QTextDecoder();
    QString toUnicode(char const*, int);
    QString toUnicode(QByteArray const&);
};

// *INDENT-ON*
#endif
