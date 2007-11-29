#ifndef _QTGUI_QMENU_H_
#define _QTGUI_QMENU_H_

class QMenu;
// *INDENT-OFF*




class QMenu : public QWidget
{
private:
public:
};


extern struct QMetaObject _ZN5QMenu16staticMetaObjectE ;
extern struct QMetaObject _ZNK5QMenu10metaObjectEv(void);
extern void _ZN5QMenu11qt_metacastEPKc(void);
extern int _ZN5QMenu11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QMenu _ZN5QMenuC2EP7QWidget(void);
extern QMenu _ZN5QMenuC1EP7QWidget(void);
extern QMenu _ZN5QMenuC2ERK7QStringP7QWidget(void);
extern QMenu _ZN5QMenuC1ERK7QStringP7QWidget(void);
extern  _ZN5QMenuD2Ev(void);
extern  _ZN5QMenuD1Ev(void);
extern  _ZN5QMenuD0Ev(void);
extern QAction _ZN5QMenu9addActionERK7QString(void);
extern QAction _ZN5QMenu9addActionERK5QIconRK7QString(void);
extern QAction _ZN5QMenu9addActionERK7QStringPK7QObjectPKcRK12QKeySequence(void);
extern QAction _ZN5QMenu9addActionERK5QIconRK7QStringPK7QObjectPKcRK12QKeySequence(void);
extern QAction _ZN5QMenu7addMenuEPS_(void);
extern QMenu _ZN5QMenu7addMenuERK7QString(void);
extern QMenu _ZN5QMenu7addMenuERK5QIconRK7QString(void);
extern QAction _ZN5QMenu12addSeparatorEv(void);
extern QAction _ZN5QMenu10insertMenuEP7QActionPS_(void);
extern QAction _ZN5QMenu15insertSeparatorEP7QAction(void);
extern void _ZN5QMenu5clearEv(void);
extern void _ZN5QMenu17setTearOffEnabledEb(void);
extern bool _ZNK5QMenu16isTearOffEnabledEv(void);
extern bool _ZNK5QMenu20isTearOffMenuVisibleEv(void);
extern void _ZN5QMenu15hideTearOffMenuEv(void);
extern void _ZN5QMenu16setDefaultActionEP7QAction(void);
extern QAction _ZNK5QMenu13defaultActionEv(void);
extern void _ZN5QMenu15setActiveActionEP7QAction(void);
extern QAction _ZNK5QMenu12activeActionEv(void);
extern void _ZN5QMenu5popupERK6QPointP7QAction(void);
extern QAction _ZN5QMenu4execEv(void);
extern QAction _ZN5QMenu4execERK6QPointP7QAction(void);
extern QAction _ZN5QMenu4execE5QListIP7QActionERK6QPointS2_(void);
extern QSize _ZNK5QMenu8sizeHintEv(void);
extern QRect _ZNK5QMenu14actionGeometryEP7QAction(void);
extern QAction _ZNK5QMenu8actionAtERK6QPoint(void);
extern QAction _ZNK5QMenu10menuActionEv(void);
extern QString _ZNK5QMenu5titleEv(void);
extern void _ZN5QMenu8setTitleERK7QString(void);
extern QIcon _ZNK5QMenu4iconEv(void);
extern void _ZN5QMenu7setIconERK5QIcon(void);
extern void _ZN5QMenu14setNoReplayForEP7QWidget(void);
extern void _ZN5QMenu11aboutToShowEv(void);
extern void _ZN5QMenu9triggeredEP7QAction(void);
extern void _ZN5QMenu7hoveredEP7QAction(void);
extern int _ZNK5QMenu11columnCountEv(void);
extern void _ZN5QMenu11changeEventEP6QEvent(void);
extern void _ZN5QMenu13keyPressEventEP9QKeyEvent(void);
extern void _ZN5QMenu17mouseReleaseEventEP11QMouseEvent(void);
extern void _ZN5QMenu15mousePressEventEP11QMouseEvent(void);
extern void _ZN5QMenu14mouseMoveEventEP11QMouseEvent(void);
extern void _ZN5QMenu10wheelEventEP11QWheelEvent(void);
extern void _ZN5QMenu10enterEventEP6QEvent(void);
extern void _ZN5QMenu10leaveEventEP6QEvent(void);
extern void _ZN5QMenu9hideEventEP10QHideEvent(void);
extern void _ZN5QMenu10paintEventEP11QPaintEvent(void);
extern void _ZN5QMenu11actionEventEP12QActionEvent(void);
extern void _ZN5QMenu10timerEventEP11QTimerEvent(void);
extern bool _ZN5QMenu5eventEP6QEvent(void);
extern int _ZN5QMenu10insertItemEP9QMenuItemii(void);
extern int _ZN5QMenu15insertSeparatorEi(void);
extern void _ZN5QMenu5setIdEii(void);
extern  _ZN5QMenu9findPopupEPS_Pi(void);
extern bool _ZN5QMenu16setItemParameterEii(void);
extern int _ZNK5QMenu13itemParameterEi(void);
extern int _ZNK5QMenu10frameWidthEv(void);
extern void _ZN5QMenu11aboutToHideEv(void);
extern void _ZN5QMenu9activatedEi(void);
extern void _ZN5QMenu11highlightedEi(void);
extern int _ZN5QMenu9insertAnyEPK5QIconPK7QStringPK7QObjectPKcPK12QKeySequencePKS_ii(void);
// *INDENT-ON*
#endif
