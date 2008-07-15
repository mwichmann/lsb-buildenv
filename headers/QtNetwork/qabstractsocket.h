#if (__LSB_VERSION__ >= 31 )
#ifndef _QTNETWORK_QABSTRACTSOCKET_H_
#define _QTNETWORK_QABSTRACTSOCKET_H_

class QAbstractSocket;
// *INDENT-OFF*

typedef enum SocketState	
{
UnconnectedState = 0,	
Idle = 0,	
HostLookupState = 1,	
HostLookup = 1,	
ConnectingState = 2,	
Connecting = 2,	
Connected = 3,	
Connection = 3,	
ConnectedState = 3,	
BoundState = 4,	
ListeningState = 5,	
Closing = 6,	
ClosingState = 6
}
State	
;

class QAbstractSocket : public QIODevice
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QAbstractSocket(QAbstractSocket::SocketType, QObject*);
     ~QAbstractSocket();
    void connectToHost(QString const&, unsigned short, QFlags<QIODevice::OpenModeFlag>);
    void connectToHost(QHostAddress const&, unsigned short, QFlags<QIODevice::OpenModeFlag>);
    void disconnectFromHost();
    bool isValid() const;
    qint64 bytesAvailable() const;
    qint64 bytesToWrite() const;
    bool canReadLine() const;
    quint16 localPort() const;
    QHostAddress localAddress() const;
    quint16 peerPort() const;
    QHostAddress peerAddress() const;
    QString peerName() const;
    qint64 readBufferSize() const;
    void setReadBufferSize(long long);
    void abort();
    int socketDescriptor() const;
    bool setSocketDescriptor(int, QAbstractSocket::SocketState, QFlags<QIODevice::OpenModeFlag>);
    enum _ZN15QAbstractSocket10SocketTypeE socketType() const;
    enum _ZN15QAbstractSocket11SocketStateE state() const;
    enum _ZN15QAbstractSocket11SocketErrorE error() const;
    void close();
    bool isSequential() const;
    bool atEnd() const;
    bool flush();
    bool waitForConnected(int);
    bool waitForReadyRead(int);
    bool waitForBytesWritten(int);
    bool waitForDisconnected(int);
    void setProxy(QNetworkProxy const&);
    QNetworkProxy proxy() const;
protected:
    void hostFound();
    void connected();
    void disconnected();
    void stateChanged(QAbstractSocket::SocketState);
    void error(QAbstractSocket::SocketError);
    void connectToHostImplementation(QString const&, unsigned short, QFlags<QIODevice::OpenModeFlag>);
    void disconnectFromHostImplementation();
    qint64 readData(char*, long long);
    qint64 readLineData(char*, long long);
    qint64 writeData(char const*, long long);
    void setSocketState(QAbstractSocket::SocketState);
    void setSocketError(QAbstractSocket::SocketError);
    void setLocalPort(unsigned short);
    void setLocalAddress(QHostAddress const&);
    void setPeerPort(unsigned short);
    void setPeerAddress(QHostAddress const&);
    void setPeerName(QString const&);
    void connectionClosed();
    void delayedCloseFinished();
};

enum SocketType	
{
UnknownSocketType = -1,	
TcpSocket = 0,	
UdpSocket = 1
}
;

enum NetworkLayerProtocol	
{
UnknownNetworkLayerProtocol = -1,	
IPv4Protocol = 0,	
IPv6Protocol = 1
}
;

enum SocketError	
{
UnknownSocketError = -1,	
ConnectionRefusedError = 0,	
RemoteHostClosedError = 1,	
HostNotFoundError = 2,	
SocketAccessError = 3,	
SocketResourceError = 4,	
SocketTimeoutError = 5,	
DatagramTooLargeError = 6,	
NetworkError = 7,	
AddressInUseError = 8,	
SocketAddressNotAvailableError = 9,	
UnsupportedSocketOperationError = 10
}
;

enum SocketState	
{
UnconnectedState = 0,	
Idle = 0,	
HostLookupState = 1,	
HostLookup = 1,	
ConnectingState = 2,	
Connecting = 2,	
Connected = 3,	
Connection = 3,	
ConnectedState = 3,	
BoundState = 4,	
ListeningState = 5,	
Closing = 6,	
ClosingState = 6
}
;

enum Error	
{
ErrSocketRead = -1,	
ErrConnectionRefused = 0,	
ErrHostNotFound = 2
}
;


/* Function prototypes */

extern struct QMetaObject _ZN15QAbstractSocket16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
