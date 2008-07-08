#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QOBJECT_H_
#define _QTCORE_QOBJECT_H_

class QObjectUserData;
// *INDENT-OFF*

typedef QList<QObject*> QObjectList	
;

class QObjectData
{
private:
public:
};

class QObject
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QObject(QObject*);
     ~QObject();
    bool event(QEvent*);
    bool eventFilter(QObject*, QEvent*);
    QString objectName() const;
    void setObjectName(QString const&);
    bool blockSignals(bool);
    QThread * thread() const;
    void moveToThread(QThread*);
    int startTimer(int);
    void killTimer(int);
    QObject * child(char const*, char const*, bool) const;
    _Z11QObjectList queryList(char const*, char const*, bool, bool) const;
    void setParent(QObject*);
    void installEventFilter(QObject*);
    void removeEventFilter(QObject*);
    static bool connect(QObject const*, char const*, QObject const*, char const*, Qt::ConnectionType);
    static bool disconnect(QObject const*, char const*, QObject const*, char const*);
    void dumpObjectTree();
    void dumpObjectInfo();
    bool setProperty(char const*, QVariant const&);
    QVariant property(char const*) const;
    static uint registerUserData();
    void setUserData(unsigned int, QObjectUserData*);
    QObjectUserData * userData(unsigned int) const;
    void deleteLater();
     QObject(QObject*, char const*);
    QList<QByteArray> dynamicPropertyNames() const;
protected:
    void destroyed(QObject*);
    QObject * sender() const;
    int receivers(char const*) const;
    void timerEvent(QTimerEvent*);
    void childEvent(QChildEvent*);
    void customEvent(QEvent*);
    void connectNotify(char const*);
    void disconnectNotify(char const*);
};

class QObjectUserData
{
private:
public:
     ~QObjectUserData();
};


/* Function prototypes */

extern QObject _Z20qt_qFindChild_helperPK7QObjectRK7QStringRK11QMetaObject(const QObject *);
extern void _Z23qt_qFindChildren_helperPK7QObjectRK7QStringPK7QRegExpRK11QMetaObjectP5QListIPvE(const QObject *);
extern struct QMetaObject _ZN7QObject16staticMetaObjectE ;
extern struct QMetaObject _ZN7QObject18staticQtMetaObjectE ;
extern  _Zls6QDebugPK7QObject(const QObject *);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
