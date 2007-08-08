#ifndef _QTSQL_QSQL_H_
#define _QTSQL_QSQL_H_

class QFlags < QSql::ParamTypeFlag >;
// *INDENT-OFF*



typedef Unknown Type: ".."
ParamType	
;

enum Location	
{
AfterLastRow,	
AfterLast,	
BeforeFirstRow,	
BeforeFirst
}
;

enum ParamTypeFlag	
{
In,	
Out,	
InOut,	
Binary
}
;

class QFlags<QSql::ParamTypeFlag>
{
private:
public:
};

enum TableType	
{
Tables,	
SystemTables,	
Views,	
AllTables
}
;

enum Op	
{
None,	
Insert,	
Update,	
Delete
}
;

enum Confirm	
{
Cancel,	
No,	
Yes
}
;


// *INDENT-ON*
#endif
