#ifndef _QTGUI_QACTION_H_
#define _QTGUI_QACTION_H_

class QAction;
// *INDENT-OFF*



class QAction : public QObject
{
private:
public:
};

enum ActionEvent	
{
Trigger,	
Hover
}
;


extern struct QMetaObject _ZN7QAction16staticMetaObjectE ;
extern struct QMetaObject _ZNK7QAction10metaObjectEv(void);
extern void _ZN7QAction11qt_metacastEPKc(void);
extern int _ZN7QAction11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QAction _ZN7QActionC2EP7QObject(void);
extern QAction _ZN7QActionC1EP7QObject(void);
extern QAction _ZN7QActionC2ERK7QStringP7QObject(void);
extern QAction _ZN7QActionC1ERK7QStringP7QObject(void);
extern QAction _ZN7QActionC2ERK5QIconRK7QStringP7QObject(void);
extern QAction _ZN7QActionC1ERK5QIconRK7QStringP7QObject(void);
extern QAction _ZN7QActionC2EP7QObjectPKc(void);
extern QAction _ZN7QActionC1EP7QObjectPKc(void);
extern QAction _ZN7QActionC2ERK7QStringRK12QKeySequenceP7QObjectPKc(void);
extern QAction _ZN7QActionC1ERK7QStringRK12QKeySequenceP7QObjectPKc(void);
extern QAction _ZN7QActionC2ERK5QIconRK7QStringRK12QKeySequenceP7QObjectPKc(void);
extern QAction _ZN7QActionC1ERK5QIconRK7QStringRK12QKeySequenceP7QObjectPKc(void);
extern QAction _ZN7QActionD2Ev(void);
extern QAction _ZN7QActionD1Ev(void);
extern QAction _ZN7QActionD0Ev(void);
extern void _ZN7QAction14setActionGroupEP12QActionGroup(void);
extern  _ZNK7QAction11actionGroupEv(void);
extern void _ZN7QAction7setIconERK5QIcon(void);
extern QIcon _ZNK7QAction4iconEv(void);
extern void _ZN7QAction7setTextERK7QString(void);
extern QString _ZNK7QAction4textEv(void);
extern void _ZN7QAction11setIconTextERK7QString(void);
extern QString _ZNK7QAction8iconTextEv(void);
extern void _ZN7QAction10setToolTipERK7QString(void);
extern QString _ZNK7QAction7toolTipEv(void);
extern void _ZN7QAction12setStatusTipERK7QString(void);
extern QString _ZNK7QAction9statusTipEv(void);
extern void _ZN7QAction12setWhatsThisERK7QString(void);
extern QString _ZNK7QAction9whatsThisEv(void);
extern  _ZNK7QAction4menuEv(void);
extern void _ZN7QAction7setMenuEP5QMenu(void);
extern void _ZN7QAction12setSeparatorEb(void);
extern bool _ZNK7QAction11isSeparatorEv(void);
extern void _ZN7QAction11setShortcutERK12QKeySequence(void);
extern QKeySequence _ZNK7QAction8shortcutEv(void);
extern void _ZN7QAction18setShortcutContextEN2Qt15ShortcutContextE(void);
extern enum N2Qt15ShortcutContextE _ZNK7QAction15shortcutContextEv(void);
extern void _ZN7QAction7setFontERK5QFont(void);
extern QFont _ZNK7QAction4fontEv(void);
extern void _ZN7QAction12setCheckableEb(void);
extern bool _ZNK7QAction11isCheckableEv(void);
extern QVariant _ZNK7QAction4dataEv(void);
extern void _ZN7QAction7setDataERK8QVariant(void);
extern bool _ZNK7QAction9isCheckedEv(void);
extern bool _ZNK7QAction9isEnabledEv(void);
extern bool _ZNK7QAction9isVisibleEv(void);
extern void _ZN7QAction8activateENS_11ActionEventE(void);
extern bool _ZN7QAction14showStatusTextEP7QWidget(void);
extern QWidget _ZNK7QAction12parentWidgetEv(void);
extern bool _ZN7QAction5eventEP6QEvent(void);
extern void _ZN7QAction10setCheckedEb(void);
extern void _ZN7QAction6toggleEv(void);
extern void _ZN7QAction10setEnabledEb(void);
extern void _ZN7QAction10setVisibleEb(void);
extern void _ZN7QAction7changedEv(void);
extern void _ZN7QAction9triggeredEb(void);
extern void _ZN7QAction7hoveredEv(void);
extern void _ZN7QAction7toggledEb(void);
extern void _ZN7QAction9activatedEi(void);
// *INDENT-ON*
#endif
