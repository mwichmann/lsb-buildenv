#ifndef _QTCORE_QOBJECTDEFS_H_
#define _QTCORE_QOBJECTDEFS_H_

class QGenericReturnArgument;
// *INDENT-OFF*



class QGenericArgument
{
private:
public:
};

class QGenericReturnArgument :  
{
private:
public:
};

struct QMetaObject	;

enum Call	
{
InvokeMetaMethod = 0,	
ReadProperty = 1,	
WriteProperty = 2,	
ResetProperty = 3,	
QueryPropertyDesignable = 4,	
QueryPropertyScriptable = 5,	
QueryPropertyStored = 6,	
QueryPropertyEditable = 7,	
QueryPropertyUser = 8
}
;


extern  _ZNK11QMetaObject4castEP7QObject(void);
extern  _ZNK11QMetaObject2trEPKcS1_(void);
extern  _ZNK11QMetaObject6trUtf8EPKcS1_(void);
extern int _ZNK11QMetaObject12methodOffsetEv(void);
extern int _ZNK11QMetaObject16enumeratorOffsetEv(void);
extern int _ZNK11QMetaObject14propertyOffsetEv(void);
extern int _ZNK11QMetaObject15classInfoOffsetEv(void);
extern int _ZNK11QMetaObject11methodCountEv(void);
extern int _ZNK11QMetaObject15enumeratorCountEv(void);
extern int _ZNK11QMetaObject13propertyCountEv(void);
extern int _ZNK11QMetaObject14classInfoCountEv(void);
extern int _ZNK11QMetaObject13indexOfMethodEPKc(void);
extern int _ZNK11QMetaObject13indexOfSignalEPKc(void);
extern int _ZNK11QMetaObject11indexOfSlotEPKc(void);
extern int _ZNK11QMetaObject17indexOfEnumeratorEPKc(void);
extern int _ZNK11QMetaObject15indexOfPropertyEPKc(void);
extern int _ZNK11QMetaObject16indexOfClassInfoEPKc(void);
extern  _ZNK11QMetaObject6methodEi(void);
extern  _ZNK11QMetaObject10enumeratorEi(void);
extern  _ZNK11QMetaObject8propertyEi(void);
extern  _ZNK11QMetaObject9classInfoEi(void);
extern bool _ZN11QMetaObject16checkConnectArgsEPKcS1_(void);
extern  _ZN11QMetaObject19normalizedSignatureEPKc(void);
extern bool _ZN11QMetaObject7connectEPK7QObjectiS2_iiPi(void);
extern bool _ZN11QMetaObject10disconnectEPK7QObjectiS2_i(void);
extern void _ZN11QMetaObject18connectSlotsByNameEP7QObject(void);
extern void _ZN11QMetaObject8activateEP7QObjectiPPv(void);
extern void _ZN11QMetaObject8activateEP7QObjectiiPPv(void);
extern void _ZN11QMetaObject8activateEP7QObjectPKS_iPPv(void);
extern void _ZN11QMetaObject8activateEP7QObjectPKS_iiPPv(void);
extern void _ZN11QMetaObject8addGuardEPP7QObject(void);
extern void _ZN11QMetaObject11removeGuardEPP7QObject(void);
extern void _ZN11QMetaObject11changeGuardEPP7QObjectS1_(void);
extern bool _ZN11QMetaObject12invokeMethodEP7QObjectPKcN2Qt14ConnectionTypeE22QGenericReturnArgument16QGenericArgumentS7_S7_S7_S7_S7_S7_S7_S7_S7_(void);
// *INDENT-ON*
#endif
