#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSQL_QSQL_H_
#define _QTSQL_QSQL_H_

class QFlags < QSql::ParamTypeFlag >;
// *INDENT-OFF*

typedef class QFlags<QSql::ParamTypeFlag>QSql::ParamType	
;

enum QSql::Location	
{
AfterLastRow = -2,	
AfterLast = -2,	
BeforeFirstRow = -1,	
BeforeFirst = -1
}
;

enum QSql::ParamTypeFlag	
{
In = 1,	
Out = 2,	
InOut = 3,	
Binary = 4
}
;

class QFlags<QSql::ParamTypeFlag>;

enum QSql::TableType	
{
Tables = 1,	
SystemTables = 2,	
Views = 4,	
AllTables = 255
}
;

enum QSql::Op	
{
None = -1,	
Insert = 0,	
Update = 1,	
Delete = 2
}
;

enum QSql::Confirm	
{
Cancel = -1,	
No = 0,	
Yes = 1
}
;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
