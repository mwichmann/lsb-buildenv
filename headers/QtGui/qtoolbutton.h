#ifndef _QTGUI_QTOOLBUTTON_H_
#define _QTGUI_QTOOLBUTTON_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qsize.h>
#include <QtGui/qwidget.h>
#include <QtGui/qicon.h>
#include <QtGui/qaction.h>
#include <QtGui/qabstractbutton.h>
#include <QtGui/qmenu.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N11QToolButton19ToolButtonPopupModeE {
	DelayedPopup,
	MenuButtonPopup,
	InstantPopup
    };

    enum N11QToolButton12TextPositionE {
	BesideIcon,
	Right,
	BelowIcon,
	Under
    };


    extern struct QMetaObject _ZN11QToolButton16staticMetaObjectE;
    extern struct QMetaObject _ZNK11QToolButton10metaObjectEv(void);
    extern void _ZN11QToolButton11qt_metacastEPKc(void);
    extern int
	_ZN11QToolButton11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN11QToolButtonC2EP7QWidget(void);
    extern Class _ZN11QToolButtonC1EP7QWidget(void);
    extern Class _ZN11QToolButtonD2Ev(void);
    extern Class _ZN11QToolButtonD1Ev(void);
    extern Class _ZN11QToolButtonD0Ev(void);
    extern Class _ZNK11QToolButton8sizeHintEv(void);
    extern Class _ZNK11QToolButton15minimumSizeHintEv(void);
    extern enum N2Qt15ToolButtonStyleE
	_ZNK11QToolButton15toolButtonStyleEv(void);
    extern enum N2Qt9ArrowTypeE _ZNK11QToolButton9arrowTypeEv(void);
    extern void _ZN11QToolButton12setArrowTypeEN2Qt9ArrowTypeE(void);
    extern void _ZN11QToolButton7setMenuEP5QMenu(void);
    extern Class _ZNK11QToolButton4menuEv(void);
    extern void
	_ZN11QToolButton12setPopupModeENS_19ToolButtonPopupModeE(void);
    extern enum N11QToolButton19ToolButtonPopupModeE
	_ZNK11QToolButton9popupModeEv(void);
    extern Class _ZNK11QToolButton13defaultActionEv(void);
    extern void _ZN11QToolButton12setAutoRaiseEb(void);
    extern bool _ZNK11QToolButton9autoRaiseEv(void);
    extern void _ZN11QToolButton8showMenuEv(void);
    extern void
	_ZN11QToolButton18setToolButtonStyleEN2Qt15ToolButtonStyleE(void);
    extern void _ZN11QToolButton16setDefaultActionEP7QAction(void);
    extern void _ZN11QToolButton9triggeredEP7QAction(void);
    extern Class _ZN11QToolButtonC2ER18QToolButtonPrivateP7QWidget(void);
    extern Class _ZN11QToolButtonC1ER18QToolButtonPrivateP7QWidget(void);
    extern bool _ZN11QToolButton5eventEP6QEvent(void);
    extern void _ZN11QToolButton15mousePressEventEP11QMouseEvent(void);
    extern void _ZN11QToolButton10paintEventEP11QPaintEvent(void);
    extern void _ZN11QToolButton11actionEventEP12QActionEvent(void);
    extern void _ZN11QToolButton10enterEventEP6QEvent(void);
    extern void _ZN11QToolButton10leaveEventEP6QEvent(void);
    extern void _ZN11QToolButton10timerEventEP11QTimerEvent(void);
    extern void _ZN11QToolButton11changeEventEP6QEvent(void);
    extern void _ZN11QToolButton14nextCheckStateEv(void);
    extern Class _ZN11QToolButtonC2EP7QWidgetPKc(void);
    extern Class _ZN11QToolButtonC1EP7QWidgetPKc(void);
    extern Class _ZN11QToolButtonC2EN2Qt9ArrowTypeEP7QWidgetPKc(void);
    extern Class _ZN11QToolButtonC1EN2Qt9ArrowTypeEP7QWidgetPKc(void);
    extern Class
	_ZN11QToolButtonC2ERK5QIconRK7QStringS5_P7QObjectPKcP7QWidgetS9_
	(void);
    extern Class
	_ZN11QToolButtonC1ERK5QIconRK7QStringS5_P7QObjectPKcP7QWidgetS9_
	(void);
    extern void _ZN11QToolButton12setOnIconSetERK5QIcon(void);
    extern void _ZN11QToolButton13setOffIconSetERK5QIcon(void);
    extern void _ZN11QToolButton10setIconSetERK5QIconb(void);
    extern Class _ZNK11QToolButton9onIconSetEv(void);
    extern Class _ZNK11QToolButton10offIconSetEv(void);
    extern Class _ZNK11QToolButton7iconSetEb(void);
    extern void _ZN11QToolButton13setPopupDelayEi(void);
    extern int _ZNK11QToolButton10popupDelayEv(void);
#ifdef __cplusplus
}
#endif
#endif
