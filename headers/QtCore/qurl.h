#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QURL_H_
#define _QTCORE_QURL_H_

class QFlags < QUrl::FormattingOption >;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef class QFlags<QUrl::FormattingOption>
{
private:
public:
}FormattingOptions	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
class QUrl
{
private:
public:
     QUrl();
     QUrl(QString const&);
     QUrl(QString const&, QUrl::ParsingMode);
     QUrl(QUrl const&);
    QUrl & operator=(QUrl const&);
    QUrl & operator=(QString const&);
     ~QUrl();
    void setUrl(QString const&);
    void setUrl(QString const&, QUrl::ParsingMode);
    void setEncodedUrl(QByteArray const&);
    void setEncodedUrl(QByteArray const&, QUrl::ParsingMode);
    bool isValid() const;
    bool isEmpty() const;
    void clear();
    void setScheme(QString const&);
    QString scheme() const;
    void setAuthority(QString const&);
    QString authority() const;
    void setUserInfo(QString const&);
    QString userInfo() const;
    void setUserName(QString const&);
    QString userName() const;
    void setPassword(QString const&);
    QString password() const;
    void setHost(QString const&);
    QString host() const;
    void setPort(int);
    int port() const;
    int port(int) const;
    void setPath(QString const&);
    QString path() const;
    void setEncodedQuery(QByteArray const&);
    QByteArray encodedQuery() const;
    void setQueryDelimiters(char, char);
    char queryValueDelimiter() const;
    char queryPairDelimiter() const;
    void setQueryItems(QList<QPair<QString, QString> > const&);
    void addQueryItem(QString const&, QString const&);
    QList<QPair<QString, QString> > queryItems() const;
    bool hasQueryItem(QString const&) const;
    QString queryItemValue(QString const&) const;
    QStringList allQueryItemValues(QString const&) const;
    void removeQueryItem(QString const&);
    void removeAllQueryItems(QString const&);
    void setFragment(QString const&);
    QString fragment() const;
    QUrl resolved(QUrl const&) const;
    bool isRelative() const;
    bool isParentOf(QUrl const&) const;
    static QUrl fromLocalFile(QString const&);
    QString toLocalFile() const;
    QString toString(QFlags<QUrl::FormattingOption>) const;
    QByteArray toEncoded(QFlags<QUrl::FormattingOption>) const;
    static QUrl fromEncoded(QByteArray const&);
    static QUrl fromEncoded(QByteArray const&, QUrl::ParsingMode);
    void detach();
    bool isDetached() const;
    bool operator<(QUrl const&) const;
    bool operator==(QUrl const&) const;
    bool operator!=(QUrl const&) const;
    static QString fromPercentEncoding(QByteArray const&);
    static QByteArray toPercentEncoding(QString const&, QByteArray const&, QByteArray const&);
    static QString fromPunycode(QByteArray const&);
    static QByteArray toPunycode(QString const&);
    void setFileName(QString const&);
    QString fileName() const;
    QString dirPath() const;
    static QStringList idnWhitelist();
    static void setIdnWhitelist(QStringList const&);
    static QByteArray toAce(QString const&);
    static QString fromAce(QByteArray const&);
    QString errorString() const;
    bool hasFragment() const;
    bool hasQuery() const;
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

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern QDebug _Zls6QDebugRK4QUrl(const QUrl &);
extern QDataStream _ZlsR11QDataStreamRK4QUrl(const QUrl &);
extern QDataStream _ZrsR11QDataStreamR4QUrl(QUrl &);
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
