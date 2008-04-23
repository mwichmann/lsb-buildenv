#if (__LSB_VERSION__ >= 31 )
#ifndef _QTNETWORK_QFTP_H_
#define _QTNETWORK_QFTP_H_

class QFtp;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QFtp : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QFtp(QObject*);
     ~QFtp();
    int setProxy(QString const&, unsigned short);
    int connectToHost(QString const&, unsigned short);
    int login(QString const&, QString const&);
    int close();
    int setTransferMode(QFtp::TransferMode);
    int list(QString const&);
    int cd(QString const&);
    int get(QString const&, QIODevice*, QFtp::TransferType);
    int put(QByteArray const&, QString const&, QFtp::TransferType);
    int put(QIODevice*, QString const&, QFtp::TransferType);
    int remove(QString const&);
    int mkdir(QString const&);
    int rmdir(QString const&);
    int rename(QString const&, QString const&);
    int rawCommand(QString const&);
    qint64 bytesAvailable() const;
    qint64 read(char*, long long);
    QByteArray readAll();
    int currentId() const;
    QIODevice * currentDevice() const;
    enum _ZN4QFtp7CommandE currentCommand() const;
    bool hasPendingCommands() const;
    void clearPendingCommands();
    enum _ZN4QFtp5StateE state() const;
    enum _ZN4QFtp5ErrorE error() const;
    QString errorString() const;
    void abort();
     QFtp(QObject*, char const*);
protected:
    void stateChanged(int);
    void listInfo(QUrlInfo const&);
    void readyRead();
    void dataTransferProgress(long long, long long);
    void rawCommandReply(int, QString const&);
    void commandStarted(int);
    void commandFinished(int, bool);
    void done(bool);
};

enum State	
{
Unconnected = 0,	
HostLookup = 1,	
Connecting = 2,	
Connected = 3,	
LoggedIn = 4,	
Closing = 5
}
;

enum Error	
{
NoError = 0,	
UnknownError = 1,	
HostNotFound = 2,	
ConnectionRefused = 3,	
NotConnected = 4
}
;

enum Command	
{
None = 0,	
SetTransferMode = 1,	
SetProxy = 2,	
ConnectToHost = 3,	
Login = 4,	
Close = 5,	
List = 6,	
Cd = 7,	
Get = 8,	
Put = 9,	
Remove = 10,	
Mkdir = 11,	
Rmdir = 12,	
Rename = 13,	
RawCommand = 14
}
;

enum TransferMode	
{
Active = 0,	
Passive = 1
}
;

enum TransferType	
{
Binary = 0,	
Ascii = 1
}
;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN4QFtp16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
