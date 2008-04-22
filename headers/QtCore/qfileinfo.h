#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QFILEINFO_H_
#define _QTCORE_QFILEINFO_H_

class QFlags < QFileInfo::Permission >;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef class QFlags<QFileInfo::Permission>
{
private:
public:
}PermissionSpec	
;

typedef QList<QFileInfo> QFileInfoList	
;

#endif /* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 31
class QFileInfo
{
private:
public:
     QFileInfo();
     QFileInfo(QString const&);
     QFileInfo(QFile const&);
     QFileInfo(QDir const&, QString const&);
     QFileInfo(QFileInfo const&);
     ~QFileInfo();
    QFileInfo & operator=(QFileInfo const&);
    bool operator==(QFileInfo const&);
    bool operator==(QFileInfo const&) const;
    void setFile(QString const&);
    void setFile(QFile const&);
    void setFile(QDir const&, QString const&);
    bool exists() const;
    void refresh();
    QString filePath() const;
    QString absoluteFilePath() const;
    QString canonicalFilePath() const;
    QString fileName() const;
    QString baseName() const;
    QString completeBaseName() const;
    QString suffix() const;
    QString completeSuffix() const;
    QString path() const;
    QString absolutePath() const;
    QString canonicalPath() const;
    QDir dir() const;
    QDir absoluteDir() const;
    bool isReadable() const;
    bool isWritable() const;
    bool isExecutable() const;
    bool isHidden() const;
    bool isRelative() const;
    bool makeAbsolute();
    bool isFile() const;
    bool isDir() const;
    bool isSymLink() const;
    bool isRoot() const;
    QString readLink() const;
    QString owner() const;
    uint ownerId() const;
    QString group() const;
    uint groupId() const;
    bool permission(QFlags<QFile::Permission>) const;
    QFlags<QFile::Permission> permissions() const;
    qint64 size() const;
    QDateTime created() const;
    QDateTime lastModified() const;
    QDateTime lastRead() const;
    void detach();
    bool caching() const;
    void setCaching(bool);
    QDir dir(bool) const;
};

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

class QFlags<QFileInfo::Permission>
{
private:
public:
};

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
