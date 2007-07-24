#ifndef _QTGUI_QLCDNUMBER_H_
#define _QTGUI_QLCDNUMBER_H_

#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtCore/qsize.h>
#include <QtGui/qwidget.h>
#include <QtGui/qframe.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N10QLCDNumber4ModeE {
	Hex,
	HEX,
	Dec,
	DEC,
	Oct,
	OCT,
	Bin,
	BIN
    };

    enum N10QLCDNumber12SegmentStyleE {
	Outline,
	Filled,
	Flat
    };


    extern struct QMetaObject _ZN10QLCDNumber16staticMetaObjectE;
    extern struct QMetaObject _ZNK10QLCDNumber10metaObjectEv(void);
    extern void _ZN10QLCDNumber11qt_metacastEPKc(void);
    extern int _ZN10QLCDNumber11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN10QLCDNumberC2EP7QWidget(void);
    extern Class _ZN10QLCDNumberC1EP7QWidget(void);
    extern Class _ZN10QLCDNumberC2EjP7QWidget(void);
    extern Class _ZN10QLCDNumberC1EjP7QWidget(void);
    extern Class _ZN10QLCDNumberD2Ev(void);
    extern Class _ZN10QLCDNumberD1Ev(void);
    extern Class _ZN10QLCDNumberD0Ev(void);
    extern bool _ZNK10QLCDNumber17smallDecimalPointEv(void);
    extern int _ZNK10QLCDNumber9numDigitsEv(void);
    extern void _ZN10QLCDNumber12setNumDigitsEi(void);
    extern bool _ZNK10QLCDNumber13checkOverflowEd(void);
    extern bool _ZNK10QLCDNumber13checkOverflowEi(void);
    extern enum N10QLCDNumber4ModeE _ZNK10QLCDNumber4modeEv(void);
    extern void _ZN10QLCDNumber7setModeENS_4ModeE(void);
    extern enum N10QLCDNumber12SegmentStyleE
	_ZNK10QLCDNumber12segmentStyleEv(void);
    extern void _ZN10QLCDNumber15setSegmentStyleENS_12SegmentStyleE(void);
    extern double _ZNK10QLCDNumber5valueEv(void);
    extern int _ZNK10QLCDNumber8intValueEv(void);
    extern Class _ZNK10QLCDNumber8sizeHintEv(void);
    extern void _ZN10QLCDNumber7displayERK7QString(void);
    extern void _ZN10QLCDNumber7displayEi(void);
    extern void _ZN10QLCDNumber7displayEd(void);
    extern void _ZN10QLCDNumber10setHexModeEv(void);
    extern void _ZN10QLCDNumber10setDecModeEv(void);
    extern void _ZN10QLCDNumber10setOctModeEv(void);
    extern void _ZN10QLCDNumber10setBinModeEv(void);
    extern void _ZN10QLCDNumber20setSmallDecimalPointEb(void);
    extern void _ZN10QLCDNumber8overflowEv(void);
    extern bool _ZN10QLCDNumber5eventEP6QEvent(void);
    extern void _ZN10QLCDNumber10paintEventEP11QPaintEvent(void);
    extern Class _ZN10QLCDNumberC2EP7QWidgetPKc(void);
    extern Class _ZN10QLCDNumberC1EP7QWidgetPKc(void);
    extern Class _ZN10QLCDNumberC2EjP7QWidgetPKc(void);
    extern Class _ZN10QLCDNumberC1EjP7QWidgetPKc(void);
#ifdef __cplusplus
}
#endif
#endif
