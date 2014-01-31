#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSQL_QSQLDRIVER_H_
#define _QTSQL_QSQLDRIVER_H_

class QSqlDriver;
// *INDENT-OFF*

class QSqlDriver;

enum QSqlDriver::DriverFeature	
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

enum QSqlDriver::StatementType	
{
WhereStatement = 0,	
SelectStatement = 1,	
UpdateStatement = 2,	
InsertStatement = 3,	
DeleteStatement = 4
}
;

enum QSqlDriver::IdentifierType	
{
FieldName = 0,	
TableName = 1
}
;


/* Function prototypes */

extern struct QMetaObject _ZN10QSqlDriver16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
