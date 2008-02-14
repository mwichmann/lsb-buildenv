#ifndef _QTGUI_QSTRINGLISTMODEL_H_
#define _QTGUI_QSTRINGLISTMODEL_H_

class QStringListModel;
// *INDENT-OFF*

class QStringListModel : public QAbstractListModel
{
private:
public:
     ~QStringListModel();
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QStringListModel(QObject*);
     QStringListModel(QStringList const&, QObject*);
    int rowCount(QModelIndex const&) const;
    QVariant data(QModelIndex const&, int) const;
    bool setData(QModelIndex const&, QVariant const&, int);
     flags(QModelIndex const&) const;
    bool insertRows(int, int, QModelIndex const&);
    bool removeRows(int, int, QModelIndex const&);
    void sort(int, Qt::SortOrder);
    QStringList stringList() const;
    void setStringList(QStringList const&);
};


extern struct QMetaObject _ZN16QStringListModel16staticMetaObjectE ;
// *INDENT-ON*
#endif
