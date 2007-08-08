#ifndef _QTGUI_QPROXYMODEL_H_
#define _QTGUI_QPROXYMODEL_H_

class QProxyModel;
// *INDENT-OFF*



class QProxyModel : public QAbstractItemModel
{
private:
public:
};


extern struct QMetaObject _ZN11QProxyModel16staticMetaObjectE ;
extern struct QMetaObject _ZNK11QProxyModel10metaObjectEv(void);
extern void _ZN11QProxyModel11qt_metacastEPKc(void);
extern int _ZN11QProxyModel11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QProxyModel _ZN11QProxyModelC2EP7QObject(void);
extern QProxyModel _ZN11QProxyModelC1EP7QObject(void);
extern QProxyModel _ZN11QProxyModelD2Ev(void);
extern QProxyModel _ZN11QProxyModelD1Ev(void);
extern QProxyModel _ZN11QProxyModelD0Ev(void);
extern void _ZN11QProxyModel8setModelEP18QAbstractItemModel(void);
extern QAbstractItemModel _ZNK11QProxyModel5modelEv(void);
extern QModelIndex _ZNK11QProxyModel5indexEiiRK11QModelIndex(void);
extern QModelIndex _ZNK11QProxyModel6parentERK11QModelIndex(void);
extern int _ZNK11QProxyModel8rowCountERK11QModelIndex(void);
extern int _ZNK11QProxyModel11columnCountERK11QModelIndex(void);
extern bool _ZNK11QProxyModel11hasChildrenERK11QModelIndex(void);
extern QVariant _ZNK11QProxyModel4dataERK11QModelIndexi(void);
extern bool _ZN11QProxyModel7setDataERK11QModelIndexRK8QVarianti(void);
extern QVariant _ZNK11QProxyModel10headerDataEiN2Qt11OrientationEi(void);
extern bool _ZN11QProxyModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti(void);
extern QStringList _ZNK11QProxyModel9mimeTypesEv(void);
extern QMimeData _ZNK11QProxyModel8mimeDataERK5QListI11QModelIndexE(void);
extern bool _ZN11QProxyModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void);
extern N2Qt11DropActionsE _ZNK11QProxyModel20supportedDropActionsEv(void);
extern bool _ZN11QProxyModel10insertRowsEiiRK11QModelIndex(void);
extern bool _ZN11QProxyModel13insertColumnsEiiRK11QModelIndex(void);
extern void _ZN11QProxyModel9fetchMoreERK11QModelIndex(void);
extern N2Qt9ItemFlagsE _ZNK11QProxyModel5flagsERK11QModelIndex(void);
extern void _ZN11QProxyModel4sortEiN2Qt9SortOrderE(void);
extern QModelIndexList _ZNK11QProxyModel5matchERK11QModelIndexiRK8QVarianti6QFlagsIN2Qt9MatchFlagEE(void);
extern QSize _ZNK11QProxyModel4spanERK11QModelIndex(void);
extern bool _ZN11QProxyModel6submitEv(void);
extern void _ZN11QProxyModel6revertEv(void);
extern QProxyModel _ZN11QProxyModelC2ER18QProxyModelPrivateP7QObject(void);
extern QProxyModel _ZN11QProxyModelC1ER18QProxyModelPrivateP7QObject(void);
extern QModelIndex _ZNK11QProxyModel13setProxyModelERK11QModelIndex(void);
extern QModelIndex _ZNK11QProxyModel14setSourceModelERK11QModelIndex(void);
extern void _ZNK11QProxyModel14connectToModelEPK18QAbstractItemModel(void);
extern void _ZNK11QProxyModel19disconnectFromModelEPK18QAbstractItemModel(void);
// *INDENT-ON*
#endif
