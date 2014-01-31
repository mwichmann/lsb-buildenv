#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QKEYSEQUENCE_H_
#define _QTGUI_QKEYSEQUENCE_H_

class QKeySequence;
// *INDENT-OFF*

class QKeySequence;

enum QKeySequence::SequenceMatch	
{
NoMatch = 0,	
PartialMatch = 1,	
ExactMatch = 2,	
Identical = 2
}
;

enum QKeySequence::SequenceFormat	
{
NativeText = 0,	
PortableText = 1
}
;


/* Function prototypes */

extern QDebug operator<<(QDebug, QKeySequence const&)(const QKeySequence &);
extern QDataStream operator<<(QDataStream&, QKeySequence const&)(QDataStream &, const QKeySequence &);
extern QDataStream operator>>(QDataStream&, QKeySequence&)(QDataStream &, QKeySequence &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
