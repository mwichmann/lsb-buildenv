#ifndef _QTGUI_QWORKSPACE_H_
#define _QTGUI_QWORKSPACE_H_

#include <QtCore/qlist.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qsize.h>
#include <QtGui/qwindowdefs.h>
#include <QtGui/qbrush.h>
#include <QtGui/qwidget.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N10QWorkspace11WindowOrderE {
	CreationOrder,
	StackingOrder
    };


    extern struct QMetaObject _ZN10QWorkspace16staticMetaObjectE;
    extern struct QMetaObject _ZNK10QWorkspace10metaObjectEv(void);
    extern void _ZN10QWorkspace11qt_metacastEPKc(void);
    extern int _ZN10QWorkspace11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN10QWorkspaceC2EP7QWidget(void);
    extern Class _ZN10QWorkspaceC1EP7QWidget(void);
    extern Class _ZN10QWorkspaceD2Ev(void);
    extern Class _ZN10QWorkspaceD1Ev(void);
    extern Class _ZN10QWorkspaceD0Ev(void);
    extern Class _ZNK10QWorkspace12activeWindowEv(void);
    extern QWidgetList
	_ZNK10QWorkspace10windowListENS_11WindowOrderE(void);
    extern Class
	_ZN10QWorkspace9addWindowEP7QWidget6QFlagsIN2Qt10WindowTypeEE
	(void);
    extern Class _ZNK10QWorkspace8sizeHintEv(void);
    extern bool _ZNK10QWorkspace17scrollBarsEnabledEv(void);
    extern void _ZN10QWorkspace20setScrollBarsEnabledEb(void);
    extern Class _ZN10QWorkspaceC2EP7QWidgetPKc(void);
    extern Class _ZN10QWorkspaceC1EP7QWidgetPKc(void);
    extern void _ZN10QWorkspace25setPaletteBackgroundColorERK6QColor(void);
    extern void
	_ZN10QWorkspace26setPaletteBackgroundPixmapERK7QPixmap(void);
    extern void _ZN10QWorkspace13setBackgroundERK6QBrush(void);
    extern Class _ZNK10QWorkspace10backgroundEv(void);
    extern void _ZN10QWorkspace15windowActivatedEP7QWidget(void);
    extern void _ZN10QWorkspace15setActiveWindowEP7QWidget(void);
    extern void _ZN10QWorkspace7cascadeEv(void);
    extern void _ZN10QWorkspace4tileEv(void);
    extern void _ZN10QWorkspace12arrangeIconsEv(void);
    extern void _ZN10QWorkspace17closeActiveWindowEv(void);
    extern void _ZN10QWorkspace15closeAllWindowsEv(void);
    extern void _ZN10QWorkspace18activateNextWindowEv(void);
    extern void _ZN10QWorkspace22activatePreviousWindowEv(void);
    extern bool _ZN10QWorkspace5eventEP6QEvent(void);
    extern void _ZN10QWorkspace10paintEventEP11QPaintEvent(void);
    extern void _ZN10QWorkspace11changeEventEP6QEvent(void);
    extern void _ZN10QWorkspace10childEventEP11QChildEvent(void);
    extern void _ZN10QWorkspace11resizeEventEP12QResizeEvent(void);
    extern bool _ZN10QWorkspace11eventFilterEP7QObjectP6QEvent(void);
    extern void _ZN10QWorkspace9showEventEP10QShowEvent(void);
    extern void _ZN10QWorkspace9hideEventEP10QHideEvent(void);
    extern void _ZN10QWorkspace10wheelEventEP11QWheelEvent(void);
#ifdef __cplusplus
}
#endif
#endif
