#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QACCESSIBLEPLUGIN_H_
#define _QTGUI_QACCESSIBLEPLUGIN_H_

class QAccessiblePlugin;
// *INDENT-OFF*

struct QAccessibleFactoryInterface	;

class QAccessiblePlugin : public QAccessibleFactoryInterface, public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QAccessiblePlugin(QObject*);
     ~QAccessiblePlugin();
};


/* Function prototypes */

extern struct QMetaObject _ZN17QAccessiblePlugin16staticMetaObjectE ;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
