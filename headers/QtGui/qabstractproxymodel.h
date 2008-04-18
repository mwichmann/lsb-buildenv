#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QABSTRACTPROXYMODEL_H_
#define _QTGUI_QABSTRACTPROXYMODEL_H_

class QAbstractProxyModel;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
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

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN19QAbstractProxyModel16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
