#ifndef _QTNETWORK_QHOSTADDRESS_H_
#define _QTNETWORK_QHOSTADDRESS_H_

class QHostAddress;
// *INDENT-OFF*

typedef class QIPv6Address
{
private:
public:
}Q_IPV6ADDR	
;

class QIPv6Address
{
private:
public:
};

class QHostAddress
{
private:
public:
     QHostAddress();
     QHostAddress(unsigned int);
     QHostAddress(unsigned char*);
     QHostAddress(QIPv6Address const&);
     QHostAddress(sockaddr const*);
     QHostAddress(QString const&);
     QHostAddress(QHostAddress const&);
     QHostAddress(QHostAddress::SpecialAddress);
     ~QHostAddress();
    QHostAddress & operator=(QHostAddress const&);
    QHostAddress & operator=(QString const&);
    void setAddress(unsigned int);
    void setAddress(unsigned char*);
    void setAddress(QIPv6Address const&);
    void setAddress(sockaddr const*);
    bool setAddress(QString const&);
    enum _ZN15QAbstractSocket20NetworkLayerProtocolE protocol() const;
    quint32 toIPv4Address() const;
    Q_IPV6ADDR toIPv6Address() const;
    QString toString() const;
    QString scopeId() const;
    void setScopeId(QString const&);
    bool operator==(QHostAddress const&) const;
    bool operator==(QHostAddress::SpecialAddress) const;
    bool isNull() const;
    void clear();
};

enum SpecialAddress	
{
Null = 0,	
Broadcast = 1,	
LocalHost = 2,	
LocalHostIPv6 = 3,	
Any = 4,	
AnyIPv6 = 5
}
;


extern QDebug _Zls6QDebugRK12QHostAddress(_Z6QDebug, const QHostAddress &);
extern  _Z5qHashRK12QHostAddress(const QHostAddress &);
extern  _ZlsR11QDataStreamRK12QHostAddress(QDataStream &, const QHostAddress &);
extern  _ZrsR11QDataStreamR12QHostAddress(QDataStream &, QHostAddress &);
// *INDENT-ON*
#endif
