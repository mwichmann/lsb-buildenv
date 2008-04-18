#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QACCESSIBLEBRIDGE_H_
#define _QTGUI_QACCESSIBLEBRIDGE_H_

class QAccessibleBridgePlugin;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
class QAccessibleBridge
{
private:
public:
};

struct QAccessibleBridgeFactoryInterface	;

class QAccessibleBridgePlugin : public QAccessibleBridgeFactoryInterface, public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QAccessibleBridgePlugin(QObject*);
     ~QAccessibleBridgePlugin();
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN23QAccessibleBridgePlugin16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
