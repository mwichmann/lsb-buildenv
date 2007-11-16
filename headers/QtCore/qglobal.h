#ifndef _QTCORE_QGLOBAL_H_
#define _QTCORE_QGLOBAL_H_

class QBool;
// *INDENT-OFF*




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


extern char _Z8qVersionv(void);
extern bool _Z12qSharedBuildv(void);
extern void _Z6qDebugPKcz(void);
extern void _Z8qWarningPKcz(void);
extern  _Z15qt_error_stringi(void);
extern void _Z9qCriticalPKcz(void);
extern void _Z6qFatalPKcz(void);
extern void _Z14qSystemWarningPKci(void);
extern void _Z13qErrnoWarningiPKcz(void);
extern void _Z13qErrnoWarningPKcz(void);
extern void _Z9qt_assertPKcS0_i(void);
extern void _Z11qt_assert_xPKcS0_S0_i(void);
extern void _Z16qt_check_pointerPKci(void);
extern void _Z17qt_message_output9QtMsgTypePKc(void);
extern QtMsgHandler _Z18qInstallMsgHandlerPFv9QtMsgTypePKcE(void);
#if defined __i386__
/* IA32 */
extern void _Z7qMallocj(void);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern void _Z7qMallocj(void);
#endif
extern void _Z5qFreePv(void);
#if defined __i386__
/* IA32 */
extern void _Z8qReallocPvj(void);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern void _Z8qReallocPvj(void);
#endif
#if defined __i386__
/* IA32 */
extern void _Z8qMemCopyPvPKvj(void);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern void _Z8qMemCopyPvPKvj(void);
#endif
#if defined __i386__
/* IA32 */
extern void _Z7qMemSetPvij(void);
#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
extern void _Z7qMemSetPvij(void);
#endif
extern  _Z7qgetenvPKc(void);
extern char _Z12qInstallPathv(void);
extern char _Z16qInstallPathDocsv(void);
extern char _Z19qInstallPathHeadersv(void);
extern char _Z16qInstallPathLibsv(void);
extern char _Z16qInstallPathBinsv(void);
extern char _Z19qInstallPathPluginsv(void);
extern char _Z16qInstallPathDatav(void);
extern char _Z24qInstallPathTranslationsv(void);
extern char _Z19qInstallPathSysconfv(void);
#if defined __s390__ && !defined __s390x__
/* S390 */
extern void _Z7qMallocm(void);
#endif
#if defined __ia64__
/* IA64 */
extern void _Z7qMallocm(void);
#endif
#if defined __powerpc64__
/* PPC64 */
extern void _Z7qMallocm(void);
#endif
#if defined __x86_64__
/* x86-64 */
extern void _Z7qMallocm(void);
#endif
#if defined __s390x__
/* S390X */
extern void _Z7qMallocm(void);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern void _Z8qReallocPvm(void);
#endif
#if defined __ia64__
/* IA64 */
extern void _Z8qReallocPvm(void);
#endif
#if defined __powerpc64__
/* PPC64 */
extern void _Z8qReallocPvm(void);
#endif
#if defined __x86_64__
/* x86-64 */
extern void _Z8qReallocPvm(void);
#endif
#if defined __s390x__
/* S390X */
extern void _Z8qReallocPvm(void);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern void _Z8qMemCopyPvPKvm(void);
#endif
#if defined __ia64__
/* IA64 */
extern void _Z8qMemCopyPvPKvm(void);
#endif
#if defined __powerpc64__
/* PPC64 */
extern void _Z8qMemCopyPvPKvm(void);
#endif
#if defined __x86_64__
/* x86-64 */
extern void _Z8qMemCopyPvPKvm(void);
#endif
#if defined __s390x__
/* S390X */
extern void _Z8qMemCopyPvPKvm(void);
#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
extern void _Z7qMemSetPvim(void);
#endif
#if defined __ia64__
/* IA64 */
extern void _Z7qMemSetPvim(void);
#endif
#if defined __powerpc64__
/* PPC64 */
extern void _Z7qMemSetPvim(void);
#endif
#if defined __x86_64__
/* x86-64 */
extern void _Z7qMemSetPvim(void);
#endif
#if defined __s390x__
/* S390X */
extern void _Z7qMemSetPvim(void);
#endif
// *INDENT-ON*
#endif
