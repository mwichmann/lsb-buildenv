#ifndef _QTSQL_QSQLDRIVER_H_
#define _QTSQL_QSQLDRIVER_H_

#include <QtCore/qstringlist.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qvariant.h>
#include <QtSql/qsqlrecord.h>
#include <QtSql/qsqlindex.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N10QSqlDriver13DriverFeatureE {
	Transactions,
	QuerySize,
	BLOB,
	Unicode,
	PreparedQueries,
	NamedPlaceholders,
	PositionalPlaceholders,
	LastInsertId,
	BatchOperations
    };

    enum N10QSqlDriver13StatementTypeE {
	WhereStatement,
	SelectStatement,
	UpdateStatement,
	InsertStatement,
	DeleteStatement
    };

    enum N10QSqlDriver14IdentifierTypeE {
	FieldName,
	TableName
    };


    extern struct QMetaObject _ZN10QSqlDriver16staticMetaObjectE;
    extern struct QMetaObject _ZNK10QSqlDriver10metaObjectEv(void);
    extern void _ZN10QSqlDriver11qt_metacastEPKc(void);
    extern int _ZN10QSqlDriver11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN10QSqlDriverC2EP7QObject(void);
    extern Class _ZN10QSqlDriverC1EP7QObject(void);
    extern Class _ZN10QSqlDriverD2Ev(void);
    extern Class _ZN10QSqlDriverD1Ev(void);
    extern Class _ZN10QSqlDriverD0Ev(void);
    extern bool _ZNK10QSqlDriver6isOpenEv(void);
    extern bool _ZNK10QSqlDriver11isOpenErrorEv(void);
    extern bool _ZN10QSqlDriver16beginTransactionEv(void);
    extern bool _ZN10QSqlDriver17commitTransactionEv(void);
    extern bool _ZN10QSqlDriver19rollbackTransactionEv(void);
    extern Class _ZNK10QSqlDriver6tablesEN4QSql9TableTypeE(void);
    extern Class _ZNK10QSqlDriver12primaryIndexERK7QString(void);
    extern Class _ZNK10QSqlDriver6recordERK7QString(void);
    extern Class _ZNK10QSqlDriver11formatValueERK9QSqlFieldb(void);
    extern Class
	_ZNK10QSqlDriver16escapeIdentifierERK7QStringNS_14IdentifierTypeE
	(void);
    extern Class
	_ZNK10QSqlDriver12sqlStatementENS_13StatementTypeERK7QStringRK10QSqlRecordb
	(void);
    extern _ZNK10QSqlDriver9lastErrorEv(void);
    extern Class _ZNK10QSqlDriver6handleEv(void);
    extern void _ZN10QSqlDriver7setOpenEb(void);
    extern void _ZN10QSqlDriver12setOpenErrorEb(void);
    extern void _ZN10QSqlDriver12setLastErrorERK9QSqlError(void);
#ifdef __cplusplus
}
#endif
#endif
