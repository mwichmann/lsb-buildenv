#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSQL_QSQLTABLEMODEL_H_
#define _QTSQL_QSQLTABLEMODEL_H_

class QSqlTableModel;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QSqlTableModel : public QSqlQueryModel
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSqlTableModel(QObject*, QSqlDatabase);
     ~QSqlTableModel();
    bool select();
    void setTable(QString const&);
    QString tableName() const;
     flags(QModelIndex const&) const;
    QVariant data(QModelIndex const&, int) const;
    bool setData(QModelIndex const&, QVariant const&, int);
    QVariant headerData(int, Qt::Orientation, int) const;
    bool isDirty(QModelIndex const&) const;
    void clear();
    void setEditStrategy(QSqlTableModel::EditStrategy);
    enum _ZN14QSqlTableModel12EditStrategyE editStrategy() const;
    QSqlIndex primaryKey() const;
    QSqlDatabase database() const;
    int fieldIndex(QString const&) const;
    void sort(int, Qt::SortOrder);
    void setSort(int, Qt::SortOrder);
    QString filter() const;
    void setFilter(QString const&);
    int rowCount(QModelIndex const&) const;
    bool removeColumns(int, int, QModelIndex const&);
    bool removeRows(int, int, QModelIndex const&);
    bool insertRows(int, int, QModelIndex const&);
    bool insertRecord(int, QSqlRecord const&);
    bool setRecord(int, QSqlRecord const&);
    void revertRow(int);
    bool submit();
    void revert();
    bool submitAll();
    void revertAll();
     QSqlTableModel(QSqlTableModelPrivate&, QObject*, QSqlDatabase);
protected:
    void primeInsert(int, QSqlRecord&);
    void beforeInsert(QSqlRecord&);
    void beforeUpdate(int, QSqlRecord&);
    void beforeDelete(int);
    bool updateRowInTable(int, QSqlRecord const&);
    bool insertRowIntoTable(QSqlRecord const&);
    bool deleteRowFromTable(int);
    QString orderByClause() const;
    QString selectStatement() const;
    void setPrimaryKey(QSqlIndex const&);
    void setQuery(QSqlQuery const&);
    QModelIndex indexInQuery(QModelIndex const&) const;
};

enum EditStrategy	
{
OnFieldChange = 0,	
OnRowChange = 1,	
OnManualSubmit = 2
}
;

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN14QSqlTableModel16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
