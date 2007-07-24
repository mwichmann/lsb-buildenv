#ifndef _QTCORE_QTEXTSTREAM_H_
#define _QTCORE_QTEXTSTREAM_H_

#include <QtCore/qchar.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qiodevice.h>
#include <QtCore/qtextcodec.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N11QTextStream11NumberFlagsE;

    typedef Unknown Type:".Class." QTextStreamFunction;

    typedef void QTSMFI;

    typedef void QTSMFC;

    typedef Unknown Type:".Class." QTS;

    Unknown Type:".Class.";

    enum N11QTextStream18RealNumberNotationE {
	SmartNotation,
	FixedNotation,
	ScientificNotation
    };

    enum N11QTextStream14FieldAlignmentE {
	AlignLeft,
	AlignRight,
	AlignCenter,
	AlignAccountingStyle
    };

    enum N11QTextStream6StatusE {
	Ok,
	ReadPastEnd,
	ReadCorruptData
    };

    enum N11QTextStream10NumberFlagE {
	ShowBase,
	ForcePoint,
	ForceSign,
	UppercaseBase,
	UppercaseDigits
    };

    Unknown Type:".Class.";

    enum N11QTextStream8EncodingE {
	Locale,
	Latin1,
	Unicode,
	UnicodeNetworkOrder,
	UnicodeReverse,
	RawUnicode,
	UnicodeUTF8
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern Class _ZN11QTextStreamC2Ev(void);
    extern Class _ZN11QTextStreamC1Ev(void);
    extern Class _ZN11QTextStreamC2EP9QIODevice(void);
    extern Class _ZN11QTextStreamC1EP9QIODevice(void);
    extern Class
	_ZN11QTextStreamC2EP8_IO_FILE6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern Class
	_ZN11QTextStreamC1EP8_IO_FILE6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern Class
	_ZN11QTextStreamC2EP7QString6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern Class
	_ZN11QTextStreamC1EP7QString6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern Class
	_ZN11QTextStreamC2EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern Class
	_ZN11QTextStreamC1EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern Class
	_ZN11QTextStreamC2ERK10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern Class
	_ZN11QTextStreamC1ERK10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern Class _ZN11QTextStreamD2Ev(void);
    extern Class _ZN11QTextStreamD1Ev(void);
    extern Class _ZN11QTextStreamD0Ev(void);
    extern void _ZN11QTextStream8setCodecEP10QTextCodec(void);
    extern void _ZN11QTextStream8setCodecEPKc(void);
    extern Class _ZNK11QTextStream5codecEv(void);
    extern void _ZN11QTextStream20setAutoDetectUnicodeEb(void);
    extern bool _ZNK11QTextStream17autoDetectUnicodeEv(void);
    extern void _ZN11QTextStream24setGenerateByteOrderMarkEb(void);
    extern bool _ZNK11QTextStream21generateByteOrderMarkEv(void);
    extern void _ZN11QTextStream9setDeviceEP9QIODevice(void);
    extern Class _ZNK11QTextStream6deviceEv(void);
    extern void
	_ZN11QTextStream9setStringEP7QString6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern Class _ZNK11QTextStream6stringEv(void);
    extern enum N11QTextStream6StatusE _ZNK11QTextStream6statusEv(void);
    extern void _ZN11QTextStream9setStatusENS_6StatusE(void);
    extern void _ZN11QTextStream11resetStatusEv(void);
    extern bool _ZNK11QTextStream5atEndEv(void);
    extern void _ZN11QTextStream5resetEv(void);
    extern void _ZN11QTextStream5flushEv(void);
    extern bool _ZN11QTextStream4seekEx(void);
    extern void _ZN11QTextStream14skipWhiteSpaceEv(void);
    extern Class _ZN11QTextStream8readLineEx(void);
    extern Class _ZN11QTextStream7readAllEv(void);
    extern Class _ZN11QTextStream4readEx(void);
    extern void
	_ZN11QTextStream17setFieldAlignmentENS_14FieldAlignmentE(void);
    extern enum N11QTextStream14FieldAlignmentE
	_ZNK11QTextStream14fieldAlignmentEv(void);
    extern void _ZN11QTextStream10setPadCharE5QChar(void);
    extern Class _ZNK11QTextStream7padCharEv(void);
    extern void _ZN11QTextStream13setFieldWidthEi(void);
    extern int _ZNK11QTextStream10fieldWidthEv(void);
    extern void
	_ZN11QTextStream14setNumberFlagsE6QFlagsINS_10NumberFlagEE(void);
    extern N11QTextStream11NumberFlagsE
	_ZNK11QTextStream11numberFlagsEv(void);
    extern void _ZN11QTextStream14setIntegerBaseEi(void);
    extern int _ZNK11QTextStream11integerBaseEv(void);
    extern void
	_ZN11QTextStream21setRealNumberNotationENS_18RealNumberNotationE
	(void);
    extern enum N11QTextStream18RealNumberNotationE
	_ZNK11QTextStream18realNumberNotationEv(void);
    extern void _ZN11QTextStream22setRealNumberPrecisionEi(void);
    extern int _ZNK11QTextStream19realNumberPrecisionEv(void);
    extern Class _ZN11QTextStreamrsER5QChar(void);
    extern Class _ZN11QTextStreamrsERc(void);
    extern Class _ZN11QTextStreamrsERs(void);
    extern Class _ZN11QTextStreamrsERt(void);
    extern Class _ZN11QTextStreamrsERi(void);
    extern Class _ZN11QTextStreamrsERj(void);
    extern Class _ZN11QTextStreamrsERl(void);
    extern Class _ZN11QTextStreamrsERm(void);
    extern Class _ZN11QTextStreamrsERx(void);
    extern Class _ZN11QTextStreamrsERy(void);
    extern Class _ZN11QTextStreamrsERf(void);
    extern Class _ZN11QTextStreamrsERd(void);
    extern Class _ZN11QTextStreamrsER7QString(void);
    extern Class _ZN11QTextStreamrsER10QByteArray(void);
    extern Class _ZN11QTextStreamrsEPc(void);
    extern Class _ZN11QTextStreamlsE5QBool(void);
    extern Class _ZN11QTextStreamlsE5QChar(void);
    extern Class _ZN11QTextStreamlsEc(void);
    extern Class _ZN11QTextStreamlsEs(void);
    extern Class _ZN11QTextStreamlsEt(void);
    extern Class _ZN11QTextStreamlsEi(void);
    extern Class _ZN11QTextStreamlsEj(void);
    extern Class _ZN11QTextStreamlsEl(void);
    extern Class _ZN11QTextStreamlsEm(void);
    extern Class _ZN11QTextStreamlsEx(void);
    extern Class _ZN11QTextStreamlsEy(void);
    extern Class _ZN11QTextStreamlsEf(void);
    extern Class _ZN11QTextStreamlsEd(void);
    extern Class _ZN11QTextStreamlsERK7QString(void);
    extern Class _ZN11QTextStreamlsERK10QByteArray(void);
    extern Class _ZN11QTextStreamlsEPKc(void);
    extern Class _ZN11QTextStreamlsEPKv(void);
    extern void _ZN11QTextStream11setEncodingENS_8EncodingE(void);
    extern Class _Z3binR11QTextStream(void);
    extern Class _Z3octR11QTextStream(void);
    extern Class _Z3decR11QTextStream(void);
    extern Class _Z3hexR11QTextStream(void);
    extern Class _Z8showbaseR11QTextStream(void);
    extern Class _Z9forcesignR11QTextStream(void);
    extern Class _Z10forcepointR11QTextStream(void);
    extern Class _Z10noshowbaseR11QTextStream(void);
    extern Class _Z11noforcesignR11QTextStream(void);
    extern Class _Z12noforcepointR11QTextStream(void);
    extern Class _Z13uppercasebaseR11QTextStream(void);
    extern Class _Z15uppercasedigitsR11QTextStream(void);
    extern Class _Z13lowercasebaseR11QTextStream(void);
    extern Class _Z15lowercasedigitsR11QTextStream(void);
    extern Class _Z5fixedR11QTextStream(void);
    extern Class _Z10scientificR11QTextStream(void);
    extern Class _Z4leftR11QTextStream(void);
    extern Class _Z5rightR11QTextStream(void);
    extern Class _Z6centerR11QTextStream(void);
    extern Class _Z4endlR11QTextStream(void);
    extern Class _Z5flushR11QTextStream(void);
    extern Class _Z5resetR11QTextStream(void);
    extern Class _Z3bomR11QTextStream(void);
    extern Class _Z2wsR11QTextStream(void);
#ifdef __cplusplus
}
#endif
#endif
