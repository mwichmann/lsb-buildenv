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

extern QObject qt_qFindChild_helper(QObject const*, QString const&, QMetaObject const&)(const QObject *);
extern void qt_qFindChildren_helper(QObject const*, QString const&, QRegExp const*, QMetaObject const&, QList<void*>*)(const QObject *);
extern struct QMetaObject _ZN7QObject16staticMetaObjectE;
extern struct QMetaObject _ZN7QObject18staticQtMetaObjectE;
extern 
