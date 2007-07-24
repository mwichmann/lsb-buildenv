#ifndef _QTGUI_QABSTRACTSPINBOX_H_
#define _QTGUI_QABSTRACTSPINBOX_H_

#include <QtCore/qnamespace.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qsize.h>
#include <QtGui/qwidget.h>
#include <QtGui/qlineedit.h>
#include <QtGui/qvalidator.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N16QAbstractSpinBox11StepEnabledE;

    Unknown Type:".Class.";

    enum N16QAbstractSpinBox15StepEnabledFlagE {
	StepNone,
	StepUpEnabled,
	StepDownEnabled
    };

    Unknown Type:".Class.";

    enum N16QAbstractSpinBox13ButtonSymbolsE {
	UpDownArrows,
	PlusMinus
    };


    extern struct QMetaObject _ZN16QAbstractSpinBox16staticMetaObjectE;
    extern struct QMetaObject _ZNK16QAbstractSpinBox10metaObjectEv(void);
    extern void _ZN16QAbstractSpinBox11qt_metacastEPKc(void);
    extern int
	_ZN16QAbstractSpinBox11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN16QAbstractSpinBoxC2EP7QWidget(void);
    extern Class _ZN16QAbstractSpinBoxC1EP7QWidget(void);
    extern Class _ZN16QAbstractSpinBoxD2Ev(void);
    extern Class _ZN16QAbstractSpinBoxD1Ev(void);
    extern Class _ZN16QAbstractSpinBoxD0Ev(void);
    extern enum N16QAbstractSpinBox13ButtonSymbolsE
	_ZNK16QAbstractSpinBox13buttonSymbolsEv(void);
    extern void
	_ZN16QAbstractSpinBox16setButtonSymbolsENS_13ButtonSymbolsE(void);
    extern Class _ZNK16QAbstractSpinBox4textEv(void);
    extern Class _ZNK16QAbstractSpinBox16specialValueTextEv(void);
    extern void
	_ZN16QAbstractSpinBox19setSpecialValueTextERK7QString(void);
    extern bool _ZNK16QAbstractSpinBox8wrappingEv(void);
    extern void _ZN16QAbstractSpinBox11setWrappingEb(void);
    extern void _ZN16QAbstractSpinBox11setReadOnlyEb(void);
    extern bool _ZNK16QAbstractSpinBox10isReadOnlyEv(void);
    extern void
	_ZN16QAbstractSpinBox12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE
	(void);
    extern N2Qt9AlignmentE _ZNK16QAbstractSpinBox9alignmentEv(void);
    extern void _ZN16QAbstractSpinBox8setFrameEb(void);
    extern bool _ZNK16QAbstractSpinBox8hasFrameEv(void);
    extern Class _ZNK16QAbstractSpinBox8sizeHintEv(void);
    extern Class _ZNK16QAbstractSpinBox15minimumSizeHintEv(void);
    extern void _ZN16QAbstractSpinBox13interpretTextEv(void);
    extern bool _ZN16QAbstractSpinBox5eventEP6QEvent(void);
    extern enum N10QValidator5StateE
	_ZNK16QAbstractSpinBox8validateER7QStringRi(void);
    extern void _ZNK16QAbstractSpinBox5fixupER7QString(void);
    extern void _ZN16QAbstractSpinBox6stepByEi(void);
    extern void _ZN16QAbstractSpinBox6stepUpEv(void);
    extern void _ZN16QAbstractSpinBox8stepDownEv(void);
    extern void _ZN16QAbstractSpinBox9selectAllEv(void);
    extern void _ZN16QAbstractSpinBox5clearEv(void);
    extern void _ZN16QAbstractSpinBox11resizeEventEP12QResizeEvent(void);
    extern void _ZN16QAbstractSpinBox13keyPressEventEP9QKeyEvent(void);
    extern void _ZN16QAbstractSpinBox15keyReleaseEventEP9QKeyEvent(void);
    extern void _ZN16QAbstractSpinBox10wheelEventEP11QWheelEvent(void);
    extern void _ZN16QAbstractSpinBox12focusInEventEP11QFocusEvent(void);
    extern void _ZN16QAbstractSpinBox13focusOutEventEP11QFocusEvent(void);
    extern void
	_ZN16QAbstractSpinBox16contextMenuEventEP17QContextMenuEvent(void);
    extern void _ZN16QAbstractSpinBox11changeEventEP6QEvent(void);
    extern void _ZN16QAbstractSpinBox10closeEventEP11QCloseEvent(void);
    extern void _ZN16QAbstractSpinBox9hideEventEP10QHideEvent(void);
    extern void
	_ZN16QAbstractSpinBox15mousePressEventEP11QMouseEvent(void);
    extern void
	_ZN16QAbstractSpinBox17mouseReleaseEventEP11QMouseEvent(void);
    extern void _ZN16QAbstractSpinBox14mouseMoveEventEP11QMouseEvent(void);
    extern void _ZN16QAbstractSpinBox10timerEventEP11QTimerEvent(void);
    extern void _ZN16QAbstractSpinBox10paintEventEP11QPaintEvent(void);
    extern void _ZN16QAbstractSpinBox9showEventEP10QShowEvent(void);
    extern Class _ZNK16QAbstractSpinBox8lineEditEv(void);
    extern void _ZN16QAbstractSpinBox11setLineEditEP9QLineEdit(void);
    extern N16QAbstractSpinBox11StepEnabledE
	_ZNK16QAbstractSpinBox11stepEnabledEv(void);
    extern void _ZN16QAbstractSpinBox15editingFinishedEv(void);
    extern Class
	_ZN16QAbstractSpinBoxC2ER23QAbstractSpinBoxPrivateP7QWidget(void);
    extern Class
	_ZN16QAbstractSpinBoxC1ER23QAbstractSpinBoxPrivateP7QWidget(void);
#ifdef __cplusplus
}
#endif
#endif
