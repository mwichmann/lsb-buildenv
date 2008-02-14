#ifndef _QTCORE_QDIR_H_
#define _QTCORE_QDIR_H_

class QFlags < QDir::Filter >;
// *INDENT-OFF*

typedef class QFlags<QDir::Filter>
{
private:
public:
}Filters	
;

typedef Filters	FilterSpec	
;

typedef class QFlags<QDir::SortFlag>
{
private:
public:
}SortFlags	
;

typedef SortFlags	SortSpec	
;

class QDir
{
private:
public:
     QDir(QDir const&);
     QDir(QString const&);
     QDir(QString const&, QString const&, QFlags<QDir::SortFlag>, QFlags<QDir::Filter>);
     ~QDir();
    QDir & operator=(QDir const&);
    QDir & operator=(QString const&);
    void setPath(QString const&);
    QString path() const;
    QString absolutePath() const;
    QString canonicalPath() const;
    static void addResourceSearchPath(QString const&);
    QString dirName() const;
    QString filePath(QString const&) const;
    QString absoluteFilePath(QString const&) const;
    QString relativeFilePath(QString const&) const;
    static QString convertSeparators(QString const&);
    bool cd(QString const&);
    bool cdUp();
    QStringList nameFilters() const;
    void setNameFilters(QStringList const&);
    QFlags<QDir::Filter> filter() const;
    void setFilter(QFlags<QDir::Filter>);
    QFlags<QDir::SortFlag> sorting() const;
    void setSorting(QFlags<QDir::SortFlag>);
    uint count() const;
    QString operator[](int) const;
    static QStringList nameFiltersFromString(QString const&);
    QStringList entryList(QFlags<QDir::Filter>, QFlags<QDir::SortFlag>) const;
    QStringList entryList(QStringList const&, QFlags<QDir::Filter>, QFlags<QDir::SortFlag>) const;
    QFileInfoList entryInfoList(QFlags<QDir::Filter>, QFlags<QDir::SortFlag>) const;
    QFileInfoList entryInfoList(QStringList const&, QFlags<QDir::Filter>, QFlags<QDir::SortFlag>) const;
    bool mkdir(QString const&) const;
    bool rmdir(QString const&) const;
    bool mkpath(QString const&) const;
    bool rmpath(QString const&) const;
    bool isReadable() const;
    bool exists() const;
    bool isRoot() const;
    static bool isRelativePath(QString const&);
    bool isRelative() const;
    bool makeAbsolute();
    bool operator==(QDir const&) const;
    bool remove(QString const&);
    bool rename(QString const&, QString const&);
    bool exists(QString const&) const;
    static QFileInfoList drives();
    static QChar separator();
    static bool setCurrent(QString const&);
    static QString currentPath();
    static QString homePath();
    static QString rootPath();
    static QString tempPath();
    static bool match(QStringList const&, QString const&);
    static bool match(QString const&, QString const&);
    static QString cleanPath(QString const&);
    void refresh() const;
    bool matchAllDirs() const;
    void setMatchAllDirs(bool);
    QString nameFilter() const;
    void setNameFilter(QString const&);
    static QString toNativeSeparators(QString const&);
    static QString fromNativeSeparators(QString const&);
};

enum Filter	
{
NoFilter = -1,	
DefaultFilter = -1,	
Dirs = 1,	
Files = 2,	
Drives = 4,	
AllEntries = 7,	
All = 7,	
NoSymLinks = 8,	
TypeMask = 15,	
Readable = 16,	
Writable = 32,	
Executable = 64,	
PermissionMask = 112,	
RWEMask = 112,	
Modified = 128,	
Hidden = 256,	
System = 512,	
AccessMask = 1008,	
AllDirs = 1024,	
CaseSensitive = 2048,	
NoDotAndDotDot = 4096
}
;

class QFlags<QDir::Filter>
{
private:
public:
};

enum SortFlag	
{
NoSort = -1,	
DefaultSort = -1,	
Name = 0,	
Time = 1,	
Size = 2,	
Unsorted = 3,	
SortByMask = 3,	
DirsFirst = 4,	
Reversed = 8,	
IgnoreCase = 16,	
DirsLast = 32,	
LocaleAware = 64,	
Type = 128
}
;

class QFlags<QDir::SortFlag>
{
private:
public:
};

// *INDENT-ON*
#endif
