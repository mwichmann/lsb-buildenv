#if (__LSB_VERSION__ >= 31 )
#ifndef _QTNETWORK_QURLINFO_H_
#define _QTNETWORK_QURLINFO_H_

class QUrlInfo;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QUrlInfo
{
private:
public:
     QUrlInfo();
     QUrlInfo(QUrlInfo const&);
     QUrlInfo(QString const&, int, QString const&, QString const&, long long, QDateTime const&, QDateTime const&, bool, bool, bool, bool, bool, bool);
     QUrlInfo(QUrl const&, int, QString const&, QString const&, long long, QDateTime const&, QDateTime const&, bool, bool, bool, bool, bool, bool);
    QUrlInfo & operator=(QUrlInfo const&);
     ~QUrlInfo();
    void setName(QString const&);
    void setDir(bool);
    void setFile(bool);
    void setSymLink(bool);
    void setOwner(QString const&);
    void setGroup(QString const&);
    void setSize(long long);
    void setWritable(bool);
    void setReadable(bool);
    void setPermissions(int);
    void setLastModified(QDateTime const&);
    bool isValid() const;
    QString name() const;
    int permissions() const;
    QString owner() const;
    QString group() const;
    qint64 size() const;
    QDateTime lastModified() const;
    QDateTime lastRead() const;
    bool isDir() const;
    bool isFile() const;
    bool isSymLink() const;
    bool isWritable() const;
    bool isReadable() const;
    bool isExecutable() const;
    bool greaterThan(QUrlInfo const&, QUrlInfo const&, int);
    bool lessThan(QUrlInfo const&, QUrlInfo const&, int);
    bool equal(QUrlInfo const&, QUrlInfo const&, int);
    bool operator==(QUrlInfo const&) const;
};

enum PermissionSpec	
{
ExeOther = 1,	
WriteOther = 2,	
ReadOther = 4,	
ExeGroup = 8,	
WriteGroup = 16,	
ReadGroup = 32,	
ExeOwner = 64,	
WriteOwner = 128,	
ReadOwner = 256
}
;

#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
