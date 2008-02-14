#ifndef _QTGUI_QABSTRACTPROXYMODEL_H_
#define _QTGUI_QABSTRACTPROXYMODEL_H_

class QAbstractProxyModel;
// *INDENT-OFF*

class QAbstractProxyModel : public QAbstractItemModel
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QAbstractProxyModel(QObject*);
     ~QAbstractProxyModel();
    void setSourceModel(QAbstractItemModel*);
    QAbstractItemModel * sourceModel() const;
    QItemSelection mapSelectionToSource(QItemSelection const&) const;
    QItemSelection mapSelectionFromSource(QItemSelection const&) const;
    bool submit();
    void revert();
     QAbstractProxyModel(QAbstractProxyModelPrivate&, QObject*);
    QVariant headerData(int, Qt::Orientation, int) const;
    QVariant data(QModelIndex const&, int) const;
     flags(QModelIndex const&) const;
};


extern struct QMetaObject _ZN19QAbstractProxyModel16staticMetaObjectE ;
// *INDENT-ON*
#endif
