#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QREGEXP_H_
#define _QTCORE_QREGEXP_H_

class QRegExp;
// *INDENT-OFF*

class QRegExp;

enum _ZN7QRegExp13PatternSyntaxE	
{
RegExp = 0,	
Wildcard = 1,	
FixedString = 2
}
;

enum _ZN7QRegExp9CaretModeE	
{
CaretAtZero = 0,	
CaretAtOffset = 1,	
CaretWontMatch = 2
}
;


/* Function prototypes */

extern QDataStream _ZlsR11QDataStreamRK7QRegExp(const QRegExp &);
extern QDataStream _ZrsR11QDataStreamR7QRegExp(QRegExp &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
