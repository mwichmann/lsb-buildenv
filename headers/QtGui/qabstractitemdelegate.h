#ifndef _QTGUI_QABSTRACTITEMDELEGATE_H_
#define _QTGUI_QABSTRACTITEMDELEGATE_H_

#include <QtCore/qobjectdefs.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtGui/qwidget.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N21QAbstractItemDelegate11EndEditHintE {
	NoHint,
	EditNextItem,
	EditPreviousItem,
	SubmitModelCache,
	RevertModelCache
    };


    extern struct QMetaObject
	_ZN21QAbstractItemDelegate16staticMetaObjectE;
    extern struct QMetaObject
	_ZNK21QAbstractItemDelegate10metaObjectEv(void);
    extern void _ZN21QAbstractItemDelegate11qt_metacastEPKc(void);
    extern int
	_ZN21QAbstractItemDelegate11qt_metacallEN11QMetaObject4CallEiPPv
	(void);
    extern Class _ZN21QAbstractItemDelegateC2EP7QObject(void);
    extern Class _ZN21QAbstractItemDelegateC1EP7QObject(void);
    extern Class _ZN21QAbstractItemDelegateD2Ev(void);
    extern Class _ZN21QAbstractItemDelegateD1Ev(void);
    extern Class _ZN21QAbstractItemDelegateD0Ev(void);
    extern Class
	_ZNK21QAbstractItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex
	(void);
    extern void
	_ZNK21QAbstractItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex
	(void);
    extern void
	_ZNK21QAbstractItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex
	(void);
    extern void
	_ZNK21QAbstractItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex
	(void);
    extern bool
	_ZN21QAbstractItemDelegate11editorEventEP6QEventP18QAbstractItemModelRK20QStyleOptionViewItemRK11QModelIndex
	(void);
    extern Class
	_ZN21QAbstractItemDelegate10elidedTextERK12QFontMetricsiN2Qt13TextElideModeERK7QString
	(void);
    extern void _ZN21QAbstractItemDelegate10commitDataEP7QWidget(void);
    extern void
	_ZN21QAbstractItemDelegate11closeEditorEP7QWidgetNS_11EndEditHintE
	(void);
    extern Class
	_ZN21QAbstractItemDelegateC2ER14QObjectPrivateP7QObject(void);
    extern Class
	_ZN21QAbstractItemDelegateC1ER14QObjectPrivateP7QObject(void);
#ifdef __cplusplus
}
#endif
#endif
