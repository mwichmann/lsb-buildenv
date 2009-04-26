#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QOBJECT_H_
#define _QTCORE_QOBJECT_H_

class QObjectUserData;
// *INDENT-OFF*

typedef class QList<QObject*>QObjectList	
;

class QObjectData;

class QObject;

class QObjectUserData;


/* Function prototypes */

extern QObject _Z20qt_qFindChild_helperPK7QObjectRK7QStringRK11QMetaObject(const QObject *);
extern void _Z23qt_qFindChildren_helperPK7QObjectRK7QStringPK7QRegExpRK11QMetaObjectP5QListIPvE(const QObject *);
extern struct QMetaObject _ZN7QObject16staticMetaObjectE ;
extern struct QMetaObject _ZN7QObject18staticQtMetaObjectE ;
extern  _Zls6QDebugPK7QObject(const QObject *);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
