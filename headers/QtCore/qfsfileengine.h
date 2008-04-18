#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QFSFILEENGINE_H_
#define _QTCORE_QFSFILEENGINE_H_

class QFSFileEngine;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QFSFileEngine : public QAbstractFileEngine
{
private:
public:
     QFSFileEngine();
     QFSFileEngine(QString const&);
     ~QFSFileEngine();
    bool open(QFlags<QIODevice::OpenModeFlag>);
    bool open(QFlags<QIODevice::OpenModeFlag>, _IO_FILE*);
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
    bool extension(QAbstractFileEngine::Extension, QAbstractFileEngine::ExtensionOption const*, QAbstractFileEngine::ExtensionReturn*);
    bool supportsExtension(QAbstractFileEngine::Extension) const;
    bool open(QFlags<QIODevice::OpenModeFlag>, int);
    static bool setCurrentPath(QString const&);
    static QString currentPath(QString const&);
    static QString homePath();
    static QString rootPath();
    static QString tempPath();
    static QFileInfoList drives();
     QFSFileEngine(QFSFileEnginePrivate&);
};

#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
