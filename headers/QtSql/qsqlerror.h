#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSQL_QSQLERROR_H_
#define _QTSQL_QSQLERROR_H_

class QSqlError;
// *INDENT-OFF*

class QSqlError
{
private:
public:
     QSqlError(QString const&, QString const&, QSqlError::ErrorType, int);
     QSqlError(QSqlError const&);
    QSqlError & operator=(QSqlError const&);
     ~QSqlError();
    QString driverText() const;
    void setDriverText(QString const&);
    QString databaseText() const;
    void setDatabaseText(QString const&);
    enum _ZN9QSqlError9ErrorTypeE type() const;
    void setType(QSqlError::ErrorType);
    int number() const;
    void setNumber(int);
    QString text() const;
    bool isValid() const;
};

enum ErrorType	
{
NoError = 0,	
None = 0,	
ConnectionError = 1,	
Connection = 1,	
StatementError = 2,	
Statement = 2,	
TransactionError = 3,	
Transaction = 3,	
UnknownError = 4,	
Unknown = 4
}
;


/* Function prototypes */

extern QDebug _Zls6QDebugRK9QSqlError(const QSqlError &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
