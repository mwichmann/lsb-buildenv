#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSTYLEPLUGIN_H_
#define _QTGUI_QSTYLEPLUGIN_H_

class QStylePlugin;
// *INDENT-OFF*

struct QStyleFactoryInterface	;

class QStylePlugin : public QObject, public QStyleFactoryInterface
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QStylePlugin(QObject*);
     ~QStylePlugin();
};


/* Function prototypes */

extern struct QMetaObject _ZN12QStylePlugin16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
