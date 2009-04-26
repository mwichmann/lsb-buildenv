#if (__LSB_VERSION__ >= 31 )
#ifndef _QTSQL_QSQLERROR_H_
#define _QTSQL_QSQLERROR_H_

class QSqlError;
// *INDENT-OFF*

class QSqlError;

enum _ZN9QSqlError9ErrorTypeE	
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
