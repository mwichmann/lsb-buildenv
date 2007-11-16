#ifndef _QTCORE_QTHREAD_H_
#define _QTCORE_QTHREAD_H_

class QThread;
// *INDENT-OFF*




class QThread : public QObject
{
private:
public:
};

enum Priority	
{
IdlePriority = 0,	
LowestPriority = 1,	
LowPriority = 2,	
NormalPriority = 3,	
HighPriority = 4,	
HighestPriority = 5,	
TimeCriticalPriority = 6,	
InheritPriority = 7
}
;


extern N2Qt6HANDLEE _ZN7QThread15currentThreadIdEv(void);
extern QThread _ZN7QThread13currentThreadEv(void);
extern QThread _ZN7QThreadC2EP7QObject(void);
extern QThread _ZN7QThreadC1EP7QObject(void);
extern QThread _ZN7QThreadD2Ev(void);
extern QThread _ZN7QThreadD1Ev(void);
extern QThread _ZN7QThreadD0Ev(void);
extern void _ZN7QThread11setPriorityENS_8PriorityE(void);
extern enum N7QThread8PriorityE _ZNK7QThread8priorityEv(void);
extern bool _ZNK7QThread10isFinishedEv(void);
extern bool _ZNK7QThread9isRunningEv(void);
extern void _ZN7QThread12setStackSizeEj(void);
extern uint _ZNK7QThread9stackSizeEv(void);
extern void _ZN7QThread4exitEi(void);
extern void _ZN7QThread5startENS_8PriorityE(void);
extern void _ZN7QThread9terminateEv(void);
extern void _ZN7QThread4quitEv(void);
extern bool _ZN7QThread4waitEm(void);
extern void _ZN7QThread7startedEv(void);
extern void _ZN7QThread8finishedEv(void);
extern void _ZN7QThread10terminatedEv(void);
extern int _ZN7QThread4execEv(void);
extern void _ZN7QThread21setTerminationEnabledEb(void);
extern void _ZN7QThread5sleepEm(void);
extern void _ZN7QThread6msleepEm(void);
extern void _ZN7QThread6usleepEm(void);
extern struct QMetaObject _ZN7QThread16staticMetaObjectE ;
extern struct QMetaObject _ZNK7QThread10metaObjectEv(void);
extern void _ZN7QThread11qt_metacastEPKc(void);
extern int _ZN7QThread11qt_metacallEN11QMetaObject4CallEiPPv(void);
// *INDENT-ON*
#endif
