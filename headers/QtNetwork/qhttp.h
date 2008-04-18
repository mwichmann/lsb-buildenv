#if (__LSB_VERSION__ >= 31 )
#ifndef _QTNETWORK_QHTTP_H_
#define _QTNETWORK_QHTTP_H_

class QHttpResponseHeader;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QHttpHeader
{
private:
public:
     QHttpHeader();
     QHttpHeader(QHttpHeader const&);
     QHttpHeader(QString const&);
     ~QHttpHeader();
    QHttpHeader & operator=(QHttpHeader const&);
    void setValue(QString const&, QString const&);
    void setValues(QList<QPair<QString, QString> > const&);
    void addValue(QString const&, QString const&);
    QList<QPair<QString, QString> > values() const;
    bool hasKey(QString const&) const;
    QStringList keys() const;
    QString value(QString const&) const;
    QStringList allValues(QString const&) const;
    void removeValue(QString const&);
    void removeAllValues(QString const&);
    bool hasContentLength() const;
    uint contentLength() const;
    void setContentLength(int);
    bool hasContentType() const;
    QString contentType() const;
    void setContentType(QString const&);
    QString toString() const;
    bool isValid() const;
     QHttpHeader(QHttpHeaderPrivate&, QString const&);
     QHttpHeader(QHttpHeaderPrivate&, QHttpHeader const&);
protected:
    bool parseLine(QString const&, int);
    bool parse(QString const&);
    void setValid(bool);
};

class QHttpResponseHeader : public QHttpHeader
{
private:
public:
     ~QHttpResponseHeader();
     QHttpResponseHeader();
     QHttpResponseHeader(QHttpResponseHeader const&);
     QHttpResponseHeader(QString const&);
     QHttpResponseHeader(int, QString const&, int, int);
    QHttpResponseHeader & operator=(QHttpResponseHeader const&);
    void setStatusLine(int, QString const&, int, int);
    int statusCode() const;
    QString reasonPhrase() const;
    int majorVersion() const;
    int minorVersion() const;
    QString toString() const;
protected:
    bool parseLine(QString const&, int);
};

class QHttpRequestHeader : public QHttpHeader
{
private:
public:
     ~QHttpRequestHeader();
     QHttpRequestHeader();
     QHttpRequestHeader(QString const&, QString const&, int, int);
     QHttpRequestHeader(QHttpRequestHeader const&);
     QHttpRequestHeader(QString const&);
    QHttpRequestHeader & operator=(QHttpRequestHeader const&);
    void setRequest(QString const&, QString const&, int, int);
    QString method() const;
    QString path() const;
    int majorVersion() const;
    int minorVersion() const;
    QString toString() const;
protected:
    bool parseLine(QString const&, int);
};

class QHttp : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QHttp(QObject*);
     QHttp(QString const&, unsigned short, QObject*);
     ~QHttp();
    int setHost(QString const&, unsigned short);
    int setSocket(QTcpSocket*);
    int setUser(QString const&, QString const&);
    int setProxy(QString const&, int, QString const&, QString const&);
    int get(QString const&, QIODevice*);
    int post(QString const&, QIODevice*, QIODevice*);
    int post(QString const&, QByteArray const&, QIODevice*);
    int head(QString const&);
    int request(QHttpRequestHeader const&, QIODevice*, QIODevice*);
    int request(QHttpRequestHeader const&, QByteArray const&, QIODevice*);
    int closeConnection();
    int close();
    qint64 bytesAvailable() const;
    qint64 read(char*, long long);
    QByteArray readAll();
    int currentId() const;
    QIODevice * currentSourceDevice() const;
    QIODevice * currentDestinationDevice() const;
    QHttpRequestHeader currentRequest() const;
    QHttpResponseHeader lastResponse() const;
    bool hasPendingRequests() const;
    void clearPendingRequests();
    enum _ZN5QHttp5StateE state() const;
    enum _ZN5QHttp5ErrorE error() const;
    QString errorString() const;
    void abort();
protected:
    void stateChanged(int);
    void responseHeaderReceived(QHttpResponseHeader const&);
    void readyRead(QHttpResponseHeader const&);
    void dataSendProgress(int, int);
    void dataReadProgress(int, int);
    void requestStarted(int);
    void requestFinished(int, bool);
    void done(bool);
};

enum State	
{
Unconnected = 0,	
HostLookup = 1,	
Connecting = 2,	
Sending = 3,	
Reading = 4,	
Connected = 5,	
Closing = 6
}
;

enum Error	
{
NoError = 0,	
UnknownError = 1,	
HostNotFound = 2,	
ConnectionRefused = 3,	
UnexpectedClose = 4,	
InvalidResponseHeader = 5,	
WrongContentLength = 6,	
Aborted = 7
}
;

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN5QHttp16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
