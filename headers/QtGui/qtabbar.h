#ifndef _QTGUI_QTABBAR_H_
#define _QTGUI_QTABBAR_H_

class QTabBar;
// *INDENT-OFF*



class QTabBar : public QWidget
{
private:
public:
};

enum Shape	
{
RoundedNorth = 0,	
RoundedAbove = 0,	
RoundedSouth = 1,	
RoundedBelow = 1,	
RoundedWest = 2,	
RoundedEast = 3,	
TriangularNorth = 4,	
TriangularAbove = 4,	
TriangularSouth = 5,	
TriangularBelow = 5,	
TriangularWest = 6,	
TriangularEast = 7
}
;


extern struct QMetaObject _ZN7QTabBar16staticMetaObjectE ;
extern struct QMetaObject _ZNK7QTabBar10metaObjectEv(void);
extern void _ZN7QTabBar11qt_metacastEPKc(void);
extern int _ZN7QTabBar11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QTabBar _ZN7QTabBarC2EP7QWidget(void);
extern QTabBar _ZN7QTabBarC1EP7QWidget(void);
extern QTabBar _ZN7QTabBarD2Ev(void);
extern QTabBar _ZN7QTabBarD1Ev(void);
extern QTabBar _ZN7QTabBarD0Ev(void);
extern enum N7QTabBar5ShapeE _ZNK7QTabBar5shapeEv(void);
extern void _ZN7QTabBar8setShapeENS_5ShapeE(void);
extern int _ZN7QTabBar6addTabERK7QString(void);
extern int _ZN7QTabBar6addTabERK5QIconRK7QString(void);
extern int _ZN7QTabBar9insertTabEiRK7QString(void);
extern int _ZN7QTabBar9insertTabEiRK5QIconRK7QString(void);
extern void _ZN7QTabBar9removeTabEi(void);
extern bool _ZNK7QTabBar12isTabEnabledEi(void);
extern void _ZN7QTabBar13setTabEnabledEib(void);
extern QString _ZNK7QTabBar7tabTextEi(void);
extern void _ZN7QTabBar10setTabTextEiRK7QString(void);
extern QColor _ZNK7QTabBar12tabTextColorEi(void);
extern void _ZN7QTabBar15setTabTextColorEiRK6QColor(void);
extern QIcon _ZNK7QTabBar7tabIconEi(void);
extern void _ZN7QTabBar10setTabIconEiRK5QIcon(void);
extern void _ZN7QTabBar13setTabToolTipEiRK7QString(void);
extern QString _ZNK7QTabBar10tabToolTipEi(void);
extern void _ZN7QTabBar15setTabWhatsThisEiRK7QString(void);
extern QString _ZNK7QTabBar12tabWhatsThisEi(void);
extern void _ZN7QTabBar10setTabDataEiRK8QVariant(void);
extern QVariant _ZNK7QTabBar7tabDataEi(void);
extern QRect _ZNK7QTabBar7tabRectEi(void);
extern int _ZNK7QTabBar12currentIndexEv(void);
extern int _ZNK7QTabBar5countEv(void);
extern QSize _ZNK7QTabBar8sizeHintEv(void);
extern QSize _ZNK7QTabBar15minimumSizeHintEv(void);
extern void _ZN7QTabBar11setDrawBaseEb(void);
extern bool _ZNK7QTabBar8drawBaseEv(void);
extern QSize _ZNK7QTabBar8iconSizeEv(void);
extern void _ZN7QTabBar11setIconSizeERK5QSize(void);
extern void _ZN7QTabBar15setCurrentIndexEi(void);
extern void _ZN7QTabBar14currentChangedEi(void);
extern QSize _ZNK7QTabBar11tabSizeHintEi(void);
extern void _ZN7QTabBar11tabInsertedEi(void);
extern void _ZN7QTabBar10tabRemovedEi(void);
extern void _ZN7QTabBar15tabLayoutChangeEv(void);
extern bool _ZN7QTabBar5eventEP6QEvent(void);
extern void _ZN7QTabBar11resizeEventEP12QResizeEvent(void);
extern void _ZN7QTabBar9showEventEP10QShowEvent(void);
extern void _ZN7QTabBar10paintEventEP11QPaintEvent(void);
extern void _ZN7QTabBar15mousePressEventEP11QMouseEvent(void);
extern void _ZN7QTabBar14mouseMoveEventEP11QMouseEvent(void);
extern void _ZN7QTabBar17mouseReleaseEventEP11QMouseEvent(void);
extern void _ZN7QTabBar13keyPressEventEP9QKeyEvent(void);
extern void _ZN7QTabBar11changeEventEP6QEvent(void);
extern void _ZN7QTabBar8selectedEi(void);
// *INDENT-ON*
#endif
