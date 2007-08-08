#ifndef _QTGUI_QAPPLICATION_H_
#define _QTGUI_QAPPLICATION_H_

class QApplication;
// *INDENT-OFF*



typedef int	ColorMode	
;

class QApplication : public QCoreApplication
{
private:
public:
};

enum Type	
{
Tty,	
GuiClient,	
GuiServer
}
;

enum ColorSpec	
{
NormalColor,	
CustomColor,	
ManyColor
}
;


extern struct QMetaObject _ZN12QApplication16staticMetaObjectE ;
extern struct QMetaObject _ZNK12QApplication10metaObjectEv(void);
extern void _ZN12QApplication11qt_metacastEPKc(void);
extern int _ZN12QApplication11qt_metacallEN11QMetaObject4CallEiPPv(void);
extern QApplication _ZN12QApplicationC2ERiPPc(void);
extern QApplication _ZN12QApplicationC1ERiPPc(void);
extern QApplication _ZN12QApplicationC2ERiPPcb(void);
extern QApplication _ZN12QApplicationC1ERiPPcb(void);
extern QApplication _ZN12QApplicationC2ERiPPcNS_4TypeE(void);
extern QApplication _ZN12QApplicationC1ERiPPcNS_4TypeE(void);
extern QApplication _ZN12QApplicationC2EP9_XDisplaymm(void);
extern QApplication _ZN12QApplicationC1EP9_XDisplaymm(void);
extern QApplication _ZN12QApplicationC2EP9_XDisplayRiPPcmm(void);
extern QApplication _ZN12QApplicationC1EP9_XDisplayRiPPcmm(void);
extern QApplication _ZN12QApplicationD2Ev(void);
extern QApplication _ZN12QApplicationD1Ev(void);
extern QApplication _ZN12QApplicationD0Ev(void);
extern enum N12QApplication4TypeE _ZN12QApplication4typeEv(void);
extern QStyle _ZN12QApplication5styleEv(void);
extern void _ZN12QApplication8setStyleEP6QStyle(void);
extern QStyle _ZN12QApplication8setStyleERK7QString(void);
extern int _ZN12QApplication9colorSpecEv(void);
extern void _ZN12QApplication12setColorSpecEi(void);
extern QCursor _ZN12QApplication14overrideCursorEv(void);
extern void _ZN12QApplication17setOverrideCursorERK7QCursor(void);
extern void _ZN12QApplication20changeOverrideCursorERK7QCursor(void);
extern void _ZN12QApplication21restoreOverrideCursorEv(void);
extern QPalette _ZN12QApplication7paletteEv(void);
extern QPalette _ZN12QApplication7paletteEPK7QWidget(void);
extern QPalette _ZN12QApplication7paletteEPKc(void);
extern void _ZN12QApplication10setPaletteERK8QPalettePKc(void);
extern QFont _ZN12QApplication4fontEPK7QWidget(void);
extern void _ZN12QApplication7setFontERK5QFontPKc(void);
extern QFontMetrics _ZN12QApplication11fontMetricsEv(void);
extern void _ZN12QApplication13setWindowIconERK5QIcon(void);
extern QIcon _ZN12QApplication10windowIconEv(void);
extern QWidget _ZN12QApplication10mainWidgetEv(void);
extern void _ZN12QApplication13setMainWidgetEP7QWidget(void);
extern _Z11QWidgetList _ZN12QApplication10allWidgetsEv(void);
extern _Z11QWidgetList _ZN12QApplication15topLevelWidgetsEv(void);
extern QDesktopWidget _ZN12QApplication7desktopEv(void);
extern QWidget _ZN12QApplication17activePopupWidgetEv(void);
extern QWidget _ZN12QApplication17activeModalWidgetEv(void);
extern QClipboard _ZN12QApplication9clipboardEv(void);
extern QWidget _ZN12QApplication11focusWidgetEv(void);
extern QWidget _ZN12QApplication12activeWindowEv(void);
extern void _ZN12QApplication15setActiveWindowEP7QWidget(void);
extern QWidget _ZN12QApplication8widgetAtERK6QPoint(void);
extern QWidget _ZN12QApplication10topLevelAtERK6QPoint(void);
extern void _ZN12QApplication5syncXEv(void);
extern void _ZN12QApplication4beepEv(void);
extern N2Qt17KeyboardModifiersE _ZN12QApplication17keyboardModifiersEv(void);
extern N2Qt12MouseButtonsE _ZN12QApplication12mouseButtonsEv(void);
extern void _ZN12QApplication23setDesktopSettingsAwareEb(void);
extern bool _ZN12QApplication20desktopSettingsAwareEv(void);
extern void _ZN12QApplication18setCursorFlashTimeEi(void);
extern int _ZN12QApplication15cursorFlashTimeEv(void);
extern void _ZN12QApplication22setDoubleClickIntervalEi(void);
extern int _ZN12QApplication19doubleClickIntervalEv(void);
extern void _ZN12QApplication24setKeyboardInputIntervalEi(void);
extern int _ZN12QApplication21keyboardInputIntervalEv(void);
extern void _ZN12QApplication19setWheelScrollLinesEi(void);
extern int _ZN12QApplication16wheelScrollLinesEv(void);
extern void _ZN12QApplication14setGlobalStrutERK5QSize(void);
extern QSize _ZN12QApplication11globalStrutEv(void);
extern void _ZN12QApplication16setStartDragTimeEi(void);
extern int _ZN12QApplication13startDragTimeEv(void);
extern void _ZN12QApplication20setStartDragDistanceEi(void);
extern int _ZN12QApplication17startDragDistanceEv(void);
extern void _ZN12QApplication18setLayoutDirectionEN2Qt15LayoutDirectionE(void);
extern enum N2Qt15LayoutDirectionE _ZN12QApplication15layoutDirectionEv(void);
extern bool _ZN12QApplication15isEffectEnabledEN2Qt8UIEffectE(void);
extern void _ZN12QApplication16setEffectEnabledEN2Qt8UIEffectEb(void);
extern bool _ZN12QApplication14x11EventFilterEP7_XEvent(void);
extern int _ZN12QApplication16x11ClientMessageEP7QWidgetP7_XEventb(void);
extern int _ZN12QApplication15x11ProcessEventEP7_XEvent(void);
extern bool _ZNK12QApplication17isSessionRestoredEv(void);
extern QString _ZNK12QApplication9sessionIdEv(void);
extern QString _ZNK12QApplication10sessionKeyEv(void);
extern void _ZN12QApplication10commitDataER15QSessionManager(void);
extern void _ZN12QApplication9saveStateER15QSessionManager(void);
extern void _ZN12QApplication15setInputContextEP13QInputContext(void);
extern  _ZNK12QApplication12inputContextEv(void);
extern int _ZN12QApplication4execEv(void);
extern bool _ZN12QApplication6notifyEP7QObjectP6QEvent(void);
extern void _ZN12QApplication25setQuitOnLastWindowClosedEb(void);
extern bool _ZN12QApplication22quitOnLastWindowClosedEv(void);
extern void _ZN12QApplication16lastWindowClosedEv(void);
extern void _ZN12QApplication12focusChangedEP7QWidgetS1_(void);
extern void _ZN12QApplication15closeAllWindowsEv(void);
extern void _ZN12QApplication7aboutQtEv(void);
extern bool _ZN12QApplication5eventEP6QEvent(void);
extern bool _ZN12QApplication13compressEventEP6QEventP7QObjectP14QPostEventList(void);
extern N2Qt9AlignmentE _ZN12QApplication19horizontalAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void);
// *INDENT-ON*
#endif
