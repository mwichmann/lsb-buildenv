#ifndef _QTCORE_QCOREEVENT_H_
#define _QTCORE_QCOREEVENT_H_


#ifdef __cplusplus
extern "C" {
#endif




    Unknown Type:".Class.";

    enum N6QEvent4TypeE {
	None,
	Timer,
	MouseButtonPress,
	MouseButtonRelease,
	MouseButtonDblClick,
	MouseMove,
	KeyPress,
	KeyRelease,
	FocusIn,
	FocusOut,
	Enter,
	Leave,
	Paint,
	Move,
	Resize,
	Create,
	Destroy,
	Show,
	Hide,
	Close,
	Quit,
	ParentChange,
	Reparent,
	ThreadChange,
	WindowActivate,
	WindowDeactivate,
	ShowToParent,
	HideToParent,
	Accel,
	Wheel,
	AccelAvailable,
	WindowTitleChange,
	CaptionChange,
	WindowIconChange,
	IconChange,
	ApplicationWindowIconChange,
	ApplicationFontChange,
	ApplicationLayoutDirectionChange,
	ApplicationPaletteChange,
	PaletteChange,
	Clipboard,
	Speech,
	MetaCall,
	SockAct,
	ShortcutOverride,
	AccelOverride,
	DeferredDelete,
	DragEnter,
	DragMove,
	DragLeave,
	Drop,
	DragResponse,
	ChildAdded,
	ChildPolished,
	ChildInserted,
	ChildRemoved,
	LayoutHint,
	ShowWindowRequest,
	PolishRequest,
	Polish,
	LayoutRequest,
	UpdateRequest,
	UpdateLater,
	EmbeddingControl,
	ActivateControl,
	DeactivateControl,
	ContextMenu,
	InputMethod,
	AccessibilityPrepare,
	TabletMove,
	LocaleChange,
	LanguageChange,
	LayoutDirectionChange,
	Style,
	TabletPress,
	TabletRelease,
	OkRequest,
	HelpRequest,
	IconDrag,
	FontChange,
	EnabledChange,
	ActivationChange,
	StyleChange,
	IconTextChange,
	ModifiedChange,
	WindowBlocked,
	WindowUnblocked,
	WindowStateChange,
	MouseTrackingChange,
	ToolTip,
	WhatsThis,
	StatusTip,
	ActionChanged,
	ActionAdded,
	ActionRemoved,
	FileOpen,
	Shortcut,
	WhatsThisClicked,
	AccessibilityHelp,
	ToolBarChange,
	ApplicationActivated,
	ApplicationDeactivated,
	QueryWhatsThis,
	EnterWhatsThisMode,
	LeaveWhatsThisMode,
	ZOrderChange,
	HoverEnter,
	HoverLeave,
	HoverMove,
	AccessibilityDescription,
	ParentAboutToChange,
	WinEventAct,
	AcceptDropsChange,
	MenubarUpdated,
	ZeroTimerEvent,
	User,
	MaxUser
    };

    Unknown Type:".Class.";

    Unknown Type:".Class.";

    Unknown Type:".Class.";


    extern Class _ZN6QEventC2ENS_4TypeE(void);
    extern Class _ZN6QEventC1ENS_4TypeE(void);
    extern Class _ZN6QEventD2Ev(void);
    extern Class _ZN6QEventD1Ev(void);
    extern Class _ZN6QEventD0Ev(void);
    extern Class _ZN11QTimerEventC2Ei(void);
    extern Class _ZN11QTimerEventC1Ei(void);
    extern Class _ZN11QTimerEventD2Ev(void);
    extern Class _ZN11QTimerEventD1Ev(void);
    extern Class _ZN11QTimerEventD0Ev(void);
    extern Class _ZN11QChildEventC2EN6QEvent4TypeEP7QObject(void);
    extern Class _ZN11QChildEventC1EN6QEvent4TypeEP7QObject(void);
    extern Class _ZN11QChildEventD2Ev(void);
    extern Class _ZN11QChildEventD1Ev(void);
    extern Class _ZN11QChildEventD0Ev(void);
    extern Class _ZN12QCustomEventC2EiPv(void);
    extern Class _ZN12QCustomEventC1EiPv(void);
    extern Class _ZN12QCustomEventD2Ev(void);
    extern Class _ZN12QCustomEventD1Ev(void);
    extern Class _ZN12QCustomEventD0Ev(void);
#ifdef __cplusplus
}
#endif
#endif
