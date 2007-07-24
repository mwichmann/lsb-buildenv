#ifndef _QTGUI_QITEMDELEGATE_H_
#define _QTGUI_QITEMDELEGATE_H_

#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qsize.h>
#include <QtCore/qrect.h>
#include <QtGui/qpaintdevice.h>
#include <QtGui/qwidget.h>
#include <QtGui/qpixmap.h>
#include <QtGui/qabstractitemdelegate.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";


    extern struct QMetaObject _ZN13QItemDelegate16staticMetaObjectE;
    extern struct QMetaObject _ZNK13QItemDelegate10metaObjectEv(void);
    extern void _ZN13QItemDelegate11qt_metacastEPKc(void);
    extern int
	_ZN13QItemDelegate11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN13QItemDelegateC2EP7QObject(void);
    extern Class _ZN13QItemDelegateC1EP7QObject(void);
    extern Class _ZN13QItemDelegateD2Ev(void);
    extern Class _ZN13QItemDelegateD1Ev(void);
    extern Class _ZN13QItemDelegateD0Ev(void);
    extern void
	_ZNK13QItemDelegate5paintEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex
	(void);
    extern Class
	_ZNK13QItemDelegate8sizeHintERK20QStyleOptionViewItemRK11QModelIndex
	(void);
    extern Class
	_ZNK13QItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex
	(void);
    extern void
	_ZNK13QItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex(void);
    extern void
	_ZNK13QItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex
	(void);
    extern void
	_ZNK13QItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex
	(void);
    extern _ZNK13QItemDelegate17itemEditorFactoryEv(void);
    extern void
	_ZN13QItemDelegate20setItemEditorFactoryEP18QItemEditorFactory
	(void);
    extern void
	_ZNK13QItemDelegate11drawDisplayEP8QPainterRK20QStyleOptionViewItemRK5QRectRK7QString
	(void);
    extern void
	_ZNK13QItemDelegate14drawDecorationEP8QPainterRK20QStyleOptionViewItemRK5QRectRK7QPixmap
	(void);
    extern void
	_ZNK13QItemDelegate9drawFocusEP8QPainterRK20QStyleOptionViewItemRK5QRect
	(void);
    extern void
	_ZNK13QItemDelegate9drawCheckEP8QPainterRK20QStyleOptionViewItemRK5QRectN2Qt10CheckStateE
	(void);
    extern void
	_ZNK13QItemDelegate8doLayoutERK20QStyleOptionViewItemP5QRectS4_S4_b
	(void);
    extern Class
	_ZNK13QItemDelegate10decorationERK20QStyleOptionViewItemRK8QVariant
	(void);
    extern Class _ZNK13QItemDelegate8selectedERK7QPixmapRK8QPaletteb(void);
    extern Class
	_ZNK13QItemDelegate5checkERK20QStyleOptionViewItemRK5QRectRK8QVariant
	(void);
    extern bool _ZN13QItemDelegate11eventFilterEP7QObjectP6QEvent(void);
    extern bool
	_ZN13QItemDelegate11editorEventEP6QEventP18QAbstractItemModelRK20QStyleOptionViewItemRK11QModelIndex
	(void);
#ifdef __cplusplus
}
#endif
#endif
