#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QOBJECTCLEANUPHANDLER_H_
#define _QTCORE_QOBJECTCLEANUPHANDLER_H_

class QObjectCleanupHandler;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
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

#endif // __LSB_VERSION__ >= 3.1


// Function prototypes

#if __LSB_VERSION__ >= 31
extern struct QMetaObject _ZN21QObjectCleanupHandler16staticMetaObjectE ;
#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
