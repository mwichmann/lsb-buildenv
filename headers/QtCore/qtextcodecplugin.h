#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QTEXTCODECPLUGIN_H_
#define _QTCORE_QTEXTCODECPLUGIN_H_

class QTextCodecPlugin;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
struct QTextCodecFactoryInterface	;

class QTextCodecPlugin : public QObject, public QTextCodecFactoryInterface
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QTextCodecPlugin(QObject*);
     ~QTextCodecPlugin();
private:
    QStringList keys() const;
    QTextCodec * create(QString const&);
};

#endif /* __LSB_VERSION__ >= 3.1 */


/* Function prototypes */

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN16QTextCodecPlugin16staticMetaObjectE ;
#endif /* __LSB_VERSION__ >= 3.1 */

// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
