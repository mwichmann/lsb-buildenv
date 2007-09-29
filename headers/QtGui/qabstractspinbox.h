#ifndef _QTGUI_QABSTRACTSPINBOX_H_
#define _QTGUI_QABSTRACTSPINBOX_H_

class QAbstractSpinBox;
// *INDENT-OFF*



typedef StepEnabled	
;

class QAbstractSpinBox : public QWidget
{
private:
public:
};

enum StepEnabledFlag	
{
StepNone = 0,	
StepUpEnabled = 1,	
StepDownEnabled = 2
}
;

class QFlags<QAbstractSpinBox::StepEnabledFlag>
{
private:
public:
};

enum ButtonSymbols	
{
UpDownArrows = 0,	
PlusMinus = 1
}
;


extern struct QMetaObject _ZN16QAbstractSpinBox16staticMetaObjectE ;
extern struct QMetaObject _ZNK16QAbstractSpinBox10metaObjectEv(void);
extern void _ZN16QAbstractSpinBox11qt_metacastEPKc(void);
extern int _ZN16QAbstractSpinBox11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QAbstractSpinBox _ZN16QAbstractSpinBoxC2EP7QWidget(void);
extern QAbstractSpinBox _ZN16QAbstractSpinBoxC1EP7QWidget(void);
extern QAbstractSpinBox _ZN16QAbstractSpinBoxD2Ev(void);
extern QAbstractSpinBox _ZN16QAbstractSpinBoxD1Ev(void);
extern QAbstractSpinBox _ZN16QAbstractSpinBoxD0Ev(void);
extern enum N16QAbstractSpinBox13ButtonSymbolsE _ZNK16QAbstractSpinBox13buttonSymbolsEv(void);
extern void _ZN16QAbstractSpinBox16setButtonSymbolsENS_13ButtonSymbolsE(void);
extern QString _ZNK16QAbstractSpinBox4textEv(void);
extern QString _ZNK16QAbstractSpinBox16specialValueTextEv(void);
extern void _ZN16QAbstractSpinBox19setSpecialValueTextERK7QString(void);
extern bool _ZNK16QAbstractSpinBox8wrappingEv(void);
extern void _ZN16QAbstractSpinBox11setWrappingEb(void);
extern void _ZN16QAbstractSpinBox11setReadOnlyEb(void);
extern bool _ZNK16QAbstractSpinBox10isReadOnlyEv(void);
extern void _ZN16QAbstractSpinBox12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void);
extern N2Qt9AlignmentE _ZNK16QAbstractSpinBox9alignmentEv(void);
extern void _ZN16QAbstractSpinBox8setFrameEb(void);
extern bool _ZNK16QAbstractSpinBox8hasFrameEv(void);
extern QSize _ZNK16QAbstractSpinBox8sizeHintEv(void);
extern QSize _ZNK16QAbstractSpinBox15minimumSizeHintEv(void);
extern void _ZN16QAbstractSpinBox13interpretTextEv(void);
extern bool _ZN16QAbstractSpinBox5eventEP6QEvent(void);
extern enum N10QValidator5StateE _ZNK16QAbstractSpinBox8validateER7QStringRi(void);
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
extern void _ZN16QAbstractSpinBox16contextMenuEventEP17QContextMenuEvent(void);
extern void _ZN16QAbstractSpinBox11changeEventEP6QEvent(void);
extern void _ZN16QAbstractSpinBox10closeEventEP11QCloseEvent(void);
extern void _ZN16QAbstractSpinBox9hideEventEP10QHideEvent(void);
extern void _ZN16QAbstractSpinBox15mousePressEventEP11QMouseEvent(void);
extern void _ZN16QAbstractSpinBox17mouseReleaseEventEP11QMouseEvent(void);
extern void _ZN16QAbstractSpinBox14mouseMoveEventEP11QMouseEvent(void);
extern void _ZN16QAbstractSpinBox10timerEventEP11QTimerEvent(void);
extern void _ZN16QAbstractSpinBox10paintEventEP11QPaintEvent(void);
extern void _ZN16QAbstractSpinBox9showEventEP10QShowEvent(void);
extern QLineEdit _ZNK16QAbstractSpinBox8lineEditEv(void);
extern void _ZN16QAbstractSpinBox11setLineEditEP9QLineEdit(void);
extern N16QAbstractSpinBox11StepEnabledE _ZNK16QAbstractSpinBox11stepEnabledEv(void);
extern void _ZN16QAbstractSpinBox15editingFinishedEv(void);
extern QAbstractSpinBox _ZN16QAbstractSpinBoxC2ER23QAbstractSpinBoxPrivateP7QWidget(void);
extern QAbstractSpinBox _ZN16QAbstractSpinBoxC1ER23QAbstractSpinBoxPrivateP7QWidget(void);
// *INDENT-ON*
#endif
