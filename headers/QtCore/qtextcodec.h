#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QTEXTCODEC_H_
#define _QTCORE_QTEXTCODEC_H_

class QTextCodec;
// *INDENT-OFF*

typedef class QFlags<QTextCodec::ConversionFlag>QTextCodec::ConversionFlags	
;

class QTextCodec;

enum _ZN10QTextCodec14ConversionFlagE	
{
ConvertInvalidToNull = -2147483648,	
DefaultConversion = 0,	
IgnoreHeader = 1
}
;

class QFlags<QTextCodec::ConversionFlag>;

struct QTextCodec::ConverterState	;

class QTextEncoder;

class QTextDecoder;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
