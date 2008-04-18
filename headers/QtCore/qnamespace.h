#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QNAMESPACE_H_
#define _QTCORE_QNAMESPACE_H_

class QFlags < Qt::MouseButton >;
// *INDENT-OFF*

#if __LSB_VERSION__ >= 31
typedef KeyboardModifiers	
;

typedef class QFlags<Qt::MouseButton>
{
private:
public:
}MouseButtons	
;

typedef int	ButtonState	
;

typedef class QFlags<Qt::Orientation>
{
private:
public:
}Orientations	
;

typedef class QFlags<Qt::AlignmentFlag>
{
private:
public:
}Alignment	
;

typedef enum TextFlag	
{
TextSingleLine = 256,	
SingleLine = 256,	
TextDontClip = 512,	
DontClip = 512,	
TextExpandTabs = 1024,	
ExpandTabs = 1024,	
TextShowMnemonic = 2048,	
ShowPrefix = 2048,	
TextWordWrap = 4096,	
WordBreak = 4096,	
TextWrapAnywhere = 8192,	
BreakAnywhere = 8192,	
TextDontPrint = 16384,	
DontPrint = 16384,	
TextHideMnemonic = 32768,	
NoAccel = 32768,	
TextIncludeTrailingSpaces = 134217728,	
IncludeTrailingSpaces = 134217728
}
TextFlags	
;

typedef class QFlags<Qt::WindowType>
{
private:
public:
}WindowFlags	
;

typedef class QFlags<Qt::WindowState>
{
private:
public:
}WindowStates	
;

typedef ImageConversionFlags	
;

typedef enum AspectRatioMode	
{
IgnoreAspectRatio = 0,	
ScaleFree = 0,	
KeepAspectRatio = 1,	
ScaleMin = 1,	
KeepAspectRatioByExpanding = 2,	
ScaleMax = 2
}
ScaleMode	
;

typedef DockWidgetAreas	
;

typedef ToolBarAreas	
;

typedef enum Dock	
{
DockUnmanaged = 0,	
Unmanaged = 0,	
DockTornOff = 1,	
TornOff = 1,	
DockTop = 2,	
Top = 2,	
DockBottom = 3,	
Bottom = 3,	
DockRight = 4,	
Right = 4,	
DockLeft = 5,	
Left = 5,	
DockMinimized = 6,	
Minimized = 6
}
ToolBarDock	
;

typedef DropActions	
;

typedef class QFlags<Qt::ItemFlag>
{
private:
public:
}ItemFlags	
;

typedef MatchFlags	
;

typedef unsigned long int	HANDLE	
;

typedef WindowFlags	WFlags	
;

typedef qint32	QCOORD	
;

#endif // __LSB_VERSION__ >= 3.1

#if __LSB_VERSION__ >= 31
enum GlobalColor	
{
color0 = 0,	
color1 = 1,	
black = 2,	
white = 3,	
darkGray = 4,	
gray = 5,	
lightGray = 6,	
red = 7,	
green = 8,	
blue = 9,	
cyan = 10,	
magenta = 11,	
yellow = 12,	
darkRed = 13,	
darkGreen = 14,	
darkBlue = 15,	
darkCyan = 16,	
darkMagenta = 17,	
darkYellow = 18,	
transparent = 19
}
;

enum KeyboardModifier	
{
KeyboardModifierMask = -33554432,	
NoModifier = 0,	
ShiftModifier = 33554432,	
ControlModifier = 67108864,	
AltModifier = 134217728,	
MetaModifier = 268435456,	
KeypadModifier = 536870912
}
;

enum Modifier	
{
MODIFIER_MASK = -33554432,	
UNICODE_ACCEL = 0,	
SHIFT = 33554432,	
CTRL = 67108864,	
ALT = 134217728,	
META = 268435456
}
;

enum MouseButton	
{
NoButton = 0,	
LeftButton = 1,	
RightButton = 2,	
MidButton = 4,	
XButton1 = 8,	
XButton2 = 16,	
MouseButtonMask = 255
}
;

class QFlags<Qt::MouseButton>
{
private:
public:
};

enum ButtonState_enum	
{
KeyButtonMask = -33554432,	
ShiftButton = 33554432,	
ControlButton = 67108864,	
AltButton = 134217728,	
MetaButton = 268435456,	
Keypad = 536870912
}
;

enum Orientation	
{
Horizontal = 1,	
Vertical = 2
}
;

class QFlags<Qt::Orientation>
{
private:
public:
};

enum FocusPolicy	
{
NoFocus = 0,	
TabFocus = 1,	
ClickFocus = 2,	
StrongFocus = 11,	
WheelFocus = 15
}
;

enum SortOrder	
{
AscendingOrder = 0,	
Ascending = 0,	
DescendingOrder = 1,	
Descending = 1
}
;

enum AlignmentFlag	
{
AlignLeft = 1,	
AlignLeading = 1,	
AlignAuto = 1,	
AlignRight = 2,	
AlignTrailing = 2,	
AlignHCenter = 4,	
AlignJustify = 8,	
AlignAbsolute = 16,	
AlignHorizontal_Mask = 31,	
AlignTop = 32,	
AlignBottom = 64,	
AlignVCenter = 128,	
AlignCenter = 132,	
AlignVertical_Mask = 224
}
;

class QFlags<Qt::AlignmentFlag>
{
private:
public:
};

enum TextFlag	
{
TextSingleLine = 256,	
SingleLine = 256,	
TextDontClip = 512,	
DontClip = 512,	
TextExpandTabs = 1024,	
ExpandTabs = 1024,	
TextShowMnemonic = 2048,	
ShowPrefix = 2048,	
TextWordWrap = 4096,	
WordBreak = 4096,	
TextWrapAnywhere = 8192,	
BreakAnywhere = 8192,	
TextDontPrint = 16384,	
DontPrint = 16384,	
TextHideMnemonic = 32768,	
NoAccel = 32768,	
TextIncludeTrailingSpaces = 134217728,	
IncludeTrailingSpaces = 134217728
}
;

enum TextElideMode	
{
ElideLeft = 0,	
ElideRight = 1,	
ElideMiddle = 2
}
;

enum WindowType	
{
Widget = 0,	
WStyle_Customize = 0,	
WStyle_NormalBorder = 0,	
WPaintDesktop = 0,	
WPaintClever = 0,	
WNoAutoErase = 0,	
WRepaintNoErase = 0,	
WResizeNoErase = 0,	
WMacNoSheet = 0,	
Window = 1,	
WType_TopLevel = 1,	
Dialog = 3,	
WType_Dialog = 3,	
WStyle_Dialog = 3,	
Sheet = 5,	
WMacSheet = 5,	
Drawer = 7,	
WMacDrawer = 7,	
Popup = 9,	
WType_Popup = 9,	
Tool = 11,	
WStyle_Tool = 11,	
ToolTip = 13,	
SplashScreen = 15,	
WStyle_Splash = 15,	
Desktop = 17,	
WType_Desktop = 17,	
SubWindow = 18,	
WindowType_Mask = 255,	
WType_Mask = 255,	
MSWindowsFixedSizeDialogHint = 256,	
WStyle_DialogBorder = 256,	
MSWindowsOwnDC = 512,	
WWinOwnDC = 512,	
X11BypassWindowManagerHint = 1024,	
WX11BypassWM = 1024,	
FramelessWindowHint = 2048,	
WStyle_NoBorder = 2048,	
WStyle_NoBorderEx = 2048,	
WindowTitleHint = 4096,	
WStyle_Title = 4096,	
WindowSystemMenuHint = 8192,	
WStyle_SysMenu = 8192,	
WindowMinimizeButtonHint = 16384,	
WStyle_Minimize = 16384,	
WindowMaximizeButtonHint = 32768,	
WStyle_Maximize = 32768,	
WindowMinMaxButtonsHint = 49152,	
WStyle_MinMax = 49152,	
WindowContextHelpButtonHint = 65536,	
WStyle_ContextHelp = 65536,	
WindowShadeButtonHint = 131072,	
WindowStaysOnTopHint = 262144,	
WStyle_StaysOnTop = 262144,	
WMouseNoMask = 524288,	
WDestructiveClose = 1048576,	
WStaticContents = 2097152,	
WNorthWestGravity = 2097152,	
WGroupLeader = 4194304,	
WShowModal = 8388608,	
WType_Modal = 8388611,	
WNoMousePropagation = 16777216
}
;

class QFlags<Qt::WindowType>
{
private:
public:
};

enum WindowState	
{
WindowNoState = 0,	
WindowMinimized = 1,	
WindowMaximized = 2,	
WindowFullScreen = 4,	
WindowActive = 8
}
;

class QFlags<Qt::WindowState>
{
private:
public:
};

enum WidgetAttribute	
{
WA_Disabled = 0,	
WA_UnderMouse = 1,	
WA_MouseTracking = 2,	
WA_ContentsPropagated = 3,	
WA_OpaquePaintEvent = 4,	
WA_NoBackground = 4,	
WA_StaticContents = 5,	
WA_LaidOut = 7,	
WA_PaintOnScreen = 8,	
WA_NoSystemBackground = 9,	
WA_UpdatesDisabled = 10,	
WA_Mapped = 11,	
WA_MacNoClickThrough = 12,	
WA_PaintOutsidePaintEvent = 13,	
WA_InputMethodEnabled = 14,	
WA_WState_Visible = 15,	
WA_WState_Hidden = 16,	
WA_ForceDisabled = 32,	
WA_KeyCompression = 33,	
WA_PendingMoveEvent = 34,	
WA_PendingResizeEvent = 35,	
WA_SetPalette = 36,	
WA_SetFont = 37,	
WA_SetCursor = 38,	
WA_NoChildEventsFromChildren = 39,	
WA_WindowModified = 41,	
WA_Resized = 42,	
WA_Moved = 43,	
WA_PendingUpdate = 44,	
WA_InvalidSize = 45,	
WA_MacMetalStyle = 46,	
WA_CustomWhatsThis = 47,	
WA_LayoutOnEntireRect = 48,	
WA_OutsideWSRange = 49,	
WA_GrabbedShortcut = 50,	
WA_TransparentForMouseEvents = 51,	
WA_PaintUnclipped = 52,	
WA_SetWindowIcon = 53,	
WA_NoMouseReplay = 54,	
WA_DeleteOnClose = 55,	
WA_RightToLeft = 56,	
WA_SetLayoutDirection = 57,	
WA_NoChildEventsForParent = 58,	
WA_ForceUpdatesDisabled = 59,	
WA_WState_Created = 60,	
WA_WState_CompressKeys = 61,	
WA_WState_InPaintEvent = 62,	
WA_WState_Reparented = 63,	
WA_WState_ConfigPending = 64,	
WA_WState_Polished = 66,	
WA_WState_DND = 67,	
WA_WState_OwnSizePolicy = 68,	
WA_WState_ExplicitShowHide = 69,	
WA_ShowModal = 70,	
WA_MouseNoMask = 71,	
WA_GroupLeader = 72,	
WA_NoMousePropagation = 73,	
WA_Hover = 74,	
WA_InputMethodTransparent = 75,	
WA_QuitOnClose = 76,	
WA_KeyboardFocusChange = 77,	
WA_AcceptDrops = 78,	
WA_DropSiteRegistered = 79,	
WA_ForceAcceptDrops = 79,	
WA_WindowPropagation = 80,	
WA_NoX11EventCompression = 81,	
WA_TintedBackground = 82,	
WA_AttributeCount = 83
}
;

enum ImageConversionFlag	
{
AutoColor = 0,	
ThresholdAlphaDither = 0,	
DiffuseDither = 0,	
AutoDither = 0,	
MonoOnly = 2,	
ColorMode_Mask = 3,	
ColorOnly = 3,	
OrderedAlphaDither = 4,	
DiffuseAlphaDither = 8,	
AlphaDither_Mask = 12,	
NoAlpha = 12,	
OrderedDither = 16,	
ThresholdDither = 32,	
Dither_Mask = 48,	
PreferDither = 64,	
AvoidDither = 128,	
DitherMode_Mask = 192
}
;

enum BGMode	
{
TransparentMode = 0,	
OpaqueMode = 1
}
;

enum PaintUnit	
{
PixelUnit = 0,	
LoMetricUnit = 1,	
HiMetricUnit = 2,	
LoEnglishUnit = 3,	
HiEnglishUnit = 4,	
TwipsUnit = 5
}
;

enum GUIStyle	
{
MacStyle = 0,	
WindowsStyle = 1,	
Win3Style = 2,	
PMStyle = 3,	
MotifStyle = 4
}
;

enum Key	
{
Key_Space = 32,	
Key_Any = 32,	
Key_Exclam = 33,	
Key_QuoteDbl = 34,	
Key_NumberSign = 35,	
Key_Dollar = 36,	
Key_Percent = 37,	
Key_Ampersand = 38,	
Key_Apostrophe = 39,	
Key_ParenLeft = 40,	
Key_ParenRight = 41,	
Key_Asterisk = 42,	
Key_Plus = 43,	
Key_Comma = 44,	
Key_Minus = 45,	
Key_Period = 46,	
Key_Slash = 47,	
Key_0 = 48,	
Key_1 = 49,	
Key_2 = 50,	
Key_3 = 51,	
Key_4 = 52,	
Key_5 = 53,	
Key_6 = 54,	
Key_7 = 55,	
Key_8 = 56,	
Key_9 = 57,	
Key_Colon = 58,	
Key_Semicolon = 59,	
Key_Less = 60,	
Key_Equal = 61,	
Key_Greater = 62,	
Key_Question = 63,	
Key_At = 64,	
Key_A = 65,	
Key_B = 66,	
Key_C = 67,	
Key_D = 68,	
Key_E = 69,	
Key_F = 70,	
Key_G = 71,	
Key_H = 72,	
Key_I = 73,	
Key_J = 74,	
Key_K = 75,	
Key_L = 76,	
Key_M = 77,	
Key_N = 78,	
Key_O = 79,	
Key_P = 80,	
Key_Q = 81,	
Key_R = 82,	
Key_S = 83,	
Key_T = 84,	
Key_U = 85,	
Key_V = 86,	
Key_W = 87,	
Key_X = 88,	
Key_Y = 89,	
Key_Z = 90,	
Key_BracketLeft = 91,	
Key_Backslash = 92,	
Key_BracketRight = 93,	
Key_AsciiCircum = 94,	
Key_Underscore = 95,	
Key_QuoteLeft = 96,	
Key_BraceLeft = 123,	
Key_Bar = 124,	
Key_BraceRight = 125,	
Key_AsciiTilde = 126,	
Key_nobreakspace = 160,	
Key_exclamdown = 161,	
Key_cent = 162,	
Key_sterling = 163,	
Key_currency = 164,	
Key_yen = 165,	
Key_brokenbar = 166,	
Key_section = 167,	
Key_diaeresis = 168,	
Key_copyright = 169,	
Key_ordfeminine = 170,	
Key_guillemotleft = 171,	
Key_notsign = 172,	
Key_hyphen = 173,	
Key_registered = 174,	
Key_macron = 175,	
Key_degree = 176,	
Key_plusminus = 177,	
Key_twosuperior = 178,	
Key_threesuperior = 179,	
Key_acute = 180,	
Key_mu = 181,	
Key_paragraph = 182,	
Key_periodcentered = 183,	
Key_cedilla = 184,	
Key_onesuperior = 185,	
Key_masculine = 186,	
Key_guillemotright = 187,	
Key_onequarter = 188,	
Key_onehalf = 189,	
Key_threequarters = 190,	
Key_questiondown = 191,	
Key_Agrave = 192,	
Key_agrave = 192,	
Key_Aacute = 193,	
Key_aacute = 193,	
Key_Acircumflex = 194,	
Key_acircumflex = 194,	
Key_Atilde = 195,	
Key_atilde = 195,	
Key_Adiaeresis = 196,	
Key_adiaeresis = 196,	
Key_Aring = 197,	
Key_aring = 197,	
Key_AE = 198,	
Key_ae = 198,	
Key_Ccedilla = 199,	
Key_ccedilla = 199,	
Key_Egrave = 200,	
Key_egrave = 200,	
Key_Eacute = 201,	
Key_eacute = 201,	
Key_Ecircumflex = 202,	
Key_ecircumflex = 202,	
Key_Ediaeresis = 203,	
Key_ediaeresis = 203,	
Key_Igrave = 204,	
Key_igrave = 204,	
Key_Iacute = 205,	
Key_iacute = 205,	
Key_Icircumflex = 206,	
Key_icircumflex = 206,	
Key_Idiaeresis = 207,	
Key_idiaeresis = 207,	
Key_ETH = 208,	
Key_eth = 208,	
Key_Ntilde = 209,	
Key_ntilde = 209,	
Key_Ograve = 210,	
Key_ograve = 210,	
Key_Oacute = 211,	
Key_oacute = 211,	
Key_Ocircumflex = 212,	
Key_ocircumflex = 212,	
Key_Otilde = 213,	
Key_otilde = 213,	
Key_Odiaeresis = 214,	
Key_odiaeresis = 214,	
Key_multiply = 215,	
Key_Ooblique = 216,	
Key_oslash = 216,	
Key_Ugrave = 217,	
Key_ugrave = 217,	
Key_Uacute = 218,	
Key_uacute = 218,	
Key_Ucircumflex = 219,	
Key_ucircumflex = 219,	
Key_Udiaeresis = 220,	
Key_udiaeresis = 220,	
Key_Yacute = 221,	
Key_yacute = 221,	
Key_THORN = 222,	
Key_thorn = 222,	
Key_ssharp = 223,	
Key_division = 247,	
Key_ydiaeresis = 255,	
Key_Escape = 16777216,	
Key_Tab = 16777217,	
Key_Backtab = 16777218,	
Key_BackTab = 16777218,	
Key_Backspace = 16777219,	
Key_BackSpace = 16777219,	
Key_Return = 16777220,	
Key_Enter = 16777221,	
Key_Insert = 16777222,	
Key_Delete = 16777223,	
Key_Pause = 16777224,	
Key_Print = 16777225,	
Key_SysReq = 16777226,	
Key_Clear = 16777227,	
Key_Home = 16777232,	
Key_End = 16777233,	
Key_Left = 16777234,	
Key_Up = 16777235,	
Key_Right = 16777236,	
Key_Down = 16777237,	
Key_PageUp = 16777238,	
Key_Prior = 16777238,	
Key_PageDown = 16777239,	
Key_Next = 16777239,	
Key_Shift = 16777248,	
Key_Control = 16777249,	
Key_Meta = 16777250,	
Key_Alt = 16777251,	
Key_CapsLock = 16777252,	
Key_NumLock = 16777253,	
Key_ScrollLock = 16777254,	
Key_F1 = 16777264,	
Key_F2 = 16777265,	
Key_F3 = 16777266,	
Key_F4 = 16777267,	
Key_F5 = 16777268,	
Key_F6 = 16777269,	
Key_F7 = 16777270,	
Key_F8 = 16777271,	
Key_F9 = 16777272,	
Key_F10 = 16777273,	
Key_F11 = 16777274,	
Key_F12 = 16777275,	
Key_F13 = 16777276,	
Key_F14 = 16777277,	
Key_F15 = 16777278,	
Key_F16 = 16777279,	
Key_F17 = 16777280,	
Key_F18 = 16777281,	
Key_F19 = 16777282,	
Key_F20 = 16777283,	
Key_F21 = 16777284,	
Key_F22 = 16777285,	
Key_F23 = 16777286,	
Key_F24 = 16777287,	
Key_F25 = 16777288,	
Key_F26 = 16777289,	
Key_F27 = 16777290,	
Key_F28 = 16777291,	
Key_F29 = 16777292,	
Key_F30 = 16777293,	
Key_F31 = 16777294,	
Key_F32 = 16777295,	
Key_F33 = 16777296,	
Key_F34 = 16777297,	
Key_F35 = 16777298,	
Key_Super_L = 16777299,	
Key_Super_R = 16777300,	
Key_Menu = 16777301,	
Key_Hyper_L = 16777302,	
Key_Hyper_R = 16777303,	
Key_Help = 16777304,	
Key_Direction_L = 16777305,	
Key_Direction_R = 16777312,	
Key_Back = 16777313,	
Key_Forward = 16777314,	
Key_Stop = 16777315,	
Key_Refresh = 16777316,	
Key_VolumeDown = 16777328,	
Key_VolumeMute = 16777329,	
Key_VolumeUp = 16777330,	
Key_BassBoost = 16777331,	
Key_BassUp = 16777332,	
Key_BassDown = 16777333,	
Key_TrebleUp = 16777334,	
Key_TrebleDown = 16777335,	
Key_MediaPlay = 16777344,	
Key_MediaStop = 16777345,	
Key_MediaPrevious = 16777346,	
Key_MediaPrev = 16777346,	
Key_MediaNext = 16777347,	
Key_MediaRecord = 16777348,	
Key_HomePage = 16777360,	
Key_Favorites = 16777361,	
Key_Search = 16777362,	
Key_Standby = 16777363,	
Key_OpenUrl = 16777364,	
Key_LaunchMail = 16777376,	
Key_LaunchMedia = 16777377,	
Key_Launch0 = 16777378,	
Key_Launch1 = 16777379,	
Key_Launch2 = 16777380,	
Key_Launch3 = 16777381,	
Key_Launch4 = 16777382,	
Key_Launch5 = 16777383,	
Key_Launch6 = 16777384,	
Key_Launch7 = 16777385,	
Key_Launch8 = 16777386,	
Key_Launch9 = 16777387,	
Key_LaunchA = 16777388,	
Key_LaunchB = 16777389,	
Key_LaunchC = 16777390,	
Key_LaunchD = 16777391,	
Key_LaunchE = 16777392,	
Key_LaunchF = 16777393,	
Key_AltGr = 16781571,	
Key_Multi_key = 16781600,	
Key_Kanji = 16781601,	
Key_Muhenkan = 16781602,	
Key_Henkan = 16781603,	
Key_Romaji = 16781604,	
Key_Hiragana = 16781605,	
Key_Katakana = 16781606,	
Key_Hiragana_Katakana = 16781607,	
Key_Zenkaku = 16781608,	
Key_Hankaku = 16781609,	
Key_Zenkaku_Hankaku = 16781610,	
Key_Touroku = 16781611,	
Key_Massyo = 16781612,	
Key_Kana_Lock = 16781613,	
Key_Kana_Shift = 16781614,	
Key_Eisu_Shift = 16781615,	
Key_Eisu_toggle = 16781616,	
Key_Hangul = 16781617,	
Key_Hangul_Start = 16781618,	
Key_Hangul_End = 16781619,	
Key_Hangul_Hanja = 16781620,	
Key_Hangul_Jamo = 16781621,	
Key_Hangul_Romaja = 16781622,	
Key_Codeinput = 16781623,	
Key_Hangul_Jeonja = 16781624,	
Key_Hangul_Banja = 16781625,	
Key_Hangul_PreHanja = 16781626,	
Key_Hangul_PostHanja = 16781627,	
Key_SingleCandidate = 16781628,	
Key_MultipleCandidate = 16781629,	
Key_PreviousCandidate = 16781630,	
Key_Hangul_Special = 16781631,	
Key_Mode_switch = 16781694,	
Key_Dead_Grave = 16781904,	
Key_Dead_Acute = 16781905,	
Key_Dead_Circumflex = 16781906,	
Key_Dead_Tilde = 16781907,	
Key_Dead_Macron = 16781908,	
Key_Dead_Breve = 16781909,	
Key_Dead_Abovedot = 16781910,	
Key_Dead_Diaeresis = 16781911,	
Key_Dead_Abovering = 16781912,	
Key_Dead_Doubleacute = 16781913,	
Key_Dead_Caron = 16781914,	
Key_Dead_Cedilla = 16781915,	
Key_Dead_Ogonek = 16781916,	
Key_Dead_Iota = 16781917,	
Key_Dead_Voiced_Sound = 16781918,	
Key_Dead_Semivoiced_Sound = 16781919,	
Key_Dead_Belowdot = 16781920,	
Key_Dead_Hook = 16781921,	
Key_Dead_Horn = 16781922,	
Key_MediaLast = 16842751,	
Key_Select = 16842752,	
Key_Yes = 16842753,	
Key_No = 16842754,	
Key_Context1 = 17825792,	
Key_Context2 = 17825793,	
Key_Context3 = 17825794,	
Key_Context4 = 17825795,	
Key_Call = 17825796,	
Key_Hangup = 17825797,	
Key_Flip = 17825798,	
Key_unknown = 33554431
}
;

enum ArrowType	
{
NoArrow = 0,	
UpArrow = 1,	
DownArrow = 2,	
LeftArrow = 3,	
RightArrow = 4
}
;

enum PenStyle	
{
NoPen = 0,	
SolidLine = 1,	
DashLine = 2,	
DotLine = 3,	
DashDotLine = 4,	
DashDotDotLine = 5,	
CustomDashLine = 6,	
MPenStyle = 15
}
;

enum PenCapStyle	
{
FlatCap = 0,	
SquareCap = 16,	
RoundCap = 32,	
MPenCapStyle = 48
}
;

enum PenJoinStyle	
{
MiterJoin = 0,	
BevelJoin = 64,	
RoundJoin = 128,	
MPenJoinStyle = 192
}
;

enum BrushStyle	
{
NoBrush = 0,	
SolidPattern = 1,	
Dense1Pattern = 2,	
Dense2Pattern = 3,	
Dense3Pattern = 4,	
Dense4Pattern = 5,	
Dense5Pattern = 6,	
Dense6Pattern = 7,	
Dense7Pattern = 8,	
HorPattern = 9,	
VerPattern = 10,	
CrossPattern = 11,	
BDiagPattern = 12,	
FDiagPattern = 13,	
DiagCrossPattern = 14,	
LinearGradientPattern = 15,	
RadialGradientPattern = 16,	
ConicalGradientPattern = 17,	
TexturePattern = 24,	
CustomPattern = 24
}
;

enum UIEffect	
{
UI_General = 0,	
UI_AnimateMenu = 1,	
UI_FadeMenu = 2,	
UI_AnimateCombo = 3,	
UI_AnimateTooltip = 4,	
UI_FadeTooltip = 5,	
UI_AnimateToolBox = 6
}
;

enum CursorShape	
{
ArrowCursor = 0,	
arrowCursor = 0,	
UpArrowCursor = 1,	
upArrowCursor = 1,	
CrossCursor = 2,	
crossCursor = 2,	
WaitCursor = 3,	
waitCursor = 3,	
IBeamCursor = 4,	
ibeamCursor = 4,	
SizeVerCursor = 5,	
sizeVerCursor = 5,	
SizeHorCursor = 6,	
sizeHorCursor = 6,	
SizeBDiagCursor = 7,	
sizeBDiagCursor = 7,	
SizeFDiagCursor = 8,	
sizeFDiagCursor = 8,	
SizeAllCursor = 9,	
sizeAllCursor = 9,	
BlankCursor = 10,	
blankCursor = 10,	
SplitVCursor = 11,	
splitVCursor = 11,	
SplitHCursor = 12,	
splitHCursor = 12,	
PointingHandCursor = 13,	
pointingHandCursor = 13,	
ForbiddenCursor = 14,	
forbiddenCursor = 14,	
WhatsThisCursor = 15,	
whatsThisCursor = 15,	
BusyCursor = 16,	
LastCursor = 16,	
BitmapCursor = 24
}
;

enum TextFormat	
{
PlainText = 0,	
RichText = 1,	
AutoText = 2,	
LogText = 3
}
;

enum AspectRatioMode	
{
IgnoreAspectRatio = 0,	
ScaleFree = 0,	
KeepAspectRatio = 1,	
ScaleMin = 1,	
KeepAspectRatioByExpanding = 2,	
ScaleMax = 2
}
;

enum AnchorAttribute	
{
AnchorName = 0,	
AnchorHref = 1
}
;

enum DockWidgetArea	
{
LeftDockWidgetArea = 1,	
RightDockWidgetArea = 2,	
TopDockWidgetArea = 4,	
BottomDockWidgetArea = 8,	
DockWidgetArea_Mask = 15,	
AllDockWidgetAreas = 15
}
;

enum ToolBarArea	
{
LeftToolBarArea = 1,	
RightToolBarArea = 2,	
TopToolBarArea = 4,	
BottomToolBarArea = 8,	
ToolBarArea_Mask = 15,	
AllToolBarAreas = 15
}
;

enum Dock	
{
DockUnmanaged = 0,	
Unmanaged = 0,	
DockTornOff = 1,	
TornOff = 1,	
DockTop = 2,	
Top = 2,	
DockBottom = 3,	
Bottom = 3,	
DockRight = 4,	
Right = 4,	
DockLeft = 5,	
Left = 5,	
DockMinimized = 6,	
Minimized = 6
}
;

enum DateFormat	
{
TextDate = 0,	
ISODate = 1,	
LocalDate = 2
}
;

enum TimeSpec	
{
LocalTime = 0,	
UTC = 1
}
;

enum DayOfWeek	
{
Monday = 1,	
Tuesday = 2,	
Wednesday = 3,	
Thursday = 4,	
Friday = 5,	
Saturday = 6,	
Sunday = 7
}
;

enum ScrollBarPolicy	
{
ScrollBarAsNeeded = 0,	
ScrollBarAlwaysOff = 1,	
ScrollBarAlwaysOn = 2
}
;

enum BackgroundMode	
{
FixedColor = 0,	
FixedPixmap = 1,	
NoBackground = 2,	
PaletteForeground = 3,	
PaletteButton = 4,	
PaletteLight = 5,	
PaletteMidlight = 6,	
PaletteDark = 7,	
PaletteMid = 8,	
PaletteText = 9,	
PaletteBrightText = 10,	
PaletteBase = 11,	
PaletteBackground = 12,	
PaletteShadow = 13,	
PaletteHighlight = 14,	
PaletteHighlightedText = 15,	
PaletteButtonText = 16,	
PaletteLink = 17,	
PaletteLinkVisited = 18,	
X11ParentRelative = 19
}
;

enum CaseSensitivity	
{
CaseInsensitive = 0,	
CaseSensitive = 1
}
;

enum Corner	
{
TopLeftCorner = 0,	
TopLeft = 0,	
TopRightCorner = 1,	
TopRight = 1,	
BottomLeftCorner = 2,	
BottomLeft = 2,	
BottomRightCorner = 3,	
BottomRight = 3
}
;

enum ConnectionType	
{
AutoConnection = 0,	
DirectConnection = 1,	
QueuedConnection = 2,	
AutoCompatConnection = 3
}
;

enum ShortcutContext	
{
WidgetShortcut = 0,	
WindowShortcut = 1,	
ApplicationShortcut = 2
}
;

enum FillRule	
{
OddEvenFill = 0,	
WindingFill = 1
}
;

enum ClipOperation	
{
NoClip = 0,	
ReplaceClip = 1,	
IntersectClip = 2,	
UniteClip = 3
}
;

enum TransformationMode	
{
FastTransformation = 0,	
SmoothTransformation = 1
}
;

enum FocusReason	
{
MouseFocusReason = 0,	
TabFocusReason = 1,	
BacktabFocusReason = 2,	
ActiveWindowFocusReason = 3,	
PopupFocusReason = 4,	
ShortcutFocusReason = 5,	
MenuBarFocusReason = 6,	
OtherFocusReason = 7,	
NoFocusReason = 8
}
;

enum ContextMenuPolicy	
{
NoContextMenu = 0,	
DefaultContextMenu = 1,	
ActionsContextMenu = 2,	
CustomContextMenu = 3
}
;

enum InputMethodQuery	
{
ImMicroFocus = 0,	
ImFont = 1,	
ImCursorPosition = 2,	
ImSurroundingText = 3,	
ImCurrentSelection = 4
}
;

enum ToolButtonStyle	
{
ToolButtonIconOnly = 0,	
ToolButtonTextOnly = 1,	
ToolButtonTextBesideIcon = 2,	
ToolButtonTextUnderIcon = 3
}
;

enum LayoutDirection	
{
LeftToRight = 0,	
RightToLeft = 1
}
;

enum DropAction	
{
IgnoreAction = 0,	
CopyAction = 1,	
MoveAction = 2,	
LinkAction = 4,	
ActionMask = 255,	
TargetMoveAction = 32770
}
;

enum CheckState	
{
Unchecked = 0,	
PartiallyChecked = 1,	
Checked = 2
}
;

enum ItemDataRole	
{
DisplayRole = 0,	
DecorationRole = 1,	
EditRole = 2,	
ToolTipRole = 3,	
StatusTipRole = 4,	
WhatsThisRole = 5,	
FontRole = 6,	
TextAlignmentRole = 7,	
BackgroundColorRole = 8,	
TextColorRole = 9,	
CheckStateRole = 10,	
AccessibleTextRole = 11,	
AccessibleDescriptionRole = 12,	
SizeHintRole = 13,	
UserRole = 32
}
;

enum ItemFlag	
{
ItemIsSelectable = 1,	
ItemIsEditable = 2,	
ItemIsDragEnabled = 4,	
ItemIsDropEnabled = 8,	
ItemIsUserCheckable = 16,	
ItemIsEnabled = 32,	
ItemIsTristate = 64
}
;

class QFlags<Qt::ItemFlag>
{
private:
public:
};

enum MatchFlag	
{
MatchExactly = 0,	
MatchContains = 1,	
MatchStartsWith = 2,	
MatchEndsWith = 3,	
MatchRegExp = 4,	
MatchWildcard = 5,	
MatchCaseSensitive = 16,	
MatchWrap = 32,	
MatchRecursive = 64
}
;

enum WindowModality	
{
NonModal = 0,	
WindowModal = 1,	
ApplicationModal = 2
}
;

class QInternal
{
private:
public:
    static bool callFunction(QInternal::InternalFunction, void**);
    static bool registerCallback(QInternal::Callback, bool (*)(void**));
    static bool activateCallbacks(QInternal::Callback, void**);
    static bool unregisterCallback(QInternal::Callback, bool (*)(void**));
};

enum PaintDeviceFlags	
{
UnknownDevice = 0,	
Widget = 1,	
Pixmap = 2,	
Image = 3,	
Printer = 4,	
Picture = 5,	
Pbuffer = 6
}
;

enum RelayoutType	
{
RelayoutNormal = 0,	
RelayoutDragging = 1,	
RelayoutDropped = 2
}
;

#endif // __LSB_VERSION__ >= 3.1

// *INDENT-ON*
#endif				// protection
#endif				// LSB version
