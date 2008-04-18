#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSTANDARDITEMMODEL_H_
#define _QTGUI_QSTANDARDITEMMODEL_H_

class QStandardItemModel;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QStandardItemModel : public QAbstractItemModel
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QStandardItemModel(QObject*);
     QStandardItemModel(int, int, QObject*);
     ~QStandardItemModel();
    QModelIndex index(int, int, QModelIndex const&) const;
    QModelIndex parent(QModelIndex const&) const;
    int rowCount(QModelIndex const&) const;
    int columnCount(QModelIndex const&) const;
    bool hasChildren(QModelIndex const&) const;
    QVariant data(QModelIndex const&, int) const;
    bool setData(QModelIndex const&, QVariant const&, int);
    QVariant headerData(int, Qt::Orientation, int) const;
    bool setHeaderData(int, Qt::Orientation, QVariant const&, int);
    bool insertRows(int, int, QModelIndex const&);
    bool insertColumns(int, int, QModelIndex const&);
    bool removeRows(int, int, QModelIndex const&);
    bool removeColumns(int, int, QModelIndex const&);
     flags(QModelIndex const&) const;
    void clear();
     QStandardItemModel(QStandardItemModelPrivate&, QObject*);
     takeColumn(int);
    bool setItemData(QModelIndex const&, QMap<int, QVariant> const&);
    void setRowCount(int);
    void setSortRole(int);
    void appendColumn(QList<QStandardItem*> const&);
    void insertColumn(int, QList<QStandardItem*> const&);
    void setColumnCount(int);
    void setItemPrototype(QStandardItem const*);
    void setVerticalHeaderItem(int, QStandardItem*);
    QStandardItem * takeVerticalHeaderItem(int);
    void setHorizontalHeaderItem(int, QStandardItem*);
    void setVerticalHeaderLabels(QStringList const&);
    QStandardItem * takeHorizontalHeaderItem(int);
    void setHorizontalHeaderLabels(QStringList const&);
    void sort(int, Qt::SortOrder);
    void setItem(int, int, QStandardItem*);
     takeRow(int);
    QStandardItem * takeItem(int, int);
    void appendRow(QList<QStandardItem*> const&);
    void insertRow(int, QList<QStandardItem*> const&);
    QModelIndex indexFromItem(QStandardItem const*) const;
    QStandardItem * itemFromIndex(QModelIndex const&) const;
    QStandardItem * * itemPrototype() const;
    QStandardItem * invisibleRootItem() const;
    QStandardItem * verticalHeaderItem(int) const;
    QStandardItem * horizontalHeaderItem(int) const;
     supportedDropActions() const;
    QStandardItem * item(int, int) const;
     itemData(QModelIndex const&) const;
    int sortRole() const;
     findItems(QString const&, QFlags<Qt::MatchFlag>, int) const;
protected:
    void itemChanged(QStandardItem*);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN18QStandardItemModel16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
