#ifndef _QTGUI_QDOCKWIDGET_H_
#define _QTGUI_QDOCKWIDGET_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtGui/qwidget.h>
#include <QtGui/qaction.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N11QDockWidget18DockWidgetFeaturesE;

    Unknown Type:".Class.";

    enum N11QDockWidget17DockWidgetFeatureE {
	NoDockWidgetFeatures,
	DockWidgetClosable,
	DockWidgetMovable,
	DockWidgetFloatable,
	DockWidgetFeatureMask,
	AllDockWidgetFeatures,
	Reserved
    };

    Unknown Type:".Class.";


    extern struct QMetaObject _ZN11QDockWidget16staticMetaObjectE;
    extern struct QMetaObject _ZNK11QDockWidget10metaObjectEv(void);
    extern void _ZN11QDockWidget11qt_metacastEPKc(void);
    extern int
	_ZN11QDockWidget11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class
	_ZN11QDockWidgetC2ERK7QStringP7QWidget6QFlagsIN2Qt10WindowTypeEE
	(void);
    extern Class
	_ZN11QDockWidgetC1ERK7QStringP7QWidget6QFlagsIN2Qt10WindowTypeEE
	(void);
    extern Class
	_ZN11QDockWidgetC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class
	_ZN11QDockWidgetC1EP7QWidget6QFlagsIN2Qt10WindowTypeEE(void);
    extern Class _ZN11QDockWidgetD2Ev(void);
    extern Class _ZN11QDockWidgetD1Ev(void);
    extern Class _ZN11QDockWidgetD0Ev(void);
    extern Class _ZNK11QDockWidget6widgetEv(void);
    extern void _ZN11QDockWidget9setWidgetEP7QWidget(void);
    extern void
	_ZN11QDockWidget11setFeaturesE6QFlagsINS_17DockWidgetFeatureEE
	(void);
    extern N11QDockWidget18DockWidgetFeaturesE
	_ZNK11QDockWidget8featuresEv(void);
    extern void _ZN11QDockWidget11setFloatingEb(void);
    extern void
	_ZN11QDockWidget15setAllowedAreasE6QFlagsIN2Qt14DockWidgetAreaEE
	(void);
    extern N2Qt15DockWidgetAreasE _ZNK11QDockWidget12allowedAreasEv(void);
    extern Class _ZNK11QDockWidget16toggleViewActionEv(void);
    extern void
	_ZN11QDockWidget15featuresChangedE6QFlagsINS_17DockWidgetFeatureEE
	(void);
    extern void _ZN11QDockWidget15topLevelChangedEb(void);
    extern void
	_ZN11QDockWidget19allowedAreasChangedE6QFlagsIN2Qt14DockWidgetAreaEE
	(void);
    extern void _ZN11QDockWidget11changeEventEP6QEvent(void);
    extern void _ZN11QDockWidget10closeEventEP11QCloseEvent(void);
    extern void _ZN11QDockWidget10paintEventEP11QPaintEvent(void);
    extern bool _ZN11QDockWidget5eventEP6QEvent(void);
#ifdef __cplusplus
}
#endif
#endif
