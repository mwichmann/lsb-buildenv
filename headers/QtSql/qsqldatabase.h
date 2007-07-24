#ifndef _QTSQL_QSQLDATABASE_H_
#define _QTSQL_QSQLDATABASE_H_

#include <QtCore/qstringlist.h>
#include <QtCore/qstring.h>
#include <QtCore/qdebug.h>
#include <QtSql/qsqlrecord.h>
#include <QtSql/qsqlindex.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern Class _ZN12QSqlDatabaseC2Ev(void);
    extern Class _ZN12QSqlDatabaseC1Ev(void);
    extern Class _ZN12QSqlDatabaseC2ERKS_(void);
    extern Class _ZN12QSqlDatabaseC1ERKS_(void);
    extern Class _ZN12QSqlDatabaseD2Ev(void);
    extern Class _ZN12QSqlDatabaseD1Ev(void);
    extern Class _ZN12QSqlDatabaseaSERKS_(void);
    extern bool _ZN12QSqlDatabase4openEv(void);
    extern bool _ZN12QSqlDatabase4openERK7QStringS2_(void);
    extern void _ZN12QSqlDatabase5closeEv(void);
    extern bool _ZNK12QSqlDatabase6isOpenEv(void);
    extern bool _ZNK12QSqlDatabase11isOpenErrorEv(void);
    extern Class _ZNK12QSqlDatabase6tablesEN4QSql9TableTypeE(void);
    extern Class _ZNK12QSqlDatabase12primaryIndexERK7QString(void);
    extern Class _ZNK12QSqlDatabase6recordERK7QString(void);
    extern Class _ZNK12QSqlDatabase6recordERK9QSqlQuery(void);
    extern Class _ZNK12QSqlDatabase10recordInfoERK9QSqlQuery(void);
    extern _ZNK12QSqlDatabase4execERK7QString(void);
    extern _ZNK12QSqlDatabase9lastErrorEv(void);
    extern bool _ZNK12QSqlDatabase7isValidEv(void);
    extern bool _ZN12QSqlDatabase11transactionEv(void);
    extern bool _ZN12QSqlDatabase6commitEv(void);
    extern bool _ZN12QSqlDatabase8rollbackEv(void);
    extern void _ZN12QSqlDatabase15setDatabaseNameERK7QString(void);
    extern void _ZN12QSqlDatabase11setUserNameERK7QString(void);
    extern void _ZN12QSqlDatabase11setPasswordERK7QString(void);
    extern void _ZN12QSqlDatabase11setHostNameERK7QString(void);
    extern void _ZN12QSqlDatabase7setPortEi(void);
    extern void _ZN12QSqlDatabase17setConnectOptionsERK7QString(void);
    extern Class _ZNK12QSqlDatabase12databaseNameEv(void);
    extern Class _ZNK12QSqlDatabase8userNameEv(void);
    extern Class _ZNK12QSqlDatabase8passwordEv(void);
    extern Class _ZNK12QSqlDatabase8hostNameEv(void);
    extern Class _ZNK12QSqlDatabase10driverNameEv(void);
    extern int _ZNK12QSqlDatabase4portEv(void);
    extern Class _ZNK12QSqlDatabase14connectOptionsEv(void);
    extern _ZNK12QSqlDatabase6driverEv(void);
    extern char *_ZN12QSqlDatabase17defaultConnectionE;
    extern Class _ZN12QSqlDatabase11addDatabaseERK7QStringS2_(void);
    extern Class
	_ZN12QSqlDatabase11addDatabaseEP10QSqlDriverRK7QString(void);
    extern Class _ZN12QSqlDatabase13cloneDatabaseERKS_RK7QString(void);
    extern Class _ZN12QSqlDatabase8databaseERK7QStringb(void);
    extern void _ZN12QSqlDatabase14removeDatabaseERK7QString(void);
    extern bool _ZN12QSqlDatabase8containsERK7QString(void);
    extern Class _ZN12QSqlDatabase7driversEv(void);
    extern Class _ZN12QSqlDatabase15connectionNamesEv(void);
    extern void
	_ZN12QSqlDatabase17registerSqlDriverERK7QStringP21QSqlDriverCreatorBase
	(void);
    extern bool _ZN12QSqlDatabase17isDriverAvailableERK7QString(void);
    extern Class _ZN12QSqlDatabaseC2ERK7QString(void);
    extern Class _ZN12QSqlDatabaseC1ERK7QString(void);
    extern Class _ZN12QSqlDatabaseC2EP10QSqlDriver(void);
    extern Class _ZN12QSqlDatabaseC1EP10QSqlDriver(void);
    extern Class _Zls6QDebugRK12QSqlDatabase(void);
#ifdef __cplusplus
}
#endif
#endif
