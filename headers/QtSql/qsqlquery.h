#ifndef _QTSQL_QSQLQUERY_H_
#define _QTSQL_QSQLQUERY_H_

#include <QtCore/qmap.h>
#include <QtCore/qstring.h>
#include <QtCore/qvariant.h>
#include <QtSql/qsqlrecord.h>
#include <QtSql/qsqlresult.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";


    extern Class _ZN9QSqlQueryC2EP10QSqlResult(void);
    extern Class _ZN9QSqlQueryC1EP10QSqlResult(void);
    extern Class _ZN9QSqlQueryC2ERK7QString12QSqlDatabase(void);
    extern Class _ZN9QSqlQueryC1ERK7QString12QSqlDatabase(void);
    extern Class _ZN9QSqlQueryC2E12QSqlDatabase(void);
    extern Class _ZN9QSqlQueryC1E12QSqlDatabase(void);
    extern Class _ZN9QSqlQueryC2ERKS_(void);
    extern Class _ZN9QSqlQueryC1ERKS_(void);
    extern Class _ZN9QSqlQueryaSERKS_(void);
    extern Class _ZN9QSqlQueryD2Ev(void);
    extern Class _ZN9QSqlQueryD1Ev(void);
    extern bool _ZNK9QSqlQuery7isValidEv(void);
    extern bool _ZNK9QSqlQuery8isActiveEv(void);
    extern bool _ZNK9QSqlQuery6isNullEi(void);
    extern int _ZNK9QSqlQuery2atEv(void);
    extern Class _ZNK9QSqlQuery9lastQueryEv(void);
    extern int _ZNK9QSqlQuery15numRowsAffectedEv(void);
    extern _ZNK9QSqlQuery9lastErrorEv(void);
    extern bool _ZNK9QSqlQuery8isSelectEv(void);
    extern int _ZNK9QSqlQuery4sizeEv(void);
    extern _ZNK9QSqlQuery6driverEv(void);
    extern Class _ZNK9QSqlQuery6resultEv(void);
    extern bool _ZNK9QSqlQuery13isForwardOnlyEv(void);
    extern Class _ZNK9QSqlQuery6recordEv(void);
    extern void _ZN9QSqlQuery14setForwardOnlyEb(void);
    extern bool _ZN9QSqlQuery4execERK7QString(void);
    extern Class _ZNK9QSqlQuery5valueEi(void);
    extern bool _ZN9QSqlQuery4seekEib(void);
    extern bool _ZN9QSqlQuery4nextEv(void);
    extern bool _ZN9QSqlQuery8previousEv(void);
    extern bool _ZN9QSqlQuery5firstEv(void);
    extern bool _ZN9QSqlQuery4lastEv(void);
    extern void _ZN9QSqlQuery5clearEv(void);
    extern bool _ZN9QSqlQuery4execEv(void);
    extern bool _ZN9QSqlQuery7prepareERK7QString(void);
    extern void
	_ZN9QSqlQuery9bindValueERK7QStringRK8QVariant6QFlagsIN4QSql13ParamTypeFlagEE
	(void);
    extern void
	_ZN9QSqlQuery9bindValueEiRK8QVariant6QFlagsIN4QSql13ParamTypeFlagEE
	(void);
    extern void
	_ZN9QSqlQuery12addBindValueERK8QVariant6QFlagsIN4QSql13ParamTypeFlagEE
	(void);
    extern Class _ZNK9QSqlQuery10boundValueERK7QString(void);
    extern Class _ZNK9QSqlQuery10boundValueEi(void);
    extern Class _ZNK9QSqlQuery11boundValuesEv(void);
    extern Class _ZNK9QSqlQuery13executedQueryEv(void);
    extern Class _ZNK9QSqlQuery12lastInsertIdEv(void);
#ifdef __cplusplus
}
#endif
#endif
