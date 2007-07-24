#ifndef _QTGUI_QABSTRACTSLIDER_H_
#define _QTGUI_QABSTRACTSLIDER_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qobject.h>
#include <QtGui/qwidget.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N15QAbstractSlider12SliderActionE {
	SliderNoAction,
	SliderSingleStepAdd,
	SliderSingleStepSub,
	SliderPageStepAdd,
	SliderPageStepSub,
	SliderToMinimum,
	SliderToMaximum,
	SliderMove
    };

    enum N15QAbstractSlider12SliderChangeE {
	SliderRangeChange,
	SliderOrientationChange,
	SliderStepsChange,
	SliderValueChange
    };


    extern struct QMetaObject _ZN15QAbstractSlider16staticMetaObjectE;
    extern struct QMetaObject _ZNK15QAbstractSlider10metaObjectEv(void);
    extern void _ZN15QAbstractSlider11qt_metacastEPKc(void);
    extern int
	_ZN15QAbstractSlider11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN15QAbstractSliderC2EP7QWidget(void);
    extern Class _ZN15QAbstractSliderC1EP7QWidget(void);
    extern Class _ZN15QAbstractSliderD2Ev(void);
    extern Class _ZN15QAbstractSliderD1Ev(void);
    extern Class _ZN15QAbstractSliderD0Ev(void);
    extern enum N2Qt11OrientationE
	_ZNK15QAbstractSlider11orientationEv(void);
    extern void _ZN15QAbstractSlider10setMinimumEi(void);
    extern int _ZNK15QAbstractSlider7minimumEv(void);
    extern void _ZN15QAbstractSlider10setMaximumEi(void);
    extern int _ZNK15QAbstractSlider7maximumEv(void);
    extern void _ZN15QAbstractSlider8setRangeEii(void);
    extern void _ZN15QAbstractSlider13setSingleStepEi(void);
    extern int _ZNK15QAbstractSlider10singleStepEv(void);
    extern void _ZN15QAbstractSlider11setPageStepEi(void);
    extern int _ZNK15QAbstractSlider8pageStepEv(void);
    extern void _ZN15QAbstractSlider11setTrackingEb(void);
    extern bool _ZNK15QAbstractSlider11hasTrackingEv(void);
    extern void _ZN15QAbstractSlider13setSliderDownEb(void);
    extern bool _ZNK15QAbstractSlider12isSliderDownEv(void);
    extern void _ZN15QAbstractSlider17setSliderPositionEi(void);
    extern int _ZNK15QAbstractSlider14sliderPositionEv(void);
    extern void _ZN15QAbstractSlider21setInvertedAppearanceEb(void);
    extern bool _ZNK15QAbstractSlider18invertedAppearanceEv(void);
    extern void _ZN15QAbstractSlider19setInvertedControlsEb(void);
    extern bool _ZNK15QAbstractSlider16invertedControlsEv(void);
    extern int _ZNK15QAbstractSlider5valueEv(void);
    extern void
	_ZN15QAbstractSlider13triggerActionENS_12SliderActionE(void);
    extern void _ZN15QAbstractSlider8setValueEi(void);
    extern void
	_ZN15QAbstractSlider14setOrientationEN2Qt11OrientationE(void);
    extern void _ZN15QAbstractSlider12valueChangedEi(void);
    extern void _ZN15QAbstractSlider13sliderPressedEv(void);
    extern void _ZN15QAbstractSlider11sliderMovedEi(void);
    extern void _ZN15QAbstractSlider14sliderReleasedEv(void);
    extern void _ZN15QAbstractSlider12rangeChangedEii(void);
    extern void _ZN15QAbstractSlider15actionTriggeredEi(void);
    extern bool _ZN15QAbstractSlider5eventEP6QEvent(void);
    extern void
	_ZN15QAbstractSlider15setRepeatActionENS_12SliderActionEii(void);
    extern enum N15QAbstractSlider12SliderActionE
	_ZNK15QAbstractSlider12repeatActionEv(void);
    extern void
	_ZN15QAbstractSlider12sliderChangeENS_12SliderChangeE(void);
    extern void _ZN15QAbstractSlider13keyPressEventEP9QKeyEvent(void);
    extern void _ZN15QAbstractSlider10timerEventEP11QTimerEvent(void);
    extern void _ZN15QAbstractSlider10wheelEventEP11QWheelEvent(void);
    extern void _ZN15QAbstractSlider11changeEventEP6QEvent(void);
    extern Class
	_ZN15QAbstractSliderC2ER22QAbstractSliderPrivateP7QWidget(void);
    extern Class
	_ZN15QAbstractSliderC1ER22QAbstractSliderPrivateP7QWidget(void);
#ifdef __cplusplus
}
#endif
#endif
