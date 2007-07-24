#ifndef _QTCORE_QNAMESPACE_H_
#define _QTCORE_QNAMESPACE_H_

#include <QtCore/qglobal.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef Unknown Type:".." N2Qt17KeyboardModifiersE;

    typedef Unknown Type:".." N2Qt12MouseButtonsE;

    typedef int N2Qt11ButtonStateE;

    typedef Unknown Type:".." N2Qt12OrientationsE;

    typedef Unknown Type:".." N2Qt9AlignmentE;

    typedef enum N2Qt8TextFlagE {
	TextSingleLine,
	SingleLine,
	TextDontClip,
	DontClip,
	TextExpandTabs,
	ExpandTabs,
	TextShowMnemonic,
	ShowPrefix,
	TextWordWrap,
	WordBreak,
	TextWrapAnywhere,
	BreakAnywhere,
	TextDontPrint,
	DontPrint,
	TextHideMnemonic,
	NoAccel,
	TextIncludeTrailingSpaces,
	IncludeTrailingSpaces
    } N2Qt9TextFlagsE;

    typedef Unknown Type:".." N2Qt11WindowFlagsE;

    typedef Unknown Type:".." N2Qt12WindowStatesE;

    typedef Unknown Type:".." N2Qt20ImageConversionFlagsE;

    typedef enum N2Qt15AspectRatioModeE {
	IgnoreAspectRatio,
	ScaleFree,
	KeepAspectRatio,
	ScaleMin,
	KeepAspectRatioByExpanding,
	ScaleMax
    } N2Qt9ScaleModeE;

    typedef Unknown Type:".." N2Qt15DockWidgetAreasE;

    typedef Unknown Type:".." N2Qt12ToolBarAreasE;

    typedef enum N2Qt4DockE {
	DockUnmanaged,
	Unmanaged,
	DockTornOff,
	TornOff,
	DockTop,
	Top,
	DockBottom,
	Bottom,
	DockRight,
	Right,
	DockLeft,
	Left,
	DockMinimized,
	Minimized
    } N2Qt11ToolBarDockE;

    typedef Unknown Type:".." N2Qt11DropActionsE;

    typedef Unknown Type:".." N2Qt9ItemFlagsE;

    typedef Unknown Type:".." N2Qt10MatchFlagsE;

    typedef unsigned long int N2Qt6HANDLEE;

    typedef N2Qt11WindowFlagsE N2Qt6WFlagsE;

    typedef qint32 QCOORD;

    enum N2Qt11GlobalColorE {
	color0,
	color1,
	black,
	white,
	darkGray,
	gray,
	lightGray,
	red,
	green,
	blue,
	cyan,
	magenta,
	yellow,
	darkRed,
	darkGreen,
	darkBlue,
	darkCyan,
	darkMagenta,
	darkYellow,
	transparent
    };

    enum N2Qt16KeyboardModifierE {
	KeyboardModifierMask,
	NoModifier,
	ShiftModifier,
	ControlModifier,
	AltModifier,
	MetaModifier,
	KeypadModifier
    };

    Unknown Type:".Class.";

    enum N2Qt8ModifierE {
	MODIFIER_MASK,
	UNICODE_ACCEL,
	SHIFT,
	CTRL,
	ALT,
	META
    };

    enum N2Qt11MouseButtonE {
	NoButton,
	LeftButton,
	RightButton,
	MidButton,
	XButton1,
	XButton2,
	MouseButtonMask
    };

    Unknown Type:".Class.";

    enum N2Qt16ButtonState_enumE {
	KeyButtonMask,
	ShiftButton,
	ControlButton,
	AltButton,
	MetaButton,
	Keypad
    };

    enum N2Qt11OrientationE {
	Horizontal,
	Vertical
    };

    Unknown Type:".Class.";

    enum N2Qt11FocusPolicyE {
	NoFocus,
	TabFocus,
	ClickFocus,
	StrongFocus,
	WheelFocus
    };

    enum N2Qt9SortOrderE {
	AscendingOrder,
	Ascending,
	DescendingOrder,
	Descending
    };

    enum N2Qt13AlignmentFlagE {
	AlignLeft,
	AlignLeading,
	AlignAuto,
	AlignRight,
	AlignTrailing,
	AlignHCenter,
	AlignJustify,
	AlignAbsolute,
	AlignHorizontal_Mask,
	AlignTop,
	AlignBottom,
	AlignVCenter,
	AlignCenter,
	AlignVertical_Mask
    };

    Unknown Type:".Class.";

    enum N2Qt8TextFlagE {
	TextSingleLine,
	SingleLine,
	TextDontClip,
	DontClip,
	TextExpandTabs,
	ExpandTabs,
	TextShowMnemonic,
	ShowPrefix,
	TextWordWrap,
	WordBreak,
	TextWrapAnywhere,
	BreakAnywhere,
	TextDontPrint,
	DontPrint,
	TextHideMnemonic,
	NoAccel,
	TextIncludeTrailingSpaces,
	IncludeTrailingSpaces
    };

    enum N2Qt13TextElideModeE {
	ElideLeft,
	ElideRight,
	ElideMiddle
    };

    enum N2Qt10WindowTypeE {
	Widget,
	WStyle_Customize,
	WStyle_NormalBorder,
	WPaintDesktop,
	WPaintClever,
	WNoAutoErase,
	WRepaintNoErase,
	WResizeNoErase,
	WMacNoSheet,
	Window,
	WType_TopLevel,
	Dialog,
	WType_Dialog,
	WStyle_Dialog,
	Sheet,
	WMacSheet,
	Drawer,
	WMacDrawer,
	Popup,
	WType_Popup,
	Tool,
	WStyle_Tool,
	ToolTip,
	SplashScreen,
	WStyle_Splash,
	Desktop,
	WType_Desktop,
	SubWindow,
	WindowType_Mask,
	WType_Mask,
	MSWindowsFixedSizeDialogHint,
	WStyle_DialogBorder,
	MSWindowsOwnDC,
	WWinOwnDC,
	X11BypassWindowManagerHint,
	WX11BypassWM,
	FramelessWindowHint,
	WStyle_NoBorder,
	WStyle_NoBorderEx,
	WindowTitleHint,
	WStyle_Title,
	WindowSystemMenuHint,
	WStyle_SysMenu,
	WindowMinimizeButtonHint,
	WStyle_Minimize,
	WindowMaximizeButtonHint,
	WStyle_Maximize,
	WindowMinMaxButtonsHint,
	WStyle_MinMax,
	WindowContextHelpButtonHint,
	WStyle_ContextHelp,
	WindowShadeButtonHint,
	WindowStaysOnTopHint,
	WStyle_StaysOnTop,
	WMouseNoMask,
	WDestructiveClose,
	WStaticContents,
	WNorthWestGravity,
	WGroupLeader,
	WShowModal,
	WType_Modal,
	WNoMousePropagation
    };

    Unknown Type:".Class.";

    enum N2Qt11WindowStateE {
	WindowNoState,
	WindowMinimized,
	WindowMaximized,
	WindowFullScreen,
	WindowActive
    };

    Unknown Type:".Class.";

    enum N2Qt15WidgetAttributeE {
	WA_Disabled,
	WA_UnderMouse,
	WA_MouseTracking,
	WA_ContentsPropagated,
	WA_OpaquePaintEvent,
	WA_NoBackground,
	WA_StaticContents,
	WA_LaidOut,
	WA_PaintOnScreen,
	WA_NoSystemBackground,
	WA_UpdatesDisabled,
	WA_Mapped,
	WA_MacNoClickThrough,
	WA_PaintOutsidePaintEvent,
	WA_InputMethodEnabled,
	WA_WState_Visible,
	WA_WState_Hidden,
	WA_ForceDisabled,
	WA_KeyCompression,
	WA_PendingMoveEvent,
	WA_PendingResizeEvent,
	WA_SetPalette,
	WA_SetFont,
	WA_SetCursor,
	WA_NoChildEventsFromChildren,
	WA_WindowModified,
	WA_Resized,
	WA_Moved,
	WA_PendingUpdate,
	WA_InvalidSize,
	WA_MacMetalStyle,
	WA_CustomWhatsThis,
	WA_LayoutOnEntireRect,
	WA_OutsideWSRange,
	WA_GrabbedShortcut,
	WA_TransparentForMouseEvents,
	WA_PaintUnclipped,
	WA_SetWindowIcon,
	WA_NoMouseReplay,
	WA_DeleteOnClose,
	WA_RightToLeft,
	WA_SetLayoutDirection,
	WA_NoChildEventsForParent,
	WA_ForceUpdatesDisabled,
	WA_WState_Created,
	WA_WState_CompressKeys,
	WA_WState_InPaintEvent,
	WA_WState_Reparented,
	WA_WState_ConfigPending,
	WA_WState_Polished,
	WA_WState_DND,
	WA_WState_OwnSizePolicy,
	WA_WState_ExplicitShowHide,
	WA_ShowModal,
	WA_MouseNoMask,
	WA_GroupLeader,
	WA_NoMousePropagation,
	WA_Hover,
	WA_InputMethodTransparent,
	WA_QuitOnClose,
	WA_KeyboardFocusChange,
	WA_AcceptDrops,
	WA_DropSiteRegistered,
	WA_ForceAcceptDrops,
	WA_WindowPropagation,
	WA_NoX11EventCompression,
	WA_TintedBackground,
	WA_AttributeCount
    };

    enum N2Qt19ImageConversionFlagE {
	AutoColor,
	ThresholdAlphaDither,
	DiffuseDither,
	AutoDither,
	MonoOnly,
	ColorMode_Mask,
	ColorOnly,
	OrderedAlphaDither,
	DiffuseAlphaDither,
	AlphaDither_Mask,
	NoAlpha,
	OrderedDither,
	ThresholdDither,
	Dither_Mask,
	PreferDither,
	AvoidDither,
	DitherMode_Mask
    };

    Unknown Type:".Class.";

    enum N2Qt6BGModeE {
	TransparentMode,
	OpaqueMode
    };

    enum N2Qt9PaintUnitE {
	PixelUnit,
	LoMetricUnit,
	HiMetricUnit,
	LoEnglishUnit,
	HiEnglishUnit,
	TwipsUnit
    };

    enum N2Qt8GUIStyleE {
	MacStyle,
	WindowsStyle,
	Win3Style,
	PMStyle,
	MotifStyle
    };

    enum N2Qt3KeyE {
	Key_Space,
	Key_Any,
	Key_Exclam,
	Key_QuoteDbl,
	Key_NumberSign,
	Key_Dollar,
	Key_Percent,
	Key_Ampersand,
	Key_Apostrophe,
	Key_ParenLeft,
	Key_ParenRight,
	Key_Asterisk,
	Key_Plus,
	Key_Comma,
	Key_Minus,
	Key_Period,
	Key_Slash,
	Key_0,
	Key_1,
	Key_2,
	Key_3,
	Key_4,
	Key_5,
	Key_6,
	Key_7,
	Key_8,
	Key_9,
	Key_Colon,
	Key_Semicolon,
	Key_Less,
	Key_Equal,
	Key_Greater,
	Key_Question,
	Key_At,
	Key_A,
	Key_B,
	Key_C,
	Key_D,
	Key_E,
	Key_F,
	Key_G,
	Key_H,
	Key_I,
	Key_J,
	Key_K,
	Key_L,
	Key_M,
	Key_N,
	Key_O,
	Key_P,
	Key_Q,
	Key_R,
	Key_S,
	Key_T,
	Key_U,
	Key_V,
	Key_W,
	Key_X,
	Key_Y,
	Key_Z,
	Key_BracketLeft,
	Key_Backslash,
	Key_BracketRight,
	Key_AsciiCircum,
	Key_Underscore,
	Key_QuoteLeft,
	Key_BraceLeft,
	Key_Bar,
	Key_BraceRight,
	Key_AsciiTilde,
	Key_nobreakspace,
	Key_exclamdown,
	Key_cent,
	Key_sterling,
	Key_currency,
	Key_yen,
	Key_brokenbar,
	Key_section,
	Key_diaeresis,
	Key_copyright,
	Key_ordfeminine,
	Key_guillemotleft,
	Key_notsign,
	Key_hyphen,
	Key_registered,
	Key_macron,
	Key_degree,
	Key_plusminus,
	Key_twosuperior,
	Key_threesuperior,
	Key_acute,
	Key_mu,
	Key_paragraph,
	Key_periodcentered,
	Key_cedilla,
	Key_onesuperior,
	Key_masculine,
	Key_guillemotright,
	Key_onequarter,
	Key_onehalf,
	Key_threequarters,
	Key_questiondown,
	Key_Agrave,
	Key_agrave,
	Key_Aacute,
	Key_aacute,
	Key_Acircumflex,
	Key_acircumflex,
	Key_Atilde,
	Key_atilde,
	Key_Adiaeresis,
	Key_adiaeresis,
	Key_Aring,
	Key_aring,
	Key_AE,
	Key_ae,
	Key_Ccedilla,
	Key_ccedilla,
	Key_Egrave,
	Key_egrave,
	Key_Eacute,
	Key_eacute,
	Key_Ecircumflex,
	Key_ecircumflex,
	Key_Ediaeresis,
	Key_ediaeresis,
	Key_Igrave,
	Key_igrave,
	Key_Iacute,
	Key_iacute,
	Key_Icircumflex,
	Key_icircumflex,
	Key_Idiaeresis,
	Key_idiaeresis,
	Key_ETH,
	Key_eth,
	Key_Ntilde,
	Key_ntilde,
	Key_Ograve,
	Key_ograve,
	Key_Oacute,
	Key_oacute,
	Key_Ocircumflex,
	Key_ocircumflex,
	Key_Otilde,
	Key_otilde,
	Key_Odiaeresis,
	Key_odiaeresis,
	Key_multiply,
	Key_Ooblique,
	Key_oslash,
	Key_Ugrave,
	Key_ugrave,
	Key_Uacute,
	Key_uacute,
	Key_Ucircumflex,
	Key_ucircumflex,
	Key_Udiaeresis,
	Key_udiaeresis,
	Key_Yacute,
	Key_yacute,
	Key_THORN,
	Key_thorn,
	Key_ssharp,
	Key_division,
	Key_ydiaeresis,
	Key_Escape,
	Key_Tab,
	Key_Backtab,
	Key_BackTab,
	Key_Backspace,
	Key_BackSpace,
	Key_Return,
	Key_Enter,
	Key_Insert,
	Key_Delete,
	Key_Pause,
	Key_Print,
	Key_SysReq,
	Key_Clear,
	Key_Home,
	Key_End,
	Key_Left,
	Key_Up,
	Key_Right,
	Key_Down,
	Key_PageUp,
	Key_Prior,
	Key_PageDown,
	Key_Next,
	Key_Shift,
	Key_Control,
	Key_Meta,
	Key_Alt,
	Key_CapsLock,
	Key_NumLock,
	Key_ScrollLock,
	Key_F1,
	Key_F2,
	Key_F3,
	Key_F4,
	Key_F5,
	Key_F6,
	Key_F7,
	Key_F8,
	Key_F9,
	Key_F10,
	Key_F11,
	Key_F12,
	Key_F13,
	Key_F14,
	Key_F15,
	Key_F16,
	Key_F17,
	Key_F18,
	Key_F19,
	Key_F20,
	Key_F21,
	Key_F22,
	Key_F23,
	Key_F24,
	Key_F25,
	Key_F26,
	Key_F27,
	Key_F28,
	Key_F29,
	Key_F30,
	Key_F31,
	Key_F32,
	Key_F33,
	Key_F34,
	Key_F35,
	Key_Super_L,
	Key_Super_R,
	Key_Menu,
	Key_Hyper_L,
	Key_Hyper_R,
	Key_Help,
	Key_Direction_L,
	Key_Direction_R,
	Key_Back,
	Key_Forward,
	Key_Stop,
	Key_Refresh,
	Key_VolumeDown,
	Key_VolumeMute,
	Key_VolumeUp,
	Key_BassBoost,
	Key_BassUp,
	Key_BassDown,
	Key_TrebleUp,
	Key_TrebleDown,
	Key_MediaPlay,
	Key_MediaStop,
	Key_MediaPrevious,
	Key_MediaPrev,
	Key_MediaNext,
	Key_MediaRecord,
	Key_HomePage,
	Key_Favorites,
	Key_Search,
	Key_Standby,
	Key_OpenUrl,
	Key_LaunchMail,
	Key_LaunchMedia,
	Key_Launch0,
	Key_Launch1,
	Key_Launch2,
	Key_Launch3,
	Key_Launch4,
	Key_Launch5,
	Key_Launch6,
	Key_Launch7,
	Key_Launch8,
	Key_Launch9,
	Key_LaunchA,
	Key_LaunchB,
	Key_LaunchC,
	Key_LaunchD,
	Key_LaunchE,
	Key_LaunchF,
	Key_AltGr,
	Key_Multi_key,
	Key_Kanji,
	Key_Muhenkan,
	Key_Henkan,
	Key_Romaji,
	Key_Hiragana,
	Key_Katakana,
	Key_Hiragana_Katakana,
	Key_Zenkaku,
	Key_Hankaku,
	Key_Zenkaku_Hankaku,
	Key_Touroku,
	Key_Massyo,
	Key_Kana_Lock,
	Key_Kana_Shift,
	Key_Eisu_Shift,
	Key_Eisu_toggle,
	Key_Hangul,
	Key_Hangul_Start,
	Key_Hangul_End,
	Key_Hangul_Hanja,
	Key_Hangul_Jamo,
	Key_Hangul_Romaja,
	Key_Codeinput,
	Key_Hangul_Jeonja,
	Key_Hangul_Banja,
	Key_Hangul_PreHanja,
	Key_Hangul_PostHanja,
	Key_SingleCandidate,
	Key_MultipleCandidate,
	Key_PreviousCandidate,
	Key_Hangul_Special,
	Key_Mode_switch,
	Key_Dead_Grave,
	Key_Dead_Acute,
	Key_Dead_Circumflex,
	Key_Dead_Tilde,
	Key_Dead_Macron,
	Key_Dead_Breve,
	Key_Dead_Abovedot,
	Key_Dead_Diaeresis,
	Key_Dead_Abovering,
	Key_Dead_Doubleacute,
	Key_Dead_Caron,
	Key_Dead_Cedilla,
	Key_Dead_Ogonek,
	Key_Dead_Iota,
	Key_Dead_Voiced_Sound,
	Key_Dead_Semivoiced_Sound,
	Key_Dead_Belowdot,
	Key_Dead_Hook,
	Key_Dead_Horn,
	Key_MediaLast,
	Key_Select,
	Key_Yes,
	Key_No,
	Key_Context1,
	Key_Context2,
	Key_Context3,
	Key_Context4,
	Key_Call,
	Key_Hangup,
	Key_Flip,
	Key_unknown
    };

    enum N2Qt9ArrowTypeE {
	NoArrow,
	UpArrow,
	DownArrow,
	LeftArrow,
	RightArrow
    };

    enum N2Qt8PenStyleE {
	NoPen,
	SolidLine,
	DashLine,
	DotLine,
	DashDotLine,
	DashDotDotLine,
	CustomDashLine,
	MPenStyle
    };

    enum N2Qt11PenCapStyleE {
	FlatCap,
	SquareCap,
	RoundCap,
	MPenCapStyle
    };

    enum N2Qt12PenJoinStyleE {
	MiterJoin,
	BevelJoin,
	RoundJoin,
	MPenJoinStyle
    };

    enum N2Qt10BrushStyleE {
	NoBrush,
	SolidPattern,
	Dense1Pattern,
	Dense2Pattern,
	Dense3Pattern,
	Dense4Pattern,
	Dense5Pattern,
	Dense6Pattern,
	Dense7Pattern,
	HorPattern,
	VerPattern,
	CrossPattern,
	BDiagPattern,
	FDiagPattern,
	DiagCrossPattern,
	LinearGradientPattern,
	RadialGradientPattern,
	ConicalGradientPattern,
	TexturePattern,
	CustomPattern
    };

    enum N2Qt8UIEffectE {
	UI_General,
	UI_AnimateMenu,
	UI_FadeMenu,
	UI_AnimateCombo,
	UI_AnimateTooltip,
	UI_FadeTooltip,
	UI_AnimateToolBox
    };

    enum N2Qt11CursorShapeE {
	ArrowCursor,
	arrowCursor,
	UpArrowCursor,
	upArrowCursor,
	CrossCursor,
	crossCursor,
	WaitCursor,
	waitCursor,
	IBeamCursor,
	ibeamCursor,
	SizeVerCursor,
	sizeVerCursor,
	SizeHorCursor,
	sizeHorCursor,
	SizeBDiagCursor,
	sizeBDiagCursor,
	SizeFDiagCursor,
	sizeFDiagCursor,
	SizeAllCursor,
	sizeAllCursor,
	BlankCursor,
	blankCursor,
	SplitVCursor,
	splitVCursor,
	SplitHCursor,
	splitHCursor,
	PointingHandCursor,
	pointingHandCursor,
	ForbiddenCursor,
	forbiddenCursor,
	WhatsThisCursor,
	whatsThisCursor,
	BusyCursor,
	LastCursor,
	BitmapCursor
    };

    enum N2Qt10TextFormatE {
	PlainText,
	RichText,
	AutoText,
	LogText
    };

    enum N2Qt15AspectRatioModeE {
	IgnoreAspectRatio,
	ScaleFree,
	KeepAspectRatio,
	ScaleMin,
	KeepAspectRatioByExpanding,
	ScaleMax
    };

    enum N2Qt15AnchorAttributeE {
	AnchorName,
	AnchorHref
    };

    enum N2Qt14DockWidgetAreaE {
	LeftDockWidgetArea,
	RightDockWidgetArea,
	TopDockWidgetArea,
	BottomDockWidgetArea,
	DockWidgetArea_Mask,
	AllDockWidgetAreas
    };

    Unknown Type:".Class.";

    enum N2Qt11ToolBarAreaE {
	LeftToolBarArea,
	RightToolBarArea,
	TopToolBarArea,
	BottomToolBarArea,
	ToolBarArea_Mask,
	AllToolBarAreas
    };

    Unknown Type:".Class.";

    enum N2Qt4DockE {
	DockUnmanaged,
	Unmanaged,
	DockTornOff,
	TornOff,
	DockTop,
	Top,
	DockBottom,
	Bottom,
	DockRight,
	Right,
	DockLeft,
	Left,
	DockMinimized,
	Minimized
    };

    enum N2Qt10DateFormatE {
	TextDate,
	ISODate,
	LocalDate
    };

    enum N2Qt8TimeSpecE {
	LocalTime,
	UTC
    };

    enum N2Qt9DayOfWeekE {
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
    };

    enum N2Qt15ScrollBarPolicyE {
	ScrollBarAsNeeded,
	ScrollBarAlwaysOff,
	ScrollBarAlwaysOn
    };

    enum N2Qt14BackgroundModeE {
	FixedColor,
	FixedPixmap,
	NoBackground,
	PaletteForeground,
	PaletteButton,
	PaletteLight,
	PaletteMidlight,
	PaletteDark,
	PaletteMid,
	PaletteText,
	PaletteBrightText,
	PaletteBase,
	PaletteBackground,
	PaletteShadow,
	PaletteHighlight,
	PaletteHighlightedText,
	PaletteButtonText,
	PaletteLink,
	PaletteLinkVisited,
	X11ParentRelative
    };

    enum N2Qt15CaseSensitivityE {
	CaseInsensitive,
	CaseSensitive
    };

    enum N2Qt6CornerE {
	TopLeftCorner,
	TopLeft,
	TopRightCorner,
	TopRight,
	BottomLeftCorner,
	BottomLeft,
	BottomRightCorner,
	BottomRight
    };

    enum N2Qt14ConnectionTypeE {
	AutoConnection,
	DirectConnection,
	QueuedConnection,
	AutoCompatConnection
    };

    enum N2Qt15ShortcutContextE {
	WidgetShortcut,
	WindowShortcut,
	ApplicationShortcut
    };

    enum N2Qt8FillRuleE {
	OddEvenFill,
	WindingFill
    };

    enum N2Qt13ClipOperationE {
	NoClip,
	ReplaceClip,
	IntersectClip,
	UniteClip
    };

    enum N2Qt18TransformationModeE {
	FastTransformation,
	SmoothTransformation
    };

    enum N2Qt11FocusReasonE {
	MouseFocusReason,
	TabFocusReason,
	BacktabFocusReason,
	ActiveWindowFocusReason,
	PopupFocusReason,
	ShortcutFocusReason,
	MenuBarFocusReason,
	OtherFocusReason,
	NoFocusReason
    };

    enum N2Qt17ContextMenuPolicyE {
	NoContextMenu,
	DefaultContextMenu,
	ActionsContextMenu,
	CustomContextMenu
    };

    enum N2Qt16InputMethodQueryE {
	ImMicroFocus,
	ImFont,
	ImCursorPosition,
	ImSurroundingText,
	ImCurrentSelection
    };

    enum N2Qt15ToolButtonStyleE {
	ToolButtonIconOnly,
	ToolButtonTextOnly,
	ToolButtonTextBesideIcon,
	ToolButtonTextUnderIcon
    };

    enum N2Qt15LayoutDirectionE {
	LeftToRight,
	RightToLeft
    };

    enum N2Qt10DropActionE {
	IgnoreAction,
	CopyAction,
	MoveAction,
	LinkAction,
	ActionMask,
	TargetMoveAction
    };

    Unknown Type:".Class.";

    enum N2Qt10CheckStateE {
	Unchecked,
	PartiallyChecked,
	Checked
    };

    enum N2Qt12ItemDataRoleE {
	DisplayRole,
	DecorationRole,
	EditRole,
	ToolTipRole,
	StatusTipRole,
	WhatsThisRole,
	FontRole,
	TextAlignmentRole,
	BackgroundColorRole,
	TextColorRole,
	CheckStateRole,
	AccessibleTextRole,
	AccessibleDescriptionRole,
	SizeHintRole,
	UserRole
    };

    enum N2Qt8ItemFlagE {
	ItemIsSelectable,
	ItemIsEditable,
	ItemIsDragEnabled,
	ItemIsDropEnabled,
	ItemIsUserCheckable,
	ItemIsEnabled,
	ItemIsTristate
    };

    Unknown Type:".Class.";

    enum N2Qt9MatchFlagE {
	MatchExactly,
	MatchContains,
	MatchStartsWith,
	MatchEndsWith,
	MatchRegExp,
	MatchWildcard,
	MatchCaseSensitive,
	MatchWrap,
	MatchRecursive
    };

    Unknown Type:".Class.";

    enum N2Qt14WindowModalityE {
	NonModal,
	WindowModal,
	ApplicationModal
    };

    Unknown Type:".Class.";

    enum N9QInternal16PaintDeviceFlagsE {
	UnknownDevice,
	Widget,
	Pixmap,
	Image,
	Printer,
	Picture,
	Pbuffer
    };

    enum N9QInternal12RelayoutTypeE {
	RelayoutNormal,
	RelayoutDragging,
	RelayoutDropped
    };


#ifdef __cplusplus
}
#endif
#endif
