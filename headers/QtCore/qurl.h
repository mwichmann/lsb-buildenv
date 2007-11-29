#ifndef _QTCORE_QURL_H_
#define _QTCORE_QURL_H_

class QFlags < QUrl::FormattingOption >;
// *INDENT-OFF*




typedef FormattingOptions	
;

class QUrl
{
private:
public:
};

enum ParsingMode	
{
TolerantMode = 0,	
StrictMode = 1
}
;

enum FormattingOption	
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

class QFlags<QUrl::FormattingOption>
{
private:
public:
};


extern QUrl _ZN4QUrlC2Ev(void);
extern QUrl _ZN4QUrlC1Ev(void);
extern QUrl _ZN4QUrlC2ERK7QString(void);
extern QUrl _ZN4QUrlC1ERK7QString(void);
extern QUrl _ZN4QUrlC2ERK7QStringNS_11ParsingModeE(void);
extern QUrl _ZN4QUrlC1ERK7QStringNS_11ParsingModeE(void);
extern QUrl _ZN4QUrlC2ERKS_(void);
extern QUrl _ZN4QUrlC1ERKS_(void);
extern QUrl _ZN4QUrlaSERKS_(void);
extern QUrl _ZN4QUrlaSERK7QString(void);
extern  _ZN4QUrlD2Ev(void);
extern  _ZN4QUrlD1Ev(void);
extern void _ZN4QUrl6setUrlERK7QString(void);
extern void _ZN4QUrl6setUrlERK7QStringNS_11ParsingModeE(void);
extern void _ZN4QUrl13setEncodedUrlERK10QByteArray(void);
extern void _ZN4QUrl13setEncodedUrlERK10QByteArrayNS_11ParsingModeE(void);
extern bool _ZNK4QUrl7isValidEv(void);
extern bool _ZNK4QUrl7isEmptyEv(void);
extern void _ZN4QUrl5clearEv(void);
extern void _ZN4QUrl9setSchemeERK7QString(void);
extern QString _ZNK4QUrl6schemeEv(void);
extern void _ZN4QUrl12setAuthorityERK7QString(void);
extern QString _ZNK4QUrl9authorityEv(void);
extern void _ZN4QUrl11setUserInfoERK7QString(void);
extern QString _ZNK4QUrl8userInfoEv(void);
extern void _ZN4QUrl11setUserNameERK7QString(void);
extern QString _ZNK4QUrl8userNameEv(void);
extern void _ZN4QUrl11setPasswordERK7QString(void);
extern QString _ZNK4QUrl8passwordEv(void);
extern void _ZN4QUrl7setHostERK7QString(void);
extern QString _ZNK4QUrl4hostEv(void);
extern void _ZN4QUrl7setPortEi(void);
extern int _ZNK4QUrl4portEv(void);
extern int _ZNK4QUrl4portEi(void);
extern void _ZN4QUrl7setPathERK7QString(void);
extern QString _ZNK4QUrl4pathEv(void);
extern void _ZN4QUrl15setEncodedQueryERK10QByteArray(void);
extern QByteArray _ZNK4QUrl12encodedQueryEv(void);
extern void _ZN4QUrl18setQueryDelimitersEcc(void);
extern char _ZNK4QUrl19queryValueDelimiterEv(void);
extern char _ZNK4QUrl18queryPairDelimiterEv(void);
extern void _ZN4QUrl13setQueryItemsERK5QListI5QPairI7QStringS2_EE(void);
extern void _ZN4QUrl12addQueryItemERK7QStringS2_(void);
extern QList<QPair<QString, QString> > _ZNK4QUrl10queryItemsEv(void);
extern bool _ZNK4QUrl12hasQueryItemERK7QString(void);
extern QString _ZNK4QUrl14queryItemValueERK7QString(void);
extern QStringList _ZNK4QUrl18allQueryItemValuesERK7QString(void);
extern void _ZN4QUrl15removeQueryItemERK7QString(void);
extern void _ZN4QUrl19removeAllQueryItemsERK7QString(void);
extern void _ZN4QUrl11setFragmentERK7QString(void);
extern QString _ZNK4QUrl8fragmentEv(void);
extern QUrl _ZNK4QUrl8resolvedERKS_(void);
extern bool _ZNK4QUrl10isRelativeEv(void);
extern bool _ZNK4QUrl10isParentOfERKS_(void);
extern QUrl _ZN4QUrl13fromLocalFileERK7QString(void);
extern QString _ZNK4QUrl11toLocalFileEv(void);
extern QString _ZNK4QUrl8toStringE6QFlagsINS_16FormattingOptionEE(void);
extern QByteArray _ZNK4QUrl9toEncodedE6QFlagsINS_16FormattingOptionEE(void);
extern QUrl _ZN4QUrl11fromEncodedERK10QByteArray(void);
extern QUrl _ZN4QUrl11fromEncodedERK10QByteArrayNS_11ParsingModeE(void);
extern void _ZN4QUrl6detachEv(void);
extern bool _ZNK4QUrl10isDetachedEv(void);
extern bool _ZNK4QUrlltERKS_(void);
extern bool _ZNK4QUrleqERKS_(void);
extern bool _ZNK4QUrlneERKS_(void);
extern QString _ZN4QUrl19fromPercentEncodingERK10QByteArray(void);
extern QByteArray _ZN4QUrl17toPercentEncodingERK7QStringRK10QByteArrayS5_(void);
extern QString _ZN4QUrl12fromPunycodeERK10QByteArray(void);
extern QByteArray _ZN4QUrl10toPunycodeERK7QString(void);
extern void _ZN4QUrl11setFileNameERK7QString(void);
extern QString _ZNK4QUrl8fileNameEv(void);
extern QString _ZNK4QUrl7dirPathEv(void);
extern QDataStream _ZlsR11QDataStreamRK4QUrl(void);
extern QDataStream _ZrsR11QDataStreamR4QUrl(void);
extern QDebug _Zls6QDebugRK4QUrl(void);
// *INDENT-ON*
#endif
