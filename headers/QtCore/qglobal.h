#if (__LSB_VERSION__ >= 31 )
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

class QSysInfo;

enum _ZN8QSysInfo6EndianE	
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

class QBool;

class QFlag;

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


/* Function prototypes */

extern void _Z11qt_assert_xPKcS0_S0_i(const char *, const char *, const char *, int);
extern char _Z12qInstallPathv(void);
extern bool _Z12qSharedBuildv(void);
extern void _Z13qErrnoWarningPKcz(const char *, ...);
extern void _Z13qErrnoWarningiPKcz(int, const char *, ...);
extern void _Z14qSystemWarningPKci(const char *, int);
extern 
