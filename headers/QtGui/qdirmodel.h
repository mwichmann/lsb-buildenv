#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QDIRMODEL_H_
#define _QTGUI_QDIRMODEL_H_

class QFileIconProvider;
// *INDENT-OFF*

class QFileIconProvider
{
private:
public:
     QFileIconProvider();
     ~QFileIconProvider();
    QIcon icon(QFileIconProvider::IconType) const;
    QIcon icon(QFileInfo const&) const;
    QString type(QFileInfo const&) const;
};

enum IconType	
{
Computer = 0,	
Desktop = 1,	
Trashcan = 2,	
Network = 3,	
Drive = 4,	
Folder = 5,	
File = 6
}
;

class QDirModel : public QAbstractItemModel
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QDirModel(QStringList const&, QFlags<QDir::Filter>, QFlags<QDir::SortFlag>, QObject*);
     QDirModel(QObject*);
     ~QDirModel();
    QModelIndex index(int, int, QModelIndex const&) const;
    QModelIndex parent(QModelIndex const&) const;
    int rowCount(QModelIndex const&) const;
    int columnCount(QModelIndex const&) const;
    QVariant data(QModelIndex const&, int) const;
    bool setData(QModelIndex const&, QVariant const&, int);
    QVariant headerData(int, Qt::Orientation, int) const;
    bool hasChildren(QModelIndex const&) const;
     flags(QModelIndex const&) const;
    void sort(int, Qt::SortOrder);
    QStringList mimeTypes() const;
    QMimeData * mimeData(QList<QModelIndex> const&) const;
    bool dropMimeData(QMimeData const*, Qt::DropAction, int, int, QModelIndex const&);
     supportedDropActions() const;
    void setIconProvider(QFileIconProvider*);
    QFileIconProvider * iconProvider() const;
    void setNameFilters(QStringList const&);
    QStringList nameFilters() const;
    void setFilter(QFlags<QDir::Filter>);
    QFlags<QDir::Filter> filter() const;
    void setSorting(QFlags<QDir::SortFlag>);
    QFlags<QDir::SortFlag> sorting() const;
    void setResolveSymlinks(bool);
    bool resolveSymlinks() const;
    void setReadOnly(bool);
    bool isReadOnly() const;
    void setLazyChildCount(bool);
    bool lazyChildCount() const;
    void refresh(QModelIndex const&);
    QModelIndex index(QString const&, int) const;
    bool isDir(QModelIndex const&) const;
    QModelIndex mkdir(QModelIndex const&, QString const&);
    bool rmdir(QModelIndex const&);
    bool remove(QModelIndex const&);
    QString filePath(QModelIndex const&) const;
    QString fileName(QModelIndex const&) const;
    QIcon fileIcon(QModelIndex const&) const;
    QFileInfo fileInfo(QModelIndex const&) const;
};

enum Roles	
{
FileIconRole = 1,	
FilePathRole = 33,	
FileNameRole = 34
}
;


/* Function prototypes */

extern struct QMetaObject _ZN9QDirModel16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
