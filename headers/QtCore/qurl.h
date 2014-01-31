#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QURL_H_
#define _QTCORE_QURL_H_

class QFlags < QUrl::FormattingOption >;
// *INDENT-OFF*

typedef class QFlags<QUrl::FormattingOption>QUrl::FormattingOptions	
;

class QUrl;

enum QUrl::ParsingMode	
{
TolerantMode = 0,	
StrictMode = 1
}
;

enum QUrl::FormattingOption	
{
None = 0,	
RemoveScheme = 1,	
RemovePassword = 2,	
RemoveUserInfo = 6,	
RemovePort = 8,	
RemoveAuthority = 30,	
RemovePath = 32,	
RemoveQuery = 64,	
RemoveFragment = 128,	
StripTrailingSlash = 65536
}
;

class QFlags<QUrl::FormattingOption>;


/* Function prototypes */

extern QDebug operator<<(QDebug, QUrl const&)(const QUrl &);
extern QDataStream operator<<(QDataStream&, QUrl const&)(const QUrl &);
extern QDataStream operator>>(QDataStream&, QUrl&)(QUrl &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
