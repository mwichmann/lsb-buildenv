#ifndef _QTSQL_QSQLFIELD_H_
#define _QTSQL_QSQLFIELD_H_

class QSqlField;
// *INDENT-OFF*



class QSqlField
{
private:
public:
};

enum RequiredStatus	
{
Unknown = -1,	
Optional = 0,	
Required = 1
}
;


extern QSqlField _ZN9QSqlFieldC2ERK7QStringN8QVariant4TypeE(void);
extern QSqlField _ZN9QSqlFieldC1ERK7QStringN8QVariant4TypeE(void);
extern QSqlField _ZN9QSqlFieldC2ERKS_(void);
extern QSqlField _ZN9QSqlFieldC1ERKS_(void);
extern QSqlField _ZN9QSqlFieldaSERKS_(void);
extern bool _ZNK9QSqlFieldeqERKS_(void);
extern QSqlField _ZN9QSqlFieldD2Ev(void);
extern QSqlField _ZN9QSqlFieldD1Ev(void);
extern void _ZN9QSqlField8setValueERK8QVariant(void);
extern void _ZN9QSqlField7setNameERK7QString(void);
extern QString _ZNK9QSqlField4nameEv(void);
extern bool _ZNK9QSqlField6isNullEv(void);
extern void _ZN9QSqlField11setReadOnlyEb(void);
extern bool _ZNK9QSqlField10isReadOnlyEv(void);
extern void _ZN9QSqlField5clearEv(void);
extern enum N8QVariant4TypeE _ZNK9QSqlField4typeEv(void);
extern bool _ZNK9QSqlField11isAutoValueEv(void);
extern void _ZN9QSqlField7setTypeEN8QVariant4TypeE(void);
extern void _ZN9QSqlField17setRequiredStatusENS_14RequiredStatusE(void);
extern void _ZN9QSqlField9setLengthEi(void);
extern void _ZN9QSqlField12setPrecisionEi(void);
extern void _ZN9QSqlField15setDefaultValueERK8QVariant(void);
extern void _ZN9QSqlField10setSqlTypeEi(void);
extern void _ZN9QSqlField12setGeneratedEb(void);
extern void _ZN9QSqlField12setAutoValueEb(void);
extern enum N9QSqlField14RequiredStatusE _ZNK9QSqlField14requiredStatusEv(void);
extern int _ZNK9QSqlField6lengthEv(void);
extern int _ZNK9QSqlField9precisionEv(void);
extern QVariant _ZNK9QSqlField12defaultValueEv(void);
extern int _ZNK9QSqlField6typeIDEv(void);
extern bool _ZNK9QSqlField11isGeneratedEv(void);
extern bool _ZNK9QSqlField7isValidEv(void);
extern QDebug _Zls6QDebugRK9QSqlField(void);
// *INDENT-ON*
#endif