#ifndef _QTNETWORK_QUDPSOCKET_H_
#define _QTNETWORK_QUDPSOCKET_H_

class QUdpSocket;
// *INDENT-OFF*




typedef BindMode	
;

class QUdpSocket : public QAbstractSocket
{
private:
public:
};

enum BindFlag	
{
DefaultForPlatform = 0,	
ShareAddress = 1,	
DontShareAddress = 2,	
ReuseAddressHint = 4
}
;

class QFlags<QUdpSocket::BindFlag>
{
private:
public:
};


extern struct QMetaObject _ZN10QUdpSocket16staticMetaObjectE ;
extern struct QMetaObject _ZNK10QUdpSocket10metaObjectEv(void);
extern void _ZN10QUdpSocket11qt_metacastEPKc(void);
extern int _ZN10QUdpSocket11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QUdpSocket _ZN10QUdpSocketC2EP7QObject(void);
extern QUdpSocket _ZN10QUdpSocketC1EP7QObject(void);
extern QUdpSocket _ZN10QUdpSocketD2Ev(void);
extern QUdpSocket _ZN10QUdpSocketD1Ev(void);
extern QUdpSocket _ZN10QUdpSocketD0Ev(void);
extern bool _ZN10QUdpSocket4bindERK12QHostAddresst(void);
extern bool _ZN10QUdpSocket4bindEt(void);
extern bool _ZN10QUdpSocket4bindERK12QHostAddresst6QFlagsINS_8BindFlagEE(void);
extern bool _ZN10QUdpSocket4bindEt6QFlagsINS_8BindFlagEE(void);
extern bool _ZNK10QUdpSocket19hasPendingDatagramsEv(void);
extern qint64 _ZNK10QUdpSocket19pendingDatagramSizeEv(void);
extern qint64 _ZN10QUdpSocket12readDatagramEPcxP12QHostAddressPt(void);
extern qint64 _ZN10QUdpSocket13writeDatagramEPKcxRK12QHostAddresst(void);
// *INDENT-ON*
#endif
