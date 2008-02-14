#ifndef _QTCORE_QPLUGINLOADER_H_
#define _QTCORE_QPLUGINLOADER_H_

class QPluginLoader;
// *INDENT-OFF*

class QPluginLoader : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QPluginLoader(QObject*);
     QPluginLoader(QString const&, QObject*);
     ~QPluginLoader();
    QObject * instance();
    static _Z11QObjectList staticInstances();
    bool load();
    bool unload();
    bool isLoaded() const;
    void setFileName(QString const&);
    QString fileName() const;
    QString errorString() const;
};


extern struct QMetaObject _ZN13QPluginLoader16staticMetaObjectE ;
// *INDENT-ON*
#endif
