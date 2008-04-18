#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSQL_QSQLQUERY_H_
#define _QTSQL_QSQLQUERY_H_

class QSqlQuery;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QSqlQuery
{
private:
public:
     QSqlQuery(QSqlResult*);
     QSqlQuery(QString const&, QSqlDatabase);
     QSqlQuery(QSqlDatabase);
     QSqlQuery(QSqlQuery const&);
    QSqlQuery & operator=(QSqlQuery const&);
     ~QSqlQuery();
    bool isValid() const;
    bool isActive() const;
    bool isNull(int) const;
    int at() const;
    QString lastQuery() const;
    int numRowsAffected() const;
    QSqlError lastError() const;
    bool isSelect() const;
    int size() const;
    const QSqlDriver * driver() const;
    const QSqlResult * result() const;
    bool isForwardOnly() const;
    QSqlRecord record() const;
    void setForwardOnly(bool);
    bool exec(QString const&);
    QVariant value(int) const;
    bool seek(int, bool);
    bool next();
    bool previous();
    bool first();
    bool last();
    void clear();
    bool exec();
    bool prepare(QString const&);
    static void bindValue(QString const&, QVariant const&, QFlags<QSql::ParamTypeFlag>);
    void bindValue(int, QVariant const&, QFlags<QSql::ParamTypeFlag>);
    void addBindValue(QVariant const&, QFlags<QSql::ParamTypeFlag>);
    QVariant boundValue(QString const&) const;
    QVariant boundValue(int) const;
    QMap<QString, QVariant> boundValues() const;
    QString executedQuery() const;
    QVariant lastInsertId() const;
    bool execBatch(QSqlQuery::BatchExecutionMode);
};

#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
