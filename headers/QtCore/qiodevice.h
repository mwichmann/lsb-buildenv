#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QIODEVICE_H_
#define _QTCORE_QIODEVICE_H_

class QIODevice;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef class QFlags<QIODevice::OpenModeFlag>
{
private:
public:
}OpenMode	
;

typedef qint64	Offset	
;

typedef int	Status	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
class QIODevice : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QIODevice();
     QIODevice(QObject*);
     ~QIODevice();
    QFlags<QIODevice::OpenModeFlag> openMode() const;
    void setTextModeEnabled(bool);
    bool isTextModeEnabled() const;
    bool isOpen() const;
    bool isReadable() const;
    bool isWritable() const;
    bool isSequential() const;
    bool open(QFlags<QIODevice::OpenModeFlag>);
    void close();
    qint64 pos() const;
    qint64 size() const;
    bool seek(long long);
    bool atEnd() const;
    bool reset();
    qint64 bytesAvailable() const;
    qint64 bytesToWrite() const;
    qint64 read(char*, long long);
    QByteArray read(long long);
    QByteArray readAll();
    qint64 readLine(char*, long long);
    QByteArray readLine(long long);
    bool canReadLine() const;
    qint64 write(char const*, long long);
    qint64 peek(char*, long long);
    QByteArray peek(long long);
    bool waitForReadyRead(int);
    bool waitForBytesWritten(int);
    void ungetChar(char);
    QString errorString() const;
     QIODevice(QIODevicePrivate&, QObject*);
    int status() const;
    void resetStatus();
protected:
    void readyRead();
    void bytesWritten(long long);
    void aboutToClose();
    qint64 readLineData(char*, long long);
    void setOpenMode(QFlags<QIODevice::OpenModeFlag>);
    void setErrorString(QString const&);
};

enum OpenModeFlag	
{
NotOpen = 0,	
ReadOnly = 1,	
WriteOnly = 2,	
ReadWrite = 3,	
Append = 4,	
Truncate = 8,	
Text = 16,	
Unbuffered = 32
}
;

class QFlags<QIODevice::OpenModeFlag>
{
private:
public:
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN9QIODevice16staticMetaObjectE ;
extern  _Zls6QDebug6QFlagsIN9QIODevice12OpenModeFlagEE(_Z6QDebug, _Z356QFlagsIN9QIODevice12OpenModeFlagEE);
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
