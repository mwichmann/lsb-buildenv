#ifndef _QTGUI_QTOOLBAR_H_
#define _QTGUI_QTOOLBAR_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qsize.h>
#include <QtCore/qrect.h>
#include <QtGui/qwidget.h>
#include <QtGui/qaction.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";


    extern struct QMetaObject _ZN8QToolBar16staticMetaObjectE;
    extern struct QMetaObject _ZNK8QToolBar10metaObjectEv(void);
    extern void _ZN8QToolBar11qt_metacastEPKc(void);
    extern int _ZN8QToolBar11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN8QToolBarC2ERK7QStringP7QWidget(void);
    extern Class _ZN8QToolBarC1ERK7QStringP7QWidget(void);
    extern Class _ZN8QToolBarC2EP7QWidget(void);
    extern Class _ZN8QToolBarC1EP7QWidget(void);
    extern Class _ZN8QToolBarD2Ev(void);
    extern Class _ZN8QToolBarD1Ev(void);
    extern Class _ZN8QToolBarD0Ev(void);
    extern void _ZN8QToolBar10setMovableEb(void);
    extern bool _ZNK8QToolBar9isMovableEv(void);
    extern void
	_ZN8QToolBar15setAllowedAreasE6QFlagsIN2Qt11ToolBarAreaEE(void);
    extern N2Qt12ToolBarAreasE _ZNK8QToolBar12allowedAreasEv(void);
    extern void _ZN8QToolBar14setOrientationEN2Qt11OrientationE(void);
    extern enum N2Qt11OrientationE _ZNK8QToolBar11orientationEv(void);
    extern void _ZN8QToolBar5clearEv(void);
    extern Class _ZN8QToolBar9addActionERK7QString(void);
    extern Class _ZN8QToolBar9addActionERK5QIconRK7QString(void);
    extern Class _ZN8QToolBar9addActionERK7QStringPK7QObjectPKc(void);
    extern Class
	_ZN8QToolBar9addActionERK5QIconRK7QStringPK7QObjectPKc(void);
    extern Class _ZN8QToolBar12addSeparatorEv(void);
    extern Class _ZN8QToolBar15insertSeparatorEP7QAction(void);
    extern Class _ZN8QToolBar9addWidgetEP7QWidget(void);
    extern Class _ZN8QToolBar12insertWidgetEP7QActionP7QWidget(void);
    extern Class _ZNK8QToolBar14actionGeometryEP7QAction(void);
    extern Class _ZNK8QToolBar8actionAtERK6QPoint(void);
    extern Class _ZNK8QToolBar16toggleViewActionEv(void);
    extern Class _ZNK8QToolBar8iconSizeEv(void);
    extern enum N2Qt15ToolButtonStyleE
	_ZNK8QToolBar15toolButtonStyleEv(void);
    extern void _ZN8QToolBar11setIconSizeERK5QSize(void);
    extern void
	_ZN8QToolBar18setToolButtonStyleEN2Qt15ToolButtonStyleE(void);
    extern void _ZN8QToolBar15actionTriggeredEP7QAction(void);
    extern void _ZN8QToolBar14movableChangedEb(void);
    extern void
	_ZN8QToolBar19allowedAreasChangedE6QFlagsIN2Qt11ToolBarAreaEE
	(void);
    extern void _ZN8QToolBar18orientationChangedEN2Qt11OrientationE(void);
    extern void _ZN8QToolBar15iconSizeChangedERK5QSize(void);
    extern void
	_ZN8QToolBar22toolButtonStyleChangedEN2Qt15ToolButtonStyleE(void);
    extern void _ZN8QToolBar11actionEventEP12QActionEvent(void);
    extern void _ZN8QToolBar11changeEventEP6QEvent(void);
    extern void _ZN8QToolBar10childEventEP11QChildEvent(void);
    extern void _ZN8QToolBar10paintEventEP11QPaintEvent(void);
    extern void _ZN8QToolBar11resizeEventEP12QResizeEvent(void);
    extern bool _ZN8QToolBar5eventEP6QEvent(void);
    extern Class _ZN8QToolBarC2EP7QWidgetPKc(void);
    extern Class _ZN8QToolBarC1EP7QWidgetPKc(void);
#ifdef __cplusplus
}
#endif
#endif
