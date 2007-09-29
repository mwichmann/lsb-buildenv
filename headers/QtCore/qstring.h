#ifndef _QTCORE_QSTRING_H_
#define _QTCORE_QSTRING_H_

class QConstString;
// *INDENT-OFF*



typedef SectionFlags	
;

typedef QChar iterator	
;

typedef QChar const_iterator	
;

typedef iterator	Iterator	
;

typedef const_iterator	ConstIterator	
;

class QString
{
private:
public:
};

enum SectionFlag	
{
SectionDefault = 0,	
SectionSkipEmpty = 1,	
SectionIncludeLeadingSep = 2,	
SectionIncludeTrailingSep = 4,	
SectionCaseInsensitiveSeps = 8
}
;

class QFlags<QString::SectionFlag>
{
private:
public:
};

enum SplitBehavior	
{
KeepEmptyParts = 0,	
SkipEmptyParts = 1
}
;

enum NormalizationForm	
{
NormalizationForm_D = 0,	
NormalizationForm_C = 1,	
NormalizationForm_KD = 2,	
NormalizationForm_KC = 3
}
;

struct Null	;

struct Data	;

class QLatin1String
{
private:
public:
};

class QCharRef
{
private:
public:
};

class QConstString :  
{
private:
public:
};


extern QString _ZN7QStringC2EPK5QChari(void);
extern QString _ZN7QStringC1EPK5QChari(void);
extern QString _ZN7QStringC2E5QChar(void);
extern QString _ZN7QStringC1E5QChar(void);
extern QString _ZN7QStringC2Ei5QChar(void);
extern QString _ZN7QStringC1Ei5QChar(void);
extern QString _ZN7QStringaSE5QChar(void);
extern QString _ZN7QStringaSERKS_(void);
extern void _ZN7QString6resizeEi(void);
extern QString _ZN7QString4fillE5QChari(void);
extern void _ZN7QString8truncateEi(void);
extern void _ZN7QString4chopEi(void);
extern QString _ZNK7QString3argExiiRK5QChar(void);
extern QString _ZNK7QString3argEyiiRK5QChar(void);
extern QString _ZNK7QString3argEdiciRK5QChar(void);
extern QString _ZNK7QString3argEciRK5QChar(void);
extern QString _ZNK7QString3argE5QChariRKS0_(void);
extern QString _ZNK7QString3argERKS_iRK5QChar(void);
#if defined __i386__
/* IA32 */
extern QString _ZN7QString8vsprintfEPKcPc(void);
#endif
extern QString _ZN7QString7sprintfEPKcz(void);
extern int _ZNK7QString7indexOfE5QChariN2Qt15CaseSensitivityE(void);
extern int _ZNK7QString7indexOfERKS_iN2Qt15CaseSensitivityE(void);
extern int _ZNK7QString11lastIndexOfE5QChariN2Qt15CaseSensitivityE(void);
extern int _ZNK7QString11lastIndexOfERKS_iN2Qt15CaseSensitivityE(void);
extern int _ZNK7QString5countE5QCharN2Qt15CaseSensitivityE(void);
extern int _ZNK7QString5countERKS_N2Qt15CaseSensitivityE(void);
extern int _ZNK7QString7indexOfERK7QRegExpi(void);
extern int _ZNK7QString11lastIndexOfERK7QRegExpi(void);
extern int _ZNK7QString5countERK7QRegExp(void);
extern QString _ZNK7QString7sectionERKS_ii6QFlagsINS_11SectionFlagEE(void);
extern QString _ZNK7QString7sectionERK7QRegExpii6QFlagsINS_11SectionFlagEE(void);
extern QString _ZNK7QString4leftEi(void);
extern QString _ZNK7QString5rightEi(void);
extern QString _ZNK7QString3midEii(void);
extern bool _ZNK7QString10startsWithERKS_N2Qt15CaseSensitivityE(void);
extern bool _ZNK7QString10startsWithERK13QLatin1StringN2Qt15CaseSensitivityE(void);
extern bool _ZNK7QString10startsWithERK5QCharN2Qt15CaseSensitivityE(void);
extern bool _ZNK7QString8endsWithERKS_N2Qt15CaseSensitivityE(void);
extern bool _ZNK7QString8endsWithERK13QLatin1StringN2Qt15CaseSensitivityE(void);
extern bool _ZNK7QString8endsWithERK5QCharN2Qt15CaseSensitivityE(void);
extern QString _ZNK7QString13leftJustifiedEi5QCharb(void);
extern QString _ZNK7QString14rightJustifiedEi5QCharb(void);
extern QString _ZNK7QString7toLowerEv(void);
extern QString _ZNK7QString7toUpperEv(void);
extern QString _ZNK7QString7trimmedEv(void);
extern QString _ZNK7QString10simplifiedEv(void);
extern QString _ZN7QString6insertEi5QChar(void);
extern QString _ZN7QString6insertEiPK5QChari(void);
extern QString _ZN7QString6insertEiRK13QLatin1String(void);
extern QString _ZN7QString6appendE5QChar(void);
extern QString _ZN7QString6appendERKS_(void);
extern QString _ZN7QString6appendERK13QLatin1String(void);
extern QString _ZN7QString6removeEii(void);
extern QString _ZN7QString6removeE5QCharN2Qt15CaseSensitivityE(void);
extern QString _ZN7QString6removeERKS_N2Qt15CaseSensitivityE(void);
extern QString _ZN7QString7replaceEii5QChar(void);
extern QString _ZN7QString7replaceEiiPK5QChari(void);
extern QString _ZN7QString7replaceEiiRKS_(void);
extern QString _ZN7QString7replaceE5QCharS0_N2Qt15CaseSensitivityE(void);
extern QString _ZN7QString7replaceE5QCharRKS_N2Qt15CaseSensitivityE(void);
extern QString _ZN7QString7replaceERKS_S1_N2Qt15CaseSensitivityE(void);
extern QString _ZN7QString7replaceERK7QRegExpRKS_(void);
extern  _ZNK7QString5splitERKS_NS_13SplitBehaviorEN2Qt15CaseSensitivityE(void);
extern  _ZNK7QString5splitERK5QCharNS_13SplitBehaviorEN2Qt15CaseSensitivityE(void);
extern  _ZNK7QString5splitERK7QRegExpNS_13SplitBehaviorE(void);
extern QString _ZNK7QString10normalizedENS_17NormalizationFormE(void);
extern QString _ZNK7QString10normalizedENS_17NormalizationFormEN5QChar14UnicodeVersionE(void);
extern ushort _ZNK7QString5utf16Ev(void);
extern QByteArray _ZNK7QString7toAsciiEv(void);
extern QByteArray _ZNK7QString8toLatin1Ev(void);
extern QByteArray _ZNK7QString6toUtf8Ev(void);
extern QByteArray _ZNK7QString11toLocal8BitEv(void);
extern QString _ZN7QString9fromAsciiEPKci(void);
extern QString _ZN7QString10fromLatin1EPKci(void);
extern QString _ZN7QString8fromUtf8EPKci(void);
extern QString _ZN7QString13fromLocal8BitEPKci(void);
extern QString _ZN7QString9fromUtf16EPKti(void);
extern QString _ZN7QString11fromRawDataEPK5QChari(void);
extern QString _ZN7QString10setUnicodeEPK5QChari(void);
extern int _ZNK7QString7compareERKS_(void);
extern int _ZNK7QString18localeAwareCompareERKS_(void);
extern short _ZNK7QString7toShortEPbi(void);
extern ushort _ZNK7QString8toUShortEPbi(void);
extern int _ZNK7QString5toIntEPbi(void);
extern uint _ZNK7QString6toUIntEPbi(void);
extern long int _ZNK7QString6toLongEPbi(void);
extern ulong _ZNK7QString7toULongEPbi(void);
extern qlonglong _ZNK7QString10toLongLongEPbi(void);
extern qulonglong _ZNK7QString11toULongLongEPbi(void);
extern float _ZNK7QString7toFloatEPb(void);
extern double _ZNK7QString8toDoubleEPb(void);
extern QString _ZN7QString6setNumExi(void);
extern QString _ZN7QString6setNumEyi(void);
extern QString _ZN7QString6setNumEdci(void);
extern QString _ZN7QString6numberEii(void);
extern QString _ZN7QString6numberEji(void);
extern QString _ZN7QString6numberEli(void);
extern QString _ZN7QString6numberEmi(void);
extern QString _ZN7QString6numberExi(void);
extern QString _ZN7QString6numberEyi(void);
extern QString _ZN7QString6numberEdci(void);
extern bool _ZNK7QStringeqERKS_(void);
extern bool _ZNK7QStringltERKS_(void);
extern bool _ZNK7QStringeqERK13QLatin1String(void);
extern bool _ZNK7QStringltERK13QLatin1String(void);
extern bool _ZNK7QStringgtERK13QLatin1String(void);
extern struct Null _ZN7QString4nullE ;
extern char _ZNK7QString12ascii_helperEv(void);
extern char _ZNK7QString13latin1_helperEv(void);
extern  _ZlsR11QDataStreamRK7QString(void);
extern  _ZrsR11QDataStreamR7QString(void);
extern void _ZN7QString4freeEPNS_4DataE(void);
extern void _ZN7QString6expandEi(void);
extern void _ZN7QString7reallocEi(void);
extern void _ZN7QString7reallocEv(void);
extern struct Data _ZN7QString17fromLatin1_helperEPKci(void);
extern QString _ZNK7QString8multiArgEiPPKS_(void);
extern struct Data _ZN7QString11shared_nullE ;
extern QTextCodec * _ZN7QString16codecForCStringsE ;
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern QString _ZN7QString8vsprintfEPKcP13__va_list_tag(void);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern QString _ZN7QString8vsprintfEPKcP13__va_list_tag(void);
#endif
#if defined __s390x__
/* S390X */
extern QString _ZN7QString8vsprintfEPKcP13__va_list_tag(void);
#endif
#if defined __x86_64__
/* x86-64 */
extern QString _ZN7QString8vsprintfEPKcP13__va_list_tag(void);
#endif
#if defined __powerpc64__
/* PPC64 */
extern QString _ZN7QString8vsprintfEPKcP13__va_list_tag(void);
#endif
#if defined __ia64__
/* IA64 */
extern QString _ZN7QString8vsprintfEPKcP13__va_list_tag(void);
#endif
// *INDENT-ON*
#endif
