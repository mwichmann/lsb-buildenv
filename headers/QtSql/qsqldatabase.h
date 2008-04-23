#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSQL_QSQLDATABASE_H_
#define _QTSQL_QSQLDATABASE_H_

class QSqlDriverCreatorBase;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QSqlDriverCreatorBase
{
private:
public:
};

class QSqlDatabase
{
private:
public:
     QSqlDatabase();
     QSqlDatabase(QSqlDatabase const&);
     ~QSqlDatabase();
    QSqlDatabase & operator=(QSqlDatabase const&);
    bool open();
    bool open(QString const&, QString const&);
    void close();
    bool isOpen() const;
    bool isOpenError() const;
    QStringList tables(QSql::TableType) const;
    QSqlIndex primaryIndex(QString const&) const;
    QSqlRecord record(QString const&) const;
    QSqlRecord record(QSqlQuery const&) const;
    QSqlRecord recordInfo(QSqlQuery const&) const;
    QSqlQuery exec(QString const&) const;
    QSqlError lastError() const;
    bool isValid() const;
    bool transaction();
    bool commit();
    bool rollback();
    void setDatabaseName(QString const&);
    void setUserName(QString const&);
    void setPassword(QString const&);
    void setHostName(QString const&);
    void setPort(int);
    void setConnectOptions(QString const&);
    QString databaseName() const;
    QString userName() const;
    QString password() const;
    QString hostName() const;
    QString driverName() const;
    int port() const;
    QString connectOptions() const;
    QSqlDriver * driver() const;
    static QSqlDatabase addDatabase(QString const&, QString const&);
    static QSqlDatabase addDatabase(QSqlDriver*, QString const&);
    static QSqlDatabase cloneDatabase(QSqlDatabase const&, QString const&);
    static QSqlDatabase database(QString const&, bool);
    static void removeDatabase(QString const&);
    static bool contains(QString const&);
    static QStringList drivers();
    static QStringList connectionNames();
    static void registerSqlDriver(QString const&, QSqlDriverCreatorBase*);
    static bool isDriverAvailable(QString const&);
     QSqlDatabase(QString const&);
     QSqlDatabase(QSqlDriver*);
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern char * _ZN12QSqlDatabase17defaultConnectionE ;
extern QDebug _Zls6QDebugRK12QSqlDatabase(_Z6QDebug, QSqlDatabase & &);
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
