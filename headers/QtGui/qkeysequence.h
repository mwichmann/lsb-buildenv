#ifndef _QTGUI_QKEYSEQUENCE_H_
#define _QTGUI_QKEYSEQUENCE_H_

class QKeySequence;
// *INDENT-OFF*




class QKeySequence
{
private:
public:
};

enum SequenceMatch	
{
NoMatch = 0,	
PartialMatch = 1,	
ExactMatch = 2,	
Identical = 2
}
;

enum SequenceFormat	
{
NativeText = 0,	
PortableText = 1
}
;


extern QDataStream _ZlsR11QDataStreamRK12QKeySequence(void);
extern QDataStream _ZrsR11QDataStreamR12QKeySequence(void);
extern QKeySequence _ZN12QKeySequenceC2Ev(void);
extern QKeySequence _ZN12QKeySequenceC1Ev(void);
extern QKeySequence _ZN12QKeySequenceC2ERK7QString(void);
extern QKeySequence _ZN12QKeySequenceC1ERK7QString(void);
extern QKeySequence _ZN12QKeySequenceC2Eiiii(void);
extern QKeySequence _ZN12QKeySequenceC1Eiiii(void);
extern QKeySequence _ZN12QKeySequenceC2ERKS_(void);
extern QKeySequence _ZN12QKeySequenceC1ERKS_(void);
extern QKeySequence _ZN12QKeySequenceD2Ev(void);
extern QKeySequence _ZN12QKeySequenceD1Ev(void);
extern uint _ZNK12QKeySequence5countEv(void);
extern bool _ZNK12QKeySequence7isEmptyEv(void);
extern QString _ZNK12QKeySequence8toStringENS_14SequenceFormatE(void);
extern QKeySequence _ZN12QKeySequence10fromStringERK7QStringNS_14SequenceFormatE(void);
extern enum N12QKeySequence13SequenceMatchE _ZNK12QKeySequence7matchesERKS_(void);
extern QKeySequence _ZN12QKeySequence8mnemonicERK7QString(void);
extern QKeySequence _ZNK12QKeySequencecv7QStringEv(void);
extern QKeySequence _ZNK12QKeySequencecv8QVariantEv(void);
extern QKeySequence _ZNK12QKeySequencecviEv(void);
extern int _ZNK12QKeySequenceixEj(void);
extern QKeySequence _ZN12QKeySequenceaSERKS_(void);
extern bool _ZNK12QKeySequenceeqERKS_(void);
extern bool _ZNK12QKeySequenceltERKS_(void);
extern bool _ZNK12QKeySequence10isDetachedEv(void);
extern QDebug _Zls6QDebugRK12QKeySequence(void);
// *INDENT-ON*
#endif
