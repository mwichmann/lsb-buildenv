#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QREGEXP_H_
#define _QTCORE_QREGEXP_H_

class QRegExp;
// *INDENT-OFF*

class QRegExp;

enum QRegExp::PatternSyntax	
{
RegExp = 0,	
Wildcard = 1,	
FixedString = 2
}
;

enum QRegExp::CaretMode	
{
CaretAtZero = 0,	
CaretAtOffset = 1,	
CaretWontMatch = 2
}
;


/* Function prototypes */

extern QDataStream operator<<(QDataStream&, QRegExp const&)(const QRegExp &);
extern QDataStream operator>>(QDataStream&, QRegExp&)(QRegExp &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
