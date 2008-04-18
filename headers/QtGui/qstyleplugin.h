#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QSTYLEPLUGIN_H_
#define _QTGUI_QSTYLEPLUGIN_H_

class QStylePlugin;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
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

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN12QStylePlugin16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
