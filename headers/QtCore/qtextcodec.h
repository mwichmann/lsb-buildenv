#ifndef _QTCORE_QTEXTCODEC_H_
#define _QTCORE_QTEXTCODEC_H_

#include <QtCore/qlist.h>
#include <QtCore/qbytearray.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N10QTextCodec15ConversionFlagsE;

    Unknown Type:".Class.";

#include <QtCore/qstring.h>
    enum N10QTextCodec14ConversionFlagE {
	ConvertInvalidToNull,
	DefaultConversion,
	IgnoreHeader
    };

    Unknown Type:".Class.";

    struct N10QTextCodec14ConverterStateE;

    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern Class _ZN10QTextCodec12codecForNameERK10QByteArray(void);
    extern Class _ZN10QTextCodec11codecForMibEi(void);
    extern Class _ZN10QTextCodec15availableCodecsEv(void);
    extern Class _ZN10QTextCodec13availableMibsEv(void);
    extern Class _ZN10QTextCodec14codecForLocaleEv(void);
    extern void _ZN10QTextCodec17setCodecForLocaleEPS_(void);
    extern Class _ZN10QTextCodec12codecForHtmlERK10QByteArray(void);
    extern _ZNK10QTextCodec11makeDecoderEv(void);
    extern _ZNK10QTextCodec11makeEncoderEv(void);
    extern bool _ZNK10QTextCodec9canEncodeE5QChar(void);
    extern bool _ZNK10QTextCodec9canEncodeERK7QString(void);
    extern Class _ZNK10QTextCodec9toUnicodeERK10QByteArray(void);
    extern Class _ZNK10QTextCodec9toUnicodeEPKc(void);
    extern Class _ZNK10QTextCodec11fromUnicodeERK7QString(void);
    extern Class _ZNK10QTextCodec7aliasesEv(void);
    extern Class _ZN10QTextCodecC2Ev(void);
    extern Class _ZN10QTextCodecC1Ev(void);
    extern Class _ZN10QTextCodecD2Ev(void);
    extern Class _ZN10QTextCodecD1Ev(void);
    extern Class _ZN10QTextCodecD0Ev(void);
    extern char _ZN10QTextCodec6localeEv(void);
    extern Class _ZNK10QTextCodec11fromUnicodeERK7QStringRi(void);
    extern Class _ZNK10QTextCodec9toUnicodeERK10QByteArrayi(void);
    extern Class _ZN12QTextEncoderD2Ev(void);
    extern Class _ZN12QTextEncoderD1Ev(void);
    extern Class _ZN12QTextEncoder11fromUnicodeERK7QString(void);
    extern Class _ZN12QTextEncoder11fromUnicodeEPK5QChari(void);
    extern Class _ZN12QTextEncoder11fromUnicodeERK7QStringRi(void);
    extern Class _ZN12QTextDecoderD2Ev(void);
    extern Class _ZN12QTextDecoderD1Ev(void);
    extern Class _ZN12QTextDecoder9toUnicodeEPKci(void);
    extern Class _ZN12QTextDecoder9toUnicodeERK10QByteArray(void);
#ifdef __cplusplus
}
#endif
#endif
