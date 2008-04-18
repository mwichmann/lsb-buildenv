#if (__LSB_VERSION__ >= 31 )
#ifndef _QTNETWORK_QTCPSERVER_H_
#define _QTNETWORK_QTCPSERVER_H_

class QTcpServer;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QTcpServer : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTcpServer(QObject*);
     ~QTcpServer();
    bool listen(QHostAddress const&, unsigned short);
    void close();
    bool isListening() const;
    void setMaxPendingConnections(int);
    int maxPendingConnections() const;
    quint16 serverPort() const;
    QHostAddress serverAddress() const;
    int socketDescriptor() const;
    bool setSocketDescriptor(int);
    bool waitForNewConnection(int, bool*);
    bool hasPendingConnections() const;
    QTcpSocket * nextPendingConnection();
    enum _ZN15QAbstractSocket11SocketErrorE serverError() const;
    QString errorString() const;
    void setProxy(QNetworkProxy const&);
    QNetworkProxy proxy() const;
protected:
    void incomingConnection(int);
    void newConnection();
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN10QTcpServer16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
