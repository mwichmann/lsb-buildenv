#ifndef _QTGUI_QLISTWIDGET_H_
#define _QTGUI_QLISTWIDGET_H_

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
#include <QtGui/qlistview.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern _ZN15QListWidgetItem18setBackgroundColorERK6QColor(void);
    extern Class _ZN15QListWidgetItemC2EP11QListWidgeti(void);
    extern Class _ZN15QListWidgetItemC1EP11QListWidgeti(void);
    extern Class _ZN15QListWidgetItemC2ERK7QStringP11QListWidgeti(void);
    extern Class _ZN15QListWidgetItemC1ERK7QStringP11QListWidgeti(void);
    extern Class
	_ZN15QListWidgetItemC2ERK5QIconRK7QStringP11QListWidgeti(void);
    extern Class
	_ZN15QListWidgetItemC1ERK5QIconRK7QStringP11QListWidgeti(void);
    extern Class _ZN15QListWidgetItemC2ERKS_(void);
    extern Class _ZN15QListWidgetItemC1ERKS_(void);
    extern Class _ZN15QListWidgetItemD2Ev(void);
    extern Class _ZN15QListWidgetItemD1Ev(void);
    extern Class _ZN15QListWidgetItemD0Ev(void);
    extern Class _ZNK15QListWidgetItem5cloneEv(void);
    extern Class _ZNK15QListWidgetItem4dataEi(void);
    extern void _ZN15QListWidgetItem7setDataEiRK8QVariant(void);
    extern bool _ZNK15QListWidgetItemltERKS_(void);
    extern void _ZN15QListWidgetItem4readER11QDataStream(void);
    extern void _ZNK15QListWidgetItem5writeER11QDataStream(void);
    extern Class _ZN15QListWidgetItemaSERKS_(void);
    extern Class _ZlsR11QDataStreamRK15QListWidgetItem(void);
    extern Class _ZrsR11QDataStreamR15QListWidgetItem(void);
    extern struct QMetaObject _ZN11QListWidget16staticMetaObjectE;
    extern struct QMetaObject _ZNK11QListWidget10metaObjectEv(void);
    extern void _ZN11QListWidget11qt_metacastEPKc(void);
    extern int
	_ZN11QListWidget11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN11QListWidgetC2EP7QWidget(void);
    extern Class _ZN11QListWidgetC1EP7QWidget(void);
    extern Class _ZN11QListWidgetD2Ev(void);
    extern Class _ZN11QListWidgetD1Ev(void);
    extern Class _ZN11QListWidgetD0Ev(void);
    extern Class _ZNK11QListWidget4itemEi(void);
    extern int _ZNK11QListWidget3rowEPK15QListWidgetItem(void);
    extern void _ZN11QListWidget10insertItemEiP15QListWidgetItem(void);
    extern void _ZN11QListWidget10insertItemEiRK7QString(void);
    extern void _ZN11QListWidget11insertItemsEiRK11QStringList(void);
    extern Class _ZN11QListWidget8takeItemEi(void);
    extern int _ZNK11QListWidget5countEv(void);
    extern Class _ZNK11QListWidget11currentItemEv(void);
    extern void _ZN11QListWidget14setCurrentItemEP15QListWidgetItem(void);
    extern int _ZNK11QListWidget10currentRowEv(void);
    extern void _ZN11QListWidget13setCurrentRowEi(void);
    extern Class _ZNK11QListWidget6itemAtERK6QPoint(void);
    extern Class
	_ZNK11QListWidget14visualItemRectEPK15QListWidgetItem(void);
    extern void _ZN11QListWidget9sortItemsEN2Qt9SortOrderE(void);
    extern void _ZN11QListWidget8editItemEP15QListWidgetItem(void);
    extern void
	_ZN11QListWidget20openPersistentEditorEP15QListWidgetItem(void);
    extern void
	_ZN11QListWidget21closePersistentEditorEP15QListWidgetItem(void);
    extern Class _ZNK11QListWidget10itemWidgetEP15QListWidgetItem(void);
    extern void
	_ZN11QListWidget13setItemWidgetEP15QListWidgetItemP7QWidget(void);
    extern bool
	_ZNK11QListWidget14isItemSelectedEPK15QListWidgetItem(void);
    extern void
	_ZN11QListWidget15setItemSelectedEPK15QListWidgetItemb(void);
    extern _ZNK11QListWidget13selectedItemsEv(void);
    extern
	_ZNK11QListWidget9findItemsERK7QString6QFlagsIN2Qt9MatchFlagEE
	(void);
    extern bool _ZNK11QListWidget12isItemHiddenEPK15QListWidgetItem(void);
    extern void _ZN11QListWidget13setItemHiddenEPK15QListWidgetItemb(void);
    extern void
	_ZN11QListWidget12scrollToItemEPK15QListWidgetItemN17QAbstractItemView10ScrollHintE
	(void);
    extern void _ZN11QListWidget5clearEv(void);
    extern void _ZN11QListWidget11itemPressedEP15QListWidgetItem(void);
    extern void _ZN11QListWidget11itemClickedEP15QListWidgetItem(void);
    extern void
	_ZN11QListWidget17itemDoubleClickedEP15QListWidgetItem(void);
    extern void _ZN11QListWidget13itemActivatedEP15QListWidgetItem(void);
    extern void _ZN11QListWidget11itemEnteredEP15QListWidgetItem(void);
    extern void _ZN11QListWidget11itemChangedEP15QListWidgetItem(void);
    extern void
	_ZN11QListWidget18currentItemChangedEP15QListWidgetItemS1_(void);
    extern void _ZN11QListWidget18currentTextChangedERK7QString(void);
    extern void _ZN11QListWidget17currentRowChangedEi(void);
    extern void _ZN11QListWidget20itemSelectionChangedEv(void);
    extern bool _ZN11QListWidget5eventEP6QEvent(void);
    extern Class _ZNK11QListWidget9mimeTypesEv(void);
    extern Class
	_ZNK11QListWidget8mimeDataE5QListIP15QListWidgetItemE(void);
    extern bool
	_ZN11QListWidget12dropMimeDataEiPK9QMimeDataN2Qt10DropActionE
	(void);
    extern N2Qt11DropActionsE
	_ZNK11QListWidget20supportedDropActionsEv(void);
    extern _ZNK11QListWidget5itemsEPK9QMimeData(void);
    extern Class _ZNK11QListWidget13indexFromItemEP15QListWidgetItem(void);
    extern Class _ZNK11QListWidget13itemFromIndexERK11QModelIndex(void);
    extern void _ZN11QListWidget8setModelEP18QAbstractItemModel(void);
#ifdef __cplusplus
}
#endif
#endif
