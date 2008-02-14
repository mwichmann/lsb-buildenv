#ifndef _QTGUI_QACCESSIBLEBRIDGE_H_
#define _QTGUI_QACCESSIBLEBRIDGE_H_

class QAccessibleBridgePlugin;
// *INDENT-OFF*

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


extern struct QMetaObject _ZN23QAccessibleBridgePlugin16staticMetaObjectE ;
// *INDENT-ON*
#endif
