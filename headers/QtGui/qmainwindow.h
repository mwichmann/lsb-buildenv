#ifndef _QTGUI_QMAINWINDOW_H_
#define _QTGUI_QMAINWINDOW_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qobject.h>
#include <QtCore/qsize.h>
#include <QtGui/qwidget.h>
#include <QtGui/qmenu.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";


    extern struct QMetaObject _ZN11QMainWindow16staticMetaObjectE;
    extern struct QMetaObject _ZNK11QMainWindow10metaObjectEv(void);
    extern void _ZN11QMainWindow11qt_metacastEPKc(void);
    extern int
	_ZN11QMainWindow11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class
	_ZN11QMainWindowC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class
	_ZN11QMainWindowC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class _ZN11QMainWindowD2Ev(void);
    extern Class _ZN11QMainWindowD1Ev(void);
    extern Class _ZN11QMainWindowD0Ev(void);
    extern Class _ZNK11QMainWindow8iconSizeEv(void);
    extern void _ZN11QMainWindow11setIconSizeERK5QSize(void);
    extern enum N2Qt15ToolButtonStyleE
	_ZNK11QMainWindow15toolButtonStyleEv(void);
    extern void
	_ZN11QMainWindow18setToolButtonStyleEN2Qt15ToolButtonStyleE(void);
    extern _ZNK11QMainWindow7menuBarEv(void);
    extern void _ZN11QMainWindow10setMenuBarEP8QMenuBar(void);
    extern _ZNK11QMainWindow9statusBarEv(void);
    extern void _ZN11QMainWindow12setStatusBarEP10QStatusBar(void);
    extern Class _ZNK11QMainWindow13centralWidgetEv(void);
    extern void _ZN11QMainWindow16setCentralWidgetEP7QWidget(void);
    extern void
	_ZN11QMainWindow9setCornerEN2Qt6CornerENS0_14DockWidgetAreaE(void);
    extern enum N2Qt14DockWidgetAreaE
	_ZNK11QMainWindow6cornerEN2Qt6CornerE(void);
    extern void _ZN11QMainWindow15addToolBarBreakEN2Qt11ToolBarAreaE(void);
    extern void _ZN11QMainWindow18insertToolBarBreakEP8QToolBar(void);
    extern void
	_ZN11QMainWindow10addToolBarEN2Qt11ToolBarAreaEP8QToolBar(void);
    extern void _ZN11QMainWindow10addToolBarEP8QToolBar(void);
    extern _ZN11QMainWindow10addToolBarERK7QString(void);
    extern void _ZN11QMainWindow13insertToolBarEP8QToolBarS1_(void);
    extern void _ZN11QMainWindow13removeToolBarEP8QToolBar(void);
    extern enum N2Qt11ToolBarAreaE
	_ZNK11QMainWindow11toolBarAreaEP8QToolBar(void);
    extern void
	_ZN11QMainWindow13addDockWidgetEN2Qt14DockWidgetAreaEP11QDockWidget
	(void);
    extern void
	_ZN11QMainWindow13addDockWidgetEN2Qt14DockWidgetAreaEP11QDockWidgetNS0_11OrientationE
	(void);
    extern void
	_ZN11QMainWindow15splitDockWidgetEP11QDockWidgetS1_N2Qt11OrientationE
	(void);
    extern void _ZN11QMainWindow16removeDockWidgetEP11QDockWidget(void);
    extern enum N2Qt14DockWidgetAreaE
	_ZNK11QMainWindow14dockWidgetAreaEP11QDockWidget(void);
    extern Class _ZNK11QMainWindow9saveStateEi(void);
    extern bool _ZN11QMainWindow12restoreStateERK10QByteArrayi(void);
    extern Class _ZN11QMainWindow15createPopupMenuEv(void);
    extern Class
	_ZN11QMainWindowC2EP7QWidgetPKc6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class
	_ZN11QMainWindowC1EP7QWidgetPKc6QFlagsIN2Qt10WindowTypeEE(void);
    extern void _ZN11QMainWindow15iconSizeChangedERK5QSize(void);
    extern void
	_ZN11QMainWindow22toolButtonStyleChangedEN2Qt15ToolButtonStyleE
	(void);
    extern void
	_ZN11QMainWindow16contextMenuEventEP17QContextMenuEvent(void);
    extern bool _ZN11QMainWindow5eventEP6QEvent(void);
#ifdef __cplusplus
}
#endif
#endif
