#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QSTRING_H_
#define _QTCORE_QSTRING_H_

class QConstString;
// *INDENT-OFF*

typedef class QFlags<QString::SectionFlag>QString::SectionFlags	
;

typedef class QCharQString::iterator	
;

typedef class QCharQString::const_iterator	
;

typedef QString::iterator	QString::Iterator	
;

typedef QString::const_iterator	QString::ConstIterator	
;

class QString;

enum QString::SectionFlag	
{
SectionDefault = 0,	
SectionSkipEmpty = 1,	
SectionIncludeLeadingSep = 2,	
SectionIncludeTrailingSep = 4,	
SectionCaseInsensitiveSeps = 8
}
;

class QFlags<QString::SectionFlag>;

enum QString::SplitBehavior	
{
KeepEmptyParts = 0,	
SkipEmptyParts = 1
}
;

enum QString::NormalizationForm	
{
NormalizationForm_D = 0,	
NormalizationForm_C = 1,	
NormalizationForm_KD = 2,	
NormalizationForm_KC = 3
}
;

struct QString::Null	;

struct QString::Data	;

class QLatin1String;

class QCharRef;

class QConstString;


/* Function prototypes */

extern 
