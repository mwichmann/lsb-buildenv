#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QKEYSEQUENCE_H_
#define _QTGUI_QKEYSEQUENCE_H_

class QKeySequence;
// *INDENT-OFF*

class QKeySequence;

enum _ZN12QKeySequence13SequenceMatchE	
{
NoMatch = 0,	
PartialMatch = 1,	
ExactMatch = 2,	
Identical = 2
}
;

enum _ZN12QKeySequence14SequenceFormatE	
{
NativeText = 0,	
PortableText = 1
}
;


/* Function prototypes */

extern QDebug _Zls6QDebugRK12QKeySequence(const QKeySequence &);
extern QDataStream _ZlsR11QDataStreamRK12QKeySequence(QDataStream &, const QKeySequence &);
extern QDataStream _ZrsR11QDataStreamR12QKeySequence(QDataStream &, QKeySequence &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
