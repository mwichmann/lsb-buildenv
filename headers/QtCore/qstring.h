#ifndef _QTCORE_QSTRING_H_
#define _QTCORE_QSTRING_H_

class QConstString;
// *INDENT-OFF*

typedef class QFlags<QString::SectionFlag>
{
private:
public:
}SectionFlags	
;

typedef QChar iterator	
;

typedef QChar const_iterator	
;

typedef iterator	Iterator	
;

typedef const_iterator	ConstIterator	
;

class QString
{
private:
public:
     QString(QChar const*, int);
     QString(QChar);
     QString(int, QChar);
    QString & operator=(QChar);
    QString & operator=(QString const&);
    void resize(int);
    QString & fill(QChar, int);
    void truncate(int);
    void chop(int);
    QString arg(long long, int, int, QChar const&) const;
    QString arg(unsigned long long, int, int, QChar const&) const;
    QString arg(double, int, char, int, QChar const&) const;
    QString arg(char, int, QChar const&) const;
    QString arg(QChar, int, QChar const&) const;
    QString arg(QString const&, int, QChar const&) const;
    QString & vsprintf(char const*, char*);
    QString & sprintf(char const*, ...);
    int indexOf(QChar, int, Qt::CaseSensitivity) const;
    int indexOf(QString const&, int, Qt::CaseSensitivity) const;
    int lastIndexOf(QChar, int, Qt::CaseSensitivity) const;
    int lastIndexOf(QString const&, int, Qt::CaseSensitivity) const;
    int count(QChar, Qt::CaseSensitivity) const;
    int count(QString const&, Qt::CaseSensitivity) const;
    int indexOf(QRegExp const&, int) const;
    int lastIndexOf(QRegExp const&, int) const;
    int count(QRegExp const&) const;
    QString section(QString const&, int, int, QFlags<QString::SectionFlag>) const;
    QString section(QRegExp const&, int, int, QFlags<QString::SectionFlag>) const;
    QString left(int) const;
    QString right(int) const;
    QString mid(int, int) const;
    bool startsWith(QString const&, Qt::CaseSensitivity) const;
    bool startsWith(QLatin1String const&, Qt::CaseSensitivity) const;
    bool startsWith(QChar const&, Qt::CaseSensitivity) const;
    bool endsWith(QString const&, Qt::CaseSensitivity) const;
    bool endsWith(QLatin1String const&, Qt::CaseSensitivity) const;
    bool endsWith(QChar const&, Qt::CaseSensitivity) const;
    QString leftJustified(int, QChar, bool) const;
    QString rightJustified(int, QChar, bool) const;
    QString toLower() const;
    QString toUpper() const;
    QString trimmed() const;
    QString simplified() const;
    QString & insert(int, QChar);
    QString & insert(int, QChar const*, int);
    QString & insert(int, QLatin1String const&);
    QString & append(QChar);
    QString & append(QString const&);
    QString & append(QLatin1String const&);
    QString & remove(int, int);
    QString & remove(QChar, Qt::CaseSensitivity);
    QString & remove(QString const&, Qt::CaseSensitivity);
    QString & replace(int, int, QChar);
    QString & replace(int, int, QChar const*, int);
    QString & replace(int, int, QString const&);
    QString & replace(QChar, QChar, Qt::CaseSensitivity);
    QString & replace(QChar, QString const&, Qt::CaseSensitivity);
    QString & replace(QString const&, QString const&, Qt::CaseSensitivity);
    QString & replace(QRegExp const&, QString const&);
    QStringList split(QString const&, QString::SplitBehavior, Qt::CaseSensitivity) const;
    QStringList split(QChar const&, QString::SplitBehavior, Qt::CaseSensitivity) const;
    QStringList split(QRegExp const&, QString::SplitBehavior) const;
    QString normalized(QString::NormalizationForm) const;
    QString normalized(QString::NormalizationForm, QChar::UnicodeVersion) const;
    const ushort * utf16() const;
    QByteArray toAscii() const;
    QByteArray toLatin1() const;
    QByteArray toUtf8() const;
    QByteArray toLocal8Bit() const;
    static QString fromAscii(char const*, int);
    static QString fromLatin1(char const*, int);
    static QString fromUtf8(char const*, int);
    static QString fromLocal8Bit(char const*, int);
    static QString fromUtf16(unsigned short const*, int);
    static QString fromRawData(QChar const*, int);
    QString & setUnicode(QChar const*, int);
    int compare(QString const&) const;
    int localeAwareCompare(QString const&) const;
    short int toShort(bool*, int) const;
    ushort toUShort(bool*, int) const;
    int toInt(bool*, int) const;
    uint toUInt(bool*, int) const;
    long int toLong(bool*, int) const;
    ulong toULong(bool*, int) const;
    qlonglong toLongLong(bool*, int) const;
    qulonglong toULongLong(bool*, int) const;
    float toFloat(bool*) const;
    double toDouble(bool*) const;
    QString & setNum(long long, int);
    QString & setNum(unsigned long long, int);
    QString & setNum(double, char, int);
    static QString number(int, int);
    static QString number(unsigned int, int);
    static QString number(long, int);
    static QString number(unsigned long, int);
    static QString number(long long, int);
    static QString number(unsigned long long, int);
    static QString number(double, char, int);
    bool operator==(QString const&) const;
    bool operator<(QString const&) const;
    bool operator==(QLatin1String const&) const;
    bool operator<(QLatin1String const&) const;
    bool operator>(QLatin1String const&) const;
    static QString fromWCharArray(wchar_t const*, int);
    static QString fromUcs4(unsigned int const*, int);
    int toWCharArray(wchar_t*) const;
    QVector<unsigned int> toUcs4() const;
    int compare(QLatin1String const&, Qt::CaseSensitivity) const;
    int compare(QString const&, Qt::CaseSensitivity) const;
protected:
    const char * ascii_helper() const;
    const char * latin1_helper() const;
private:
    static void free(QString::Data*);
    void expand(int);
    void realloc(int);
    void realloc();
    static struct Data * fromLatin1_helper(char const*, int);
    QString multiArg(int, QString const**) const;
    static struct Data * fromAscii_helper(char const*, int);
};

enum SectionFlag	
{
SectionDefault = 0,	
SectionSkipEmpty = 1,	
SectionIncludeLeadingSep = 2,	
SectionIncludeTrailingSep = 4,	
SectionCaseInsensitiveSeps = 8
}
;

class QFlags<QString::SectionFlag>
{
private:
public:
};

enum SplitBehavior	
{
KeepEmptyParts = 0,	
SkipEmptyParts = 1
}
;

enum NormalizationForm	
{
NormalizationForm_D = 0,	
NormalizationForm_C = 1,	
NormalizationForm_KD = 2,	
NormalizationForm_KC = 3
}
;

struct Null	;

struct Data	;

class QLatin1String
{
private:
public:
};

class QCharRef
{
private:
public:
};

class QConstString :  
{
private:
public:
};


extern  _ZlsR11QDataStreamRK7QString(QDataStream &, QString & &);
extern  _ZrsR11QDataStreamR7QString(QDataStream &, QString &);
// *INDENT-ON*
#endif
