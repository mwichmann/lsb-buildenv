#ifndef _QTGUI_QLAYOUT_H_
#define _QTGUI_QLAYOUT_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qsize.h>
#include <QtCore/qrect.h>
#include <QtGui/qwidget.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    Unknown Type:".Class.";

    enum N7QLayout14SizeConstraintE {
	SetDefaultConstraint,
	Auto,
	SetNoConstraint,
	FreeResize,
	SetMinimumSize,
	Minimum,
	SetFixedSize,
	Fixed,
	SetMaximumSize,
	SetMinAndMaxSize
    };


    extern struct QMetaObject _ZN7QLayout16staticMetaObjectE;
    extern struct QMetaObject _ZNK7QLayout10metaObjectEv(void);
    extern void _ZN7QLayout11qt_metacastEPKc(void);
    extern int _ZN7QLayout11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN7QLayoutC2EP7QWidget(void);
    extern Class _ZN7QLayoutC1EP7QWidget(void);
    extern Class _ZN7QLayoutC2Ev(void);
    extern Class _ZN7QLayoutC1Ev(void);
    extern Class _ZN7QLayoutD2Ev(void);
    extern Class _ZN7QLayoutD1Ev(void);
    extern Class _ZN7QLayoutD0Ev(void);
    extern int _ZNK7QLayout6marginEv(void);
    extern int _ZNK7QLayout7spacingEv(void);
    extern void _ZN7QLayout9setMarginEi(void);
    extern void _ZN7QLayout10setSpacingEi(void);
    extern bool
	_ZN7QLayout12setAlignmentEP7QWidget6QFlagsIN2Qt13AlignmentFlagEE
	(void);
    extern bool
	_ZN7QLayout12setAlignmentEPS_6QFlagsIN2Qt13AlignmentFlagEE(void);
    extern void _ZN7QLayout17setSizeConstraintENS_14SizeConstraintE(void);
    extern enum N7QLayout14SizeConstraintE
	_ZNK7QLayout14sizeConstraintEv(void);
    extern void _ZN7QLayout10setMenuBarEP7QWidget(void);
    extern Class _ZNK7QLayout7menuBarEv(void);
    extern Class _ZNK7QLayout12parentWidgetEv(void);
    extern void _ZN7QLayout10invalidateEv(void);
    extern Class _ZNK7QLayout8geometryEv(void);
    extern bool _ZN7QLayout8activateEv(void);
    extern void _ZN7QLayout6updateEv(void);
    extern void _ZN7QLayout9addWidgetEP7QWidget(void);
    extern void _ZN7QLayout12removeWidgetEP7QWidget(void);
    extern void _ZN7QLayout10removeItemEP11QLayoutItem(void);
    extern N2Qt12OrientationsE _ZNK7QLayout19expandingDirectionsEv(void);
    extern Class _ZNK7QLayout11minimumSizeEv(void);
    extern Class _ZNK7QLayout11maximumSizeEv(void);
    extern int _ZNK7QLayout7indexOfEP7QWidget(void);
    extern bool _ZNK7QLayout7isEmptyEv(void);
    extern int _ZNK7QLayout19totalHeightForWidthEi(void);
    extern Class _ZNK7QLayout16totalMinimumSizeEv(void);
    extern Class _ZNK7QLayout16totalMaximumSizeEv(void);
    extern Class _ZNK7QLayout13totalSizeHintEv(void);
    extern Class _ZN7QLayout6layoutEv(void);
    extern void _ZN7QLayout10setEnabledEb(void);
    extern bool _ZNK7QLayout9isEnabledEv(void);
    extern void _ZN7QLayout6freezeEii(void);
    extern bool _ZNK7QLayout10isTopLevelEv(void);
    extern Class
	_ZN7QLayout21closestAcceptableSizeEPK7QWidgetRK5QSize(void);
    extern void _ZN7QLayout11widgetEventEP6QEvent(void);
    extern void _ZN7QLayout10childEventEP11QChildEvent(void);
    extern void _ZN7QLayout14addChildLayoutEPS_(void);
    extern void _ZN7QLayout14addChildWidgetEP7QWidget(void);
    extern void _ZN7QLayout14deleteAllItemsEv(void);
    extern Class _ZNK7QLayout13alignmentRectERK5QRect(void);
    extern Class _ZN7QLayoutC2ER14QLayoutPrivatePS_P7QWidget(void);
    extern Class _ZN7QLayoutC1ER14QLayoutPrivatePS_P7QWidget(void);
    extern Class _ZN7QLayoutC2EP7QWidgetiiPKc(void);
    extern Class _ZN7QLayoutC1EP7QWidgetiiPKc(void);
    extern Class _ZN7QLayoutC2EPS_iPKc(void);
    extern Class _ZN7QLayoutC1EPS_iPKc(void);
    extern Class _ZN7QLayoutC2EiPKc(void);
    extern Class _ZN7QLayoutC1EiPKc(void);
    extern void _ZN7QLayout10setAutoAddEb(void);
    extern bool _ZNK7QLayout7autoAddEv(void);
    extern void _ZN7QLayout11setGeometryERK5QRect(void);
#ifdef __cplusplus
}
#endif
#endif
