#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QABSTRACTITEMMODEL_H_
#define _QTCORE_QABSTRACTITEMMODEL_H_

class QAbstractListModel;
// *INDENT-OFF*

typedef class QList<QModelIndex>QModelIndexList	
;

class QModelIndex;

class QPersistentModelIndex;

class QAbstractItemModel;

class QAbstractTableModel;

class QAbstractListModel;


/* Function prototypes */

extern struct QMetaObject _ZN18QAbstractItemModel16staticMetaObjectE;
extern struct QMetaObject _ZN18QAbstractListModel16staticMetaObjectE;
extern struct QMetaObject _ZN19QAbstractTableModel16staticMetaObjectE;
extern QDebug operator<<(QDebug, QModelIndex const&)(_Z6QDebug, QModelIndex & &);
extern QDebug operator<<(QDebug, QPersistentModelIndex const&)(_Z6QDebug, QPersistentModelIndex & &);
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
