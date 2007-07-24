#ifndef _QTGUI_QPROGRESSBAR_H_
#define _QTGUI_QPROGRESSBAR_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qsize.h>
#include <QtGui/qwidget.h>

#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N12QProgressBar9DirectionE {
	TopToBottom,
	BottomToTop
    };


    extern _ZN12QProgressBarD0Ev(void);
    extern _ZN12QProgressBarD1Ev(void);
    extern struct QMetaObject _ZN12QProgressBar16staticMetaObjectE;
    extern struct QMetaObject _ZNK12QProgressBar10metaObjectEv(void);
    extern void _ZN12QProgressBar11qt_metacastEPKc(void);
    extern int
	_ZN12QProgressBar11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN12QProgressBarC2EP7QWidget(void);
    extern Class _ZN12QProgressBarC1EP7QWidget(void);
    extern int _ZNK12QProgressBar7minimumEv(void);
    extern int _ZNK12QProgressBar7maximumEv(void);
    extern void _ZN12QProgressBar8setRangeEii(void);
    extern int _ZNK12QProgressBar5valueEv(void);
    extern Class _ZNK12QProgressBar4textEv(void);
    extern void _ZN12QProgressBar14setTextVisibleEb(void);
    extern bool _ZNK12QProgressBar13isTextVisibleEv(void);
    extern N2Qt9AlignmentE _ZNK12QProgressBar9alignmentEv(void);
    extern void
	_ZN12QProgressBar12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE
	(void);
    extern Class _ZNK12QProgressBar8sizeHintEv(void);
    extern Class _ZNK12QProgressBar15minimumSizeHintEv(void);
    extern enum N2Qt11OrientationE _ZNK12QProgressBar11orientationEv(void);
    extern void _ZN12QProgressBar21setInvertedAppearanceEb(void);
    extern bool _ZN12QProgressBar18invertedAppearanceEv(void);
    extern void _ZN12QProgressBar16setTextDirectionENS_9DirectionE(void);
    extern enum N12QProgressBar9DirectionE
	_ZN12QProgressBar13textDirectionEv(void);
    extern void _ZN12QProgressBar5resetEv(void);
    extern void _ZN12QProgressBar10setMinimumEi(void);
    extern void _ZN12QProgressBar10setMaximumEi(void);
    extern void _ZN12QProgressBar8setValueEi(void);
    extern void _ZN12QProgressBar14setOrientationEN2Qt11OrientationE(void);
    extern void _ZN12QProgressBar12valueChangedEi(void);
    extern bool _ZN12QProgressBar5eventEP6QEvent(void);
    extern void _ZN12QProgressBar10paintEventEP11QPaintEvent(void);
#ifdef __cplusplus
}
#endif
#endif
