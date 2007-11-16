#ifndef _QTGUI_QMESSAGEBOX_H_
#define _QTGUI_QMESSAGEBOX_H_

class QMessageBox;
// *INDENT-OFF*




class QMessageBox : public QDialog
{
private:
public:
};

enum Icon	
{
NoIcon = 0,	
Information = 1,	
Warning = 2,	
Critical = 3,	
Question = 4
}
;

enum Button	
{
NoButton = 0,	
Ok = 1,	
Cancel = 2,	
Yes = 3,	
No = 4,	
Abort = 5,	
Retry = 6,	
Ignore = 7,	
YesAll = 8,	
NoAll = 9,	
ButtonMask = 255,	
Default = 256,	
Escape = 512,	
FlagMask = 768
}
;


extern struct QMetaObject _ZN11QMessageBox16staticMetaObjectE ;
extern struct QMetaObject _ZNK11QMessageBox10metaObjectEv(void);
extern void _ZN11QMessageBox11qt_metacastEPKc(void);
extern int _ZN11QMessageBox11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QMessageBox _ZN11QMessageBoxC2EP7QWidget(void);
extern QMessageBox _ZN11QMessageBoxC1EP7QWidget(void);
extern QMessageBox _ZN11QMessageBoxC2ERK7QStringS2_NS_4IconEiiiP7QWidget6QFlagsIN2Qt10WindowTypeEE(void);
extern QMessageBox _ZN11QMessageBoxC1ERK7QStringS2_NS_4IconEiiiP7QWidget6QFlagsIN2Qt10WindowTypeEE(void);
extern QMessageBox _ZN11QMessageBoxD2Ev(void);
extern QMessageBox _ZN11QMessageBoxD1Ev(void);
extern QMessageBox _ZN11QMessageBoxD0Ev(void);
extern QString _ZNK11QMessageBox4textEv(void);
extern void _ZN11QMessageBox7setTextERK7QString(void);
extern enum N11QMessageBox4IconE _ZNK11QMessageBox4iconEv(void);
extern void _ZN11QMessageBox7setIconENS_4IconE(void);
extern  _ZNK11QMessageBox10iconPixmapEv(void);
extern void _ZN11QMessageBox13setIconPixmapERK7QPixmap(void);
extern QString _ZNK11QMessageBox10buttonTextEi(void);
extern void _ZN11QMessageBox13setButtonTextEiRK7QString(void);
extern enum N2Qt10TextFormatE _ZNK11QMessageBox10textFormatEv(void);
extern void _ZN11QMessageBox13setTextFormatEN2Qt10TextFormatE(void);
extern int _ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_iii(void);
extern int _ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_S4_S4_S4_ii(void);
extern int _ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_iii(void);
extern int _ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_S4_S4_S4_ii(void);
extern int _ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_iii(void);
extern int _ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_S4_S4_S4_ii(void);
extern int _ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_iii(void);
extern int _ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_S4_S4_S4_ii(void);
extern void _ZN11QMessageBox5aboutEP7QWidgetRK7QStringS4_(void);
extern void _ZN11QMessageBox7aboutQtEP7QWidgetRK7QString(void);
extern QSize _ZNK11QMessageBox8sizeHintEv(void);
extern QMessageBox _ZN11QMessageBoxC2ERK7QStringS2_NS_4IconEiiiP7QWidgetPKcb6QFlagsIN2Qt10WindowTypeEE(void);
extern QMessageBox _ZN11QMessageBoxC1ERK7QStringS2_NS_4IconEiiiP7QWidgetPKcb6QFlagsIN2Qt10WindowTypeEE(void);
extern QMessageBox _ZN11QMessageBoxC2EP7QWidgetPKc(void);
extern QMessageBox _ZN11QMessageBoxC1EP7QWidgetPKc(void);
extern  _ZN11QMessageBox12standardIconENS_4IconEN2Qt8GUIStyleE(void);
extern  _ZN11QMessageBox12standardIconENS_4IconE(void);
extern void _ZN11QMessageBox11resizeEventEP12QResizeEvent(void);
extern void _ZN11QMessageBox9showEventEP10QShowEvent(void);
extern void _ZN11QMessageBox10closeEventEP11QCloseEvent(void);
extern void _ZN11QMessageBox13keyPressEventEP9QKeyEvent(void);
extern void _ZN11QMessageBox11changeEventEP6QEvent(void);
// *INDENT-ON*
#endif
