#ifndef _QTGUI_QDIRMODEL_H_
#define _QTGUI_QDIRMODEL_H_

class QFileIconProvider;
// *INDENT-OFF*




class QFileIconProvider
{
private:
public:
};

enum IconType	
{
Computer = 0,	
Desktop = 1,	
Trashcan = 2,	
Network = 3,	
Drive = 4,	
Folder = 5,	
File = 6
}
;

class QDirModel : public QAbstractItemModel
{
private:
public:
};

enum Roles	
{
FileIconRole = 1,	
FilePathRole = 33,	
FileNameRole = 34
}
;


extern QFileIconProvider _ZN17QFileIconProviderC2Ev(void);
extern QFileIconProvider _ZN17QFileIconProviderC1Ev(void);
extern  _ZN17QFileIconProviderD2Ev(void);
extern  _ZN17QFileIconProviderD1Ev(void);
extern  _ZN17QFileIconProviderD0Ev(void);
extern QIcon _ZNK17QFileIconProvider4iconENS_8IconTypeE(void);
extern QIcon _ZNK17QFileIconProvider4iconERK9QFileInfo(void);
extern QString _ZNK17QFileIconProvider4typeERK9QFileInfo(void);
extern struct QMetaObject _ZN9QDirModel16staticMetaObjectE ;
extern struct QMetaObject _ZNK9QDirModel10metaObjectEv(void);
extern void _ZN9QDirModel11qt_metacastEPKc(void);
extern int _ZN9QDirModel11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QDirModel _ZN9QDirModelC2ERK11QStringList6QFlagsIN4QDir6FilterEES3_INS4_8SortFlagEEP7QObject(void);
extern QDirModel _ZN9QDirModelC1ERK11QStringList6QFlagsIN4QDir6FilterEES3_INS4_8SortFlagEEP7QObject(void);
extern QDirModel _ZN9QDirModelC2EP7QObject(void);
extern QDirModel _ZN9QDirModelC1EP7QObject(void);
extern  _ZN9QDirModelD2Ev(void);
extern  _ZN9QDirModelD1Ev(void);
extern  _ZN9QDirModelD0Ev(void);
extern QModelIndex _ZNK9QDirModel5indexEiiRK11QModelIndex(void);
extern QModelIndex _ZNK9QDirModel6parentERK11QModelIndex(void);
extern int _ZNK9QDirModel8rowCountERK11QModelIndex(void);
extern int _ZNK9QDirModel11columnCountERK11QModelIndex(void);
extern QVariant _ZNK9QDirModel4dataERK11QModelIndexi(void);
extern bool _ZN9QDirModel7setDataERK11QModelIndexRK8QVarianti(void);
extern QVariant _ZNK9QDirModel10headerDataEiN2Qt11OrientationEi(void);
extern bool _ZNK9QDirModel11hasChildrenERK11QModelIndex(void);
extern N2Qt9ItemFlagsE _ZNK9QDirModel5flagsERK11QModelIndex(void);
extern void _ZN9QDirModel4sortEiN2Qt9SortOrderE(void);
extern QStringList _ZNK9QDirModel9mimeTypesEv(void);
extern QMimeData _ZNK9QDirModel8mimeDataERK5QListI11QModelIndexE(void);
extern bool _ZN9QDirModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void);
extern N2Qt11DropActionsE _ZNK9QDirModel20supportedDropActionsEv(void);
extern void _ZN9QDirModel15setIconProviderEP17QFileIconProvider(void);
extern QFileIconProvider _ZNK9QDirModel12iconProviderEv(void);
extern void _ZN9QDirModel14setNameFiltersERK11QStringList(void);
extern QStringList _ZNK9QDirModel11nameFiltersEv(void);
extern void _ZN9QDirModel9setFilterE6QFlagsIN4QDir6FilterEE(void);
extern N4QDir7FiltersE _ZNK9QDirModel6filterEv(void);
extern void _ZN9QDirModel10setSortingE6QFlagsIN4QDir8SortFlagEE(void);
extern N4QDir9SortFlagsE _ZNK9QDirModel7sortingEv(void);
extern void _ZN9QDirModel18setResolveSymlinksEb(void);
extern bool _ZNK9QDirModel15resolveSymlinksEv(void);
extern void _ZN9QDirModel11setReadOnlyEb(void);
extern bool _ZNK9QDirModel10isReadOnlyEv(void);
extern void _ZN9QDirModel17setLazyChildCountEb(void);
extern bool _ZNK9QDirModel14lazyChildCountEv(void);
extern void _ZN9QDirModel7refreshERK11QModelIndex(void);
extern QModelIndex _ZNK9QDirModel5indexERK7QStringi(void);
extern bool _ZNK9QDirModel5isDirERK11QModelIndex(void);
extern QModelIndex _ZN9QDirModel5mkdirERK11QModelIndexRK7QString(void);
extern bool _ZN9QDirModel5rmdirERK11QModelIndex(void);
extern bool _ZN9QDirModel6removeERK11QModelIndex(void);
extern QString _ZNK9QDirModel8filePathERK11QModelIndex(void);
extern QString _ZNK9QDirModel8fileNameERK11QModelIndex(void);
extern QIcon _ZNK9QDirModel8fileIconERK11QModelIndex(void);
extern QFileInfo _ZNK9QDirModel8fileInfoERK11QModelIndex(void);
extern QDirModel _ZN9QDirModelC2ER16QDirModelPrivateP7QObject(void);
extern QDirModel _ZN9QDirModelC1ER16QDirModelPrivateP7QObject(void);
// *INDENT-ON*
#endif
