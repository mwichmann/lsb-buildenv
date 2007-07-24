#ifndef _QTGUI_QKEYSEQUENCE_H_
#define _QTGUI_QKEYSEQUENCE_H_

#include <QtCore/qstring.h>
#include <QtCore/qdatastream.h>
#include <QtCore/qdebug.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N12QKeySequence13SequenceMatchE {
	NoMatch,
	PartialMatch,
	ExactMatch,
	Identical
    };

    enum N12QKeySequence14SequenceFormatE {
	NativeText,
	PortableText
    };


    extern Class _ZlsR11QDataStreamRK12QKeySequence(void);
    extern Class _ZrsR11QDataStreamR12QKeySequence(void);
    extern Class _ZN12QKeySequenceC2Ev(void);
    extern Class _ZN12QKeySequenceC1Ev(void);
    extern Class _ZN12QKeySequenceC2ERK7QString(void);
    extern Class _ZN12QKeySequenceC1ERK7QString(void);
    extern Class _ZN12QKeySequenceC2Eiiii(void);
    extern Class _ZN12QKeySequenceC1Eiiii(void);
    extern Class _ZN12QKeySequenceC2ERKS_(void);
    extern Class _ZN12QKeySequenceC1ERKS_(void);
    extern Class _ZN12QKeySequenceD2Ev(void);
    extern Class _ZN12QKeySequenceD1Ev(void);
    extern uint _ZNK12QKeySequence5countEv(void);
    extern bool _ZNK12QKeySequence7isEmptyEv(void);
    extern Class _ZNK12QKeySequence8toStringENS_14SequenceFormatE(void);
    extern Class
	_ZN12QKeySequence10fromStringERK7QStringNS_14SequenceFormatE(void);
    extern enum N12QKeySequence13SequenceMatchE
	_ZNK12QKeySequence7matchesERKS_(void);
    extern Class _ZN12QKeySequence8mnemonicERK7QString(void);
    extern Class _ZNK12QKeySequencecv7QStringEv(void);
    extern Class _ZNK12QKeySequencecv8QVariantEv(void);
    extern Class _ZNK12QKeySequencecviEv(void);
    extern int _ZNK12QKeySequenceixEj(void);
    extern Class _ZN12QKeySequenceaSERKS_(void);
    extern bool _ZNK12QKeySequenceeqERKS_(void);
    extern bool _ZNK12QKeySequenceltERKS_(void);
    extern bool _ZNK12QKeySequence10isDetachedEv(void);
    extern Class _Zls6QDebugRK12QKeySequence(void);
#ifdef __cplusplus
}
#endif
#endif
