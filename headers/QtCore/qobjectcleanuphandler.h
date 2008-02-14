#ifndef _QTCORE_QOBJECTCLEANUPHANDLER_H_
#define _QTCORE_QOBJECTCLEANUPHANDLER_H_

class QObjectCleanupHandler;
// *INDENT-OFF*

class QObjectCleanupHandler : public QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QObjectCleanupHandler();
     ~QObjectCleanupHandler();
    QObject * add(QObject*);
    void remove(QObject*);
    bool isEmpty() const;
    void clear();
};


extern struct QMetaObject _ZN21QObjectCleanupHandler16staticMetaObjectE ;
// *INDENT-ON*
#endif
