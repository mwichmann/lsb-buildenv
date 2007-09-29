#ifndef _QTCORE_QTEXTCODEC_H_
#define _QTCORE_QTEXTCODEC_H_

class QTextCodec;
// *INDENT-OFF*



typedef ConversionFlags	
;

class QTextCodec
{
private:
public:
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
};

class QTextDecoder
{
private:
public:
};


extern QTextCodec _ZN10QTextCodec12codecForNameERK10QByteArray(void);
extern QTextCodec _ZN10QTextCodec11codecForMibEi(void);
extern QList<QByteArray> _ZN10QTextCodec15availableCodecsEv(void);
extern QList<int> _ZN10QTextCodec13availableMibsEv(void);
extern QTextCodec _ZN10QTextCodec14codecForLocaleEv(void);
extern void _ZN10QTextCodec17setCodecForLocaleEPS_(void);
extern QTextCodec _ZN10QTextCodec12codecForHtmlERK10QByteArray(void);
extern  _ZNK10QTextCodec11makeDecoderEv(void);
extern  _ZNK10QTextCodec11makeEncoderEv(void);
extern bool _ZNK10QTextCodec9canEncodeE5QChar(void);
extern bool _ZNK10QTextCodec9canEncodeERK7QString(void);
extern QString _ZNK10QTextCodec9toUnicodeERK10QByteArray(void);
extern QString _ZNK10QTextCodec9toUnicodeEPKc(void);
extern QByteArray _ZNK10QTextCodec11fromUnicodeERK7QString(void);
extern QList<QByteArray> _ZNK10QTextCodec7aliasesEv(void);
extern QTextCodec _ZN10QTextCodecC2Ev(void);
extern QTextCodec _ZN10QTextCodecC1Ev(void);
extern QTextCodec _ZN10QTextCodecD2Ev(void);
extern QTextCodec _ZN10QTextCodecD1Ev(void);
extern QTextCodec _ZN10QTextCodecD0Ev(void);
extern char _ZN10QTextCodec6localeEv(void);
extern QByteArray _ZNK10QTextCodec11fromUnicodeERK7QStringRi(void);
extern QString _ZNK10QTextCodec9toUnicodeERK10QByteArrayi(void);
extern QTextEncoder _ZN12QTextEncoderD2Ev(void);
extern QTextEncoder _ZN12QTextEncoderD1Ev(void);
extern QByteArray _ZN12QTextEncoder11fromUnicodeERK7QString(void);
extern QByteArray _ZN12QTextEncoder11fromUnicodeEPK5QChari(void);
extern QByteArray _ZN12QTextEncoder11fromUnicodeERK7QStringRi(void);
extern QTextDecoder _ZN12QTextDecoderD2Ev(void);
extern QTextDecoder _ZN12QTextDecoderD1Ev(void);
extern QString _ZN12QTextDecoder9toUnicodeEPKci(void);
extern QString _ZN12QTextDecoder9toUnicodeERK10QByteArray(void);
// *INDENT-ON*
#endif
