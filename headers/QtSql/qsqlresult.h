#ifndef _QTSQL_QSQLRESULT_H_
#define _QTSQL_QSQLRESULT_H_

class QSqlResult;
// *INDENT-OFF*




class QSqlResult
{
private:
public:
};

enum BindingSyntax	
{
PositionalBinding = 0,	
BindByPosition = 0,	
NamedBinding = 1,	
BindByName = 1
}
;

enum VirtualHookOperation	
{
BatchOperation = 0
}
;


extern QSqlResult _ZN10QSqlResultD2Ev(void);
extern QSqlResult _ZN10QSqlResultD1Ev(void);
extern QSqlResult _ZN10QSqlResultD0Ev(void);
extern QVariant _ZNK10QSqlResult6handleEv(void);
extern QSqlResult _ZN10QSqlResultC2EPK10QSqlDriver(void);
extern QSqlResult _ZN10QSqlResultC1EPK10QSqlDriver(void);
extern int _ZNK10QSqlResult2atEv(void);
extern QString _ZNK10QSqlResult9lastQueryEv(void);
extern  _ZNK10QSqlResult9lastErrorEv(void);
extern bool _ZNK10QSqlResult7isValidEv(void);
extern bool _ZNK10QSqlResult8isActiveEv(void);
extern bool _ZNK10QSqlResult8isSelectEv(void);
extern bool _ZNK10QSqlResult13isForwardOnlyEv(void);
extern  _ZNK10QSqlResult6driverEv(void);
extern void _ZN10QSqlResult5setAtEi(void);
extern void _ZN10QSqlResult9setActiveEb(void);
extern void _ZN10QSqlResult12setLastErrorERK9QSqlError(void);
extern void _ZN10QSqlResult8setQueryERK7QString(void);
extern void _ZN10QSqlResult9setSelectEb(void);
extern void _ZN10QSqlResult14setForwardOnlyEb(void);
extern bool _ZN10QSqlResult4execEv(void);
extern bool _ZN10QSqlResult7prepareERK7QString(void);
extern bool _ZN10QSqlResult11savePrepareERK7QString(void);
extern void _ZN10QSqlResult9bindValueEiRK8QVariant6QFlagsIN4QSql13ParamTypeFlagEE(void);
extern void _ZN10QSqlResult9bindValueERK7QStringRK8QVariant6QFlagsIN4QSql13ParamTypeFlagEE(void);
extern void _ZN10QSqlResult12addBindValueERK8QVariant6QFlagsIN4QSql13ParamTypeFlagEE(void);
extern QVariant _ZNK10QSqlResult10boundValueERK7QString(void);
extern QVariant _ZNK10QSqlResult10boundValueEi(void);
extern N4QSql9ParamTypeE _ZNK10QSqlResult13bindValueTypeERK7QString(void);
extern N4QSql9ParamTypeE _ZNK10QSqlResult13bindValueTypeEi(void);
extern int _ZNK10QSqlResult15boundValueCountEv(void);
extern QVector<QVariant> _ZNK10QSqlResult11boundValuesEv(void);
extern QString _ZNK10QSqlResult13executedQueryEv(void);
extern QString _ZNK10QSqlResult14boundValueNameEi(void);
extern void _ZN10QSqlResult5clearEv(void);
extern bool _ZNK10QSqlResult12hasOutValuesEv(void);
extern enum N10QSqlResult13BindingSyntaxE _ZNK10QSqlResult13bindingSyntaxEv(void);
extern bool _ZN10QSqlResult9fetchNextEv(void);
extern bool _ZN10QSqlResult13fetchPreviousEv(void);
extern QSqlRecord _ZNK10QSqlResult6recordEv(void);
extern QVariant _ZNK10QSqlResult12lastInsertIdEv(void);
extern void _ZN10QSqlResult12virtual_hookEiPv(void);
extern bool _ZN10QSqlResult9execBatchEb(void);
// *INDENT-ON*
#endif
