#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QGLOBAL_H_
#define _QTCORE_QGLOBAL_H_

class QBool;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef signed char	qint8	
;

typedef unsigned char	quint8	
;

typedef short	qint16	
;

typedef unsigned short	quint16	
;

typedef int	qint32	
;

typedef unsigned int	quint32	
;

typedef long long int	qint64	
;

typedef unsigned long long int	quint64	
;

typedef qint64	qlonglong	
;

typedef quint64	qulonglong	
;

typedef unsigned char	uchar	
;

typedef int	QNoImplicitBoolCast	
;

typedef double	qreal	
;

typedef qint8	Q_INT8	
;

typedef quint8	Q_UINT8	
;

typedef qint16	Q_INT16	
;

typedef quint16	Q_UINT16	
;

typedef qint32	Q_INT32	
;

typedef quint32	Q_UINT32	
;

typedef qint64	Q_INT64	
;

typedef quint64	Q_UINT64	
;

typedef qint64	Q_LLONG	
;

typedef quint64	Q_ULLONG	
;

typedef long int	Q_LONG	
;

typedef unsigned long int	Q_ULONG	
;

typedef void	QtMsgHandler	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
class QSysInfo
{
private:
public:
};

enum Endian	
{
BigEndian = 0,	
LittleEndian = 1,	
ByteOrder = 1
}
;

enum QtMsgType	
{
QtDebugMsg = 0,	
QtWarningMsg = 1,	
QtCriticalMsg = 2,	
QtSystemMsg = 2,	
QtFatalMsg = 3
}
;

class QBool
{
private:
public:
};

class QFlag
{
private:
public:
};

enum QtValidLicenseForCoreModule	
{
LicensedCore = 1
}
;

enum QtValidLicenseForGuiModule	
{
LicensedGui = 1
}
;

enum QtValidLicenseForNetworkModule	
{
LicensedNetwork = 1
}
;

enum QtValidLicenseForOpenGLModule	
{
LicensedOpenGL = 1
}
;

enum QtValidLicenseForSqlModule	
{
LicensedSql = 1
}
;

enum QtValidLicenseForXmlModule	
{
LicensedXml = 1
}
;

enum QtValidLicenseForQt3SupportLightModule	
{
LicensedQt3SupportLight = 1
}
;

enum QtValidLicenseForQt3SupportModule	
{
LicensedQt3Support = 1
}
;

enum QtValidLicenseForSvgModule	
{
LicensedSvg = 1
}
;

enum QtValidLicenseForActiveQtModule	
{
LicensedActiveQt = 1
}
;

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern void _Z11qt_assert_xPKcS0_S0_i(const char *, const char *, const char *, int);
extern char _Z12qInstallPathv(void);
extern bool _Z12qSharedBuildv(void);
extern void _Z13qErrnoWarningPKcz(const char *, ...);
extern void _Z13qErrnoWarningiPKcz(int, const char *, ...);
extern void _Z14qSystemWarningPKci(const char *, int);
extern  _Z15qt_error_stringi(int);
extern char _Z16qInstallPathBinsv(void);
extern char _Z16qInstallPathDatav(void);
extern char _Z16qInstallPathDocsv(void);
extern char _Z16qInstallPathLibsv(void);
extern void _Z16qt_check_pointerPKci(const char *, int);
extern void _Z17qt_message_output9QtMsgTypePKc(enum QtMsgType, const char *);
extern QtMsgHandler _Z18qInstallMsgHandlerPFv9QtMsgTypePKcE(void(*)(enum QtMsgType	,const char	* )
);
extern char _Z19qInstallPathHeadersv(void);
extern char _Z19qInstallPathPluginsv(void);
extern char _Z19qInstallPathSysconfv(void);
extern char _Z24qInstallPathTranslationsv(void);
extern void _Z5qFreePv(void *);
extern void _Z6qDebugPKcz(const char *, ...);
extern void _Z6qFatalPKcz(const char *, ...);
#if defined __i386__
/* IA32 */
extern void _Z7qMallocj(unsigned int);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern void _Z7qMallocj(unsigned int);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern void _Z7qMallocm(unsigned long int);
#endif
#if defined __ia64__
/* IA64 */
extern void _Z7qMallocm(unsigned long int);
#endif
#if defined __powerpc64__
/* PPC64 */
extern void _Z7qMallocm(unsigned long int);
#endif
#if defined __x86_64__
/* x86-64 */
extern void _Z7qMallocm(unsigned long int);
#endif
#if defined __s390x__
/* S390X */
extern void _Z7qMallocm(unsigned long int);
#endif
#if defined __i386__
/* IA32 */
extern void _Z7qMemSetPvij(void *, int, unsigned int);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern void _Z7qMemSetPvij(void *, int, unsigned int);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern void _Z7qMemSetPvim(void *, int, unsigned long int);
#endif
#if defined __ia64__
/* IA64 */
extern void _Z7qMemSetPvim(void *, int, unsigned long int);
#endif
#if defined __powerpc64__
/* PPC64 */
extern void _Z7qMemSetPvim(void *, int, unsigned long int);
#endif
#if defined __x86_64__
/* x86-64 */
extern void _Z7qMemSetPvim(void *, int, unsigned long int);
#endif
#if defined __s390x__
/* S390X */
extern void _Z7qMemSetPvim(void *, int, unsigned long int);
#endif
extern  _Z7qgetenvPKc(const char *);
#if defined __i386__
/* IA32 */
extern void _Z8qMemCopyPvPKvj(void *, const void *, unsigned int);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern void _Z8qMemCopyPvPKvj(void *, const void *, unsigned int);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern void _Z8qMemCopyPvPKvm(void *, const void *, unsigned long int);
#endif
#if defined __ia64__
/* IA64 */
extern void _Z8qMemCopyPvPKvm(void *, const void *, unsigned long int);
#endif
#if defined __powerpc64__
/* PPC64 */
extern void _Z8qMemCopyPvPKvm(void *, const void *, unsigned long int);
#endif
#if defined __x86_64__
/* x86-64 */
extern void _Z8qMemCopyPvPKvm(void *, const void *, unsigned long int);
#endif
#if defined __s390x__
/* S390X */
extern void _Z8qMemCopyPvPKvm(void *, const void *, unsigned long int);
#endif
#if defined __i386__
/* IA32 */
extern void _Z8qReallocPvj(void *, unsigned int);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern void _Z8qReallocPvj(void *, unsigned int);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern void _Z8qReallocPvm(void *, unsigned long int);
#endif
#if defined __ia64__
/* IA64 */
extern void _Z8qReallocPvm(void *, unsigned long int);
#endif
#if defined __powerpc64__
/* PPC64 */
extern void _Z8qReallocPvm(void *, unsigned long int);
#endif
#if defined __x86_64__
/* x86-64 */
extern void _Z8qReallocPvm(void *, unsigned long int);
#endif
#if defined __s390x__
/* S390X */
extern void _Z8qReallocPvm(void *, unsigned long int);
#endif
extern char _Z8qVersionv(void);
extern void _Z8qWarningPKcz(const char *, ...);
extern void _Z9qCriticalPKcz(const char *, ...);
extern void _Z9qt_assertPKcS0_i(const char *, const char *, int);
#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 32
extern  _Z5qrandv(void);
extern  _Z6qsrandj(unsigned int);
#endif // __LSB_VERSION__ >= 3.2

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
