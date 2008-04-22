#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QPROXYMODEL_H_
#define _QTGUI_QPROXYMODEL_H_

class QProxyModel;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QProxyModel : public QAbstractItemModel
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QProxyModel(QObject*);
     ~QProxyModel();
    void setModel(QAbstractItemModel*);
    QAbstractItemModel * model() const;
    QModelIndex index(int, int, QModelIndex const&) const;
    QModelIndex parent(QModelIndex const&) const;
    int rowCount(QModelIndex const&) const;
    int columnCount(QModelIndex const&) const;
    bool hasChildren(QModelIndex const&) const;
    QVariant data(QModelIndex const&, int) const;
    bool setData(QModelIndex const&, QVariant const&, int);
    QVariant headerData(int, Qt::Orientation, int) const;
    bool setHeaderData(int, Qt::Orientation, QVariant const&, int);
    QStringList mimeTypes() const;
    QMimeData * mimeData(QList<QModelIndex> const&) const;
    bool dropMimeData(QMimeData const*, Qt::DropAction, int, int, QModelIndex const&);
     supportedDropActions() const;
    bool insertRows(int, int, QModelIndex const&);
    bool insertColumns(int, int, QModelIndex const&);
    void fetchMore(QModelIndex const&);
     flags(QModelIndex const&) const;
    void sort(int, Qt::SortOrder);
    QModelIndexList match(QModelIndex const&, int, QVariant const&, int, QFlags<Qt::MatchFlag>) const;
    QSize span(QModelIndex const&) const;
    bool submit();
    void revert();
     QProxyModel(QProxyModelPrivate&, QObject*);
protected:
    QModelIndex setProxyModel(QModelIndex const&) const;
    QModelIndex setSourceModel(QModelIndex const&) const;
    void connectToModel(QAbstractItemModel const*) const;
    void disconnectFromModel(QAbstractItemModel const*) const;
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN11QProxyModel16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
