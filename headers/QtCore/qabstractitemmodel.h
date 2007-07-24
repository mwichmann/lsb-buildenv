#ifndef _QTCORE_QABSTRACTITEMMODEL_H_
#define _QTCORE_QABSTRACTITEMMODEL_H_

#include <QtCore/qlist.h>
#include <QtCore/qmap.h>
#include <QtCore/qnamespace.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qglobal.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qdebug.h>
#include <QtCore/qvariant.h>
#include <QtCore/qsize.h>
#include <QtCore/qmimedata.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".Class." QModelIndexList;

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern Class _Zls6QDebugRK11QModelIndex(void);
    extern Class _ZN21QPersistentModelIndexC2Ev(void);
    extern Class _ZN21QPersistentModelIndexC1Ev(void);
    extern Class _ZN21QPersistentModelIndexC2ERK11QModelIndex(void);
    extern Class _ZN21QPersistentModelIndexC1ERK11QModelIndex(void);
    extern Class _ZN21QPersistentModelIndexC2ERKS_(void);
    extern Class _ZN21QPersistentModelIndexC1ERKS_(void);
    extern Class _ZN21QPersistentModelIndexD2Ev(void);
    extern Class _ZN21QPersistentModelIndexD1Ev(void);
    extern bool _ZNK21QPersistentModelIndexltERKS_(void);
    extern bool _ZNK21QPersistentModelIndexeqERKS_(void);
    extern Class _ZN21QPersistentModelIndexaSERKS_(void);
    extern bool _ZNK21QPersistentModelIndexeqERK11QModelIndex(void);
    extern bool _ZNK21QPersistentModelIndexneERK11QModelIndex(void);
    extern Class _ZN21QPersistentModelIndexaSERK11QModelIndex(void);
    extern Class _ZNK21QPersistentModelIndexcvRK11QModelIndexEv(void);
    extern int _ZNK21QPersistentModelIndex3rowEv(void);
    extern int _ZNK21QPersistentModelIndex6columnEv(void);
    extern void _ZNK21QPersistentModelIndex15internalPointerEv(void);
    extern qint64 _ZNK21QPersistentModelIndex10internalIdEv(void);
    extern Class _ZNK21QPersistentModelIndex6parentEv(void);
    extern Class _ZNK21QPersistentModelIndex7siblingEii(void);
    extern Class _ZNK21QPersistentModelIndex5childEii(void);
    extern Class _ZNK21QPersistentModelIndex4dataEi(void);
    extern _ZNK21QPersistentModelIndex5modelEv(void);
    extern bool _ZNK21QPersistentModelIndex7isValidEv(void);
    extern Class _Zls6QDebugRK21QPersistentModelIndex(void);
    extern struct QMetaObject _ZN18QAbstractItemModel16staticMetaObjectE;
    extern struct QMetaObject _ZNK18QAbstractItemModel10metaObjectEv(void);
    extern void _ZN18QAbstractItemModel11qt_metacastEPKc(void);
    extern int
	_ZN18QAbstractItemModel11qt_metacallEN11QMetaObject4CallEiPPv
	(void);
    extern Class _ZN18QAbstractItemModelC2EP7QObject(void);
    extern Class _ZN18QAbstractItemModelC1EP7QObject(void);
    extern Class _ZN18QAbstractItemModelD2Ev(void);
    extern Class _ZN18QAbstractItemModelD1Ev(void);
    extern Class _ZN18QAbstractItemModelD0Ev(void);
    extern bool _ZNK18QAbstractItemModel8hasIndexEiiRK11QModelIndex(void);
    extern bool
	_ZNK18QAbstractItemModel11hasChildrenERK11QModelIndex(void);
    extern bool
	_ZN18QAbstractItemModel7setDataERK11QModelIndexRK8QVarianti(void);
    extern Class
	_ZNK18QAbstractItemModel10headerDataEiN2Qt11OrientationEi(void);
    extern bool
	_ZN18QAbstractItemModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti
	(void);
    extern Class _ZNK18QAbstractItemModel8itemDataERK11QModelIndex(void);
    extern bool
	_ZN18QAbstractItemModel11setItemDataERK11QModelIndexRK4QMapIi8QVariantE
	(void);
    extern Class _ZNK18QAbstractItemModel9mimeTypesEv(void);
    extern Class
	_ZNK18QAbstractItemModel8mimeDataERK5QListI11QModelIndexE(void);
    extern bool
	_ZN18QAbstractItemModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex
	(void);
    extern N2Qt11DropActionsE
	_ZNK18QAbstractItemModel20supportedDropActionsEv(void);
    extern bool
	_ZN18QAbstractItemModel10insertRowsEiiRK11QModelIndex(void);
    extern bool
	_ZN18QAbstractItemModel13insertColumnsEiiRK11QModelIndex(void);
    extern bool
	_ZN18QAbstractItemModel10removeRowsEiiRK11QModelIndex(void);
    extern bool
	_ZN18QAbstractItemModel13removeColumnsEiiRK11QModelIndex(void);
    extern void _ZN18QAbstractItemModel9fetchMoreERK11QModelIndex(void);
    extern bool
	_ZNK18QAbstractItemModel12canFetchMoreERK11QModelIndex(void);
    extern N2Qt9ItemFlagsE
	_ZNK18QAbstractItemModel5flagsERK11QModelIndex(void);
    extern void _ZN18QAbstractItemModel4sortEiN2Qt9SortOrderE(void);
    extern Class _ZNK18QAbstractItemModel5buddyERK11QModelIndex(void);
    extern QModelIndexList
	_ZNK18QAbstractItemModel5matchERK11QModelIndexiRK8QVarianti6QFlagsIN2Qt9MatchFlagEE
	(void);
    extern Class _ZNK18QAbstractItemModel4spanERK11QModelIndex(void);
    extern void
	_ZN18QAbstractItemModel11dataChangedERK11QModelIndexS2_(void);
    extern void
	_ZN18QAbstractItemModel17headerDataChangedEN2Qt11OrientationEii
	(void);
    extern void _ZN18QAbstractItemModel13layoutChangedEv(void);
    extern bool _ZN18QAbstractItemModel6submitEv(void);
    extern void _ZN18QAbstractItemModel6revertEv(void);
    extern Class
	_ZN18QAbstractItemModelC2ER25QAbstractItemModelPrivateP7QObject
	(void);
    extern Class
	_ZN18QAbstractItemModelC1ER25QAbstractItemModelPrivateP7QObject
	(void);
    extern void
	_ZNK18QAbstractItemModel10encodeDataERK5QListI11QModelIndexER11QDataStream
	(void);
    extern bool
	_ZN18QAbstractItemModel10decodeDataEiiRK11QModelIndexR11QDataStream
	(void);
    extern void
	_ZN18QAbstractItemModel15beginInsertRowsERK11QModelIndexii(void);
    extern void _ZN18QAbstractItemModel13endInsertRowsEv(void);
    extern void
	_ZN18QAbstractItemModel15beginRemoveRowsERK11QModelIndexii(void);
    extern void _ZN18QAbstractItemModel13endRemoveRowsEv(void);
    extern void
	_ZN18QAbstractItemModel18beginInsertColumnsERK11QModelIndexii
	(void);
    extern void _ZN18QAbstractItemModel16endInsertColumnsEv(void);
    extern void
	_ZN18QAbstractItemModel18beginRemoveColumnsERK11QModelIndexii
	(void);
    extern void _ZN18QAbstractItemModel16endRemoveColumnsEv(void);
    extern void _ZN18QAbstractItemModel5resetEv(void);
    extern void
	_ZN18QAbstractItemModel21changePersistentIndexERK11QModelIndexS2_
	(void);
    extern void
	_ZN18QAbstractItemModel25changePersistentIndexListERK5QListI11QModelIndexES4_
	(void);
    extern struct QMetaObject _ZN19QAbstractTableModel16staticMetaObjectE;
    extern struct QMetaObject
	_ZNK19QAbstractTableModel10metaObjectEv(void);
    extern void _ZN19QAbstractTableModel11qt_metacastEPKc(void);
    extern int
	_ZN19QAbstractTableModel11qt_metacallEN11QMetaObject4CallEiPPv
	(void);
    extern Class _ZN19QAbstractTableModelC2EP7QObject(void);
    extern Class _ZN19QAbstractTableModelC1EP7QObject(void);
    extern Class _ZN19QAbstractTableModelD2Ev(void);
    extern Class _ZN19QAbstractTableModelD1Ev(void);
    extern Class _ZN19QAbstractTableModelD0Ev(void);
    extern Class _ZNK19QAbstractTableModel5indexEiiRK11QModelIndex(void);
    extern bool
	_ZN19QAbstractTableModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex
	(void);
    extern Class
	_ZN19QAbstractTableModelC2ER25QAbstractItemModelPrivateP7QObject
	(void);
    extern Class
	_ZN19QAbstractTableModelC1ER25QAbstractItemModelPrivateP7QObject
	(void);
    extern struct QMetaObject _ZN18QAbstractListModel16staticMetaObjectE;
    extern struct QMetaObject _ZNK18QAbstractListModel10metaObjectEv(void);
    extern void _ZN18QAbstractListModel11qt_metacastEPKc(void);
    extern int
	_ZN18QAbstractListModel11qt_metacallEN11QMetaObject4CallEiPPv
	(void);
    extern Class _ZN18QAbstractListModelC2EP7QObject(void);
    extern Class _ZN18QAbstractListModelC1EP7QObject(void);
    extern Class _ZN18QAbstractListModelD2Ev(void);
    extern Class _ZN18QAbstractListModelD1Ev(void);
    extern Class _ZN18QAbstractListModelD0Ev(void);
    extern Class _ZNK18QAbstractListModel5indexEiiRK11QModelIndex(void);
    extern bool
	_ZN18QAbstractListModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex
	(void);
    extern Class
	_ZN18QAbstractListModelC2ER25QAbstractItemModelPrivateP7QObject
	(void);
    extern Class
	_ZN18QAbstractListModelC1ER25QAbstractItemModelPrivateP7QObject
	(void);
    extern Class _ZNK18QAbstractListModel6parentERK11QModelIndex(void);
    extern bool
	_ZNK18QAbstractListModel11hasChildrenERK11QModelIndex(void);
    extern int _ZNK18QAbstractListModel11columnCountERK11QModelIndex(void);
    extern Class _ZNK19QAbstractTableModel6parentERK11QModelIndex(void);
    extern bool
	_ZNK19QAbstractTableModel11hasChildrenERK11QModelIndex(void);
#ifdef __cplusplus
}
#endif
#endif
