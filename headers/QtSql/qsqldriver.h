#ifndef _QTSQL_QSQLDRIVER_H_
#define _QTSQL_QSQLDRIVER_H_

class QSqlDriver;
// *INDENT-OFF*




class QSqlDriver : public QObject
{
private:
public:
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


extern struct QMetaObject _ZN10QSqlDriver16staticMetaObjectE ;
extern struct QMetaObject _ZNK10QSqlDriver10metaObjectEv(void);
extern void _ZN10QSqlDriver11qt_metacastEPKc(void);
extern int _ZN10QSqlDriver11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QSqlDriver _ZN10QSqlDriverC2EP7QObject(void);
extern QSqlDriver _ZN10QSqlDriverC1EP7QObject(void);
extern QSqlDriver _ZN10QSqlDriverD2Ev(void);
extern QSqlDriver _ZN10QSqlDriverD1Ev(void);
extern QSqlDriver _ZN10QSqlDriverD0Ev(void);
extern bool _ZNK10QSqlDriver6isOpenEv(void);
extern bool _ZNK10QSqlDriver11isOpenErrorEv(void);
extern bool _ZN10QSqlDriver16beginTransactionEv(void);
extern bool _ZN10QSqlDriver17commitTransactionEv(void);
extern bool _ZN10QSqlDriver19rollbackTransactionEv(void);
extern QStringList _ZNK10QSqlDriver6tablesEN4QSql9TableTypeE(void);
extern QSqlIndex _ZNK10QSqlDriver12primaryIndexERK7QString(void);
extern QSqlRecord _ZNK10QSqlDriver6recordERK7QString(void);
extern QString _ZNK10QSqlDriver11formatValueERK9QSqlFieldb(void);
extern QString _ZNK10QSqlDriver16escapeIdentifierERK7QStringNS_14IdentifierTypeE(void);
extern QString _ZNK10QSqlDriver12sqlStatementENS_13StatementTypeERK7QStringRK10QSqlRecordb(void);
extern  _ZNK10QSqlDriver9lastErrorEv(void);
extern QVariant _ZNK10QSqlDriver6handleEv(void);
extern void _ZN10QSqlDriver7setOpenEb(void);
extern void _ZN10QSqlDriver12setOpenErrorEb(void);
extern void _ZN10QSqlDriver12setLastErrorERK9QSqlError(void);
// *INDENT-ON*
#endif
