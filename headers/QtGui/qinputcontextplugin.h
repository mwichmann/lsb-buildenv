#ifndef _QTGUI_QINPUTCONTEXTPLUGIN_H_
#define _QTGUI_QINPUTCONTEXTPLUGIN_H_

class QInputContextPlugin;
// *INDENT-OFF*

struct QInputContextFactoryInterface	;

class QInputContextPlugin : public QInputContextFactoryInterface, public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QInputContextPlugin(QObject*);
     ~QInputContextPlugin();
};


extern struct QMetaObject _ZN19QInputContextPlugin16staticMetaObjectE ;
// *INDENT-ON*
#endif
