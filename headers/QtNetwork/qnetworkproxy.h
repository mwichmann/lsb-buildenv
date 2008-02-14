#ifndef _QTNETWORK_QNETWORKPROXY_H_
#define _QTNETWORK_QNETWORKPROXY_H_

class QNetworkProxy;
// *INDENT-OFF*

class QNetworkProxy
{
private:
public:
     QNetworkProxy();
     QNetworkProxy(QNetworkProxy::ProxyType, QString const&, unsigned short, QString const&, QString const&);
     QNetworkProxy(QNetworkProxy const&);
    QNetworkProxy & operator=(QNetworkProxy const&);
     ~QNetworkProxy();
    void setType(QNetworkProxy::ProxyType);
    enum _ZN13QNetworkProxy9ProxyTypeE type() const;
    void setUser(QString const&);
    QString user() const;
    void setPassword(QString const&);
    QString password() const;
    void setHostName(QString const&);
    QString hostName() const;
    void setPort(unsigned short);
    quint16 port() const;
    void setApplicationProxy(QNetworkProxy const&);
    QNetworkProxy applicationProxy();
};

enum ProxyType	
{
DefaultProxy = 0,	
Socks5Proxy = 1,	
NoProxy = 2
}
;

// *INDENT-ON*
#endif
