#ifndef _QTGUI_QTABLEWIDGET_H_
#define _QTGUI_QTABLEWIDGET_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qdatastream.h>
#include <QtCore/qvariant.h>
#include <QtCore/qrect.h>
#include <QtCore/qmimedata.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtGui/qwidget.h>
#include <QtGui/qabstractscrollarea.h>
#include <QtGui/qabstractitemview.h>
#include <QtGui/qtableview.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern Class _ZN26QTableWidgetSelectionRangeC2Ev(void);
    extern Class _ZN26QTableWidgetSelectionRangeC1Ev(void);
    extern Class _ZN26QTableWidgetSelectionRangeC2Eiiii(void);
    extern Class _ZN26QTableWidgetSelectionRangeC1Eiiii(void);
    extern Class _ZN26QTableWidgetSelectionRangeC2ERKS_(void);
    extern Class _ZN26QTableWidgetSelectionRangeC1ERKS_(void);
    extern Class _ZN26QTableWidgetSelectionRangeD2Ev(void);
    extern Class _ZN26QTableWidgetSelectionRangeD1Ev(void);
    extern Class _ZN16QTableWidgetItemC2Ei(void);
    extern Class _ZN16QTableWidgetItemC1Ei(void);
    extern Class _ZN16QTableWidgetItemC2ERK7QStringi(void);
    extern Class _ZN16QTableWidgetItemC1ERK7QStringi(void);
    extern Class _ZN16QTableWidgetItemC2ERKS_(void);
    extern Class _ZN16QTableWidgetItemC1ERKS_(void);
    extern Class _ZN16QTableWidgetItemD2Ev(void);
    extern Class _ZN16QTableWidgetItemD1Ev(void);
    extern Class _ZN16QTableWidgetItemD0Ev(void);
    extern Class _ZNK16QTableWidgetItem5cloneEv(void);
    extern Class _ZNK16QTableWidgetItem4dataEi(void);
    extern void _ZN16QTableWidgetItem7setDataEiRK8QVariant(void);
    extern bool _ZNK16QTableWidgetItemltERKS_(void);
    extern void _ZN16QTableWidgetItem4readER11QDataStream(void);
    extern void _ZNK16QTableWidgetItem5writeER11QDataStream(void);
    extern Class _ZN16QTableWidgetItemaSERKS_(void);
    extern Class _ZrsR11QDataStreamR16QTableWidgetItem(void);
    extern Class _ZlsR11QDataStreamRK16QTableWidgetItem(void);
    extern struct QMetaObject _ZN12QTableWidget16staticMetaObjectE;
    extern struct QMetaObject _ZNK12QTableWidget10metaObjectEv(void);
    extern void _ZN12QTableWidget11qt_metacastEPKc(void);
    extern int
	_ZN12QTableWidget11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN12QTableWidgetC2EP7QWidget(void);
    extern Class _ZN12QTableWidgetC1EP7QWidget(void);
    extern Class _ZN12QTableWidgetC2EiiP7QWidget(void);
    extern Class _ZN12QTableWidgetC1EiiP7QWidget(void);
    extern Class _ZN12QTableWidgetD2Ev(void);
    extern Class _ZN12QTableWidgetD1Ev(void);
    extern Class _ZN12QTableWidgetD0Ev(void);
    extern void _ZN12QTableWidget11setRowCountEi(void);
    extern int _ZNK12QTableWidget8rowCountEv(void);
    extern void _ZN12QTableWidget14setColumnCountEi(void);
    extern int _ZNK12QTableWidget11columnCountEv(void);
    extern int _ZNK12QTableWidget3rowEPK16QTableWidgetItem(void);
    extern int _ZNK12QTableWidget6columnEPK16QTableWidgetItem(void);
    extern Class _ZNK12QTableWidget4itemEii(void);
    extern void _ZN12QTableWidget7setItemEiiP16QTableWidgetItem(void);
    extern Class _ZN12QTableWidget8takeItemEii(void);
    extern Class _ZNK12QTableWidget18verticalHeaderItemEi(void);
    extern void
	_ZN12QTableWidget21setVerticalHeaderItemEiP16QTableWidgetItem
	(void);
    extern Class _ZN12QTableWidget22takeVerticalHeaderItemEi(void);
    extern Class _ZNK12QTableWidget20horizontalHeaderItemEi(void);
    extern void
	_ZN12QTableWidget23setHorizontalHeaderItemEiP16QTableWidgetItem
	(void);
    extern Class _ZN12QTableWidget24takeHorizontalHeaderItemEi(void);
    extern void
	_ZN12QTableWidget23setVerticalHeaderLabelsERK11QStringList(void);
    extern void
	_ZN12QTableWidget25setHorizontalHeaderLabelsERK11QStringList(void);
    extern int _ZNK12QTableWidget10currentRowEv(void);
    extern int _ZNK12QTableWidget13currentColumnEv(void);
    extern Class _ZNK12QTableWidget11currentItemEv(void);
    extern void
	_ZN12QTableWidget14setCurrentItemEP16QTableWidgetItem(void);
    extern void _ZN12QTableWidget14setCurrentCellEii(void);
    extern void _ZN12QTableWidget9sortItemsEiN2Qt9SortOrderE(void);
    extern void _ZN12QTableWidget17setSortingEnabledEb(void);
    extern bool _ZNK12QTableWidget16isSortingEnabledEv(void);
    extern void _ZN12QTableWidget8editItemEP16QTableWidgetItem(void);
    extern void
	_ZN12QTableWidget20openPersistentEditorEP16QTableWidgetItem(void);
    extern void
	_ZN12QTableWidget21closePersistentEditorEP16QTableWidgetItem(void);
    extern Class _ZNK12QTableWidget10cellWidgetEii(void);
    extern void _ZN12QTableWidget13setCellWidgetEiiP7QWidget(void);
    extern bool
	_ZNK12QTableWidget14isItemSelectedEPK16QTableWidgetItem(void);
    extern void
	_ZN12QTableWidget15setItemSelectedEPK16QTableWidgetItemb(void);
    extern void
	_ZN12QTableWidget16setRangeSelectedERK26QTableWidgetSelectionRangeb
	(void);
    extern _ZNK12QTableWidget14selectedRangesEv(void);
    extern _ZN12QTableWidget13selectedItemsEv(void);
    extern
	_ZNK12QTableWidget9findItemsERK7QString6QFlagsIN2Qt9MatchFlagEE
	(void);
    extern int _ZNK12QTableWidget9visualRowEi(void);
    extern int _ZNK12QTableWidget12visualColumnEi(void);
    extern Class _ZNK12QTableWidget6itemAtERK6QPoint(void);
    extern Class
	_ZNK12QTableWidget14visualItemRectEPK16QTableWidgetItem(void);
    extern Class _ZNK12QTableWidget13itemPrototypeEv(void);
    extern void
	_ZN12QTableWidget16setItemPrototypeEPK16QTableWidgetItem(void);
    extern void
	_ZN12QTableWidget12scrollToItemEPK16QTableWidgetItemN17QAbstractItemView10ScrollHintE
	(void);
    extern void _ZN12QTableWidget9insertRowEi(void);
    extern void _ZN12QTableWidget12insertColumnEi(void);
    extern void _ZN12QTableWidget9removeRowEi(void);
    extern void _ZN12QTableWidget12removeColumnEi(void);
    extern void _ZN12QTableWidget5clearEv(void);
    extern void _ZN12QTableWidget11itemPressedEP16QTableWidgetItem(void);
    extern void _ZN12QTableWidget11itemClickedEP16QTableWidgetItem(void);
    extern void
	_ZN12QTableWidget17itemDoubleClickedEP16QTableWidgetItem(void);
    extern void _ZN12QTableWidget13itemActivatedEP16QTableWidgetItem(void);
    extern void _ZN12QTableWidget11itemEnteredEP16QTableWidgetItem(void);
    extern void _ZN12QTableWidget11itemChangedEP16QTableWidgetItem(void);
    extern void
	_ZN12QTableWidget18currentItemChangedEP16QTableWidgetItemS1_(void);
    extern void _ZN12QTableWidget20itemSelectionChangedEv(void);
    extern void _ZN12QTableWidget11cellPressedEii(void);
    extern void _ZN12QTableWidget11cellClickedEii(void);
    extern void _ZN12QTableWidget17cellDoubleClickedEii(void);
    extern void _ZN12QTableWidget13cellActivatedEii(void);
    extern void _ZN12QTableWidget11cellEnteredEii(void);
    extern void _ZN12QTableWidget11cellChangedEii(void);
    extern void _ZN12QTableWidget18currentCellChangedEiiii(void);
    extern bool _ZN12QTableWidget5eventEP6QEvent(void);
    extern Class _ZNK12QTableWidget9mimeTypesEv(void);
    extern Class
	_ZNK12QTableWidget8mimeDataE5QListIP16QTableWidgetItemE(void);
    extern bool
	_ZN12QTableWidget12dropMimeDataEiiPK9QMimeDataN2Qt10DropActionE
	(void);
    extern N2Qt11DropActionsE
	_ZNK12QTableWidget20supportedDropActionsEv(void);
    extern _ZNK12QTableWidget5itemsEPK9QMimeData(void);
    extern Class
	_ZNK12QTableWidget13indexFromItemEP16QTableWidgetItem(void);
    extern Class _ZNK12QTableWidget13itemFromIndexERK11QModelIndex(void);
    extern void _ZN12QTableWidget8setModelEP18QAbstractItemModel(void);
#ifdef __cplusplus
}
#endif
#endif
