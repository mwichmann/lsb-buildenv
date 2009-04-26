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

enum _ZN11QTextStream18RealNumberNotationE	
{
SmartNotation = 0,	
FixedNotation = 1,	
ScientificNotation = 2
}
;

enum _ZN11QTextStream14FieldAlignmentE	
{
AlignLeft = 0,	
AlignRight = 1,	
AlignCenter = 2,	
AlignAccountingStyle = 3
}
;

enum _ZN11QTextStream6StatusE	
{
Ok = 0,	
ReadPastEnd = 1,	
ReadCorruptData = 2
}
;

enum _ZN11QTextStream10NumberFlagE	
{
ShowBase = 1,	
ForcePoint = 2,	
ForceSign = 4,	
UppercaseBase = 8,	
UppercaseDigits = 16
}
;

class QFlags<QTextStream::NumberFlag>;

enum _ZN11QTextStream8EncodingE	
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
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
