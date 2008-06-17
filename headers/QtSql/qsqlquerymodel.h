#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSQL_QSQLQUERYMODEL_H_
#define _QTSQL_QSQLQUERYMODEL_H_

class QSqlQueryModel;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QSqlQueryModel : public QAbstractTableModel
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSqlQueryModel(QObject*);
     ~QSqlQueryModel();
    int rowCount(QModelIndex const&) const;
    int columnCount(QModelIndex const&) const;
    QSqlRecord record(int) const;
    QSqlRecord record() const;
    QVariant data(QModelIndex const&, int) const;
    QVariant headerData(int, Qt::Orientation, int) const;
    bool setHeaderData(int, Qt::Orientation, QVariant const&, int);
    bool insertColumns(int, int, QModelIndex const&);
    bool removeColumns(int, int, QModelIndex const&);
    void setQuery(QSqlQuery const&);
    void setQuery(QString const&, QSqlDatabase const&);
    QSqlQuery query() const;
    void clear();
    QSqlError lastError() const;
    void fetchMore(QModelIndex const&);
    bool canFetchMore(QModelIndex const&) const;
protected:
    void queryChange();
    QModelIndex indexInQuery(QModelIndex const&) const;
    void setLastError(QSqlError const&);
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN14QSqlQueryModel16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
