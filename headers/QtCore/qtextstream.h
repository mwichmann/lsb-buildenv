#ifndef _QTCORE_QTEXTSTREAM_H_
#define _QTCORE_QTEXTSTREAM_H_

class QFlags < QTextStream::NumberFlag >;
// *INDENT-OFF*




typedef NumberFlags	
;

typedef class QTextStream
{
private:
public:
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
}QTS	
;

class QTextStream
{
private:
public:
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


extern QTextStream _ZN11QTextStreamC2Ev(void);
extern QTextStream _ZN11QTextStreamC1Ev(void);
extern QTextStream _ZN11QTextStreamC2EP9QIODevice(void);
extern QTextStream _ZN11QTextStreamC1EP9QIODevice(void);
extern QTextStream _ZN11QTextStreamC2EP8_IO_FILE6QFlagsIN9QIODevice12OpenModeFlagEE(void);
extern QTextStream _ZN11QTextStreamC1EP8_IO_FILE6QFlagsIN9QIODevice12OpenModeFlagEE(void);
extern QTextStream _ZN11QTextStreamC2EP7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void);
extern QTextStream _ZN11QTextStreamC1EP7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void);
extern QTextStream _ZN11QTextStreamC2EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(void);
extern QTextStream _ZN11QTextStreamC1EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(void);
extern QTextStream _ZN11QTextStreamC2ERK10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(void);
extern QTextStream _ZN11QTextStreamC1ERK10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(void);
extern QTextStream _ZN11QTextStreamD2Ev(void);
extern QTextStream _ZN11QTextStreamD1Ev(void);
extern QTextStream _ZN11QTextStreamD0Ev(void);
extern void _ZN11QTextStream8setCodecEP10QTextCodec(void);
extern void _ZN11QTextStream8setCodecEPKc(void);
extern QTextCodec _ZNK11QTextStream5codecEv(void);
extern void _ZN11QTextStream20setAutoDetectUnicodeEb(void);
extern bool _ZNK11QTextStream17autoDetectUnicodeEv(void);
extern void _ZN11QTextStream24setGenerateByteOrderMarkEb(void);
extern bool _ZNK11QTextStream21generateByteOrderMarkEv(void);
extern void _ZN11QTextStream9setDeviceEP9QIODevice(void);
extern QIODevice _ZNK11QTextStream6deviceEv(void);
extern void _ZN11QTextStream9setStringEP7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void);
extern QString _ZNK11QTextStream6stringEv(void);
extern enum N11QTextStream6StatusE _ZNK11QTextStream6statusEv(void);
extern void _ZN11QTextStream9setStatusENS_6StatusE(void);
extern void _ZN11QTextStream11resetStatusEv(void);
extern bool _ZNK11QTextStream5atEndEv(void);
extern void _ZN11QTextStream5resetEv(void);
extern void _ZN11QTextStream5flushEv(void);
extern bool _ZN11QTextStream4seekEx(void);
extern void _ZN11QTextStream14skipWhiteSpaceEv(void);
extern QString _ZN11QTextStream8readLineEx(void);
extern QString _ZN11QTextStream7readAllEv(void);
extern QString _ZN11QTextStream4readEx(void);
extern void _ZN11QTextStream17setFieldAlignmentENS_14FieldAlignmentE(void);
extern enum N11QTextStream14FieldAlignmentE _ZNK11QTextStream14fieldAlignmentEv(void);
extern void _ZN11QTextStream10setPadCharE5QChar(void);
extern QChar _ZNK11QTextStream7padCharEv(void);
extern void _ZN11QTextStream13setFieldWidthEi(void);
extern int _ZNK11QTextStream10fieldWidthEv(void);
extern void _ZN11QTextStream14setNumberFlagsE6QFlagsINS_10NumberFlagEE(void);
extern N11QTextStream11NumberFlagsE _ZNK11QTextStream11numberFlagsEv(void);
extern void _ZN11QTextStream14setIntegerBaseEi(void);
extern int _ZNK11QTextStream11integerBaseEv(void);
extern void _ZN11QTextStream21setRealNumberNotationENS_18RealNumberNotationE(void);
extern enum N11QTextStream18RealNumberNotationE _ZNK11QTextStream18realNumberNotationEv(void);
extern void _ZN11QTextStream22setRealNumberPrecisionEi(void);
extern int _ZNK11QTextStream19realNumberPrecisionEv(void);
extern QTextStream _ZN11QTextStreamrsER5QChar(void);
extern QTextStream _ZN11QTextStreamrsERc(void);
extern QTextStream _ZN11QTextStreamrsERs(void);
extern QTextStream _ZN11QTextStreamrsERt(void);
extern QTextStream _ZN11QTextStreamrsERi(void);
extern QTextStream _ZN11QTextStreamrsERj(void);
extern QTextStream _ZN11QTextStreamrsERl(void);
extern QTextStream _ZN11QTextStreamrsERm(void);
extern QTextStream _ZN11QTextStreamrsERx(void);
extern QTextStream _ZN11QTextStreamrsERy(void);
extern QTextStream _ZN11QTextStreamrsERf(void);
extern QTextStream _ZN11QTextStreamrsERd(void);
extern QTextStream _ZN11QTextStreamrsER7QString(void);
extern QTextStream _ZN11QTextStreamrsER10QByteArray(void);
extern QTextStream _ZN11QTextStreamrsEPc(void);
extern QTextStream _ZN11QTextStreamlsE5QBool(void);
extern QTextStream _ZN11QTextStreamlsE5QChar(void);
extern QTextStream _ZN11QTextStreamlsEc(void);
extern QTextStream _ZN11QTextStreamlsEs(void);
extern QTextStream _ZN11QTextStreamlsEt(void);
extern QTextStream _ZN11QTextStreamlsEi(void);
extern QTextStream _ZN11QTextStreamlsEj(void);
extern QTextStream _ZN11QTextStreamlsEl(void);
extern QTextStream _ZN11QTextStreamlsEm(void);
extern QTextStream _ZN11QTextStreamlsEx(void);
extern QTextStream _ZN11QTextStreamlsEy(void);
extern QTextStream _ZN11QTextStreamlsEf(void);
extern QTextStream _ZN11QTextStreamlsEd(void);
extern QTextStream _ZN11QTextStreamlsERK7QString(void);
extern QTextStream _ZN11QTextStreamlsERK10QByteArray(void);
extern QTextStream _ZN11QTextStreamlsEPKc(void);
extern QTextStream _ZN11QTextStreamlsEPKv(void);
extern void _ZN11QTextStream11setEncodingENS_8EncodingE(void);
extern QTextStream _Z3binR11QTextStream(void);
extern QTextStream _Z3octR11QTextStream(void);
extern QTextStream _Z3decR11QTextStream(void);
extern QTextStream _Z3hexR11QTextStream(void);
extern QTextStream _Z8showbaseR11QTextStream(void);
extern QTextStream _Z9forcesignR11QTextStream(void);
extern QTextStream _Z10forcepointR11QTextStream(void);
extern QTextStream _Z10noshowbaseR11QTextStream(void);
extern QTextStream _Z11noforcesignR11QTextStream(void);
extern QTextStream _Z12noforcepointR11QTextStream(void);
extern QTextStream _Z13uppercasebaseR11QTextStream(void);
extern QTextStream _Z15uppercasedigitsR11QTextStream(void);
extern QTextStream _Z13lowercasebaseR11QTextStream(void);
extern QTextStream _Z15lowercasedigitsR11QTextStream(void);
extern QTextStream _Z5fixedR11QTextStream(void);
extern QTextStream _Z10scientificR11QTextStream(void);
extern QTextStream _Z4leftR11QTextStream(void);
extern QTextStream _Z5rightR11QTextStream(void);
extern QTextStream _Z6centerR11QTextStream(void);
extern QTextStream _Z4endlR11QTextStream(void);
extern QTextStream _Z5flushR11QTextStream(void);
extern QTextStream _Z5resetR11QTextStream(void);
extern QTextStream _Z3bomR11QTextStream(void);
extern QTextStream _Z2wsR11QTextStream(void);
// *INDENT-ON*
#endif
