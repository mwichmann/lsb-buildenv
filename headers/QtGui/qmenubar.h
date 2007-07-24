#ifndef _QTGUI_QMENUBAR_H_
#define _QTGUI_QMENUBAR_H_

#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qsize.h>
#include <QtCore/qrect.h>
#include <QtGui/qwidget.h>
#include <QtGui/qaction.h>
#include <QtGui/qmenu.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N8QMenuBar9SeparatorE {
	Never,
	InWindowsStyle
    };


    extern struct QMetaObject _ZN8QMenuBar16staticMetaObjectE;
    extern struct QMetaObject _ZNK8QMenuBar10metaObjectEv(void);
    extern void _ZN8QMenuBar11qt_metacastEPKc(void);
    extern int _ZN8QMenuBar11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN8QMenuBarC2EP7QWidget(void);
    extern Class _ZN8QMenuBarC1EP7QWidget(void);
    extern Class _ZN8QMenuBarD2Ev(void);
    extern Class _ZN8QMenuBarD1Ev(void);
    extern Class _ZN8QMenuBarD0Ev(void);
    extern Class _ZN8QMenuBar9addActionERK7QString(void);
    extern Class _ZN8QMenuBar9addActionERK7QStringPK7QObjectPKc(void);
    extern Class _ZN8QMenuBar7addMenuEP5QMenu(void);
    extern Class _ZN8QMenuBar7addMenuERK7QString(void);
    extern Class _ZN8QMenuBar7addMenuERK5QIconRK7QString(void);
    extern Class _ZN8QMenuBar12addSeparatorEv(void);
    extern Class _ZN8QMenuBar10insertMenuEP7QActionP5QMenu(void);
    extern void _ZN8QMenuBar5clearEv(void);
    extern Class _ZNK8QMenuBar12activeActionEv(void);
    extern void _ZN8QMenuBar15setActiveActionEP7QAction(void);
    extern void _ZN8QMenuBar12setDefaultUpEb(void);
    extern bool _ZNK8QMenuBar11isDefaultUpEv(void);
    extern Class _ZNK8QMenuBar8sizeHintEv(void);
    extern Class _ZNK8QMenuBar15minimumSizeHintEv(void);
    extern int _ZNK8QMenuBar14heightForWidthEi(void);
    extern Class _ZNK8QMenuBar14actionGeometryEP7QAction(void);
    extern Class _ZNK8QMenuBar8actionAtERK6QPoint(void);
    extern void _ZN8QMenuBar15setCornerWidgetEP7QWidgetN2Qt6CornerE(void);
    extern Class _ZNK8QMenuBar12cornerWidgetEN2Qt6CornerE(void);
    extern void _ZN8QMenuBar9triggeredEP7QAction(void);
    extern void _ZN8QMenuBar7hoveredEP7QAction(void);
    extern void _ZN8QMenuBar11changeEventEP6QEvent(void);
    extern void _ZN8QMenuBar13keyPressEventEP9QKeyEvent(void);
    extern void _ZN8QMenuBar17mouseReleaseEventEP11QMouseEvent(void);
    extern void _ZN8QMenuBar15mousePressEventEP11QMouseEvent(void);
    extern void _ZN8QMenuBar14mouseMoveEventEP11QMouseEvent(void);
    extern void _ZN8QMenuBar10leaveEventEP6QEvent(void);
    extern void _ZN8QMenuBar10paintEventEP11QPaintEvent(void);
    extern void _ZN8QMenuBar11resizeEventEP12QResizeEvent(void);
    extern void _ZN8QMenuBar11actionEventEP12QActionEvent(void);
    extern void _ZN8QMenuBar13focusOutEventEP11QFocusEvent(void);
    extern void _ZN8QMenuBar12focusInEventEP11QFocusEvent(void);
    extern bool _ZN8QMenuBar11eventFilterEP7QObjectP6QEvent(void);
    extern bool _ZN8QMenuBar5eventEP6QEvent(void);
    extern Class _ZN8QMenuBarC2EP7QWidgetPKc(void);
    extern Class _ZN8QMenuBarC1EP7QWidgetPKc(void);
    extern int _ZN8QMenuBar15insertSeparatorEi(void);
    extern bool _ZN8QMenuBar16setItemParameterEii(void);
    extern int _ZNK8QMenuBar13itemParameterEi(void);
    extern int _ZNK8QMenuBar10frameWidthEv(void);
    extern void _ZN8QMenuBar15setAutoGeometryEb(void);
    extern bool _ZNK8QMenuBar12autoGeometryEv(void);
    extern void _ZN8QMenuBar9activatedEi(void);
    extern void _ZN8QMenuBar11highlightedEi(void);
#ifdef __cplusplus
}
#endif
#endif
