#ifndef _QTCORE_QTEXTCODECPLUGIN_H_
#define _QTCORE_QTEXTCODECPLUGIN_H_

class QTextCodecPlugin;
// *INDENT-OFF*

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


extern struct QMetaObject _ZN16QTextCodecPlugin16staticMetaObjectE ;
// *INDENT-ON*
#endif
