#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QINPUTCONTEXTPLUGIN_H_
#define _QTGUI_QINPUTCONTEXTPLUGIN_H_

class QInputContextPlugin;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
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

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN19QInputContextPlugin16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
