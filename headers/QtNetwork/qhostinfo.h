#ifndef _QTNETWORK_QHOSTINFO_H_
#define _QTNETWORK_QHOSTINFO_H_

class QHostInfo;
// *INDENT-OFF*

class QHostInfo
{
private:
public:
     QHostInfo(int);
     QHostInfo(QHostInfo const&);
    QHostInfo & operator=(QHostInfo const&);
     ~QHostInfo();
    QString hostName() const;
    void setHostName(QString const&);
    QList<QHostAddress> addresses() const;
    void setAddresses(QList<QHostAddress> const&);
    enum _ZN9QHostInfo13HostInfoErrorE error() const;
    void setError(QHostInfo::HostInfoError);
    QString errorString() const;
    void setErrorString(QString const&);
    void setLookupId(int);
    int lookupId() const;
    int lookupHost(QString const&, QObject*, char const*);
    void abortHostLookup(int);
    QHostInfo fromName(QString const&);
    QString localHostName();
};

enum HostInfoError	
{
NoError = 0,	
HostNotFound = 1,	
UnknownError = 2
}
;

// *INDENT-ON*
#endif
