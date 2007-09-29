#ifndef _QTCORE_QCOREEVENT_H_
#define _QTCORE_QCOREEVENT_H_

class QCustomEvent;
// *INDENT-OFF*



class QEvent
{
private:
public:
};

enum Type	
{
None = 0,	
Timer = 1,	
MouseButtonPress = 2,	
MouseButtonRelease = 3,	
MouseButtonDblClick = 4,	
MouseMove = 5,	
KeyPress = 6,	
KeyRelease = 7,	
FocusIn = 8,	
FocusOut = 9,	
Enter = 10,	
Leave = 11,	
Paint = 12,	
Move = 13,	
Resize = 14,	
Create = 15,	
Destroy = 16,	
Show = 17,	
Hide = 18,	
Close = 19,	
Quit = 20,	
ParentChange = 21,	
Reparent = 21,	
ThreadChange = 22,	
WindowActivate = 24,	
WindowDeactivate = 25,	
ShowToParent = 26,	
HideToParent = 27,	
Accel = 30,	
Wheel = 31,	
AccelAvailable = 32,	
WindowTitleChange = 33,	
CaptionChange = 33,	
WindowIconChange = 34,	
IconChange = 34,	
ApplicationWindowIconChange = 35,	
ApplicationFontChange = 36,	
ApplicationLayoutDirectionChange = 37,	
ApplicationPaletteChange = 38,	
PaletteChange = 39,	
Clipboard = 40,	
Speech = 42,	
MetaCall = 43,	
SockAct = 50,	
ShortcutOverride = 51,	
AccelOverride = 51,	
DeferredDelete = 52,	
DragEnter = 60,	
DragMove = 61,	
DragLeave = 62,	
Drop = 63,	
DragResponse = 64,	
ChildAdded = 68,	
ChildPolished = 69,	
ChildInserted = 70,	
ChildRemoved = 71,	
LayoutHint = 72,	
ShowWindowRequest = 73,	
PolishRequest = 74,	
Polish = 75,	
LayoutRequest = 76,	
UpdateRequest = 77,	
UpdateLater = 78,	
EmbeddingControl = 79,	
ActivateControl = 80,	
DeactivateControl = 81,	
ContextMenu = 82,	
InputMethod = 83,	
AccessibilityPrepare = 86,	
TabletMove = 87,	
LocaleChange = 88,	
LanguageChange = 89,	
LayoutDirectionChange = 90,	
Style = 91,	
TabletPress = 92,	
TabletRelease = 93,	
OkRequest = 94,	
HelpRequest = 95,	
IconDrag = 96,	
FontChange = 97,	
EnabledChange = 98,	
ActivationChange = 99,	
StyleChange = 100,	
IconTextChange = 101,	
ModifiedChange = 102,	
WindowBlocked = 103,	
WindowUnblocked = 104,	
WindowStateChange = 105,	
MouseTrackingChange = 109,	
ToolTip = 110,	
WhatsThis = 111,	
StatusTip = 112,	
ActionChanged = 113,	
ActionAdded = 114,	
ActionRemoved = 115,	
FileOpen = 116,	
Shortcut = 117,	
WhatsThisClicked = 118,	
AccessibilityHelp = 119,	
ToolBarChange = 120,	
ApplicationActivated = 121,	
ApplicationDeactivated = 122,	
QueryWhatsThis = 123,	
EnterWhatsThisMode = 124,	
LeaveWhatsThisMode = 125,	
ZOrderChange = 126,	
HoverEnter = 127,	
HoverLeave = 128,	
HoverMove = 129,	
AccessibilityDescription = 130,	
ParentAboutToChange = 131,	
WinEventAct = 132,	
AcceptDropsChange = 152,	
MenubarUpdated = 153,	
ZeroTimerEvent = 154,	
User = 1000,	
MaxUser = 65535
}
;

class QTimerEvent : public QEvent
{
private:
public:
};

class QChildEvent : public QEvent
{
private:
public:
};

class QCustomEvent : public QEvent
{
private:
public:
};


extern QEvent _ZN6QEventC2ENS_4TypeE(void);
extern QEvent _ZN6QEventC1ENS_4TypeE(void);
extern QEvent _ZN6QEventD2Ev(void);
extern QEvent _ZN6QEventD1Ev(void);
extern QEvent _ZN6QEventD0Ev(void);
extern QTimerEvent _ZN11QTimerEventC2Ei(void);
extern QTimerEvent _ZN11QTimerEventC1Ei(void);
extern QTimerEvent _ZN11QTimerEventD2Ev(void);
extern QTimerEvent _ZN11QTimerEventD1Ev(void);
extern QTimerEvent _ZN11QTimerEventD0Ev(void);
extern QChildEvent _ZN11QChildEventC2EN6QEvent4TypeEP7QObject(void);
extern QChildEvent _ZN11QChildEventC1EN6QEvent4TypeEP7QObject(void);
extern QChildEvent _ZN11QChildEventD2Ev(void);
extern QChildEvent _ZN11QChildEventD1Ev(void);
extern QChildEvent _ZN11QChildEventD0Ev(void);
extern QCustomEvent _ZN12QCustomEventC2EiPv(void);
extern QCustomEvent _ZN12QCustomEventC1EiPv(void);
extern QCustomEvent _ZN12QCustomEventD2Ev(void);
extern QCustomEvent _ZN12QCustomEventD1Ev(void);
extern QCustomEvent _ZN12QCustomEventD0Ev(void);
// *INDENT-ON*
#endif
