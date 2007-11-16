#ifndef _QTSQL_QSQLERROR_H_
#define _QTSQL_QSQLERROR_H_

class QSqlError;
// *INDENT-OFF*




class QSqlError
{
private:
public:
};

enum ErrorType	
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


extern QSqlError _ZN9QSqlErrorC2ERK7QStringS2_NS_9ErrorTypeEi(void);
extern QSqlError _ZN9QSqlErrorC1ERK7QStringS2_NS_9ErrorTypeEi(void);
extern QSqlError _ZN9QSqlErrorC2ERKS_(void);
extern QSqlError _ZN9QSqlErrorC1ERKS_(void);
extern QSqlError _ZN9QSqlErroraSERKS_(void);
extern QSqlError _ZN9QSqlErrorD2Ev(void);
extern QSqlError _ZN9QSqlErrorD1Ev(void);
extern QString _ZNK9QSqlError10driverTextEv(void);
extern void _ZN9QSqlError13setDriverTextERK7QString(void);
extern QString _ZNK9QSqlError12databaseTextEv(void);
extern void _ZN9QSqlError15setDatabaseTextERK7QString(void);
extern enum N9QSqlError9ErrorTypeE _ZNK9QSqlError4typeEv(void);
extern void _ZN9QSqlError7setTypeENS_9ErrorTypeE(void);
extern int _ZNK9QSqlError6numberEv(void);
extern void _ZN9QSqlError9setNumberEi(void);
extern QString _ZNK9QSqlError4textEv(void);
extern bool _ZNK9QSqlError7isValidEv(void);
extern QDebug _Zls6QDebugRK9QSqlError(void);
// *INDENT-ON*
#endif
