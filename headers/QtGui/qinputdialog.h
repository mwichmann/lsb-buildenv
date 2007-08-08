#ifndef _QTGUI_QINPUTDIALOG_H_
#define _QTGUI_QINPUTDIALOG_H_

class QInputDialog;
// *INDENT-OFF*



class QInputDialog : public QDialog
{
private:
public:
};

enum Type	
{
LineEdit,	
SpinBox,	
DoubleSpinBox,	
ComboBox,	
EditableComboBox
}
;


extern struct QMetaObject _ZN12QInputDialog16staticMetaObjectE ;
extern struct QMetaObject _ZNK12QInputDialog10metaObjectEv(void);
extern void _ZN12QInputDialog11qt_metacastEPKc(void);
extern int _ZN12QInputDialog11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QString _ZN12QInputDialog7getTextEP7QWidgetRK7QStringS4_N9QLineEdit8EchoModeES4_Pb6QFlagsIN2Qt10WindowTypeEE(void);
extern int _ZN12QInputDialog10getIntegerEP7QWidgetRK7QStringS4_iiiiPb6QFlagsIN2Qt10WindowTypeEE(void);
extern double _ZN12QInputDialog9getDoubleEP7QWidgetRK7QStringS4_dddiPb6QFlagsIN2Qt10WindowTypeEE(void);
extern QString _ZN12QInputDialog7getItemEP7QWidgetRK7QStringS4_RK11QStringListibPb6QFlagsIN2Qt10WindowTypeEE(void);
extern QInputDialog _ZN12QInputDialogD2Ev(void);
extern QInputDialog _ZN12QInputDialogD1Ev(void);
extern QInputDialog _ZN12QInputDialogD0Ev(void);
// *INDENT-ON*
#endif
