#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QICONENGINEPLUGIN_H_
#define _QTGUI_QICONENGINEPLUGIN_H_

class QIconEnginePlugin;
// *INDENT-OFF*

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


/* Function prototypes */

extern struct QMetaObject _ZN17QIconEnginePlugin16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
