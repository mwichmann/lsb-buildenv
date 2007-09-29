#ifndef _QTGUI_QMENUBAR_H_
#define _QTGUI_QMENUBAR_H_

class QMenuBar;
// *INDENT-OFF*



class QMenuBar : public QWidget
{
private:
public:
};

enum Separator	
{
Never = 0,	
InWindowsStyle = 1
}
;


extern struct QMetaObject _ZN8QMenuBar16staticMetaObjectE ;
extern struct QMetaObject _ZNK8QMenuBar10metaObjectEv(void);
extern void _ZN8QMenuBar11qt_metacastEPKc(void);
extern int _ZN8QMenuBar11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QMenuBar _ZN8QMenuBarC2EP7QWidget(void);
extern QMenuBar _ZN8QMenuBarC1EP7QWidget(void);
extern QMenuBar _ZN8QMenuBarD2Ev(void);
extern QMenuBar _ZN8QMenuBarD1Ev(void);
extern QMenuBar _ZN8QMenuBarD0Ev(void);
extern QAction _ZN8QMenuBar9addActionERK7QString(void);
extern QAction _ZN8QMenuBar9addActionERK7QStringPK7QObjectPKc(void);
extern QAction _ZN8QMenuBar7addMenuEP5QMenu(void);
extern QMenu _ZN8QMenuBar7addMenuERK7QString(void);
extern QMenu _ZN8QMenuBar7addMenuERK5QIconRK7QString(void);
extern QAction _ZN8QMenuBar12addSeparatorEv(void);
extern QAction _ZN8QMenuBar10insertMenuEP7QActionP5QMenu(void);
extern void _ZN8QMenuBar5clearEv(void);
extern QAction _ZNK8QMenuBar12activeActionEv(void);
extern void _ZN8QMenuBar15setActiveActionEP7QAction(void);
extern void _ZN8QMenuBar12setDefaultUpEb(void);
extern bool _ZNK8QMenuBar11isDefaultUpEv(void);
extern QSize _ZNK8QMenuBar8sizeHintEv(void);
extern QSize _ZNK8QMenuBar15minimumSizeHintEv(void);
extern int _ZNK8QMenuBar14heightForWidthEi(void);
extern QRect _ZNK8QMenuBar14actionGeometryEP7QAction(void);
extern QAction _ZNK8QMenuBar8actionAtERK6QPoint(void);
extern void _ZN8QMenuBar15setCornerWidgetEP7QWidgetN2Qt6CornerE(void);
extern QWidget _ZNK8QMenuBar12cornerWidgetEN2Qt6CornerE(void);
extern void _ZN8QMenuBar9triggeredEP7QAction(void);
extern void _ZN8QMenuBar7hoveredEP7QAction(void);
extern void _ZN8QMenuBar11changeEventEP6QEvent(void);
extern void _ZN8QMenuBar13keyPressEventEP9QKeyEvent(void);
extern void _ZN8QMenuBar17mouseReleaseEventEP11QMouseEvent(void);
extern void _ZN8QMenuBar15mousePressEventEP11QMouseEvent(void);
extern void _ZN8QMenuBar14mouseMoveEventEP11QMouseEvent(void);
extern void _ZN8QMenuBar10leaveEventEP6QEvent(void);
extern void _ZN8QMenuBar10paintEventEP11QPaintEvent(void);
extern void _ZN8QMenuBar11resizeEventEP12QResizeEvent(void);
extern void _ZN8QMenuBar11actionEventEP12QActionEvent(void);
extern void _ZN8QMenuBar13focusOutEventEP11QFocusEvent(void);
extern void _ZN8QMenuBar12focusInEventEP11QFocusEvent(void);
extern bool _ZN8QMenuBar11eventFilterEP7QObjectP6QEvent(void);
extern bool _ZN8QMenuBar5eventEP6QEvent(void);
extern QMenuBar _ZN8QMenuBarC2EP7QWidgetPKc(void);
extern QMenuBar _ZN8QMenuBarC1EP7QWidgetPKc(void);
extern int _ZN8QMenuBar15insertSeparatorEi(void);
extern bool _ZN8QMenuBar16setItemParameterEii(void);
extern int _ZNK8QMenuBar13itemParameterEi(void);
extern int _ZNK8QMenuBar10frameWidthEv(void);
extern void _ZN8QMenuBar15setAutoGeometryEb(void);
extern bool _ZNK8QMenuBar12autoGeometryEv(void);
extern void _ZN8QMenuBar9activatedEi(void);
extern void _ZN8QMenuBar11highlightedEi(void);
// *INDENT-ON*
#endif
