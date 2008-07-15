#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSQL_QSQLRESULT_H_
#define _QTSQL_QSQLRESULT_H_

class QSqlResult;
// *INDENT-OFF*

class QSqlResult
{
private:
public:
     ~QSqlResult();
    QVariant handle() const;
     QSqlResult(QSqlDriver const*);
protected:
    int at() const;
    QString lastQuery() const;
    QSqlError lastError() const;
    bool isValid() const;
    bool isActive() const;
    bool isSelect() const;
    bool isForwardOnly() const;
    const QSqlDriver * driver() const;
    void setAt(int);
    void setActive(bool);
    void setLastError(QSqlError const&);
    void setQuery(QString const&);
    void setSelect(bool);
    void setForwardOnly(bool);
    bool exec();
    bool prepare(QString const&);
    bool savePrepare(QString const&);
    void bindValue(int, QVariant const&, QFlags<QSql::ParamTypeFlag>);
    void bindValue(QString const&, QVariant const&, QFlags<QSql::ParamTypeFlag>);
    void addBindValue(QVariant const&, QFlags<QSql::ParamTypeFlag>);
    QVariant boundValue(QString const&) const;
    QVariant boundValue(int) const;
    QFlags<QSql::ParamTypeFlag> bindValueType(QString const&) const;
    QFlags<QSql::ParamTypeFlag> bindValueType(int) const;
    int boundValueCount() const;
     boundValues() const;
    QString executedQuery() const;
    QString boundValueName(int) const;
    void clear();
    bool hasOutValues() const;
    enum _ZN10QSqlResult13BindingSyntaxE bindingSyntax() const;
    bool fetchNext();
    bool fetchPrevious();
    QSqlRecord record() const;
    QVariant lastInsertId() const;
    void virtual_hook(int, void*);
    bool execBatch(bool);
};

enum BindingSyntax	
{
PositionalBinding = 0,	
BindByPosition = 0,	
NamedBinding = 1,	
BindByName = 1
}
;

enum VirtualHookOperation	
{
BatchOperation = 0
}
;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
