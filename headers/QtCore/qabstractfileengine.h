#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QABSTRACTFILEENGINE_H_
#define _QTCORE_QABSTRACTFILEENGINE_H_

class QFlags < QAbstractFileEngine::FileFlag >;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef class QFlags<QAbstractFileEngine::FileFlag>
{
private:
public:
}FileFlags	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
class QAbstractFileEngine
{
private:
public:
     ~QAbstractFileEngine();
    bool open(QFlags<QIODevice::OpenModeFlag>);
    bool close();
    bool flush();
    qint64 size() const;
    qint64 pos() const;
    bool seek(long long);
    bool isSequential() const;
    bool remove();
    bool copy(QString const&);
    bool rename(QString const&);
    bool link(QString const&);
    bool mkdir(QString const&, bool) const;
    bool rmdir(QString const&, bool) const;
    bool setSize(long long);
    bool caseSensitive() const;
    bool isRelativePath() const;
    QStringList entryList(QFlags<QDir::Filter>, QStringList const&) const;
    QFlags<QAbstractFileEngine::FileFlag> fileFlags(QFlags<QAbstractFileEngine::FileFlag>) const;
    bool setPermissions(unsigned int);
    QString fileName(QAbstractFileEngine::FileName) const;
    uint ownerId(QAbstractFileEngine::FileOwner) const;
    QString owner(QAbstractFileEngine::FileOwner) const;
    QDateTime fileTime(QAbstractFileEngine::FileTime) const;
    void setFileName(QString const&);
    int handle() const;
     beginEntryList(QFlags<QDir::Filter>, QStringList const&);
     endEntryList();
    qint64 read(char*, long long);
    qint64 readLine(char*, long long);
    qint64 write(char const*, long long);
    enum _ZN5QFile9FileErrorE error() const;
    QString errorString() const;
    bool extension(QAbstractFileEngine::Extension, QAbstractFileEngine::ExtensionOption const*, QAbstractFileEngine::ExtensionReturn*);
    bool supportsExtension(QAbstractFileEngine::Extension) const;
    static  create(QString const&);
     QAbstractFileEngine();
     QAbstractFileEngine(QAbstractFileEnginePrivate&);
protected:
    void setError(QFile::FileError, QString const&);
};

enum FileFlag	
{
ExeOtherPerm = 1,	
WriteOtherPerm = 2,	
ReadOtherPerm = 4,	
ExeGroupPerm = 16,	
WriteGroupPerm = 32,	
ReadGroupPerm = 64,	
ExeUserPerm = 256,	
WriteUserPerm = 512,	
ReadUserPerm = 1024,	
ExeOwnerPerm = 4096,	
WriteOwnerPerm = 8192,	
ReadOwnerPerm = 16384,	
PermsMask = 65535,	
LinkType = 65536,	
FileType = 131072,	
DirectoryType = 262144,	
TypesMask = 983040,	
HiddenFlag = 1048576,	
LocalDiskFlag = 2097152,	
ExistsFlag = 4194304,	
RootFlag = 8388608,	
FlagsMask = 267386880,	
FileInfoAll = 268435455
}
;

class QFlags<QAbstractFileEngine::FileFlag>
{
private:
public:
};

enum FileName	
{
DefaultName = 0,	
BaseName = 1,	
PathName = 2,	
AbsoluteName = 3,	
AbsolutePathName = 4,	
LinkName = 5,	
CanonicalName = 6,	
CanonicalPathName = 7
}
;

enum FileOwner	
{
OwnerUser = 0,	
OwnerGroup = 1
}
;

enum FileTime	
{
CreationTime = 0,	
ModificationTime = 1,	
AccessTime = 2
}
;

enum Extension	
;

class QAbstractFileEngine::ExtensionOption
{
private:
public:
};

class QAbstractFileEngine::ExtensionReturn
{
private:
public:
};

class QAbstractFileEngineHandler
{
private:
public:
     QAbstractFileEngineHandler();
     ~QAbstractFileEngineHandler();
};

#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
