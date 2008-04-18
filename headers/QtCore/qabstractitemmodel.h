#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QABSTRACTITEMMODEL_H_
#define _QTCORE_QABSTRACTITEMMODEL_H_

class QAbstractListModel;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef QList<QModelIndex> QModelIndexList	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
class QModelIndex
{
private:
public:
};

class QPersistentModelIndex
{
private:
public:
     QPersistentModelIndex();
     QPersistentModelIndex(QModelIndex const&);
     QPersistentModelIndex(QPersistentModelIndex const&);
     ~QPersistentModelIndex();
    bool operator<(QPersistentModelIndex const&) const;
    bool operator==(QPersistentModelIndex const&) const;
    QPersistentModelIndex & operator=(QPersistentModelIndex const&);
    bool operator==(QModelIndex const&) const;
    bool operator!=(QModelIndex const&) const;
    QPersistentModelIndex & operator=(QModelIndex const&);
    QModelIndex & & operator QModelIndex const&() const;
    int row() const;
    int column() const;
    void * internalPointer() const;
    qint64 internalId() const;
    QModelIndex parent() const;
    QModelIndex sibling(int, int) const;
    QModelIndex child(int, int) const;
    QVariant data(int) const;
    const QAbstractItemModel * model() const;
    bool isValid() const;
     flags() const;
};

class QAbstractItemModel : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QAbstractItemModel(QObject*);
     ~QAbstractItemModel();
    bool hasIndex(int, int, QModelIndex const&) const;
    bool hasChildren(QModelIndex const&) const;
    bool setData(QModelIndex const&, QVariant const&, int);
    QVariant headerData(int, Qt::Orientation, int) const;
    bool setHeaderData(int, Qt::Orientation, QVariant const&, int);
     itemData(QModelIndex const&) const;
    bool setItemData(QModelIndex const&, QMap<int, QVariant> const&);
    QStringList mimeTypes() const;
    QMimeData * mimeData(QList<QModelIndex> const&) const;
    bool dropMimeData(QMimeData const*, Qt::DropAction, int, int, QModelIndex const&);
     supportedDropActions() const;
    bool insertRows(int, int, QModelIndex const&);
    bool insertColumns(int, int, QModelIndex const&);
    bool removeRows(int, int, QModelIndex const&);
    bool removeColumns(int, int, QModelIndex const&);
    void fetchMore(QModelIndex const&);
    bool canFetchMore(QModelIndex const&) const;
     flags(QModelIndex const&) const;
    void sort(int, Qt::SortOrder);
    QModelIndex buddy(QModelIndex const&) const;
    QModelIndexList match(QModelIndex const&, int, QVariant const&, int, QFlags<Qt::MatchFlag>) const;
    QSize span(QModelIndex const&) const;
    bool submit();
    void revert();
     QAbstractItemModel(QAbstractItemModelPrivate&, QObject*);
    void setSupportedDragActions(QFlags<Qt::DropAction>);
     supportedDragActions() const;
protected:
    void dataChanged(QModelIndex const&, QModelIndex const&);
    void headerDataChanged(Qt::Orientation, int, int);
    void layoutChanged();
    void encodeData(QList<QModelIndex> const&, QDataStream&) const;
    bool decodeData(int, int, QModelIndex const&, QDataStream&);
    void beginInsertRows(QModelIndex const&, int, int);
    void endInsertRows();
    void beginRemoveRows(QModelIndex const&, int, int);
    void endRemoveRows();
    void beginInsertColumns(QModelIndex const&, int, int);
    void endInsertColumns();
    void beginRemoveColumns(QModelIndex const&, int, int);
    void endRemoveColumns();
    void reset();
    void changePersistentIndex(QModelIndex const&, QModelIndex const&);
    void changePersistentIndexList(QList<QModelIndex> const&, QList<QModelIndex> const&);
    void layoutAboutToBeChanged();
    QModelIndexList persistentIndexList() const;
};

class QAbstractTableModel : public QAbstractItemModel
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QAbstractTableModel(QObject*);
     ~QAbstractTableModel();
    QModelIndex index(int, int, QModelIndex const&) const;
    bool dropMimeData(QMimeData const*, Qt::DropAction, int, int, QModelIndex const&);
     QAbstractTableModel(QAbstractItemModelPrivate&, QObject*);
private:
    QModelIndex parent(QModelIndex const&) const;
    bool hasChildren(QModelIndex const&) const;
};

class QAbstractListModel : public QAbstractItemModel
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QAbstractListModel(QObject*);
     ~QAbstractListModel();
    QModelIndex index(int, int, QModelIndex const&) const;
    bool dropMimeData(QMimeData const*, Qt::DropAction, int, int, QModelIndex const&);
     QAbstractListModel(QAbstractItemModelPrivate&, QObject*);
private:
    QModelIndex parent(QModelIndex const&) const;
    bool hasChildren(QModelIndex const&) const;
    int columnCount(QModelIndex const&) const;
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN18QAbstractItemModel16staticMetaObjectE ;
extern struct QMetaObject _ZN18QAbstractListModel16staticMetaObjectE ;
extern struct QMetaObject _ZN19QAbstractTableModel16staticMetaObjectE ;
extern QDebug _Zls6QDebugRK11QModelIndex(_Z6QDebug, QModelIndex & &);
extern QDebug _Zls6QDebugRK21QPersistentModelIndex(_Z6QDebug, QPersistentModelIndex & &);
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
