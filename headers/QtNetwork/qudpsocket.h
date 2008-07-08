#if (__LSB_VERSION__ >= 31 )
#ifndef _QTNETWORK_QUDPSOCKET_H_
#define _QTNETWORK_QUDPSOCKET_H_

class QUdpSocket;
// *INDENT-OFF*

typedef class QFlags<QUdpSocket::BindFlag>
{
private:
public:
}BindMode	
;

class QUdpSocket : public QAbstractSocket
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QUdpSocket(QObject*);
     ~QUdpSocket();
    bool bind(QHostAddress const&, unsigned short);
    bool bind(unsigned short);
    bool bind(QHostAddress const&, unsigned short, QFlags<QUdpSocket::BindFlag>);
    bool bind(unsigned short, QFlags<QUdpSocket::BindFlag>);
    bool hasPendingDatagrams() const;
    qint64 pendingDatagramSize() const;
    qint64 readDatagram(char*, long long, QHostAddress*, unsigned short*);
    qint64 writeDatagram(char const*, long long, QHostAddress const&, unsigned short);
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


/* Function prototypes */

extern struct QMetaObject _ZN10QUdpSocket16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
