#ifndef _QTGUI_QSORTFILTERPROXYMODEL_H_
#define _QTGUI_QSORTFILTERPROXYMODEL_H_

#include <QtCore/qlist.h>
#include <QtCore/qnamespace.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qregexp.h>
#include <QtCore/qvariant.h>
#include <QtCore/qsize.h>
#include <QtCore/qmimedata.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtGui/qitemselectionmodel.h>
#include <QtGui/qabstractproxymodel.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";


    extern struct QMetaObject
	_ZN21QSortFilterProxyModel16staticMetaObjectE;
    extern struct QMetaObject
	_ZNK21QSortFilterProxyModel10metaObjectEv(void);
    extern void _ZN21QSortFilterProxyModel11qt_metacastEPKc(void);
    extern int
	_ZN21QSortFilterProxyModel11qt_metacallEN11QMetaObject4CallEiPPv
	(void);
    extern Class _ZN21QSortFilterProxyModelC2EP7QObject(void);
    extern Class _ZN21QSortFilterProxyModelC1EP7QObject(void);
    extern Class _ZN21QSortFilterProxyModelD2Ev(void);
    extern Class _ZN21QSortFilterProxyModelD1Ev(void);
    extern Class _ZN21QSortFilterProxyModelD0Ev(void);
    extern void
	_ZN21QSortFilterProxyModel14setSourceModelEP18QAbstractItemModel
	(void);
    extern Class
	_ZNK21QSortFilterProxyModel11mapToSourceERK11QModelIndex(void);
    extern Class
	_ZNK21QSortFilterProxyModel13mapFromSourceERK11QModelIndex(void);
    extern Class
	_ZNK21QSortFilterProxyModel20mapSelectionToSourceERK14QItemSelection
	(void);
    extern Class
	_ZNK21QSortFilterProxyModel22mapSelectionFromSourceERK14QItemSelection
	(void);
    extern Class _ZNK21QSortFilterProxyModel12filterRegExpEv(void);
    extern void
	_ZN21QSortFilterProxyModel15setFilterRegExpERK7QRegExp(void);
    extern int _ZNK21QSortFilterProxyModel15filterKeyColumnEv(void);
    extern void _ZN21QSortFilterProxyModel18setFilterKeyColumnEi(void);
    extern enum N2Qt15CaseSensitivityE
	_ZNK21QSortFilterProxyModel21filterCaseSensitivityEv(void);
    extern void
	_ZN21QSortFilterProxyModel24setFilterCaseSensitivityEN2Qt15CaseSensitivityE
	(void);
    extern void
	_ZN21QSortFilterProxyModel15setFilterRegExpERK7QString(void);
    extern void
	_ZN21QSortFilterProxyModel17setFilterWildcardERK7QString(void);
    extern void
	_ZN21QSortFilterProxyModel20setFilterFixedStringERK7QString(void);
    extern void _ZN21QSortFilterProxyModel5clearEv(void);
    extern bool
	_ZNK21QSortFilterProxyModel16filterAcceptsRowEiRK11QModelIndex
	(void);
    extern bool
	_ZNK21QSortFilterProxyModel19filterAcceptsColumnEiRK11QModelIndex
	(void);
    extern bool
	_ZNK21QSortFilterProxyModel8lessThanERK11QModelIndexS2_(void);
    extern Class _ZNK21QSortFilterProxyModel5indexEiiRK11QModelIndex(void);
    extern Class _ZNK21QSortFilterProxyModel6parentERK11QModelIndex(void);
    extern int _ZNK21QSortFilterProxyModel8rowCountERK11QModelIndex(void);
    extern int
	_ZNK21QSortFilterProxyModel11columnCountERK11QModelIndex(void);
    extern bool
	_ZNK21QSortFilterProxyModel11hasChildrenERK11QModelIndex(void);
    extern Class _ZNK21QSortFilterProxyModel4dataERK11QModelIndexi(void);
    extern bool
	_ZN21QSortFilterProxyModel7setDataERK11QModelIndexRK8QVarianti
	(void);
    extern Class
	_ZNK21QSortFilterProxyModel10headerDataEiN2Qt11OrientationEi(void);
    extern bool
	_ZN21QSortFilterProxyModel13setHeaderDataEiN2Qt11OrientationERK8QVarianti
	(void);
    extern Class
	_ZNK21QSortFilterProxyModel8mimeDataERK5QListI11QModelIndexE(void);
    extern bool
	_ZN21QSortFilterProxyModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex
	(void);
    extern bool
	_ZN21QSortFilterProxyModel10insertRowsEiiRK11QModelIndex(void);
    extern bool
	_ZN21QSortFilterProxyModel13insertColumnsEiiRK11QModelIndex(void);
    extern bool
	_ZN21QSortFilterProxyModel10removeRowsEiiRK11QModelIndex(void);
    extern bool
	_ZN21QSortFilterProxyModel13removeColumnsEiiRK11QModelIndex(void);
    extern void _ZN21QSortFilterProxyModel9fetchMoreERK11QModelIndex(void);
    extern bool
	_ZNK21QSortFilterProxyModel12canFetchMoreERK11QModelIndex(void);
    extern N2Qt9ItemFlagsE
	_ZNK21QSortFilterProxyModel5flagsERK11QModelIndex(void);
    extern Class _ZNK21QSortFilterProxyModel5buddyERK11QModelIndex(void);
    extern QModelIndexList
	_ZNK21QSortFilterProxyModel5matchERK11QModelIndexiRK8QVarianti6QFlagsIN2Qt9MatchFlagEE
	(void);
    extern Class _ZNK21QSortFilterProxyModel4spanERK11QModelIndex(void);
    extern void _ZN21QSortFilterProxyModel4sortEiN2Qt9SortOrderE(void);
#ifdef __cplusplus
}
#endif
#endif
