#ifndef _QTCORE_QOBJECT_H_
#define _QTCORE_QOBJECT_H_

class QObjectUserData;
// *INDENT-OFF*



typedef QList<QObject*> QObjectList	
;

class QObjectData
{
private:
public:
};

class QObject
{
private:
public:
};

class QObjectUserData
{
private:
public:
};


extern struct QMetaObject _ZN7QObject16staticMetaObjectE ;
extern struct QMetaObject _ZNK7QObject10metaObjectEv(void);
extern void _ZN7QObject11qt_metacastEPKc(void);
extern int _ZN7QObject11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QObject _ZN7QObjectC2EPS_(void);
extern QObject _ZN7QObjectC1EPS_(void);
extern QObject _ZN7QObjectD2Ev(void);
extern QObject _ZN7QObjectD1Ev(void);
extern QObject _ZN7QObjectD0Ev(void);
extern bool _ZN7QObject5eventEP6QEvent(void);
extern bool _ZN7QObject11eventFilterEPS_P6QEvent(void);
extern QString _ZNK7QObject10objectNameEv(void);
extern void _ZN7QObject13setObjectNameERK7QString(void);
extern bool _ZN7QObject12blockSignalsEb(void);
extern  _ZNK7QObject6threadEv(void);
extern void _ZN7QObject12moveToThreadEP7QThread(void);
extern int _ZN7QObject10startTimerEi(void);
extern void _ZN7QObject9killTimerEi(void);
extern QObject _ZNK7QObject5childEPKcS1_b(void);
extern _Z11QObjectList _ZNK7QObject9queryListEPKcS1_bb(void);
extern void _ZN7QObject9setParentEPS_(void);
extern void _ZN7QObject18installEventFilterEPS_(void);
extern void _ZN7QObject17removeEventFilterEPS_(void);
extern bool _ZN7QObject7connectEPKS_PKcS1_S3_N2Qt14ConnectionTypeE(void);
extern bool _ZN7QObject10disconnectEPKS_PKcS1_S3_(void);
extern void _ZN7QObject14dumpObjectTreeEv(void);
extern void _ZN7QObject14dumpObjectInfoEv(void);
extern bool _ZN7QObject11setPropertyEPKcRK8QVariant(void);
extern  _ZNK7QObject8propertyEPKc(void);
extern uint _ZN7QObject16registerUserDataEv(void);
extern void _ZN7QObject11setUserDataEjP15QObjectUserData(void);
extern  _ZNK7QObject8userDataEj(void);
extern void _ZN7QObject9destroyedEPS_(void);
extern void _ZN7QObject11deleteLaterEv(void);
extern QObject _ZNK7QObject6senderEv(void);
extern int _ZNK7QObject9receiversEPKc(void);
extern void _ZN7QObject10timerEventEP11QTimerEvent(void);
extern void _ZN7QObject10childEventEP11QChildEvent(void);
extern void _ZN7QObject11customEventEP6QEvent(void);
extern void _ZN7QObject13connectNotifyEPKc(void);
extern void _ZN7QObject16disconnectNotifyEPKc(void);
extern QObject _ZN7QObjectC2EPS_PKc(void);
extern QObject _ZN7QObjectC1EPS_PKc(void);
extern QObject _ZN7QObjectC2ER14QObjectPrivatePS_(void);
extern QObject _ZN7QObjectC1ER14QObjectPrivatePS_(void);
extern struct QMetaObject _ZN7QObject18staticQtMetaObjectE ;
extern QObjectUserData _ZN15QObjectUserDataD2Ev(void);
extern QObjectUserData _ZN15QObjectUserDataD1Ev(void);
extern QObjectUserData _ZN15QObjectUserDataD0Ev(void);
extern void _Z23qt_qFindChildren_helperPK7QObjectRK7QStringPK7QRegExpRK11QMetaObjectP5QListIPvE(void);
extern QObject _Z20qt_qFindChild_helperPK7QObjectRK7QStringRK11QMetaObject(void);
extern  _Zls6QDebugPK7QObject(void);
// *INDENT-ON*
#endif
