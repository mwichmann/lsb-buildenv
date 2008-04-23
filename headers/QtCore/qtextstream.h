#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QTEXTSTREAM_H_
#define _QTCORE_QTEXTSTREAM_H_

class QFlags < QTextStream::NumberFlag >;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef class QFlags<QTextStream::NumberFlag>
{
private:
public:
}NumberFlags	
;

typedef class QTextStream
{
private:
public:
     QTextStream();
     QTextStream(QIODevice*);
     QTextStream(_IO_FILE*, QFlags<QIODevice::OpenModeFlag>);
     QTextStream(QString*, QFlags<QIODevice::OpenModeFlag>);
     QTextStream(QByteArray*, QFlags<QIODevice::OpenModeFlag>);
     QTextStream(QByteArray const&, QFlags<QIODevice::OpenModeFlag>);
     ~QTextStream();
    void setCodec(QTextCodec*);
    void setCodec(char const*);
    QTextCodec * codec() const;
    void setAutoDetectUnicode(bool);
    bool autoDetectUnicode() const;
    void setGenerateByteOrderMark(bool);
    bool generateByteOrderMark() const;
    void setDevice(QIODevice*);
    QIODevice * device() const;
    void setString(QString*, QFlags<QIODevice::OpenModeFlag>);
    QString * string() const;
    enum _ZN11QTextStream6StatusE status() const;
    void setStatus(QTextStream::Status);
    void resetStatus();
    bool atEnd() const;
    void reset();
    void flush();
    bool seek(long long);
    void skipWhiteSpace();
    QString readLine(long long);
    QString readAll();
    QString read(long long);
    void setFieldAlignment(QTextStream::FieldAlignment);
    enum _ZN11QTextStream14FieldAlignmentE fieldAlignment() const;
    void setPadChar(QChar);
    QChar padChar() const;
    void setFieldWidth(int);
    int fieldWidth() const;
    void setNumberFlags(QFlags<QTextStream::NumberFlag>);
    QFlags<QTextStream::NumberFlag> numberFlags() const;
    void setIntegerBase(int);
    int integerBase() const;
    void setRealNumberNotation(QTextStream::RealNumberNotation);
    enum _ZN11QTextStream18RealNumberNotationE realNumberNotation() const;
    void setRealNumberPrecision(int);
    int realNumberPrecision() const;
    QTextStream & operator>>(QChar&);
    QTextStream & operator>>(char&);
    QTextStream & operator>>(short&);
    QTextStream & operator>>(unsigned short&);
    QTextStream & operator>>(int&);
    QTextStream & operator>>(unsigned int&);
    QTextStream & operator>>(long&);
    QTextStream & operator>>(unsigned long&);
    QTextStream & operator>>(long long&);
    QTextStream & operator>>(unsigned long long&);
    QTextStream & operator>>(float&);
    QTextStream & operator>>(double&);
    QTextStream & operator>>(QString&);
    QTextStream & operator>>(QByteArray&);
    QTextStream & operator>>(char*);
    QTextStream & operator<<(QBool);
    QTextStream & operator<<(QChar);
    QTextStream & operator<<(char);
    QTextStream & operator<<(short);
    QTextStream & operator<<(unsigned short);
    QTextStream & operator<<(int);
    QTextStream & operator<<(unsigned int);
    QTextStream & operator<<(long);
    QTextStream & operator<<(unsigned long);
    QTextStream & operator<<(long long);
    QTextStream & operator<<(unsigned long long);
    QTextStream & operator<<(float);
    QTextStream & operator<<(double);
    QTextStream & operator<<(QString const&);
    QTextStream & operator<<(QByteArray const&);
    QTextStream & operator<<(char const*);
    QTextStream & operator<<(void const*);
    void setEncoding(QTextStream::Encoding);
    qint64 pos() const;
}QTextStreamFunction	
;

typedef void	QTSMFI	
;

typedef void	QTSMFC	
;

typedef class QTextStream
{
private:
public:
     QTextStream();
     QTextStream(QIODevice*);
     QTextStream(_IO_FILE*, QFlags<QIODevice::OpenModeFlag>);
     QTextStream(QString*, QFlags<QIODevice::OpenModeFlag>);
     QTextStream(QByteArray*, QFlags<QIODevice::OpenModeFlag>);
     QTextStream(QByteArray const&, QFlags<QIODevice::OpenModeFlag>);
     ~QTextStream();
    void setCodec(QTextCodec*);
    void setCodec(char const*);
    QTextCodec * codec() const;
    void setAutoDetectUnicode(bool);
    bool autoDetectUnicode() const;
    void setGenerateByteOrderMark(bool);
    bool generateByteOrderMark() const;
    void setDevice(QIODevice*);
    QIODevice * device() const;
    void setString(QString*, QFlags<QIODevice::OpenModeFlag>);
    QString * string() const;
    enum _ZN11QTextStream6StatusE status() const;
    void setStatus(QTextStream::Status);
    void resetStatus();
    bool atEnd() const;
    void reset();
    void flush();
    bool seek(long long);
    void skipWhiteSpace();
    QString readLine(long long);
    QString readAll();
    QString read(long long);
    void setFieldAlignment(QTextStream::FieldAlignment);
    enum _ZN11QTextStream14FieldAlignmentE fieldAlignment() const;
    void setPadChar(QChar);
    QChar padChar() const;
    void setFieldWidth(int);
    int fieldWidth() const;
    void setNumberFlags(QFlags<QTextStream::NumberFlag>);
    QFlags<QTextStream::NumberFlag> numberFlags() const;
    void setIntegerBase(int);
    int integerBase() const;
    void setRealNumberNotation(QTextStream::RealNumberNotation);
    enum _ZN11QTextStream18RealNumberNotationE realNumberNotation() const;
    void setRealNumberPrecision(int);
    int realNumberPrecision() const;
    QTextStream & operator>>(QChar&);
    QTextStream & operator>>(char&);
    QTextStream & operator>>(short&);
    QTextStream & operator>>(unsigned short&);
    QTextStream & operator>>(int&);
    QTextStream & operator>>(unsigned int&);
    QTextStream & operator>>(long&);
    QTextStream & operator>>(unsigned long&);
    QTextStream & operator>>(long long&);
    QTextStream & operator>>(unsigned long long&);
    QTextStream & operator>>(float&);
    QTextStream & operator>>(double&);
    QTextStream & operator>>(QString&);
    QTextStream & operator>>(QByteArray&);
    QTextStream & operator>>(char*);
    QTextStream & operator<<(QBool);
    QTextStream & operator<<(QChar);
    QTextStream & operator<<(char);
    QTextStream & operator<<(short);
    QTextStream & operator<<(unsigned short);
    QTextStream & operator<<(int);
    QTextStream & operator<<(unsigned int);
    QTextStream & operator<<(long);
    QTextStream & operator<<(unsigned long);
    QTextStream & operator<<(long long);
    QTextStream & operator<<(unsigned long long);
    QTextStream & operator<<(float);
    QTextStream & operator<<(double);
    QTextStream & operator<<(QString const&);
    QTextStream & operator<<(QByteArray const&);
    QTextStream & operator<<(char const*);
    QTextStream & operator<<(void const*);
    void setEncoding(QTextStream::Encoding);
    qint64 pos() const;
}QTS	
;

#endif /* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31
class QTextStream
{
private:
public:
     QTextStream();
     QTextStream(QIODevice*);
     QTextStream(_IO_FILE*, QFlags<QIODevice::OpenModeFlag>);
     QTextStream(QString*, QFlags<QIODevice::OpenModeFlag>);
     QTextStream(QByteArray*, QFlags<QIODevice::OpenModeFlag>);
     QTextStream(QByteArray const&, QFlags<QIODevice::OpenModeFlag>);
     ~QTextStream();
    void setCodec(QTextCodec*);
    void setCodec(char const*);
    QTextCodec * codec() const;
    void setAutoDetectUnicode(bool);
    bool autoDetectUnicode() const;
    void setGenerateByteOrderMark(bool);
    bool generateByteOrderMark() const;
    void setDevice(QIODevice*);
    QIODevice * device() const;
    void setString(QString*, QFlags<QIODevice::OpenModeFlag>);
    QString * string() const;
    enum _ZN11QTextStream6StatusE status() const;
    void setStatus(QTextStream::Status);
    void resetStatus();
    bool atEnd() const;
    void reset();
    void flush();
    bool seek(long long);
    void skipWhiteSpace();
    QString readLine(long long);
    QString readAll();
    QString read(long long);
    void setFieldAlignment(QTextStream::FieldAlignment);
    enum _ZN11QTextStream14FieldAlignmentE fieldAlignment() const;
    void setPadChar(QChar);
    QChar padChar() const;
    void setFieldWidth(int);
    int fieldWidth() const;
    void setNumberFlags(QFlags<QTextStream::NumberFlag>);
    QFlags<QTextStream::NumberFlag> numberFlags() const;
    void setIntegerBase(int);
    int integerBase() const;
    void setRealNumberNotation(QTextStream::RealNumberNotation);
    enum _ZN11QTextStream18RealNumberNotationE realNumberNotation() const;
    void setRealNumberPrecision(int);
    int realNumberPrecision() const;
    QTextStream & operator>>(QChar&);
    QTextStream & operator>>(char&);
    QTextStream & operator>>(short&);
    QTextStream & operator>>(unsigned short&);
    QTextStream & operator>>(int&);
    QTextStream & operator>>(unsigned int&);
    QTextStream & operator>>(long&);
    QTextStream & operator>>(unsigned long&);
    QTextStream & operator>>(long long&);
    QTextStream & operator>>(unsigned long long&);
    QTextStream & operator>>(float&);
    QTextStream & operator>>(double&);
    QTextStream & operator>>(QString&);
    QTextStream & operator>>(QByteArray&);
    QTextStream & operator>>(char*);
    QTextStream & operator<<(QBool);
    QTextStream & operator<<(QChar);
    QTextStream & operator<<(char);
    QTextStream & operator<<(short);
    QTextStream & operator<<(unsigned short);
    QTextStream & operator<<(int);
    QTextStream & operator<<(unsigned int);
    QTextStream & operator<<(long);
    QTextStream & operator<<(unsigned long);
    QTextStream & operator<<(long long);
    QTextStream & operator<<(unsigned long long);
    QTextStream & operator<<(float);
    QTextStream & operator<<(double);
    QTextStream & operator<<(QString const&);
    QTextStream & operator<<(QByteArray const&);
    QTextStream & operator<<(char const*);
    QTextStream & operator<<(void const*);
    void setEncoding(QTextStream::Encoding);
    qint64 pos() const;
};

enum RealNumberNotation	
{
SmartNotation = 0,	
FixedNotation = 1,	
ScientificNotation = 2
}
;

enum FieldAlignment	
{
AlignLeft = 0,	
AlignRight = 1,	
AlignCenter = 2,	
AlignAccountingStyle = 3
}
;

enum Status	
{
Ok = 0,	
ReadPastEnd = 1,	
ReadCorruptData = 2
}
;

enum NumberFlag	
{
ShowBase = 1,	
ForcePoint = 2,	
ForceSign = 4,	
UppercaseBase = 8,	
UppercaseDigits = 16
}
;

class QFlags<QTextStream::NumberFlag>
{
private:
public:
};

enum Encoding	
{
Locale = 0,	
Latin1 = 1,	
Unicode = 2,	
UnicodeNetworkOrder = 3,	
UnicodeReverse = 4,	
RawUnicode = 5,	
UnicodeUTF8 = 6
}
;

class QTextStreamManipulator
{
private:
public:
};

class QTextIStream : public QTextStream
{
private:
public:
};

class QTextOStream : public QTextStream
{
private:
public:
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern QTextStream _Z10forcepointR11QTextStream(QTextStream &);
extern QTextStream _Z10noshowbaseR11QTextStream(QTextStream &);
extern QTextStream _Z10scientificR11QTextStream(QTextStream &);
extern QTextStream _Z11noforcesignR11QTextStream(QTextStream &);
extern QTextStream _Z12noforcepointR11QTextStream(QTextStream &);
extern QTextStream _Z13lowercasebaseR11QTextStream(QTextStream &);
extern QTextStream _Z13uppercasebaseR11QTextStream(QTextStream &);
extern QTextStream _Z15lowercasedigitsR11QTextStream(QTextStream &);
extern QTextStream _Z15uppercasedigitsR11QTextStream(QTextStream &);
extern QTextStream _Z2wsR11QTextStream(QTextStream &);
extern QTextStream _Z3binR11QTextStream(QTextStream &);
extern QTextStream _Z3bomR11QTextStream(QTextStream &);
extern QTextStream _Z3decR11QTextStream(QTextStream &);
extern QTextStream _Z3hexR11QTextStream(QTextStream &);
extern QTextStream _Z3octR11QTextStream(QTextStream &);
extern QTextStream _Z4endlR11QTextStream(QTextStream &);
extern QTextStream _Z4leftR11QTextStream(QTextStream &);
extern QTextStream _Z5fixedR11QTextStream(QTextStream &);
extern QTextStream _Z5flushR11QTextStream(QTextStream &);
extern QTextStream _Z5resetR11QTextStream(QTextStream &);
extern QTextStream _Z5rightR11QTextStream(QTextStream &);
extern QTextStream _Z6centerR11QTextStream(QTextStream &);
extern QTextStream _Z8showbaseR11QTextStream(QTextStream &);
extern QTextStream _Z9forcesignR11QTextStream(QTextStream &);
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
