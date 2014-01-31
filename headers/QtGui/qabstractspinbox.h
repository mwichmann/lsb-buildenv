#if (__LSB_VERSION__ >= 31 )
#ifndef _QTGUI_QABSTRACTSPINBOX_H_
#define _QTGUI_QABSTRACTSPINBOX_H_

class QAbstractSpinBox;
// *INDENT-OFF*

typedef class QFlags<QAbstractSpinBox::StepEnabledFlag>QAbstractSpinBox::StepEnabled	
;

class QAbstractSpinBox;

enum QAbstractSpinBox::StepEnabledFlag	
{
StepNone = 0,	
StepUpEnabled = 1,	
StepDownEnabled = 2
}
;

class QFlags<QAbstractSpinBox::StepEnabledFlag>;

enum QAbstractSpinBox::ButtonSymbols	
{
UpDownArrows = 0,	
PlusMinus = 1
}
;


/* Function prototypes */

extern struct QMetaObject _ZN16QAbstractSpinBox16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
