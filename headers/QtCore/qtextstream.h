#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QTEXTSTREAM_H_
#define _QTCORE_QTEXTSTREAM_H_

class QFlags < QTextStream::NumberFlag >;
// *INDENT-OFF*

typedef class QFlags<QTextStream::NumberFlag>QTextStream::NumberFlags	
;

typedef class QTextStreamQTextStreamFunction	
;

typedef void	QTSMFI	
;

typedef void	QTSMFC	
;

typedef class QTextStreamQTS	
;

class QTextStream;

enum QTextStream::RealNumberNotation	
{
SmartNotation = 0,	
FixedNotation = 1,	
ScientificNotation = 2
}
;

enum QTextStream::FieldAlignment	
{
AlignLeft = 0,	
AlignRight = 1,	
AlignCenter = 2,	
AlignAccountingStyle = 3
}
;

enum QTextStream::Status	
{
Ok = 0,	
ReadPastEnd = 1,	
ReadCorruptData = 2
}
;

enum QTextStream::NumberFlag	
{
ShowBase = 1,	
ForcePoint = 2,	
ForceSign = 4,	
UppercaseBase = 8,	
UppercaseDigits = 16
}
;

class QFlags<QTextStream::NumberFlag>;

enum QTextStream::Encoding	
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

class QTextStreamManipulator;

class QTextIStream;

class QTextOStream;


/* Function prototypes */

extern QTextStream forcepoint(QTextStream&)(QTextStream &);
extern QTextStream noshowbase(QTextStream&)(QTextStream &);
extern QTextStream scientific(QTextStream&)(QTextStream &);
extern QTextStream noforcesign(QTextStream&)(QTextStream &);
extern QTextStream noforcepoint(QTextStream&)(QTextStream &);
extern QTextStream lowercasebase(QTextStream&)(QTextStream &);
extern QTextStream uppercasebase(QTextStream&)(QTextStream &);
extern QTextStream lowercasedigits(QTextStream&)(QTextStream &);
extern QTextStream uppercasedigits(QTextStream&)(QTextStream &);
extern QTextStream ws(QTextStream&)(QTextStream &);
extern QTextStream bin(QTextStream&)(QTextStream &);
extern QTextStream bom(QTextStream&)(QTextStream &);
extern QTextStream dec(QTextStream&)(QTextStream &);
extern QTextStream hex(QTextStream&)(QTextStream &);
extern QTextStream oct(QTextStream&)(QTextStream &);
extern QTextStream endl(QTextStream&)(QTextStream &);
extern QTextStream left(QTextStream&)(QTextStream &);
extern QTextStream fixed(QTextStream&)(QTextStream &);
extern QTextStream flush(QTextStream&)(QTextStream &);
extern QTextStream reset(QTextStream&)(QTextStream &);
extern QTextStream right(QTextStream&)(QTextStream &);
extern QTextStream center(QTextStream&)(QTextStream &);
extern QTextStream showbase(QTextStream&)(QTextStream &);
extern QTextStream forcesign(QTextStream&)(QTextStream &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
