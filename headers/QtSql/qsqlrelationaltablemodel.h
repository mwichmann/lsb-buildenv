#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSQL_QSQLRELATIONALTABLEMODEL_H_
#define _QTSQL_QSQLRELATIONALTABLEMODEL_H_

class QSqlRelationalTableModel;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef enum QtValidLicenseForSqlModule	QtSqlModule	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
class QSqlRelation
{
private:
public:
};

class QSqlRelationalTableModel : public QSqlTableModel
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSqlRelationalTableModel(QObject*, QSqlDatabase);
     ~QSqlRelationalTableModel();
    QVariant data(QModelIndex const&, int) const;
    bool setData(QModelIndex const&, QVariant const&, int);
    void clear();
    bool select();
    void setTable(QString const&);
    void setRelation(int, QSqlRelation const&);
    QSqlRelation relation(int) const;
     relationModel(int) const;
    void revertRow(int);
    bool removeColumns(int, int, QModelIndex const&);
protected:
    QString selectStatement() const;
    bool updateRowInTable(int, QSqlRecord const&);
    QString orderByClause() const;
    bool insertRowIntoTable(QSqlRecord const&);
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN24QSqlRelationalTableModel16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
