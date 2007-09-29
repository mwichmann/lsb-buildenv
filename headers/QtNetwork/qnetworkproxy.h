#ifndef _QTNETWORK_QNETWORKPROXY_H_
#define _QTNETWORK_QNETWORKPROXY_H_

class QNetworkProxy;
// *INDENT-OFF*



class QNetworkProxy
{
private:
public:
};

enum ProxyType	
{
DefaultProxy = 0,	
Socks5Proxy = 1,	
NoProxy = 2
}
;


extern QNetworkProxy _ZN13QNetworkProxyC2Ev(void);
extern QNetworkProxy _ZN13QNetworkProxyC1Ev(void);
extern QNetworkProxy _ZN13QNetworkProxyC2ENS_9ProxyTypeERK7QStringtS3_S3_(void);
extern QNetworkProxy _ZN13QNetworkProxyC1ENS_9ProxyTypeERK7QStringtS3_S3_(void);
extern QNetworkProxy _ZN13QNetworkProxyC2ERKS_(void);
extern QNetworkProxy _ZN13QNetworkProxyC1ERKS_(void);
extern QNetworkProxy _ZN13QNetworkProxyaSERKS_(void);
extern QNetworkProxy _ZN13QNetworkProxyD2Ev(void);
extern QNetworkProxy _ZN13QNetworkProxyD1Ev(void);
extern void _ZN13QNetworkProxy7setTypeENS_9ProxyTypeE(void);
extern enum N13QNetworkProxy9ProxyTypeE _ZNK13QNetworkProxy4typeEv(void);
extern void _ZN13QNetworkProxy7setUserERK7QString(void);
extern QString _ZNK13QNetworkProxy4userEv(void);
extern void _ZN13QNetworkProxy11setPasswordERK7QString(void);
extern QString _ZNK13QNetworkProxy8passwordEv(void);
extern void _ZN13QNetworkProxy11setHostNameERK7QString(void);
extern QString _ZNK13QNetworkProxy8hostNameEv(void);
extern void _ZN13QNetworkProxy7setPortEt(void);
extern quint16 _ZNK13QNetworkProxy4portEv(void);
extern void _ZN13QNetworkProxy19setApplicationProxyERKS_(void);
extern QNetworkProxy _ZN13QNetworkProxy16applicationProxyEv(void);
// *INDENT-ON*
#endif
