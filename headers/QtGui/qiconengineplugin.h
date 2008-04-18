#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QICONENGINEPLUGIN_H_
#define _QTGUI_QICONENGINEPLUGIN_H_

class QIconEnginePlugin;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
struct QIconEngineFactoryInterface	;

class QIconEnginePlugin : public QIconEngineFactoryInterface, public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QIconEnginePlugin(QObject*);
     ~QIconEnginePlugin();
};

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN17QIconEnginePlugin16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
