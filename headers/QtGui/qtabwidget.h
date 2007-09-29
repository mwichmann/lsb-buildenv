#ifndef _QTGUI_QTABWIDGET_H_
#define _QTGUI_QTABWIDGET_H_

class QTabWidget;
// *INDENT-OFF*



class QTabWidget : public QWidget
{
private:
public:
};

enum TabPosition	
{
North = 0,	
Top = 0,	
South = 1,	
Bottom = 1,	
West = 2,	
East = 3
}
;

enum TabShape	
{
Rounded = 0,	
Triangular = 1
}
;


extern struct QMetaObject _ZN10QTabWidget16staticMetaObjectE ;
extern struct QMetaObject _ZNK10QTabWidget10metaObjectEv(void);
extern void _ZN10QTabWidget11qt_metacastEPKc(void);
extern int _ZN10QTabWidget11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QTabWidget _ZN10QTabWidgetC2EP7QWidget(void);
extern QTabWidget _ZN10QTabWidgetC1EP7QWidget(void);
extern QTabWidget _ZN10QTabWidgetD2Ev(void);
extern QTabWidget _ZN10QTabWidgetD1Ev(void);
extern QTabWidget _ZN10QTabWidgetD0Ev(void);
extern int _ZN10QTabWidget6addTabEP7QWidgetRK7QString(void);
extern int _ZN10QTabWidget6addTabEP7QWidgetRK5QIconRK7QString(void);
extern int _ZN10QTabWidget9insertTabEiP7QWidgetRK7QString(void);
extern int _ZN10QTabWidget9insertTabEiP7QWidgetRK5QIconRK7QString(void);
extern void _ZN10QTabWidget9removeTabEi(void);
extern bool _ZNK10QTabWidget12isTabEnabledEi(void);
extern void _ZN10QTabWidget13setTabEnabledEib(void);
extern QString _ZNK10QTabWidget7tabTextEi(void);
extern void _ZN10QTabWidget10setTabTextEiRK7QString(void);
extern QIcon _ZNK10QTabWidget7tabIconEi(void);
extern void _ZN10QTabWidget10setTabIconEiRK5QIcon(void);
extern void _ZN10QTabWidget13setTabToolTipEiRK7QString(void);
extern QString _ZNK10QTabWidget10tabToolTipEi(void);
extern void _ZN10QTabWidget15setTabWhatsThisEiRK7QString(void);
extern QString _ZNK10QTabWidget12tabWhatsThisEi(void);
extern int _ZNK10QTabWidget12currentIndexEv(void);
extern QWidget _ZNK10QTabWidget13currentWidgetEv(void);
extern QWidget _ZNK10QTabWidget6widgetEi(void);
extern int _ZNK10QTabWidget7indexOfEP7QWidget(void);
extern int _ZNK10QTabWidget5countEv(void);
extern enum N10QTabWidget11TabPositionE _ZNK10QTabWidget11tabPositionEv(void);
extern void _ZN10QTabWidget14setTabPositionENS_11TabPositionE(void);
extern enum N10QTabWidget8TabShapeE _ZNK10QTabWidget8tabShapeEv(void);
extern void _ZN10QTabWidget11setTabShapeENS_8TabShapeE(void);
extern QSize _ZNK10QTabWidget8sizeHintEv(void);
extern QSize _ZNK10QTabWidget15minimumSizeHintEv(void);
extern void _ZN10QTabWidget15setCornerWidgetEP7QWidgetN2Qt6CornerE(void);
extern QWidget _ZNK10QTabWidget12cornerWidgetEN2Qt6CornerE(void);
extern void _ZN10QTabWidget15setCurrentIndexEi(void);
extern void _ZN10QTabWidget16setCurrentWidgetEP7QWidget(void);
extern void _ZN10QTabWidget14currentChangedEi(void);
extern void _ZN10QTabWidget11tabInsertedEi(void);
extern void _ZN10QTabWidget10tabRemovedEi(void);
extern void _ZN10QTabWidget9showEventEP10QShowEvent(void);
extern void _ZN10QTabWidget11resizeEventEP12QResizeEvent(void);
extern void _ZN10QTabWidget13keyPressEventEP9QKeyEvent(void);
extern void _ZN10QTabWidget10paintEventEP11QPaintEvent(void);
extern void _ZN10QTabWidget9setTabBarEP7QTabBar(void);
extern QTabBar _ZNK10QTabWidget6tabBarEv(void);
extern void _ZN10QTabWidget11changeEventEP6QEvent(void);
extern bool _ZN10QTabWidget5eventEP6QEvent(void);
extern QTabWidget _ZN10QTabWidgetC2EP7QWidgetPKc6QFlagsIN2Qt10WindowTypeEE(void);
extern QTabWidget _ZN10QTabWidgetC1EP7QWidgetPKc6QFlagsIN2Qt10WindowTypeEE(void);
extern void _ZN10QTabWidget14currentChangedEP7QWidget(void);
// *INDENT-ON*
#endif
