#ifndef _QTNETWORK_QTCPSERVER_H_
#define _QTNETWORK_QTCPSERVER_H_

class QTcpServer;
// *INDENT-OFF*



class QTcpServer : public QObject
{
private:
public:
};


extern struct QMetaObject _ZN10QTcpServer16staticMetaObjectE ;
extern struct QMetaObject _ZNK10QTcpServer10metaObjectEv(void);
extern void _ZN10QTcpServer11qt_metacastEPKc(void);
extern int _ZN10QTcpServer11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QTcpServer _ZN10QTcpServerC2EP7QObject(void);
extern QTcpServer _ZN10QTcpServerC1EP7QObject(void);
extern QTcpServer _ZN10QTcpServerD2Ev(void);
extern QTcpServer _ZN10QTcpServerD1Ev(void);
extern QTcpServer _ZN10QTcpServerD0Ev(void);
extern bool _ZN10QTcpServer6listenERK12QHostAddresst(void);
extern void _ZN10QTcpServer5closeEv(void);
extern bool _ZNK10QTcpServer11isListeningEv(void);
extern void _ZN10QTcpServer24setMaxPendingConnectionsEi(void);
extern int _ZNK10QTcpServer21maxPendingConnectionsEv(void);
extern quint16 _ZNK10QTcpServer10serverPortEv(void);
extern QHostAddress _ZNK10QTcpServer13serverAddressEv(void);
extern int _ZNK10QTcpServer16socketDescriptorEv(void);
extern bool _ZN10QTcpServer19setSocketDescriptorEi(void);
extern bool _ZN10QTcpServer20waitForNewConnectionEiPb(void);
extern bool _ZNK10QTcpServer21hasPendingConnectionsEv(void);
extern  _ZN10QTcpServer21nextPendingConnectionEv(void);
extern enum N15QAbstractSocket11SocketErrorE _ZNK10QTcpServer11serverErrorEv(void);
extern QString _ZNK10QTcpServer11errorStringEv(void);
extern void _ZN10QTcpServer8setProxyERK13QNetworkProxy(void);
extern QNetworkProxy _ZNK10QTcpServer5proxyEv(void);
extern void _ZN10QTcpServer18incomingConnectionEi(void);
extern void _ZN10QTcpServer13newConnectionEv(void);
// *INDENT-ON*
#endif
