#ifndef _QTCORE_QABSTRACTITEMMODEL_H_
#define _QTCORE_QABSTRACTITEMMODEL_H_

class QAbstractListModel;
// *INDENT-OFF*



typedef QList<QModelIndex> QModelIndexList	
;

class QModelIndex
{
private:
public:
};

class QPersistentModelIndex
{
private:
public:
};

class QAbstractItemModel : public QObject
{
private:
public:
};

class QAbstractTableModel : public QAbstractItemModel
{
private:
public:
};

class QAbstractListModel : public QAbstractItemModel
{
private:
public:
};


extern QDebug _Zls6QDebugRK11QModelIndex(void);
extern QPersistentModelIndex _ZN21QPersistentModelIndexC2Ev(void);
extern QPersistentModelIndex _ZN21QPersistentModelIndexC1Ev(void);
extern QPersistentModelIndex _ZN21QPersistentModelIndexC2ERK11QModelIndex(void);
extern QPersistentModelIndex _ZN21QPersistentModelIndexC1ERK11QModelIndex(void);
extern QPersistentModelIndex _ZN21QPersistentModelIndexC2ERKS_(void);
extern QPersistentModelIndex _ZN21QPersistentModelIndexC1ERKS_(void);
extern QPersistentModelIndex _ZN21QPersistentModelIndexD2Ev(void);
extern QPersistentModelIndex _ZN21QPersistentModelIndexD1Ev(void);
extern bool _ZNK21QPersistentModelIndexltERKS_(void);
extern bool _ZNK21QPersistentModelIndexeqERKS_(void);
extern QPersistentModelIndex _ZN21QPersistentModelIndexaSERKS_(void);
extern bool _ZNK21QPersistentModelIndexeqERK11QModelIndex(void);
extern bool _ZNK21QPersistentModelIndexneERK11QModelIndex(void);
extern QPersistentModelIndex _ZN21QPersistentModelIndexaSERK11QModelIndex(void);
extern QPersistentModelIndex _ZNK21QPersistentModelIndexcvRK11QModelIndexEv(void);
extern int _ZNK21QPersistentModelIndex3rowEv(void);
extern int _ZNK21QPersistentModelIndex6columnEv(void);
extern void _ZNK21QPersistentModelIndex15internalPointerEv(void);
extern qint64 _ZNK21QPersistentModelIndex10internalIdEv(void);
extern QModelIndex _ZNK21QPersistentModelIndex6parentEv(void);
extern QModelIndex _ZNK21QPersistentModelIndex7siblingEii(void);
extern QModelIndex _ZNK21QPersistentModelIndex5childEii(void);
extern QVariant _ZNK21QPersistentModelIndex4dataEi(void);
extern  _ZNK21QPersistentModelIndex5modelEv(void);
extern bool _ZNK21QPersistentModelIndex7isValidEv(void);
extern QDebug _Zls6QDebugRK21QPersistentModelIndex(void);
extern struct QMetaObject _ZN18QAbstractItemModel16staticMetaObjectE ;
extern struct QMetaObject _ZNK18QAbstractItemModel10metaObjectEv(void);
extern void _ZN18QAbstractItemModel11qt_metacastEPKc(void);
extern int _ZN18QAbstractItemModel11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QAbstractItemModel _ZN18QAbstractItemModelC2EP7QObject(void);
extern QAbstractItemModel _ZN18QAbstractItemModelC1EP7QObject(void);
extern QAbstractItemModel _ZN18QAbstractItemModelD2Ev(void);
extern QAbstractItemModel _ZN18QAbstractItemModelD1Ev(void);
extern QAbstractItemModel _ZN18QAbstractItemModelD0Ev(void);
extern bool _ZNK18QAbstractItemModel8hasIndexEiiRK11QModelIndex(void);
extern bool _ZNK18QAbstractItemModel11hasChildrenERK11QModelIndex(void);
extern bool _ZN18QAbstractItemModel7setDataERK11QModelIndexRK8QVarianti(void);
extern QVariant _ZNK18QAbstractItemModel10headerDataEiN2Qt11OrientationEi(void);
extern bool _ZN18QAbstractItemModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti(void);
extern QMap<int, QVariant> _ZNK18QAbstractItemModel8itemDataERK11QModelIndex(void);
extern bool _ZN18QAbstractItemModel11setItemDataERK11QModelIndexRK4QMapIi8QVariantE(void);
extern QStringList _ZNK18QAbstractItemModel9mimeTypesEv(void);
extern QMimeData _ZNK18QAbstractItemModel8mimeDataERK5QListI11QModelIndexE(void);
extern bool _ZN18QAbstractItemModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void);
extern N2Qt11DropActionsE _ZNK18QAbstractItemModel20supportedDropActionsEv(void);
extern bool _ZN18QAbstractItemModel10insertRowsEiiRK11QModelIndex(void);
extern bool _ZN18QAbstractItemModel13insertColumnsEiiRK11QModelIndex(void);
extern bool _ZN18QAbstractItemModel10removeRowsEiiRK11QModelIndex(void);
extern bool _ZN18QAbstractItemModel13removeColumnsEiiRK11QModelIndex(void);
extern void _ZN18QAbstractItemModel9fetchMoreERK11QModelIndex(void);
extern bool _ZNK18QAbstractItemModel12canFetchMoreERK11QModelIndex(void);
extern N2Qt9ItemFlagsE _ZNK18QAbstractItemModel5flagsERK11QModelIndex(void);
extern void _ZN18QAbstractItemModel4sortEiN2Qt9SortOrderE(void);
extern QModelIndex _ZNK18QAbstractItemModel5buddyERK11QModelIndex(void);
extern QModelIndexList _ZNK18QAbstractItemModel5matchERK11QModelIndexiRK8QVarianti6QFlagsIN2Qt9MatchFlagEE(void);
extern QSize _ZNK18QAbstractItemModel4spanERK11QModelIndex(void);
extern void _ZN18QAbstractItemModel11dataChangedERK11QModelIndexS2_(void);
extern void _ZN18QAbstractItemModel17headerDataChangedEN2Qt11OrientationEii(void);
extern void _ZN18QAbstractItemModel13layoutChangedEv(void);
extern bool _ZN18QAbstractItemModel6submitEv(void);
extern void _ZN18QAbstractItemModel6revertEv(void);
extern QAbstractItemModel _ZN18QAbstractItemModelC2ER25QAbstractItemModelPrivateP7QObject(void);
extern QAbstractItemModel _ZN18QAbstractItemModelC1ER25QAbstractItemModelPrivateP7QObject(void);
extern void _ZNK18QAbstractItemModel10encodeDataERK5QListI11QModelIndexER11QDataStream(void);
extern bool _ZN18QAbstractItemModel10decodeDataEiiRK11QModelIndexR11QDataStream(void);
extern void _ZN18QAbstractItemModel15beginInsertRowsERK11QModelIndexii(void);
extern void _ZN18QAbstractItemModel13endInsertRowsEv(void);
extern void _ZN18QAbstractItemModel15beginRemoveRowsERK11QModelIndexii(void);
extern void _ZN18QAbstractItemModel13endRemoveRowsEv(void);
extern void _ZN18QAbstractItemModel18beginInsertColumnsERK11QModelIndexii(void);
extern void _ZN18QAbstractItemModel16endInsertColumnsEv(void);
extern void _ZN18QAbstractItemModel18beginRemoveColumnsERK11QModelIndexii(void);
extern void _ZN18QAbstractItemModel16endRemoveColumnsEv(void);
extern void _ZN18QAbstractItemModel5resetEv(void);
extern void _ZN18QAbstractItemModel21changePersistentIndexERK11QModelIndexS2_(void);
extern void _ZN18QAbstractItemModel25changePersistentIndexListERK5QListI11QModelIndexES4_(void);
extern struct QMetaObject _ZN19QAbstractTableModel16staticMetaObjectE ;
extern struct QMetaObject _ZNK19QAbstractTableModel10metaObjectEv(void);
extern void _ZN19QAbstractTableModel11qt_metacastEPKc(void);
extern int _ZN19QAbstractTableModel11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QAbstractTableModel _ZN19QAbstractTableModelC2EP7QObject(void);
extern QAbstractTableModel _ZN19QAbstractTableModelC1EP7QObject(void);
extern QAbstractTableModel _ZN19QAbstractTableModelD2Ev(void);
extern QAbstractTableModel _ZN19QAbstractTableModelD1Ev(void);
extern QAbstractTableModel _ZN19QAbstractTableModelD0Ev(void);
extern QModelIndex _ZNK19QAbstractTableModel5indexEiiRK11QModelIndex(void);
extern bool _ZN19QAbstractTableModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void);
extern QAbstractTableModel _ZN19QAbstractTableModelC2ER25QAbstractItemModelPrivateP7QObject(void);
extern QAbstractTableModel _ZN19QAbstractTableModelC1ER25QAbstractItemModelPrivateP7QObject(void);
extern struct QMetaObject _ZN18QAbstractListModel16staticMetaObjectE ;
extern struct QMetaObject _ZNK18QAbstractListModel10metaObjectEv(void);
extern void _ZN18QAbstractListModel11qt_metacastEPKc(void);
extern int _ZN18QAbstractListModel11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QAbstractListModel _ZN18QAbstractListModelC2EP7QObject(void);
extern QAbstractListModel _ZN18QAbstractListModelC1EP7QObject(void);
extern QAbstractListModel _ZN18QAbstractListModelD2Ev(void);
extern QAbstractListModel _ZN18QAbstractListModelD1Ev(void);
extern QAbstractListModel _ZN18QAbstractListModelD0Ev(void);
extern QModelIndex _ZNK18QAbstractListModel5indexEiiRK11QModelIndex(void);
extern bool _ZN18QAbstractListModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void);
extern QAbstractListModel _ZN18QAbstractListModelC2ER25QAbstractItemModelPrivateP7QObject(void);
extern QAbstractListModel _ZN18QAbstractListModelC1ER25QAbstractItemModelPrivateP7QObject(void);
extern QModelIndex _ZNK18QAbstractListModel6parentERK11QModelIndex(void);
extern bool _ZNK18QAbstractListModel11hasChildrenERK11QModelIndex(void);
extern int _ZNK18QAbstractListModel11columnCountERK11QModelIndex(void);
extern QModelIndex _ZNK19QAbstractTableModel6parentERK11QModelIndex(void);
extern bool _ZNK19QAbstractTableModel11hasChildrenERK11QModelIndex(void);
// *INDENT-ON*
#endif
