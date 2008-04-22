#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QACCESSIBLEPLUGIN_H_
#define _QTGUI_QACCESSIBLEPLUGIN_H_

class QAccessiblePlugin;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
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

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN17QAccessiblePlugin16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
