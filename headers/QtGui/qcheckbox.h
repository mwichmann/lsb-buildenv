#ifndef _QTGUI_QCHECKBOX_H_
#define _QTGUI_QCHECKBOX_H_

class QCheckBox;
// *INDENT-OFF*



class QCheckBox : public QAbstractButton
{
private:
public:
};

enum ToggleState	
{
Off = 0,	
NoChange = 1,	
On = 2
}
;


extern  _ZN9QCheckBoxD0Ev(void);
extern  _ZN9QCheckBoxD1Ev(void);
extern struct QMetaObject _ZN9QCheckBox16staticMetaObjectE ;
extern struct QMetaObject _ZNK9QCheckBox10metaObjectEv(void);
extern void _ZN9QCheckBox11qt_metacastEPKc(void);
extern int _ZN9QCheckBox11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QCheckBox _ZN9QCheckBoxC2EP7QWidget(void);
extern QCheckBox _ZN9QCheckBoxC1EP7QWidget(void);
extern QCheckBox _ZN9QCheckBoxC2ERK7QStringP7QWidget(void);
extern QCheckBox _ZN9QCheckBoxC1ERK7QStringP7QWidget(void);
extern QSize _ZNK9QCheckBox8sizeHintEv(void);
extern void _ZN9QCheckBox11setTristateEb(void);
extern bool _ZNK9QCheckBox10isTristateEv(void);
extern enum N2Qt10CheckStateE _ZNK9QCheckBox10checkStateEv(void);
extern void _ZN9QCheckBox13setCheckStateEN2Qt10CheckStateE(void);
extern void _ZN9QCheckBox12stateChangedEi(void);
extern bool _ZN9QCheckBox5eventEP6QEvent(void);
extern bool _ZNK9QCheckBox9hitButtonERK6QPoint(void);
extern void _ZN9QCheckBox13checkStateSetEv(void);
extern void _ZN9QCheckBox14nextCheckStateEv(void);
extern void _ZN9QCheckBox10paintEventEP11QPaintEvent(void);
extern void _ZN9QCheckBox14mouseMoveEventEP11QMouseEvent(void);
extern QCheckBox _ZN9QCheckBoxC2EP7QWidgetPKc(void);
extern QCheckBox _ZN9QCheckBoxC1EP7QWidgetPKc(void);
extern QCheckBox _ZN9QCheckBoxC2ERK7QStringP7QWidgetPKc(void);
extern QCheckBox _ZN9QCheckBoxC1ERK7QStringP7QWidgetPKc(void);
// *INDENT-ON*
#endif
