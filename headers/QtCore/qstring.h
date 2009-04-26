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

enum _ZN7QString11SectionFlagE	
{
SectionDefault = 0,	
SectionSkipEmpty = 1,	
SectionIncludeLeadingSep = 2,	
SectionIncludeTrailingSep = 4,	
SectionCaseInsensitiveSeps = 8
}
;

class QFlags<QString::SectionFlag>;

enum _ZN7QString13SplitBehaviorE	
{
KeepEmptyParts = 0,	
SkipEmptyParts = 1
}
;

enum _ZN7QString17NormalizationFormE	
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

extern  _ZlsR11QDataStreamRK7QString(QDataStream &, QString & &);
extern  _ZrsR11QDataStreamR7QString(QDataStream &, QString &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
