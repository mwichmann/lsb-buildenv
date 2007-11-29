#ifndef _QTCORE_QSOCKETNOTIFIER_H_
#define _QTCORE_QSOCKETNOTIFIER_H_

class QSocketNotifier;
// *INDENT-OFF*




class QSocketNotifier : public QObject
{
private:
public:
};

enum Type	
{
Read = 0,	
Write = 1,	
Exception = 2
}
;


extern struct QMetaObject _ZN15QSocketNotifier16staticMetaObjectE ;
extern struct QMetaObject _ZNK15QSocketNotifier10metaObjectEv(void);
extern void _ZN15QSocketNotifier11qt_metacastEPKc(void);
extern int _ZN15QSocketNotifier11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QSocketNotifier _ZN15QSocketNotifierC2EiNS_4TypeEP7QObject(void);
extern QSocketNotifier _ZN15QSocketNotifierC1EiNS_4TypeEP7QObject(void);
extern QSocketNotifier _ZN15QSocketNotifierC2EiNS_4TypeEP7QObjectPKc(void);
extern QSocketNotifier _ZN15QSocketNotifierC1EiNS_4TypeEP7QObjectPKc(void);
extern  _ZN15QSocketNotifierD2Ev(void);
extern  _ZN15QSocketNotifierD1Ev(void);
extern  _ZN15QSocketNotifierD0Ev(void);
extern void _ZN15QSocketNotifier10setEnabledEb(void);
extern void _ZN15QSocketNotifier9activatedEi(void);
extern bool _ZN15QSocketNotifier5eventEP6QEvent(void);
// *INDENT-ON*
#endif
