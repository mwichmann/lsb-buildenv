#ifndef _QTCORE_QREGEXP_H_
#define _QTCORE_QREGEXP_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qstring.h>
#include <QtCore/qdatastream.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N7QRegExp13PatternSyntaxE {
	RegExp,
	Wildcard,
	FixedString
    };

    enum N7QRegExp9CaretModeE {
	CaretAtZero,
	CaretAtOffset,
	CaretWontMatch
    };


    extern Class _ZN7QRegExpC2Ev(void);
    extern Class _ZN7QRegExpC1Ev(void);
    extern Class
	_ZN7QRegExpC2ERK7QStringN2Qt15CaseSensitivityENS_13PatternSyntaxE
	(void);
    extern Class
	_ZN7QRegExpC1ERK7QStringN2Qt15CaseSensitivityENS_13PatternSyntaxE
	(void);
    extern Class _ZN7QRegExpC2ERKS_(void);
    extern Class _ZN7QRegExpC1ERKS_(void);
    extern Class _ZN7QRegExpD2Ev(void);
    extern Class _ZN7QRegExpD1Ev(void);
    extern Class _ZN7QRegExpaSERKS_(void);
    extern bool _ZNK7QRegExpeqERKS_(void);
    extern bool _ZNK7QRegExp7isEmptyEv(void);
    extern bool _ZNK7QRegExp7isValidEv(void);
    extern Class _ZNK7QRegExp7patternEv(void);
    extern void _ZN7QRegExp10setPatternERK7QString(void);
    extern enum N2Qt15CaseSensitivityE
	_ZNK7QRegExp15caseSensitivityEv(void);
    extern void
	_ZN7QRegExp18setCaseSensitivityEN2Qt15CaseSensitivityE(void);
    extern enum N7QRegExp13PatternSyntaxE
	_ZNK7QRegExp13patternSyntaxEv(void);
    extern void _ZN7QRegExp16setPatternSyntaxENS_13PatternSyntaxE(void);
    extern bool _ZNK7QRegExp9isMinimalEv(void);
    extern void _ZN7QRegExp10setMinimalEb(void);
    extern bool _ZNK7QRegExp10exactMatchERK7QString(void);
    extern int _ZNK7QRegExp7indexInERK7QStringiNS_9CaretModeE(void);
    extern int _ZNK7QRegExp11lastIndexInERK7QStringiNS_9CaretModeE(void);
    extern int _ZNK7QRegExp13matchedLengthEv(void);
    extern int _ZNK7QRegExp11numCapturesEv(void);
    extern _ZN7QRegExp13capturedTextsEv(void);
    extern Class _ZN7QRegExp3capEi(void);
    extern int _ZN7QRegExp3posEi(void);
    extern Class _ZN7QRegExp11errorStringEv(void);
    extern Class _ZN7QRegExp6escapeERK7QString(void);
    extern Class _ZlsR11QDataStreamRK7QRegExp(void);
    extern Class _ZrsR11QDataStreamR7QRegExp(void);
#ifdef __cplusplus
}
#endif
#endif
