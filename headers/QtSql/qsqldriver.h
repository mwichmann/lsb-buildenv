#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSQL_QSQLDRIVER_H_
#define _QTSQL_QSQLDRIVER_H_

class QSqlDriver;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QSqlDriver : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QSqlDriver(QObject*);
     ~QSqlDriver();
    bool isOpen() const;
    bool isOpenError() const;
    bool beginTransaction();
    bool commitTransaction();
    bool rollbackTransaction();
    QStringList tables(QSql::TableType) const;
    QSqlIndex primaryIndex(QString const&) const;
    QSqlRecord record(QString const&) const;
    QString formatValue(QSqlField const&, bool) const;
    QString escapeIdentifier(QString const&, QSqlDriver::IdentifierType) const;
    QString sqlStatement(QSqlDriver::StatementType, QString const&, QSqlRecord const&, bool) const;
    QSqlError lastError() const;
    QVariant handle() const;
protected:
    void setOpen(bool);
    void setOpenError(bool);
    void setLastError(QSqlError const&);
};

enum DriverFeature	
{
Transactions = 0,	
QuerySize = 1,	
BLOB = 2,	
Unicode = 3,	
PreparedQueries = 4,	
NamedPlaceholders = 5,	
PositionalPlaceholders = 6,	
LastInsertId = 7,	
BatchOperations = 8
}
;

enum StatementType	
{
WhereStatement = 0,	
SelectStatement = 1,	
UpdateStatement = 2,	
InsertStatement = 3,	
DeleteStatement = 4
}
;

enum IdentifierType	
{
FieldName = 0,	
TableName = 1
}
;

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN10QSqlDriver16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
