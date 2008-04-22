#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QFILE_H_
#define _QTCORE_QFILE_H_

class QFile;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef class QFlags<QFile::Permission>
{
private:
public:
}Permissions	
;

typedef QByteArray EncoderFn	
;

typedef QString DecoderFn	
;

typedef enum Permission	
{
ExeOther = 1,	
WriteOther = 2,	
ReadOther = 4,	
ExeGroup = 16,	
WriteGroup = 32,	
ReadGroup = 64,	
ExeUser = 256,	
WriteUser = 512,	
ReadUser = 1024,	
ExeOwner = 4096,	
WriteOwner = 8192,	
ReadOwner = 16384
}
PermissionSpec	
;

#endif /* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31
class QFile : public QIODevice
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QFile();
     QFile(QString const&);
     QFile(QObject*);
     QFile(QString const&, QObject*);
     ~QFile();
    enum _ZN5QFile9FileErrorE error() const;
    void unsetError();
    QString fileName() const;
    void setFileName(QString const&);
    static QByteArray encodeName(QString const&);
    static QString decodeName(QByteArray const&);
    static void setEncodingFunction(QByteArray (*)(QString const&));
    static void setDecodingFunction(QString (*)(QByteArray const&));
    bool exists() const;
    static bool exists(QString const&);
    QString readLink() const;
    static QString readLink(QString const&);
    bool remove();
    static bool remove(QString const&);
    bool rename(QString const&);
    static bool rename(QString const&, QString const&);
    bool link(QString const&);
    static bool link(QString const&, QString const&);
    bool copy(QString const&);
    static bool copy(QString const&, QString const&);
    bool isSequential() const;
    bool open(QFlags<QIODevice::OpenModeFlag>);
    bool open(_IO_FILE*, QFlags<QIODevice::OpenModeFlag>);
    bool open(int, QFlags<QIODevice::OpenModeFlag>);
    void close();
    qint64 size() const;
    qint64 pos() const;
    bool seek(long long);
    bool atEnd() const;
    bool flush();
    bool resize(long long);
    static bool resize(QString const&, long long);
    QFlags<QFile::Permission> permissions() const;
    static QFlags<QFile::Permission> permissions(QString const&);
    bool setPermissions(QFlags<QFile::Permission>);
    static bool setPermissions(QString const&, QFlags<QFile::Permission>);
    int handle() const;
     fileEngine() const;
     QFile(QFilePrivate&, QObject*);
protected:
    qint64 readData(char*, long long);
    qint64 writeData(char const*, long long);
    qint64 readLineData(char*, long long);
};

enum FileError	
{
NoError = 0,	
ReadError = 1,	
WriteError = 2,	
FatalError = 3,	
ResourceError = 4,	
OpenError = 5,	
AbortError = 6,	
TimeOutError = 7,	
UnspecifiedError = 8,	
RemoveError = 9,	
RenameError = 10,	
PositionError = 11,	
ResizeError = 12,	
PermissionsError = 13,	
CopyError = 14,	
ConnectError = 30
}
;

enum Permission	
{
ExeOther = 1,	
WriteOther = 2,	
ReadOther = 4,	
ExeGroup = 16,	
WriteGroup = 32,	
ReadGroup = 64,	
ExeUser = 256,	
WriteUser = 512,	
ReadUser = 1024,	
ExeOwner = 4096,	
WriteOwner = 8192,	
ReadOwner = 16384
}
;

class QFlags<QFile::Permission>
{
private:
public:
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN5QFile16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
