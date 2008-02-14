#ifndef _QTGUI_QSORTFILTERPROXYMODEL_H_
#define _QTGUI_QSORTFILTERPROXYMODEL_H_

class QSortFilterProxyModel;
// *INDENT-OFF*

class QSortFilterProxyModel : public QAbstractProxyModel
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSortFilterProxyModel(QObject*);
     ~QSortFilterProxyModel();
    void setSourceModel(QAbstractItemModel*);
    QModelIndex mapToSource(QModelIndex const&) const;
    QModelIndex mapFromSource(QModelIndex const&) const;
    QItemSelection mapSelectionToSource(QItemSelection const&) const;
    QItemSelection mapSelectionFromSource(QItemSelection const&) const;
    QRegExp filterRegExp() const;
    void setFilterRegExp(QRegExp const&);
    int filterKeyColumn() const;
    void setFilterKeyColumn(int);
    enum _ZN2Qt15CaseSensitivityE filterCaseSensitivity() const;
    void setFilterCaseSensitivity(Qt::CaseSensitivity);
    void setFilterRegExp(QString const&);
    void setFilterWildcard(QString const&);
    void setFilterFixedString(QString const&);
    void clear();
    QModelIndex index(int, int, QModelIndex const&) const;
    QModelIndex parent(QModelIndex const&) const;
    int rowCount(QModelIndex const&) const;
    int columnCount(QModelIndex const&) const;
    bool hasChildren(QModelIndex const&) const;
    QVariant data(QModelIndex const&, int) const;
    bool setData(QModelIndex const&, QVariant const&, int);
    QVariant headerData(int, Qt::Orientation, int) const;
    bool setHeaderData(int, Qt::Orientation, QVariant const&, int);
    QMimeData * mimeData(QList<QModelIndex> const&) const;
    bool dropMimeData(QMimeData const*, Qt::DropAction, int, int, QModelIndex const&);
    bool insertRows(int, int, QModelIndex const&);
    bool insertColumns(int, int, QModelIndex const&);
    bool removeRows(int, int, QModelIndex const&);
    bool removeColumns(int, int, QModelIndex const&);
    void fetchMore(QModelIndex const&);
    bool canFetchMore(QModelIndex const&) const;
     flags(QModelIndex const&) const;
    QModelIndex buddy(QModelIndex const&) const;
    QModelIndexList match(QModelIndex const&, int, QVariant const&, int, QFlags<Qt::MatchFlag>) const;
    QSize span(QModelIndex const&) const;
    void sort(int, Qt::SortOrder);
    void setSortRole(int);
    void setFilterRole(int);
    void setDynamicSortFilter(bool);
    void setSortCaseSensitivity(Qt::CaseSensitivity);
    int filterRole() const;
    bool dynamicSortFilter() const;
    enum _ZN2Qt15CaseSensitivityE sortCaseSensitivity() const;
     supportedDropActions() const;
    int sortRole() const;
    QStringList mimeTypes() const;
protected:
    bool filterAcceptsRow(int, QModelIndex const&) const;
    bool filterAcceptsColumn(int, QModelIndex const&) const;
    bool lessThan(QModelIndex const&, QModelIndex const&) const;
    void filterChanged();
};


extern struct QMetaObject _ZN21QSortFilterProxyModel16staticMetaObjectE ;
// *INDENT-ON*
#endif
