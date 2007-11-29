#ifndef _QTGUI_QWORKSPACE_H_
#define _QTGUI_QWORKSPACE_H_

class QWorkspace;
// *INDENT-OFF*




class QWorkspace : public QWidget
{
private:
public:
};

enum WindowOrder	
{
CreationOrder = 0,	
StackingOrder = 1
}
;


extern struct QMetaObject _ZN10QWorkspace16staticMetaObjectE ;
extern struct QMetaObject _ZNK10QWorkspace10metaObjectEv(void);
extern void _ZN10QWorkspace11qt_metacastEPKc(void);
extern int _ZN10QWorkspace11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QWorkspace _ZN10QWorkspaceC2EP7QWidget(void);
extern QWorkspace _ZN10QWorkspaceC1EP7QWidget(void);
extern  _ZN10QWorkspaceD2Ev(void);
extern  _ZN10QWorkspaceD1Ev(void);
extern  _ZN10QWorkspaceD0Ev(void);
extern QWidget _ZNK10QWorkspace12activeWindowEv(void);
extern _Z11QWidgetList _ZNK10QWorkspace10windowListENS_11WindowOrderE(void);
extern QWidget _ZN10QWorkspace9addWindowEP7QWidget6QFlagsIN2Qt10WindowTypeEE(void);
extern QSize _ZNK10QWorkspace8sizeHintEv(void);
extern bool _ZNK10QWorkspace17scrollBarsEnabledEv(void);
extern void _ZN10QWorkspace20setScrollBarsEnabledEb(void);
extern QWorkspace _ZN10QWorkspaceC2EP7QWidgetPKc(void);
extern QWorkspace _ZN10QWorkspaceC1EP7QWidgetPKc(void);
extern void _ZN10QWorkspace25setPaletteBackgroundColorERK6QColor(void);
extern void _ZN10QWorkspace26setPaletteBackgroundPixmapERK7QPixmap(void);
extern void _ZN10QWorkspace13setBackgroundERK6QBrush(void);
extern QBrush _ZNK10QWorkspace10backgroundEv(void);
extern void _ZN10QWorkspace15windowActivatedEP7QWidget(void);
extern void _ZN10QWorkspace15setActiveWindowEP7QWidget(void);
extern void _ZN10QWorkspace7cascadeEv(void);
extern void _ZN10QWorkspace4tileEv(void);
extern void _ZN10QWorkspace12arrangeIconsEv(void);
extern void _ZN10QWorkspace17closeActiveWindowEv(void);
extern void _ZN10QWorkspace15closeAllWindowsEv(void);
extern void _ZN10QWorkspace18activateNextWindowEv(void);
extern void _ZN10QWorkspace22activatePreviousWindowEv(void);
extern bool _ZN10QWorkspace5eventEP6QEvent(void);
extern void _ZN10QWorkspace10paintEventEP11QPaintEvent(void);
extern void _ZN10QWorkspace11changeEventEP6QEvent(void);
extern void _ZN10QWorkspace10childEventEP11QChildEvent(void);
extern void _ZN10QWorkspace11resizeEventEP12QResizeEvent(void);
extern bool _ZN10QWorkspace11eventFilterEP7QObjectP6QEvent(void);
extern void _ZN10QWorkspace9showEventEP10QShowEvent(void);
extern void _ZN10QWorkspace9hideEventEP10QHideEvent(void);
extern void _ZN10QWorkspace10wheelEventEP11QWheelEvent(void);
// *INDENT-ON*
#endif
