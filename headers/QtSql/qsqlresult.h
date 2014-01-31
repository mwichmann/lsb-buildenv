#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSQL_QSQLRESULT_H_
#define _QTSQL_QSQLRESULT_H_

class QSqlResult;
// *INDENT-OFF*

class QSqlResult;

enum QSqlResult::BindingSyntax	
{
PositionalBinding = 0,	
BindByPosition = 0,	
NamedBinding = 1,	
BindByName = 1
}
;

enum QSqlResult::VirtualHookOperation	
{
BatchOperation = 0
}
;

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
