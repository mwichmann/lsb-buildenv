#ifndef _QTGUI_QBOXLAYOUT_H_
#define _QTGUI_QBOXLAYOUT_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qsize.h>
#include <QtGui/qlayoutitem.h>
#include <QtGui/qlayout.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N10QBoxLayout9DirectionE {
	LeftToRight,
	RightToLeft,
	TopToBottom,
	Down,
	BottomToTop,
	Up
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern struct QMetaObject _ZN10QBoxLayout16staticMetaObjectE;
    extern struct QMetaObject _ZNK10QBoxLayout10metaObjectEv(void);
    extern void _ZN10QBoxLayout11qt_metacastEPKc(void);
    extern int _ZN10QBoxLayout11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN10QBoxLayoutC2ENS_9DirectionEP7QWidget(void);
    extern Class _ZN10QBoxLayoutC1ENS_9DirectionEP7QWidget(void);
    extern Class _ZN10QBoxLayoutC2EP7QWidgetNS_9DirectionEiiPKc(void);
    extern Class _ZN10QBoxLayoutC1EP7QWidgetNS_9DirectionEiiPKc(void);
    extern Class _ZN10QBoxLayoutC2EP7QLayoutNS_9DirectionEiPKc(void);
    extern Class _ZN10QBoxLayoutC1EP7QLayoutNS_9DirectionEiPKc(void);
    extern Class _ZN10QBoxLayoutC2ENS_9DirectionEiPKc(void);
    extern Class _ZN10QBoxLayoutC1ENS_9DirectionEiPKc(void);
    extern Class _ZN10QBoxLayoutD2Ev(void);
    extern Class _ZN10QBoxLayoutD1Ev(void);
    extern Class _ZN10QBoxLayoutD0Ev(void);
    extern enum N10QBoxLayout9DirectionE
	_ZNK10QBoxLayout9directionEv(void);
    extern void _ZN10QBoxLayout12setDirectionENS_9DirectionE(void);
    extern void _ZN10QBoxLayout10addSpacingEi(void);
    extern void _ZN10QBoxLayout10addStretchEi(void);
    extern void
	_ZN10QBoxLayout9addWidgetEP7QWidgeti6QFlagsIN2Qt13AlignmentFlagEE
	(void);
    extern void _ZN10QBoxLayout9addLayoutEP7QLayouti(void);
    extern void _ZN10QBoxLayout8addStrutEi(void);
    extern void _ZN10QBoxLayout7addItemEP11QLayoutItem(void);
    extern void _ZN10QBoxLayout13insertSpacingEii(void);
    extern void _ZN10QBoxLayout13insertStretchEii(void);
    extern void
	_ZN10QBoxLayout12insertWidgetEiP7QWidgeti6QFlagsIN2Qt13AlignmentFlagEE
	(void);
    extern void _ZN10QBoxLayout12insertLayoutEiP7QLayouti(void);
    extern bool _ZN10QBoxLayout16setStretchFactorEP7QWidgeti(void);
    extern bool _ZN10QBoxLayout16setStretchFactorEP7QLayouti(void);
    extern Class _ZNK10QBoxLayout8sizeHintEv(void);
    extern Class _ZNK10QBoxLayout11minimumSizeEv(void);
    extern Class _ZNK10QBoxLayout11maximumSizeEv(void);
    extern bool _ZNK10QBoxLayout17hasHeightForWidthEv(void);
    extern int _ZNK10QBoxLayout14heightForWidthEi(void);
    extern int _ZNK10QBoxLayout21minimumHeightForWidthEi(void);
    extern N2Qt12OrientationsE
	_ZNK10QBoxLayout19expandingDirectionsEv(void);
    extern void _ZN10QBoxLayout10invalidateEv(void);
    extern Class _ZNK10QBoxLayout6itemAtEi(void);
    extern Class _ZN10QBoxLayout6takeAtEi(void);
    extern int _ZNK10QBoxLayout5countEv(void);
    extern void _ZN10QBoxLayout11setGeometryERK5QRect(void);
    extern void _ZN10QBoxLayout10insertItemEiP11QLayoutItem(void);
    extern struct QMetaObject _ZN11QHBoxLayout16staticMetaObjectE;
    extern struct QMetaObject _ZNK11QHBoxLayout10metaObjectEv(void);
    extern void _ZN11QHBoxLayout11qt_metacastEPKc(void);
    extern int
	_ZN11QHBoxLayout11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN11QHBoxLayoutC2Ev(void);
    extern Class _ZN11QHBoxLayoutC1Ev(void);
    extern Class _ZN11QHBoxLayoutC2EP7QWidget(void);
    extern Class _ZN11QHBoxLayoutC1EP7QWidget(void);
    extern Class _ZN11QHBoxLayoutD2Ev(void);
    extern Class _ZN11QHBoxLayoutD1Ev(void);
    extern Class _ZN11QHBoxLayoutD0Ev(void);
    extern Class _ZN11QHBoxLayoutC2EP7QWidgetiiPKc(void);
    extern Class _ZN11QHBoxLayoutC1EP7QWidgetiiPKc(void);
    extern Class _ZN11QHBoxLayoutC2EP7QLayoutiPKc(void);
    extern Class _ZN11QHBoxLayoutC1EP7QLayoutiPKc(void);
    extern Class _ZN11QHBoxLayoutC2EiPKc(void);
    extern Class _ZN11QHBoxLayoutC1EiPKc(void);
    extern struct QMetaObject _ZN11QVBoxLayout16staticMetaObjectE;
    extern struct QMetaObject _ZNK11QVBoxLayout10metaObjectEv(void);
    extern void _ZN11QVBoxLayout11qt_metacastEPKc(void);
    extern int
	_ZN11QVBoxLayout11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN11QVBoxLayoutC2Ev(void);
    extern Class _ZN11QVBoxLayoutC1Ev(void);
    extern Class _ZN11QVBoxLayoutC2EP7QWidget(void);
    extern Class _ZN11QVBoxLayoutC1EP7QWidget(void);
    extern Class _ZN11QVBoxLayoutD2Ev(void);
    extern Class _ZN11QVBoxLayoutD1Ev(void);
    extern Class _ZN11QVBoxLayoutD0Ev(void);
    extern Class _ZN11QVBoxLayoutC2EP7QWidgetiiPKc(void);
    extern Class _ZN11QVBoxLayoutC1EP7QWidgetiiPKc(void);
    extern Class _ZN11QVBoxLayoutC2EP7QLayoutiPKc(void);
    extern Class _ZN11QVBoxLayoutC1EP7QLayoutiPKc(void);
    extern Class _ZN11QVBoxLayoutC2EiPKc(void);
    extern Class _ZN11QVBoxLayoutC1EiPKc(void);
#ifdef __cplusplus
}
#endif
#endif
