#if (__LSB_VERSION__ >= 50 )
#ifndef _GTK_3_0_GDK_GDK_H_
#define _GTK_3_0_GDK_GDK_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <pango-1.0/pango/pango.h>
#include <gdk-pixbuf-2.0/gdk-pixbuf/gdk-pixbuf.h>
#include <cairo/cairo.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define GDK_AVAILABLE_IN_3_0
#define GDK_AVAILABLE_IN_3_2
#define GDK_AVAILABLE_IN_3_4
#define GDK_AVAILABLE_IN_3_6
#define GDK_THREADS_DEPRECATED
#define GDK_WINDOWING_BROADWAY
#define GDK_BUTTON_PRIMARY	(1)
#define GDK_BUTTON_MIDDLE	(2)
#define GDK_BUTTON_SECONDARY	(3)
#define GDK_MAJOR_VERSION	(3)
#define GDK_MICRO_VERSION	(4)
#define GDK_MINOR_VERSION	(6)
#define GDK_EVENT_PROPAGATE	(FALSE)
#define GDK_TYPE_APP_LAUNCH_CONTEXT	(gdk_app_launch_context_get_type ())
#define GDK_TYPE_DEVICE_MANAGER	(gdk_device_manager_get_type ())
#define GDK_TYPE_DEVICE_TYPE	(gdk_device_type_get_type ())
#define GDK_TYPE_GRAB_OWNERSHIP	(gdk_grab_ownership_get_type ())
#define GDK_TYPE_MODIFIER_INTENT	(gdk_modifier_intent_get_type ())
#define GDK_TYPE_RGBA	(gdk_rgba_get_type ())
#define GDK_VERSION_MIN_REQUIRED	(GDK_VERSION_CUR_STABLE)
#define GDK_TYPE_WINDOW_WINDOW_CLASS	(gdk_window_window_class_get_type ())
#define GDK_VERSION_3_0	(G_ENCODE_VERSION (3, 0))
#define GDK_VERSION_3_2	(G_ENCODE_VERSION (3, 2))
#define GDK_VERSION_3_4	(G_ENCODE_VERSION (3, 4))
#define GDK_VERSION_3_6	(G_ENCODE_VERSION (3, 6))
#define GDK_VERSION_PREV_STABLE	(G_ENCODE_VERSION (GDK_MAJOR_VERSION, GDK_MINOR_VERSION - 2))
#define GDK_VERSION_CUR_STABLE	(G_ENCODE_VERSION (GDK_MAJOR_VERSION, GDK_MINOR_VERSION))
#define GDK_APP_LAUNCH_CONTEXT(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GDK_TYPE_APP_LAUNCH_CONTEXT, GdkAppLaunchContext))
#define GDK_DEVICE(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GDK_TYPE_DEVICE, GdkDevice))
#define GDK_DEVICE_MANAGER(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GDK_TYPE_DEVICE_MANAGER, GdkDeviceManager))
#define GDK_CURSOR(object)	(G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_CURSOR, GdkCursor))
#define GDK_DISPLAY(object)	(G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_DISPLAY, GdkDisplay))
#define GDK_IS_APP_LAUNCH_CONTEXT(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GDK_TYPE_APP_LAUNCH_CONTEXT))
#define GDK_IS_DEVICE(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GDK_TYPE_DEVICE))
#define GDK_IS_DEVICE_MANAGER(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GDK_TYPE_DEVICE_MANAGER))
#define GDK_IS_CURSOR(object)	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_CURSOR))
#define GDK_EVENT_STOP	(TRUE)
#define __INT16_C(c)	c
#define __INT32_C(c)	c
#define __INT8_C(c)	c
#define __UINT16_C(c)	c
#define __UINT8_C(c)	c
#define __INTMAX_C(c)	c ## L
#define __UINT32_C(c)	c ## U
#define __UINTMAX_C(c)	c ## UL
#define GDK_DEPRECATED_IN_3_0	GDK_DEPRECATED
#define GDK_DEPRECATED_IN_3_2	GDK_DEPRECATED
#define GDK_DEPRECATED_IN_3_4	GDK_DEPRECATED
#define GDK_DEPRECATED_IN_3_6	GDK_DEPRECATED
#define GDK_DEPRECATED_IN_3_0_FOR(f)	GDK_DEPRECATED_FOR(f)
#define GDK_DEPRECATED_IN_3_2_FOR(f)	GDK_DEPRECATED_FOR(f)
#define GDK_DEPRECATED_IN_3_4_FOR(f)	GDK_DEPRECATED_FOR(f)
#define GDK_DEPRECATED_IN_3_6_FOR(f)	GDK_DEPRECATED_FOR(f)
#define GDK_VERSION_MAX_ALLOWED	GDK_VERSION_MIN_REQUIRED
#define GDK_DEPRECATED	G_DEPRECATED
#define GDK_DEPRECATED_FOR(f)	G_DEPRECATED_FOR(f)
#define GDK_UNAVAILABLE(maj,min)	G_UNAVAILABLE(maj,min)


    typedef struct _GdkKeymapKey GdkKeymapKey;

    typedef struct _GdkEventAny GdkEventAny;

    typedef struct _GdkEventExpose GdkEventExpose;

    typedef struct _GdkEventVisibility GdkEventVisibility;

    typedef struct _GdkEventMotion GdkEventMotion;

    typedef struct _GdkEventButton GdkEventButton;

    typedef struct _GdkEventTouch GdkEventTouch;

    typedef struct _GdkEventScroll GdkEventScroll;

    typedef struct _GdkEventKey GdkEventKey;

    typedef struct _GdkEventFocus GdkEventFocus;

    typedef struct _GdkEventCrossing GdkEventCrossing;

    typedef struct _GdkEventConfigure GdkEventConfigure;

    typedef struct _GdkEventProperty GdkEventProperty;

    typedef struct _GdkEventSelection GdkEventSelection;

    typedef struct _GdkEventOwnerChange GdkEventOwnerChange;

    typedef struct _GdkEventProximity GdkEventProximity;

    typedef struct _GdkEventDND GdkEventDND;

    typedef struct _GdkEventWindowState GdkEventWindowState;

    typedef struct _GdkEventSetting GdkEventSetting;

    typedef struct _GdkEventGrabBroken GdkEventGrabBroken;

    typedef struct _GdkEventSequence GdkEventSequence;

    typedef union _GdkEvent GdkEvent;

    typedef void (*GdkEventFunc) (GdkEvent * event, gpointer data);

    typedef void GdkXEvent;

    typedef enum {
	GDK_FILTER_CONTINUE,
	GDK_FILTER_TRANSLATE,
	GDK_FILTER_REMOVE
    } GdkFilterReturn;

    typedef GdkFilterReturn(*GdkFilterFunc) (GdkXEvent * xevent,
					     GdkEvent * event,
					     gpointer data);

    typedef enum {
	GDK_NOTHING = -1,
	GDK_DELETE = 0,
	GDK_DESTROY = 1,
	GDK_EXPOSE = 2,
	GDK_MOTION_NOTIFY = 3,
	GDK_BUTTON_PRESS = 4,
	GDK_2BUTTON_PRESS = 5,
	GDK_DOUBLE_BUTTON_PRESS = GDK_2BUTTON_PRESS,
	GDK_3BUTTON_PRESS = 6,
	GDK_TRIPLE_BUTTON_PRESS = GDK_3BUTTON_PRESS,
	GDK_BUTTON_RELEASE = 7,
	GDK_KEY_PRESS = 8,
	GDK_KEY_RELEASE = 9,
	GDK_ENTER_NOTIFY = 10,
	GDK_LEAVE_NOTIFY = 11,
	GDK_FOCUS_CHANGE = 12,
	GDK_CONFIGURE = 13,
	GDK_MAP = 14,
	GDK_UNMAP = 15,
	GDK_PROPERTY_NOTIFY = 16,
	GDK_SELECTION_CLEAR = 17,
	GDK_SELECTION_REQUEST = 18,
	GDK_SELECTION_NOTIFY = 19,
	GDK_PROXIMITY_IN = 20,
	GDK_PROXIMITY_OUT = 21,
	GDK_DRAG_ENTER = 22,
	GDK_DRAG_LEAVE = 23,
	GDK_DRAG_MOTION = 24,
	GDK_DRAG_STATUS = 25,
	GDK_DROP_START = 26,
	GDK_DROP_FINISHED = 27,
	GDK_CLIENT_EVENT = 28,
	GDK_VISIBILITY_NOTIFY = 29,
	GDK_SCROLL = 31,
	GDK_WINDOW_STATE = 32,
	GDK_SETTING = 33,
	GDK_OWNER_CHANGE = 34,
	GDK_GRAB_BROKEN = 35,
	GDK_DAMAGE = 36,
	GDK_TOUCH_BEGIN = 37,
	GDK_TOUCH_UPDATE = 38,
	GDK_TOUCH_END = 39,
	GDK_TOUCH_CANCEL = 40,
	GDK_EVENT_LAST
    } GdkEventType;

    typedef enum {
	GDK_VISIBILITY_UNOBSCURED,
	GDK_VISIBILITY_PARTIAL,
	GDK_VISIBILITY_FULLY_OBSCURED
    } GdkVisibilityState;

    typedef enum {
	GDK_SCROLL_UP,
	GDK_SCROLL_DOWN,
	GDK_SCROLL_LEFT,
	GDK_SCROLL_RIGHT,
	GDK_SCROLL_SMOOTH
    } GdkScrollDirection;

    typedef enum {
	GDK_NOTIFY_ANCESTOR = 0,
	GDK_NOTIFY_VIRTUAL = 1,
	GDK_NOTIFY_INFERIOR = 2,
	GDK_NOTIFY_NONLINEAR = 3,
	GDK_NOTIFY_NONLINEAR_VIRTUAL = 4,
	GDK_NOTIFY_UNKNOWN = 5
    } GdkNotifyType;

    typedef struct _GdkWindow GdkWindow;   /*XXX hand-edit: move from below */

    typedef enum {
	GDK_CROSSING_NORMAL,
	GDK_CROSSING_GRAB,
	GDK_CROSSING_UNGRAB,
	GDK_CROSSING_GTK_GRAB,
	GDK_CROSSING_GTK_UNGRAB,
	GDK_CROSSING_STATE_CHANGED,
	GDK_CROSSING_TOUCH_BEGIN,
	GDK_CROSSING_TOUCH_END,
	GDK_CROSSING_DEVICE_SWITCH
    } GdkCrossingMode;

    typedef enum {
	GDK_PROPERTY_NEW_VALUE,
	GDK_PROPERTY_DELETE
    } GdkPropertyState;

    typedef enum {
	GDK_WINDOW_STATE_WITHDRAWN = 1 << 0,
	GDK_WINDOW_STATE_ICONIFIED = 1 << 1,
	GDK_WINDOW_STATE_MAXIMIZED = 1 << 2,
	GDK_WINDOW_STATE_STICKY = 1 << 3,
	GDK_WINDOW_STATE_FULLSCREEN = 1 << 4,
	GDK_WINDOW_STATE_ABOVE = 1 << 5,
	GDK_WINDOW_STATE_BELOW = 1 << 6,
	GDK_WINDOW_STATE_FOCUSED = 1 << 7
    } GdkWindowState;

    typedef enum {
	GDK_SETTING_ACTION_NEW,
	GDK_SETTING_ACTION_CHANGED,
	GDK_SETTING_ACTION_DELETED
    } GdkSettingAction;

    typedef enum {
	GDK_OWNER_CHANGE_NEW_OWNER,
	GDK_OWNER_CHANGE_DESTROY,
	GDK_OWNER_CHANGE_CLOSE
    } GdkOwnerChange;

    typedef enum {
	GDK_PROP_MODE_REPLACE,
	GDK_PROP_MODE_PREPEND,
	GDK_PROP_MODE_APPEND
    } GdkPropMode;

    typedef enum {
	GDK_VISUAL_STATIC_GRAY,
	GDK_VISUAL_GRAYSCALE,
	GDK_VISUAL_STATIC_COLOR,
	GDK_VISUAL_PSEUDO_COLOR,
	GDK_VISUAL_TRUE_COLOR,
	GDK_VISUAL_DIRECT_COLOR
    } GdkVisualType;

    typedef enum {
	GDK_ACTION_DEFAULT = 1 << 0,
	GDK_ACTION_COPY = 1 << 1,
	GDK_ACTION_MOVE = 1 << 2,
	GDK_ACTION_LINK = 1 << 3,
	GDK_ACTION_PRIVATE = 1 << 4,
	GDK_ACTION_ASK = 1 << 5
    } GdkDragAction;

    typedef enum {
	GDK_DRAG_PROTO_NONE,
	GDK_DRAG_PROTO_MOTIF,
	GDK_DRAG_PROTO_XDND,
	GDK_DRAG_PROTO_ROOTWIN,
	GDK_DRAG_PROTO_WIN32_DROPFILES,
	GDK_DRAG_PROTO_OLE2,
	GDK_DRAG_PROTO_LOCAL
    } GdkDragProtocol;

    typedef struct _GdkGeometry GdkGeometry;

    typedef struct _GdkWindowAttr GdkWindowAttr;

    typedef struct _GdkWindowRedirect GdkWindowRedirect;

    typedef enum {
	GDK_INPUT_OUTPUT,
	GDK_INPUT_ONLY
    } GdkWindowWindowClass;

    typedef enum {
	GDK_WINDOW_ROOT,
	GDK_WINDOW_TOPLEVEL,
	GDK_WINDOW_CHILD,
	GDK_WINDOW_TEMP,
	GDK_WINDOW_FOREIGN,
	GDK_WINDOW_OFFSCREEN
    } GdkWindowType;

    typedef enum {
	GDK_WA_TITLE = 1 << 1,
	GDK_WA_X = 1 << 2,
	GDK_WA_Y = 1 << 3,
	GDK_WA_CURSOR = 1 << 4,
	GDK_WA_VISUAL = 1 << 5,
	GDK_WA_WMCLASS = 1 << 6,
	GDK_WA_NOREDIR = 1 << 7,
	GDK_WA_TYPE_HINT = 1 << 8
    } GdkWindowAttributesType;

    typedef enum {
	GDK_HINT_POS = 1 << 0,
	GDK_HINT_MIN_SIZE = 1 << 1,
	GDK_HINT_MAX_SIZE = 1 << 2,
	GDK_HINT_BASE_SIZE = 1 << 3,
	GDK_HINT_ASPECT = 1 << 4,
	GDK_HINT_RESIZE_INC = 1 << 5,
	GDK_HINT_WIN_GRAVITY = 1 << 6,
	GDK_HINT_USER_POS = 1 << 7,
	GDK_HINT_USER_SIZE = 1 << 8
    } GdkWindowHints;

    typedef enum {
	GDK_WINDOW_TYPE_HINT_NORMAL,
	GDK_WINDOW_TYPE_HINT_DIALOG,
	GDK_WINDOW_TYPE_HINT_MENU,
	GDK_WINDOW_TYPE_HINT_TOOLBAR,
	GDK_WINDOW_TYPE_HINT_SPLASHSCREEN,
	GDK_WINDOW_TYPE_HINT_UTILITY,
	GDK_WINDOW_TYPE_HINT_DOCK,
	GDK_WINDOW_TYPE_HINT_DESKTOP,
	GDK_WINDOW_TYPE_HINT_DROPDOWN_MENU,
	GDK_WINDOW_TYPE_HINT_POPUP_MENU,
	GDK_WINDOW_TYPE_HINT_TOOLTIP,
	GDK_WINDOW_TYPE_HINT_NOTIFICATION,
	GDK_WINDOW_TYPE_HINT_COMBO,
	GDK_WINDOW_TYPE_HINT_DND
    } GdkWindowTypeHint;

    typedef enum {
	GDK_DECOR_ALL = 1 << 0,
	GDK_DECOR_BORDER = 1 << 1,
	GDK_DECOR_RESIZEH = 1 << 2,
	GDK_DECOR_TITLE = 1 << 3,
	GDK_DECOR_MENU = 1 << 4,
	GDK_DECOR_MINIMIZE = 1 << 5,
	GDK_DECOR_MAXIMIZE = 1 << 6
    } GdkWMDecoration;

    typedef enum {
	GDK_FUNC_ALL = 1 << 0,
	GDK_FUNC_RESIZE = 1 << 1,
	GDK_FUNC_MOVE = 1 << 2,
	GDK_FUNC_MINIMIZE = 1 << 3,
	GDK_FUNC_MAXIMIZE = 1 << 4,
	GDK_FUNC_CLOSE = 1 << 5
    } GdkWMFunction;

    typedef enum {
	GDK_GRAVITY_NORTH_WEST = 1,
	GDK_GRAVITY_NORTH = 2,
	GDK_GRAVITY_NORTH_EAST = 3,
	GDK_GRAVITY_WEST = 4,
	GDK_GRAVITY_CENTER = 5,
	GDK_GRAVITY_EAST = 6,
	GDK_GRAVITY_SOUTH_WEST = 7,
	GDK_GRAVITY_SOUTH = 8,
	GDK_GRAVITY_SOUTH_EAST = 9,
	GDK_GRAVITY_STATIC = 10
    } GdkGravity;

    typedef enum {
	GDK_WINDOW_EDGE_NORTH_WEST,
	GDK_WINDOW_EDGE_NORTH,
	GDK_WINDOW_EDGE_NORTH_EAST,
	GDK_WINDOW_EDGE_WEST,
	GDK_WINDOW_EDGE_EAST,
	GDK_WINDOW_EDGE_SOUTH_WEST,
	GDK_WINDOW_EDGE_SOUTH,
	GDK_WINDOW_EDGE_SOUTH_EAST
    } GdkWindowEdge;

    typedef struct _GdkWindowClass GdkWindowClass;

    typedef gboolean(*GdkWindowChildFunc) (GdkWindow * window,
					   gpointer user_data);

    typedef struct _GdkTimeCoord GdkTimeCoord;

    typedef enum {
	GDK_SOURCE_MOUSE,
	GDK_SOURCE_PEN,
	GDK_SOURCE_ERASER,
	GDK_SOURCE_CURSOR,
	GDK_SOURCE_KEYBOARD,
	GDK_SOURCE_TOUCHSCREEN,
	GDK_SOURCE_TOUCHPAD
    } GdkInputSource;

    typedef enum {
	GDK_MODE_DISABLED,
	GDK_MODE_SCREEN,
	GDK_MODE_WINDOW
    } GdkInputMode;

    typedef enum {
	GDK_AXIS_IGNORE,
	GDK_AXIS_X,
	GDK_AXIS_Y,
	GDK_AXIS_PRESSURE,
	GDK_AXIS_XTILT,
	GDK_AXIS_YTILT,
	GDK_AXIS_WHEEL,
	GDK_AXIS_LAST
    } GdkAxisUse;

    typedef enum {
	GDK_DEVICE_TYPE_MASTER,
	GDK_DEVICE_TYPE_SLAVE,
	GDK_DEVICE_TYPE_FLOATING
    } GdkDeviceType;

    typedef enum {
	GDK_X_CURSOR = 0,
	GDK_ARROW = 2,
	GDK_BASED_ARROW_DOWN = 4,
	GDK_BASED_ARROW_UP = 6,
	GDK_BOAT = 8,
	GDK_BOGOSITY = 10,
	GDK_BOTTOM_LEFT_CORNER = 12,
	GDK_BOTTOM_RIGHT_CORNER = 14,
	GDK_BOTTOM_SIDE = 16,
	GDK_BOTTOM_TEE = 18,
	GDK_BOX_SPIRAL = 20,
	GDK_CENTER_PTR = 22,
	GDK_CIRCLE = 24,
	GDK_CLOCK = 26,
	GDK_COFFEE_MUG = 28,
	GDK_CROSS = 30,
	GDK_CROSS_REVERSE = 32,
	GDK_CROSSHAIR = 34,
	GDK_DIAMOND_CROSS = 36,
	GDK_DOT = 38,
	GDK_DOTBOX = 40,
	GDK_DOUBLE_ARROW = 42,
	GDK_DRAFT_LARGE = 44,
	GDK_DRAFT_SMALL = 46,
	GDK_DRAPED_BOX = 48,
	GDK_EXCHANGE = 50,
	GDK_FLEUR = 52,
	GDK_GOBBLER = 54,
	GDK_GUMBY = 56,
	GDK_HAND1 = 58,
	GDK_HAND2 = 60,
	GDK_HEART = 62,
	GDK_ICON = 64,
	GDK_IRON_CROSS = 66,
	GDK_LEFT_PTR = 68,
	GDK_LEFT_SIDE = 70,
	GDK_LEFT_TEE = 72,
	GDK_LEFTBUTTON = 74,
	GDK_LL_ANGLE = 76,
	GDK_LR_ANGLE = 78,
	GDK_MAN = 80,
	GDK_MIDDLEBUTTON = 82,
	GDK_MOUSE = 84,
	GDK_PENCIL = 86,
	GDK_PIRATE = 88,
	GDK_PLUS = 90,
	GDK_QUESTION_ARROW = 92,
	GDK_RIGHT_PTR = 94,
	GDK_RIGHT_SIDE = 96,
	GDK_RIGHT_TEE = 98,
	GDK_RIGHTBUTTON = 100,
	GDK_RTL_LOGO = 102,
	GDK_SAILBOAT = 104,
	GDK_SB_DOWN_ARROW = 106,
	GDK_SB_H_DOUBLE_ARROW = 108,
	GDK_SB_LEFT_ARROW = 110,
	GDK_SB_RIGHT_ARROW = 112,
	GDK_SB_UP_ARROW = 114,
	GDK_SB_V_DOUBLE_ARROW = 116,
	GDK_SHUTTLE = 118,
	GDK_SIZING = 120,
	GDK_SPIDER = 122,
	GDK_SPRAYCAN = 124,
	GDK_STAR = 126,
	GDK_TARGET = 128,
	GDK_TCROSS = 130,
	GDK_TOP_LEFT_ARROW = 132,
	GDK_TOP_LEFT_CORNER = 134,
	GDK_TOP_RIGHT_CORNER = 136,
	GDK_TOP_SIDE = 138,
	GDK_TOP_TEE = 140,
	GDK_TREK = 142,
	GDK_UL_ANGLE = 144,
	GDK_UMBRELLA = 146,
	GDK_UR_ANGLE = 148,
	GDK_WATCH = 150,
	GDK_XTERM = 152,
	GDK_LAST_CURSOR,
	GDK_BLANK_CURSOR = -2,
	GDK_CURSOR_IS_PIXMAP = -1
    } GdkCursorType;

    typedef struct _GdkPoint GdkPoint;

    typedef const cairo_rectangle_int_t GdkRectangle;

    typedef struct _GdkAtom *GdkAtom;

    typedef struct _GdkColor GdkColor;

    typedef struct _GdkRGBA GdkRGBA;

    typedef struct _GdkCursor GdkCursor;

    typedef struct _GdkVisual GdkVisual;

    typedef struct _GdkDevice GdkDevice;

    typedef struct _GdkDragContext GdkDragContext;

    typedef struct _GdkDisplayManager GdkDisplayManager;

    typedef struct _GdkDeviceManager GdkDeviceManager;

    typedef struct _GdkDisplay GdkDisplay;

    typedef struct _GdkScreen GdkScreen;

    /* typedef struct _GdkWindow GdkWindow;	XXX hand-edit: move up */

    typedef struct _GdkKeymap GdkKeymap;

    typedef struct _GdkAppLaunchContext GdkAppLaunchContext;

    typedef enum {
	GDK_LSB_FIRST,
	GDK_MSB_FIRST
    } GdkByteOrder;

    typedef enum {
	GDK_SHIFT_MASK = 1 << 0,
	GDK_LOCK_MASK = 1 << 1,
	GDK_CONTROL_MASK = 1 << 2,
	GDK_MOD1_MASK = 1 << 3,
	GDK_MOD2_MASK = 1 << 4,
	GDK_MOD3_MASK = 1 << 5,
	GDK_MOD4_MASK = 1 << 6,
	GDK_MOD5_MASK = 1 << 7,
	GDK_BUTTON1_MASK = 1 << 8,
	GDK_BUTTON2_MASK = 1 << 9,
	GDK_BUTTON3_MASK = 1 << 10,
	GDK_BUTTON4_MASK = 1 << 11,
	GDK_BUTTON5_MASK = 1 << 12,
	GDK_MODIFIER_RESERVED_13_MASK = 1 << 13,
	GDK_MODIFIER_RESERVED_14_MASK = 1 << 14,
	GDK_MODIFIER_RESERVED_15_MASK = 1 << 15,
	GDK_MODIFIER_RESERVED_16_MASK = 1 << 16,
	GDK_MODIFIER_RESERVED_17_MASK = 1 << 17,
	GDK_MODIFIER_RESERVED_18_MASK = 1 << 18,
	GDK_MODIFIER_RESERVED_19_MASK = 1 << 19,
	GDK_MODIFIER_RESERVED_20_MASK = 1 << 20,
	GDK_MODIFIER_RESERVED_21_MASK = 1 << 21,
	GDK_MODIFIER_RESERVED_22_MASK = 1 << 22,
	GDK_MODIFIER_RESERVED_23_MASK = 1 << 23,
	GDK_MODIFIER_RESERVED_24_MASK = 1 << 24,
	GDK_MODIFIER_RESERVED_25_MASK = 1 << 25,
	GDK_SUPER_MASK = 1 << 26,
	GDK_HYPER_MASK = 1 << 27,
	GDK_META_MASK = 1 << 29,
	GDK_MODIFIER_RESERVED_29_MASK = 1 << 29,
	GDK_RELEASE_MASK = 1 << 30,
	GDK_MODIFIER_MASK = 0x5c001fff
    } GdkModifierType;

    typedef enum {
	GDK_MODIFIER_INTENT_PRIMARY_ACCELERATOR,
	GDK_MODIFIER_INTENT_CONTEXT_MENU,
	GDK_MODIFIER_INTENT_EXTEND_SELECTION,
	GDK_MODIFIER_INTENT_MODIFY_SELECTION,
	GDK_MODIFIER_INTENT_NO_TEXT_INPUT,
	GDK_MODIFIER_INTENT_SHIFT_GROUP
    } GdkModifierIntent;

    typedef enum {
	GDK_OK = 0,
	GDK_ERROR = -1,
	GDK_ERROR_PARAM = -2,
	GDK_ERROR_FILE = -3,
	GDK_ERROR_MEM = -4
    } GdkStatus;

    typedef enum {
	GDK_GRAB_SUCCESS,
	GDK_GRAB_ALREADY_GRABBED,
	GDK_GRAB_INVALID_TIME,
	GDK_GRAB_NOT_VIEWABLE,
	GDK_GRAB_FROZEN
    } GdkGrabStatus;

    typedef enum {
	GDK_OWNERSHIP_NONE,
	GDK_OWNERSHIP_WINDOW,
	GDK_OWNERSHIP_APPLICATION
    } GdkGrabOwnership;

    typedef enum {
	GDK_EXPOSURE_MASK = 1 << 1,
	GDK_POINTER_MOTION_MASK = 1 << 2,
	GDK_POINTER_MOTION_HINT_MASK = 1 << 3,
	GDK_BUTTON_MOTION_MASK = 1 << 4,
	GDK_BUTTON1_MOTION_MASK = 1 << 5,
	GDK_BUTTON2_MOTION_MASK = 1 << 6,
	GDK_BUTTON3_MOTION_MASK = 1 << 7,
	GDK_BUTTON_PRESS_MASK = 1 << 8,
	GDK_BUTTON_RELEASE_MASK = 1 << 9,
	GDK_KEY_PRESS_MASK = 1 << 10,
	GDK_KEY_RELEASE_MASK = 1 << 11,
	GDK_ENTER_NOTIFY_MASK = 1 << 12,
	GDK_LEAVE_NOTIFY_MASK = 1 << 13,
	GDK_FOCUS_CHANGE_MASK = 1 << 14,
	GDK_STRUCTURE_MASK = 1 << 15,
	GDK_PROPERTY_CHANGE_MASK = 1 << 16,
	GDK_VISIBILITY_NOTIFY_MASK = 1 << 17,
	GDK_PROXIMITY_IN_MASK = 1 << 18,
	GDK_PROXIMITY_OUT_MASK = 1 << 19,
	GDK_SUBSTRUCTURE_MASK = 1 << 20,
	GDK_SCROLL_MASK = 1 << 21,
	GDK_TOUCH_MASK = 1 << 22,
	GDK_SMOOTH_SCROLL_MASK = 1 << 23,
	GDK_ALL_EVENTS_MASK = 0xFFFFFE
    } GdkEventMask;

    struct _GdkKeymapKey {
	guint keycode;
	gint group;
	gint level;
    };

    struct _GdkRGBA {
	gdouble red;
	gdouble green;
	gdouble blue;
	gdouble alpha;
    };

    struct _GdkEventAny {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
    };

    struct _GdkEventExpose {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	GdkRectangle area;
	cairo_region_t *region;
	gint count;
    };

    struct _GdkEventVisibility {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	GdkVisibilityState state;
    };

    struct _GdkEventMotion {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	guint32 time;
	gdouble x;
	gdouble y;
	gdouble *axes;
	guint state;
	gint16 is_hint;
	GdkDevice *device;
	gdouble x_root;
	gdouble y_root;
    };

    struct _GdkEventButton {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	guint32 time;
	gdouble x;
	gdouble y;
	gdouble *axes;
	guint state;
	guint button;
	GdkDevice *device;
	gdouble x_root;
	gdouble y_root;
    };

    struct _GdkEventTouch {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	guint32 time;
	gdouble x;
	gdouble y;
	gdouble *axes;
	guint state;
	GdkEventSequence *sequence;
	gboolean emulating_pointer;
	GdkDevice *device;
	gdouble x_root;
	gdouble y_root;
    };

    struct _GdkEventScroll {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	guint32 time;
	gdouble x;
	gdouble y;
	guint state;
	GdkScrollDirection direction;
	GdkDevice *device;
	gdouble x_root;
	gdouble y_root;
	gdouble delta_x;
	gdouble delta_y;
    };

    struct _GdkEventKey {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	guint32 time;
	guint state;
	guint keyval;
	gint length;
	gchar *string;
	guint16 hardware_keycode;
	guint8 group;
	guint is_modifier;
    };

    struct _GdkEventCrossing {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	GdkWindow *subwindow;
	guint32 time;
	gdouble x;
	gdouble y;
	gdouble x_root;
	gdouble y_root;
	GdkCrossingMode mode;
	GdkNotifyType detail;
	gboolean focus;
	guint state;
    };

    struct _GdkEventFocus {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	gint16 in;
    };

    struct _GdkEventConfigure {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	gint x;
	gint y;
	gint width;
	gint height;
    };

    struct _GdkEventProperty {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	GdkAtom atom;
	guint32 time;
	guint state;
    };

    struct _GdkEventSelection {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	GdkAtom selection;
	GdkAtom target;
	GdkAtom property;
	guint32 time;
	GdkWindow *requestor;
    };

    struct _GdkEventOwnerChange {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	GdkWindow *owner;
	GdkOwnerChange reason;
	GdkAtom selection;
	guint32 time;
	guint32 selection_time;
    };

    struct _GdkEventProximity {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	guint32 time;
	GdkDevice *device;
    };

    struct _GdkEventSetting {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	GdkSettingAction action;
	char *name;
    };

    struct _GdkEventWindowState {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	GdkWindowState changed_mask;
	GdkWindowState new_window_state;
    };

    struct _GdkEventGrabBroken {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	gboolean keyboard;
	gboolean implicit;
	GdkWindow *grab_window;
    };

    struct _GdkEventDND {
	GdkEventType type;
	GdkWindow *window;
	gint8 send_event;
	GdkDragContext *context;
	guint32 time;
	gshort x_root;
	gshort y_root;
    };

    union _GdkEvent {
	GdkEventType type;
	GdkEventAny any;
	GdkEventExpose expose;
	GdkEventVisibility visibility;
	GdkEventMotion motion;
	GdkEventButton button;
	GdkEventTouch touch;
	GdkEventScroll scroll;
	GdkEventKey key;
	GdkEventCrossing crossing;
	GdkEventFocus focus_change;
	GdkEventConfigure configure;
	GdkEventProperty property;
	GdkEventSelection selection;
	GdkEventOwnerChange owner_change;
	GdkEventProximity proximity;
	GdkEventDND dnd;
	GdkEventWindowState window_state;
	GdkEventSetting setting;
	GdkEventGrabBroken grab_broken;
    };

    struct _GdkColor {
	guint32 pixel;
	guint16 red;
	guint16 green;
	guint16 blue;
    };

    struct _GdkWindowAttr {
	gchar *title;
	gint event_mask;
	gint x;
	gint y;
	gint width;
	gint height;
	GdkWindowWindowClass wclass;
	GdkVisual *visual;
	GdkWindowType window_type;
	GdkCursor *cursor;
	gchar *wmclass_name;
	gchar *wmclass_class;
	gboolean override_redirect;
	GdkWindowTypeHint type_hint;
    };

    struct _GdkGeometry {
	gint min_width;
	gint min_height;
	gint max_width;
	gint max_height;
	gint base_width;
	gint base_height;
	gint width_inc;
	gint height_inc;
	gdouble min_aspect;
	gdouble max_aspect;
	GdkGravity win_gravity;
    };

    struct _GdkWindowClass;

    struct _GdkTimeCoord {
	guint32 time;
	gdouble axes[128];
    };

    struct _GdkPoint {
	gint x;
	gint y;
    };


/* Function prototypes */

    extern void gdk_add_option_entries_libgtk_only(GOptionGroup * group);
    extern GType gdk_app_launch_context_get_type(void);
    extern GdkAppLaunchContext *gdk_app_launch_context_new(void);
    extern void gdk_app_launch_context_set_desktop(GdkAppLaunchContext *
						   context, gint);
    extern void gdk_app_launch_context_set_display(GdkAppLaunchContext *
						   context, GdkDisplay *);
    extern void gdk_app_launch_context_set_icon(GdkAppLaunchContext *
						context, GIcon *);
    extern void gdk_app_launch_context_set_icon_name(GdkAppLaunchContext *
						     context,
						     const char *);
    extern void gdk_app_launch_context_set_screen(GdkAppLaunchContext *
						  context, GdkScreen *);
    extern void gdk_app_launch_context_set_timestamp(GdkAppLaunchContext *
						     context, guint32);
    extern GdkAtom gdk_atom_intern(const char *atom_name, gboolean);
    extern GdkAtom gdk_atom_intern_static_string(const char *atom_name);
    extern gchar *gdk_atom_name(GdkAtom atom);
    extern GType gdk_axis_use_get_type(void);
    extern void gdk_beep(void);
    extern GType gdk_byte_order_get_type(void);
    extern cairo_t *gdk_cairo_create(GdkWindow * window);
    extern gboolean gdk_cairo_get_clip_rectangle(cairo_t * cr,
						 GdkRectangle *);
    extern void gdk_cairo_rectangle(cairo_t * cr, const GdkRectangle *);
    extern void gdk_cairo_region(cairo_t * cr, const cairo_region_t);
    extern cairo_region_t
	*gdk_cairo_region_create_from_surface(cairo_surface_t * surface);
    extern void gdk_cairo_set_source_color(cairo_t * cr, const GdkColor *);
    extern void gdk_cairo_set_source_pixbuf(cairo_t * cr,
					    const GdkPixbuf *, gdouble,
					    gdouble);
    extern void gdk_cairo_set_source_rgba(cairo_t * cr, const GdkRGBA *);
    extern void gdk_cairo_set_source_window(cairo_t * cr, GdkWindow *,
					    gdouble, gdouble);
    extern GdkColor *gdk_color_copy(const GdkColor * color);
    extern gboolean gdk_color_equal(const GdkColor * colora,
				    const GdkColor *);
    extern void gdk_color_free(GdkColor * color);
    extern GType gdk_color_get_type(void);
    extern guint gdk_color_hash(const GdkColor * color);
    extern gboolean gdk_color_parse(const char *spec, GdkColor *);
    extern gchar *gdk_color_to_string(const GdkColor * color);
    extern GType gdk_crossing_mode_get_type(void);
    extern GdkCursorType gdk_cursor_get_cursor_type(GdkCursor * cursor);
    extern GdkDisplay *gdk_cursor_get_display(GdkCursor * cursor);
    extern GdkPixbuf *gdk_cursor_get_image(GdkCursor * cursor);
    extern GType gdk_cursor_get_type(void);
    extern GdkCursor *gdk_cursor_new(GdkCursorType cursor_type);
    extern GdkCursor *gdk_cursor_new_for_display(GdkDisplay * display,
						 GdkCursorType);
    extern GdkCursor *gdk_cursor_new_from_name(GdkDisplay * display,
					       const char *);
    extern GdkCursor *gdk_cursor_new_from_pixbuf(GdkDisplay * display,
						 GdkPixbuf *, gint, gint);
    extern GdkCursor *gdk_cursor_ref(GdkCursor * cursor);
    extern GType gdk_cursor_type_get_type(void);
    extern void gdk_cursor_unref(GdkCursor * cursor);
    extern void gdk_device_free_history(GdkTimeCoord * *events, gint);
    extern GdkDevice *gdk_device_get_associated_device(GdkDevice * device);
    extern gboolean gdk_device_get_axis(GdkDevice * device, gdouble *,
					GdkAxisUse, gdouble *);
    extern GdkAxisUse gdk_device_get_axis_use(GdkDevice * device, guint);
    extern gboolean gdk_device_get_axis_value(GdkDevice * device,
					      gdouble *, GdkAtom,
					      gdouble *);
    extern GdkDeviceType gdk_device_get_device_type(GdkDevice * device);
    extern GdkDisplay *gdk_device_get_display(GdkDevice * device);
    extern gboolean gdk_device_get_has_cursor(GdkDevice * device);
    extern gboolean gdk_device_get_history(GdkDevice * device, GdkWindow *,
					   guint32, guint32,
					   GdkTimeCoord * **, gint *);
    extern gboolean gdk_device_get_key(GdkDevice * device, guint, guint *,
				       GdkModifierType *);
    extern GdkInputMode gdk_device_get_mode(GdkDevice * device);
    extern gint gdk_device_get_n_axes(GdkDevice * device);
    extern gint gdk_device_get_n_keys(GdkDevice * device);
    extern const char *gdk_device_get_name(GdkDevice * device);
    extern void gdk_device_get_position(GdkDevice * device, GdkScreen * *,
					gint *, gint *);
    extern GdkInputSource gdk_device_get_source(GdkDevice * device);
    extern void gdk_device_get_state(GdkDevice * device, GdkWindow *,
				     gdouble *, GdkModifierType *);
    extern GType gdk_device_get_type(void);
    extern GdkWindow *gdk_device_get_window_at_position(GdkDevice * device,
							gint *, gint *);
    extern GdkGrabStatus gdk_device_grab(GdkDevice * device, GdkWindow *,
					 GdkGrabOwnership, gboolean,
					 GdkEventMask, GdkCursor *,
					 guint32);
    extern gboolean gdk_device_grab_info_libgtk_only(GdkDisplay * display,
						     GdkDevice *,
						     GdkWindow * *,
						     gboolean *);
    extern GList *gdk_device_list_axes(GdkDevice * device);
    extern GList *gdk_device_list_slave_devices(GdkDevice * device);
    extern GdkDevice
	*gdk_device_manager_get_client_pointer(GdkDeviceManager *
					       device_manager);
    extern GdkDisplay *gdk_device_manager_get_display(GdkDeviceManager *
						      device_manager);
    extern GType gdk_device_manager_get_type(void);
    extern GList *gdk_device_manager_list_devices(GdkDeviceManager *
						  device_manager,
						  GdkDeviceType);
    extern void gdk_device_set_axis_use(GdkDevice * device, guint,
					GdkAxisUse);
    extern void gdk_device_set_key(GdkDevice * device, guint, guint,
				   GdkModifierType);
    extern gboolean gdk_device_set_mode(GdkDevice * device, GdkInputMode);
    extern GType gdk_device_type_get_type(void);
    extern void gdk_device_ungrab(GdkDevice * device, guint32);
    extern void gdk_device_warp(GdkDevice * device, GdkScreen *, gint,
				gint);
    extern void gdk_disable_multidevice(void);
    extern void gdk_display_beep(GdkDisplay * display);
    extern void gdk_display_close(GdkDisplay * display);
    extern gboolean gdk_display_device_is_grabbed(GdkDisplay * display,
						  GdkDevice *);
    extern void gdk_display_flush(GdkDisplay * display);
    extern GdkAppLaunchContext
	*gdk_display_get_app_launch_context(GdkDisplay * display);
    extern GdkDisplay *gdk_display_get_default(void);
    extern guint gdk_display_get_default_cursor_size(GdkDisplay * display);
    extern GdkWindow *gdk_display_get_default_group(GdkDisplay * display);
    extern GdkScreen *gdk_display_get_default_screen(GdkDisplay * display);
    extern GdkDeviceManager *gdk_display_get_device_manager(GdkDisplay *
							    display);
    extern GdkEvent *gdk_display_get_event(GdkDisplay * display);
    extern void gdk_display_get_maximal_cursor_size(GdkDisplay * display,
						    guint *, guint *);
    extern gint gdk_display_get_n_screens(GdkDisplay * display);
    extern const char *gdk_display_get_name(GdkDisplay * display);
    extern void gdk_display_get_pointer(GdkDisplay * display,
					GdkScreen * *, gint *, gint *,
					GdkModifierType *);
    extern GdkScreen *gdk_display_get_screen(GdkDisplay * display, gint);
    extern GType gdk_display_get_type(void);
    extern GdkWindow *gdk_display_get_window_at_pointer(GdkDisplay *
							display, gint *,
							gint *);
    extern gboolean gdk_display_has_pending(GdkDisplay * display);
    extern gboolean gdk_display_is_closed(GdkDisplay * display);
    extern void gdk_display_keyboard_ungrab(GdkDisplay * display, guint32);
    extern GList *gdk_display_list_devices(GdkDisplay * display);
    extern GdkDisplayManager *gdk_display_manager_get(void);
    extern GdkDisplay
	*gdk_display_manager_get_default_display(GdkDisplayManager *
						 manager);
    extern GType gdk_display_manager_get_type(void);
    extern GSList *gdk_display_manager_list_displays(GdkDisplayManager *
						     manager);
    extern GdkDisplay *gdk_display_manager_open_display(GdkDisplayManager *
							manager,
							const char *);
    extern void gdk_display_manager_set_default_display(GdkDisplayManager *
							manager,
							GdkDisplay *);
    extern void gdk_display_notify_startup_complete(GdkDisplay * display,
						    const char *);
    extern GdkDisplay *gdk_display_open(const char *display_name);
    extern GdkDisplay *gdk_display_open_default_libgtk_only(void);
    extern GdkEvent *gdk_display_peek_event(GdkDisplay * display);
    extern gboolean gdk_display_pointer_is_grabbed(GdkDisplay * display);
    extern void gdk_display_pointer_ungrab(GdkDisplay * display, guint32);
    extern void gdk_display_put_event(GdkDisplay * display,
				      const GdkEvent * event);
    extern gboolean gdk_display_request_selection_notification(GdkDisplay *
							       display,
							       GdkAtom);
    extern void gdk_display_set_double_click_distance(GdkDisplay * display,
						      guint);
    extern void gdk_display_set_double_click_time(GdkDisplay * display,
						  guint);
    extern void gdk_display_store_clipboard(GdkDisplay * display,
					    GdkWindow *, guint32,
					    const GdkAtom *, gint);
    extern gboolean gdk_display_supports_clipboard_persistence(GdkDisplay *
							       display);
    extern gboolean gdk_display_supports_composite(GdkDisplay * display);
    extern gboolean gdk_display_supports_cursor_alpha(GdkDisplay *
						      display);
    extern gboolean gdk_display_supports_cursor_color(GdkDisplay *
						      display);
    extern gboolean gdk_display_supports_input_shapes(GdkDisplay *
						      display);
    extern gboolean gdk_display_supports_selection_notification(GdkDisplay
								* display);
    extern gboolean gdk_display_supports_shapes(GdkDisplay * display);
    extern void gdk_display_sync(GdkDisplay * display);
    extern void gdk_display_warp_pointer(GdkDisplay * display, GdkScreen *,
					 gint, gint);
    extern void gdk_drag_abort(GdkDragContext * context, guint32);
    extern GType gdk_drag_action_get_type(void);
    extern GdkDragContext *gdk_drag_begin(GdkWindow * window, GList *);
    extern GdkDragContext *gdk_drag_begin_for_device(GdkWindow * window,
						     GdkDevice *, GList *);
    extern GdkDragAction gdk_drag_context_get_actions(GdkDragContext *
						      context);
    extern GdkWindow *gdk_drag_context_get_dest_window(GdkDragContext *
						       context);
    extern GdkDevice *gdk_drag_context_get_device(GdkDragContext *
						  context);
    extern GdkDragProtocol gdk_drag_context_get_protocol(GdkDragContext *
							 context);
    extern GdkDragAction
	gdk_drag_context_get_selected_action(GdkDragContext * context);
    extern GdkWindow *gdk_drag_context_get_source_window(GdkDragContext *
							 context);
    extern GdkDragAction
	gdk_drag_context_get_suggested_action(GdkDragContext * context);
    extern GType gdk_drag_context_get_type(void);
    extern GList *gdk_drag_context_list_targets(GdkDragContext * context);
    extern void gdk_drag_context_set_device(GdkDragContext * context,
					    GdkDevice *);
    extern void gdk_drag_drop(GdkDragContext * context, guint32);
    extern gboolean gdk_drag_drop_succeeded(GdkDragContext * context);
    extern void gdk_drag_find_window_for_screen(GdkDragContext * context,
						GdkWindow *, GdkScreen *,
						gint, gint, GdkWindow * *,
						GdkDragProtocol *);
    extern GdkAtom gdk_drag_get_selection(GdkDragContext * context);
    extern gboolean gdk_drag_motion(GdkDragContext * context, GdkWindow *,
				    GdkDragProtocol, gint, gint,
				    GdkDragAction, GdkDragAction, guint32);
    extern GType gdk_drag_protocol_get_type(void);
    extern void gdk_drag_status(GdkDragContext * context, GdkDragAction,
				guint32);
    extern void gdk_drop_finish(GdkDragContext * context, gboolean,
				guint32);
    extern void gdk_drop_reply(GdkDragContext * context, gboolean,
			       guint32);
    extern gint gdk_error_trap_pop(void);
    extern void gdk_error_trap_pop_ignored(void);
    extern void gdk_error_trap_push(void);
    extern GdkEvent *gdk_event_copy(const GdkEvent * event);
    extern void gdk_event_free(GdkEvent * event);
    extern GdkEvent *gdk_event_get(void);
    extern gboolean gdk_event_get_axis(const GdkEvent * event, GdkAxisUse,
				       gdouble *);
    extern gboolean gdk_event_get_button(const GdkEvent * event, guint *);
    extern gboolean gdk_event_get_click_count(const GdkEvent * event,
					      guint *);
    extern gboolean gdk_event_get_coords(const GdkEvent * event, gdouble *,
					 gdouble *);
    extern GdkDevice *gdk_event_get_device(const GdkEvent * event);
    extern GdkEventSequence *gdk_event_get_event_sequence(const GdkEvent *
							  event);
    extern gboolean gdk_event_get_keycode(const GdkEvent * event,
					  guint16 *);
    extern gboolean gdk_event_get_keyval(const GdkEvent * event, guint *);
    extern gboolean gdk_event_get_root_coords(const GdkEvent * event,
					      gdouble *, gdouble *);
    extern GdkScreen *gdk_event_get_screen(const GdkEvent * event);
    extern gboolean gdk_event_get_scroll_deltas(const GdkEvent * event,
						gdouble *, gdouble *);
    extern gboolean gdk_event_get_scroll_direction(const GdkEvent * event,
						   GdkScrollDirection *);
    extern GdkDevice *gdk_event_get_source_device(const GdkEvent * event);
    extern gboolean gdk_event_get_state(const GdkEvent * event,
					GdkModifierType *);
    extern guint32 gdk_event_get_time(const GdkEvent * event);
    extern GType gdk_event_get_type(void);
    extern void gdk_event_handler_set(GdkEventFunc func, gpointer,
				      GDestroyNotify);
    extern GType gdk_event_mask_get_type(void);
    extern GdkEvent *gdk_event_new(GdkEventType type);
    extern GdkEvent *gdk_event_peek(void);
    extern void gdk_event_put(const GdkEvent * event);
    extern void gdk_event_request_motions(const GdkEventMotion * event);
    extern void gdk_event_set_device(GdkEvent * event, GdkDevice *);
    extern void gdk_event_set_screen(GdkEvent * event, GdkScreen *);
    extern void gdk_event_set_source_device(GdkEvent * event, GdkDevice *);
    extern gboolean gdk_event_triggers_context_menu(const GdkEvent *
						    event);
    extern GType gdk_event_type_get_type(void);
    extern gboolean gdk_events_get_angle(GdkEvent * event1, GdkEvent *,
					 gdouble *);
    extern gboolean gdk_events_get_center(GdkEvent * event1, GdkEvent *,
					  gdouble *, gdouble *);
    extern gboolean gdk_events_get_distance(GdkEvent * event1, GdkEvent *,
					    gdouble *);
    extern gboolean gdk_events_pending(void);
    extern GType gdk_filter_return_get_type(void);
    extern void gdk_flush(void);
    extern GdkWindow *gdk_get_default_root_window(void);
    extern gchar *gdk_get_display(void);
    extern const char *gdk_get_display_arg_name(void);
    extern const char *gdk_get_program_class(void);
    extern gboolean gdk_get_show_events(void);
    extern GType gdk_grab_ownership_get_type(void);
    extern GType gdk_grab_status_get_type(void);
    extern GType gdk_gravity_get_type(void);
    extern void gdk_init(gint * argc, gchar * **);
    extern gboolean gdk_init_check(gint * argc, gchar * **);
    extern GType gdk_input_mode_get_type(void);
    extern GType gdk_input_source_get_type(void);
    extern GdkGrabStatus gdk_keyboard_grab(GdkWindow * window, gboolean,
					   guint32);
    extern void gdk_keyboard_ungrab(guint32 time_);
    extern void gdk_keymap_add_virtual_modifiers(GdkKeymap * keymap,
						 GdkModifierType *);
    extern gboolean gdk_keymap_get_caps_lock_state(GdkKeymap * keymap);
    extern GdkKeymap *gdk_keymap_get_default(void);
    extern PangoDirection gdk_keymap_get_direction(GdkKeymap * keymap);
    extern gboolean gdk_keymap_get_entries_for_keycode(GdkKeymap * keymap,
						       guint,
						       GdkKeymapKey * *,
						       guint * *, gint *);
    extern gboolean gdk_keymap_get_entries_for_keyval(GdkKeymap * keymap,
						      guint,
						      GdkKeymapKey * *,
						      gint *);
    extern GdkKeymap *gdk_keymap_get_for_display(GdkDisplay * display);
    extern GdkModifierType gdk_keymap_get_modifier_mask(GdkKeymap * keymap,
							GdkModifierIntent);
    extern guint gdk_keymap_get_modifier_state(GdkKeymap * keymap);
    extern gboolean gdk_keymap_get_num_lock_state(GdkKeymap * keymap);
    extern GType gdk_keymap_get_type(void);
    extern gboolean gdk_keymap_have_bidi_layouts(GdkKeymap * keymap);
    extern guint gdk_keymap_lookup_key(GdkKeymap * keymap,
				       const GdkKeymapKey *);
    extern gboolean gdk_keymap_map_virtual_modifiers(GdkKeymap * keymap,
						     GdkModifierType *);
    extern gboolean gdk_keymap_translate_keyboard_state(GdkKeymap * keymap,
							guint,
							GdkModifierType,
							gint, guint *,
							gint *, gint *,
							GdkModifierType *);
    extern void gdk_keyval_convert_case(guint symbol, guint *, guint *);
    extern guint gdk_keyval_from_name(const char *keyval_name);
    extern gboolean gdk_keyval_is_lower(guint keyval);
    extern gboolean gdk_keyval_is_upper(guint keyval);
    extern gchar *gdk_keyval_name(guint keyval);
    extern guint gdk_keyval_to_lower(guint keyval);
    extern guint32 gdk_keyval_to_unicode(guint keyval);
    extern guint gdk_keyval_to_upper(guint keyval);
    extern GList *gdk_list_visuals(void);
    extern GType gdk_modifier_intent_get_type(void);
    extern GType gdk_modifier_type_get_type(void);
    extern void gdk_notify_startup_complete(void);
    extern void gdk_notify_startup_complete_with_id(const char
						    *startup_id);
    extern GType gdk_notify_type_get_type(void);
    extern GdkWindow *gdk_offscreen_window_get_embedder(GdkWindow *
							window);
    extern cairo_surface_t *gdk_offscreen_window_get_surface(GdkWindow *
							     window);
    extern void gdk_offscreen_window_set_embedder(GdkWindow * window,
						  GdkWindow *);
    extern GType gdk_owner_change_get_type(void);
    extern PangoContext *gdk_pango_context_get(void);
    extern PangoContext *gdk_pango_context_get_for_screen(GdkScreen *
							  screen);
    extern cairo_region_t *gdk_pango_layout_get_clip_region(PangoLayout *
							    layout, gint,
							    gint,
							    const int *,
							    gint);
    extern cairo_region_t
	*gdk_pango_layout_line_get_clip_region(PangoLayoutLine * line,
					       gint, gint, const int *,
					       gint);
    extern void gdk_parse_args(gint * argc, gchar * **);
    extern GdkPixbuf *gdk_pixbuf_get_from_surface(cairo_surface_t *
						  surface, gint, gint,
						  gint, gint);
    extern GdkPixbuf *gdk_pixbuf_get_from_window(GdkWindow * window, gint,
						 gint, gint, gint);
    extern GdkGrabStatus gdk_pointer_grab(GdkWindow * window, gboolean,
					  GdkEventMask, GdkWindow *,
					  GdkCursor *, guint32);
    extern gboolean gdk_pointer_is_grabbed(void);
    extern void gdk_pointer_ungrab(guint32 time_);
    extern void gdk_pre_parse_libgtk_only(void);
    extern GType gdk_prop_mode_get_type(void);
    extern void gdk_property_change(GdkWindow * window, GdkAtom, GdkAtom,
				    gint, GdkPropMode,
				    const unsigned char *, gint);
    extern void gdk_property_delete(GdkWindow * window, GdkAtom);
    extern gboolean gdk_property_get(GdkWindow * window, GdkAtom, GdkAtom,
				     gulong, gulong, gint, GdkAtom *,
				     gint *, gint *, guchar * *);
    extern GType gdk_property_state_get_type(void);
    extern void gdk_query_depths(gint * *depths, gint *);
    extern void gdk_query_visual_types(GdkVisualType * *visual_types,
				       gint *);
    extern GType gdk_rectangle_get_type(void);
    extern gboolean gdk_rectangle_intersect(const GdkRectangle * src1,
					    const GdkRectangle *,
					    GdkRectangle *);
    extern void gdk_rectangle_union(const GdkRectangle * src1,
				    const GdkRectangle *, GdkRectangle *);
    extern GdkRGBA *gdk_rgba_copy(const GdkRGBA * rgba);
    extern gboolean gdk_rgba_equal(gconstpointer p1, gconstpointer);
    extern void gdk_rgba_free(GdkRGBA * rgba);
    extern GType gdk_rgba_get_type(void);
    extern guint gdk_rgba_hash(gconstpointer p);
    extern gboolean gdk_rgba_parse(GdkRGBA * rgba, const char *);
    extern gchar *gdk_rgba_to_string(const GdkRGBA * rgba);
    extern GdkWindow *gdk_screen_get_active_window(GdkScreen * screen);
    extern GdkScreen *gdk_screen_get_default(void);
    extern GdkDisplay *gdk_screen_get_display(GdkScreen * screen);
    extern const cairo_font_options_t
	*gdk_screen_get_font_options(GdkScreen * screen);
    extern gint gdk_screen_get_height(GdkScreen * screen);
    extern gint gdk_screen_get_height_mm(GdkScreen * screen);
    extern gint gdk_screen_get_monitor_at_point(GdkScreen * screen, gint,
						gint);
    extern gint gdk_screen_get_monitor_at_window(GdkScreen * screen,
						 GdkWindow *);
    extern void gdk_screen_get_monitor_geometry(GdkScreen * screen, gint,
						GdkRectangle *);
    extern gint gdk_screen_get_monitor_height_mm(GdkScreen * screen, gint);
    extern gchar *gdk_screen_get_monitor_plug_name(GdkScreen * screen,
						   gint);
    extern gint gdk_screen_get_monitor_width_mm(GdkScreen * screen, gint);
    extern void gdk_screen_get_monitor_workarea(GdkScreen * screen, gint,
						GdkRectangle *);
    extern gint gdk_screen_get_n_monitors(GdkScreen * screen);
    extern gint gdk_screen_get_number(GdkScreen * screen);
    extern gint gdk_screen_get_primary_monitor(GdkScreen * screen);
    extern gdouble gdk_screen_get_resolution(GdkScreen * screen);
    extern GdkVisual *gdk_screen_get_rgba_visual(GdkScreen * screen);
    extern GdkWindow *gdk_screen_get_root_window(GdkScreen * screen);
    extern gboolean gdk_screen_get_setting(GdkScreen * screen,
					   const char *, GValue *);
    extern GdkVisual *gdk_screen_get_system_visual(GdkScreen * screen);
    extern GList *gdk_screen_get_toplevel_windows(GdkScreen * screen);
    extern GType gdk_screen_get_type(void);
    extern gint gdk_screen_get_width(GdkScreen * screen);
    extern gint gdk_screen_get_width_mm(GdkScreen * screen);
    extern GList *gdk_screen_get_window_stack(GdkScreen * screen);
    extern gint gdk_screen_height(void);
    extern gint gdk_screen_height_mm(void);
    extern gboolean gdk_screen_is_composited(GdkScreen * screen);
    extern GList *gdk_screen_list_visuals(GdkScreen * screen);
    extern gchar *gdk_screen_make_display_name(GdkScreen * screen);
    extern void gdk_screen_set_font_options(GdkScreen * screen,
					    const cairo_font_options_t *);
    extern void gdk_screen_set_resolution(GdkScreen * screen, gdouble);
    extern gint gdk_screen_width(void);
    extern gint gdk_screen_width_mm(void);
    extern GType gdk_scroll_direction_get_type(void);
    extern void gdk_selection_convert(GdkWindow * requestor, GdkAtom,
				      GdkAtom, guint32);
    extern GdkWindow *gdk_selection_owner_get(GdkAtom selection);
    extern GdkWindow *gdk_selection_owner_get_for_display(GdkDisplay *
							  display,
							  GdkAtom);
    extern gboolean gdk_selection_owner_set(GdkWindow * owner, GdkAtom,
					    guint32, gboolean);
    extern gboolean gdk_selection_owner_set_for_display(GdkDisplay *
							display,
							GdkWindow *,
							GdkAtom, guint32,
							gboolean);
    extern gint gdk_selection_property_get(GdkWindow * requestor,
					   guchar * *, GdkAtom *, gint *);
    extern void gdk_selection_send_notify(GdkWindow * requestor, GdkAtom,
					  GdkAtom, GdkAtom, guint32);
    extern void gdk_selection_send_notify_for_display(GdkDisplay * display,
						      GdkWindow *, GdkAtom,
						      GdkAtom, GdkAtom,
						      guint32);
    extern void gdk_set_double_click_time(guint msec);
    extern void gdk_set_program_class(const char *program_class);
    extern void gdk_set_show_events(gboolean show_events);
    extern GType gdk_setting_action_get_type(void);
    extern gboolean gdk_setting_get(const char *name, GValue *);
    extern GType gdk_status_get_type(void);
    extern void gdk_test_render_sync(GdkWindow * window);
    extern gboolean gdk_test_simulate_button(GdkWindow * window, gint,
					     gint, guint, GdkModifierType,
					     GdkEventType);
    extern gboolean gdk_test_simulate_key(GdkWindow * window, gint, gint,
					  guint, GdkModifierType,
					  GdkEventType);
    extern gint gdk_text_property_to_utf8_list_for_display(GdkDisplay *
							   display,
							   GdkAtom, gint,
							   const unsigned
							   char *, gint,
							   gchar * **);
    extern guint gdk_threads_add_idle(GSourceFunc function, gpointer);
    extern guint gdk_threads_add_idle_full(gint priority, GSourceFunc,
					   gpointer, GDestroyNotify);
    extern guint gdk_threads_add_timeout(guint interval, GSourceFunc,
					 gpointer);
    extern guint gdk_threads_add_timeout_full(gint priority, guint,
					      GSourceFunc, gpointer,
					      GDestroyNotify);
    extern guint gdk_threads_add_timeout_seconds(guint interval,
						 GSourceFunc, gpointer);
    extern guint gdk_threads_add_timeout_seconds_full(gint priority, guint,
						      GSourceFunc,
						      gpointer,
						      GDestroyNotify);
    extern void gdk_threads_enter(void);
    extern void gdk_threads_init(void);
    extern void gdk_threads_leave(void);
    extern void gdk_threads_set_lock_functions(GCallback enter_fn,
					       GCallback);
    extern guint gdk_unicode_to_keyval(guint32 wc);
    extern gchar *gdk_utf8_to_string_target(const char *str);
    extern GType gdk_visibility_state_get_type(void);
    extern GdkVisual *gdk_visual_get_best(void);
    extern gint gdk_visual_get_best_depth(void);
    extern GdkVisualType gdk_visual_get_best_type(void);
    extern GdkVisual *gdk_visual_get_best_with_both(gint depth,
						    GdkVisualType);
    extern GdkVisual *gdk_visual_get_best_with_depth(gint depth);
    extern GdkVisual *gdk_visual_get_best_with_type(GdkVisualType
						    visual_type);
    extern gint gdk_visual_get_bits_per_rgb(GdkVisual * visual);
    extern void gdk_visual_get_blue_pixel_details(GdkVisual * visual,
						  guint32 *, gint *,
						  gint *);
    extern GdkByteOrder gdk_visual_get_byte_order(GdkVisual * visual);
    extern gint gdk_visual_get_colormap_size(GdkVisual * visual);
    extern gint gdk_visual_get_depth(GdkVisual * visual);
    extern void gdk_visual_get_green_pixel_details(GdkVisual * visual,
						   guint32 *, gint *,
						   gint *);
    extern void gdk_visual_get_red_pixel_details(GdkVisual * visual,
						 guint32 *, gint *,
						 gint *);
    extern GdkScreen *gdk_visual_get_screen(GdkVisual * visual);
    extern GdkVisual *gdk_visual_get_system(void);
    extern GType gdk_visual_get_type(void);
    extern GdkVisualType gdk_visual_get_visual_type(GdkVisual * visual);
    extern GType gdk_visual_type_get_type(void);
    extern void gdk_window_add_filter(GdkWindow * window, GdkFilterFunc,
				      gpointer);
    extern GdkWindow *gdk_window_at_pointer(gint * win_x, gint *);
    extern GType gdk_window_attributes_type_get_type(void);
    extern void gdk_window_beep(GdkWindow * window);
    extern void gdk_window_begin_move_drag(GdkWindow * window, gint, gint,
					   gint, guint32);
    extern void gdk_window_begin_move_drag_for_device(GdkWindow * window,
						      GdkDevice *, gint,
						      gint, gint, guint32);
    extern void gdk_window_begin_paint_rect(GdkWindow * window,
					    const GdkRectangle *);
    extern void gdk_window_begin_paint_region(GdkWindow * window,
					      const cairo_region_t);
    extern void gdk_window_begin_resize_drag(GdkWindow * window,
					     GdkWindowEdge, gint, gint,
					     gint, guint32);
    extern void gdk_window_begin_resize_drag_for_device(GdkWindow * window,
							GdkWindowEdge,
							GdkDevice *, gint,
							gint, gint,
							guint32);
    extern void gdk_window_configure_finished(GdkWindow * window);
    extern void gdk_window_constrain_size(GdkGeometry * geometry, guint,
					  gint, gint, gint *, gint *);
    extern void gdk_window_coords_from_parent(GdkWindow * window, gdouble,
					      gdouble, gdouble *,
					      gdouble *);
    extern void gdk_window_coords_to_parent(GdkWindow * window, gdouble,
					    gdouble, gdouble *, gdouble *);
    extern cairo_surface_t *gdk_window_create_similar_surface(GdkWindow *
							      window,
							      cairo_content_t,
							      int, int);
    extern void gdk_window_deiconify(GdkWindow * window);
    extern void gdk_window_destroy(GdkWindow * window);
    extern GType gdk_window_edge_get_type(void);
    extern void gdk_window_enable_synchronized_configure(GdkWindow *
							 window);
    extern void gdk_window_end_paint(GdkWindow * window);
    extern gboolean gdk_window_ensure_native(GdkWindow * window);
    extern void gdk_window_flush(GdkWindow * window);
    extern void gdk_window_focus(GdkWindow * window, guint32);
    extern void gdk_window_freeze_toplevel_updates_libgtk_only(GdkWindow *
							       window);
    extern void gdk_window_freeze_updates(GdkWindow * window);
    extern void gdk_window_fullscreen(GdkWindow * window);
    extern void gdk_window_geometry_changed(GdkWindow * window);
    extern gboolean gdk_window_get_accept_focus(GdkWindow * window);
    extern cairo_pattern_t *gdk_window_get_background_pattern(GdkWindow *
							      window);
    extern GList *gdk_window_get_children(GdkWindow * window);
    extern cairo_region_t *gdk_window_get_clip_region(GdkWindow * window);
    extern gboolean gdk_window_get_composited(GdkWindow * window);
    extern GdkCursor *gdk_window_get_cursor(GdkWindow * window);
    extern gboolean gdk_window_get_decorations(GdkWindow * window,
					       GdkWMDecoration *);
    extern GdkCursor *gdk_window_get_device_cursor(GdkWindow * window,
						   GdkDevice *);
    extern GdkEventMask gdk_window_get_device_events(GdkWindow * window,
						     GdkDevice *);
    extern GdkWindow *gdk_window_get_device_position(GdkWindow * window,
						     GdkDevice *, gint *,
						     gint *,
						     GdkModifierType *);
    extern GdkDisplay *gdk_window_get_display(GdkWindow * window);
    extern GdkDragProtocol gdk_window_get_drag_protocol(GdkWindow * window,
							GdkWindow * *);
    extern GdkWindow *gdk_window_get_effective_parent(GdkWindow * window);
    extern GdkWindow *gdk_window_get_effective_toplevel(GdkWindow *
							window);
    extern GdkEventMask gdk_window_get_events(GdkWindow * window);
    extern gboolean gdk_window_get_focus_on_map(GdkWindow * window);
    extern void gdk_window_get_frame_extents(GdkWindow * window,
					     GdkRectangle *);
    extern void gdk_window_get_geometry(GdkWindow * window, gint *, gint *,
					gint *, gint *);
    extern GdkWindow *gdk_window_get_group(GdkWindow * window);
    extern int gdk_window_get_height(GdkWindow * window);
    extern gboolean gdk_window_get_modal_hint(GdkWindow * window);
    extern gint gdk_window_get_origin(GdkWindow * window, gint *, gint *);
    extern GdkWindow *gdk_window_get_parent(GdkWindow * window);
    extern GdkWindow *gdk_window_get_pointer(GdkWindow * window, gint *,
					     gint *, GdkModifierType *);
    extern void gdk_window_get_position(GdkWindow * window, gint *,
					gint *);
    extern void gdk_window_get_root_coords(GdkWindow * window, gint, gint,
					   gint *, gint *);
    extern void gdk_window_get_root_origin(GdkWindow * window, gint *,
					   gint *);
    extern GdkScreen *gdk_window_get_screen(GdkWindow * window);
    extern GdkEventMask gdk_window_get_source_events(GdkWindow * window,
						     GdkInputSource);
    extern GdkWindowState gdk_window_get_state(GdkWindow * window);
    extern gboolean gdk_window_get_support_multidevice(GdkWindow * window);
    extern GdkWindow *gdk_window_get_toplevel(GdkWindow * window);
    extern GType gdk_window_get_type(void);
    extern GdkWindowTypeHint gdk_window_get_type_hint(GdkWindow * window);
    extern cairo_region_t *gdk_window_get_update_area(GdkWindow * window);
    extern void gdk_window_get_user_data(GdkWindow * window, void **);
    extern cairo_region_t *gdk_window_get_visible_region(GdkWindow *
							 window);
    extern GdkVisual *gdk_window_get_visual(GdkWindow * window);
    extern int gdk_window_get_width(GdkWindow * window);
    extern GdkWindowType gdk_window_get_window_type(GdkWindow * window);
    extern gboolean gdk_window_has_native(GdkWindow * window);
    extern void gdk_window_hide(GdkWindow * window);
    extern GType gdk_window_hints_get_type(void);
    extern void gdk_window_iconify(GdkWindow * window);
    extern void gdk_window_input_shape_combine_region(GdkWindow * window,
						      const cairo_region_t,
						      gint, gint);
    extern void gdk_window_invalidate_maybe_recurse(GdkWindow * window,
						    const cairo_region_t,
						    GdkWindowChildFunc,
						    void *);
    extern void gdk_window_invalidate_rect(GdkWindow * window,
					   const GdkRectangle *, gboolean);
    extern void gdk_window_invalidate_region(GdkWindow * window,
					     const cairo_region_t,
					     gboolean);
    extern gboolean gdk_window_is_destroyed(GdkWindow * window);
    extern gboolean gdk_window_is_input_only(GdkWindow * window);
    extern gboolean gdk_window_is_shaped(GdkWindow * window);
    extern gboolean gdk_window_is_viewable(GdkWindow * window);
    extern gboolean gdk_window_is_visible(GdkWindow * window);
    extern void gdk_window_lower(GdkWindow * window);
    extern void gdk_window_maximize(GdkWindow * window);
    extern void gdk_window_merge_child_input_shapes(GdkWindow * window);
    extern void gdk_window_merge_child_shapes(GdkWindow * window);
    extern void gdk_window_move(GdkWindow * window, gint, gint);
    extern void gdk_window_move_region(GdkWindow * window,
				       const cairo_region_t, gint, gint);
    extern void gdk_window_move_resize(GdkWindow * window, gint, gint,
				       gint, gint);
    extern GdkWindow *gdk_window_new(GdkWindow * parent, GdkWindowAttr *,
				     gint);
    extern GList *gdk_window_peek_children(GdkWindow * window);
    extern void gdk_window_process_all_updates(void);
    extern void gdk_window_process_updates(GdkWindow * window, gboolean);
    extern void gdk_window_raise(GdkWindow * window);
    extern void gdk_window_register_dnd(GdkWindow * window);
    extern void gdk_window_remove_filter(GdkWindow * window, GdkFilterFunc,
					 gpointer);
    extern void gdk_window_reparent(GdkWindow * window, GdkWindow *, gint,
				    gint);
    extern void gdk_window_resize(GdkWindow * window, gint, gint);
    extern void gdk_window_restack(GdkWindow * window, GdkWindow *,
				   gboolean);
    extern void gdk_window_scroll(GdkWindow * window, gint, gint);
    extern void gdk_window_set_accept_focus(GdkWindow * window, gboolean);
    extern void gdk_window_set_background(GdkWindow * window,
					  const GdkColor *);
    extern void gdk_window_set_background_pattern(GdkWindow * window,
						  cairo_pattern_t *);
    extern void gdk_window_set_background_rgba(GdkWindow * window,
					       GdkRGBA *);
    extern void gdk_window_set_child_input_shapes(GdkWindow * window);
    extern void gdk_window_set_child_shapes(GdkWindow * window);
    extern void gdk_window_set_composited(GdkWindow * window, gboolean);
    extern void gdk_window_set_cursor(GdkWindow * window, GdkCursor *);
    extern void gdk_window_set_debug_updates(gboolean setting);
    extern void gdk_window_set_decorations(GdkWindow * window,
					   GdkWMDecoration);
    extern void gdk_window_set_device_cursor(GdkWindow * window,
					     GdkDevice *, GdkCursor *);
    extern void gdk_window_set_device_events(GdkWindow * window,
					     GdkDevice *, GdkEventMask);
    extern void gdk_window_set_events(GdkWindow * window, GdkEventMask);
    extern void gdk_window_set_focus_on_map(GdkWindow * window, gboolean);
    extern void gdk_window_set_functions(GdkWindow * window,
					 GdkWMFunction);
    extern void gdk_window_set_geometry_hints(GdkWindow * window,
					      const GdkGeometry *,
					      GdkWindowHints);
    extern void gdk_window_set_group(GdkWindow * window, GdkWindow *);
    extern void gdk_window_set_icon_list(GdkWindow * window, GList *);
    extern void gdk_window_set_icon_name(GdkWindow * window, const char *);
    extern void gdk_window_set_keep_above(GdkWindow * window, gboolean);
    extern void gdk_window_set_keep_below(GdkWindow * window, gboolean);
    extern void gdk_window_set_modal_hint(GdkWindow * window, gboolean);
    extern void gdk_window_set_opacity(GdkWindow * window, gdouble);
    extern void gdk_window_set_override_redirect(GdkWindow * window,
						 gboolean);
    extern void gdk_window_set_role(GdkWindow * window, const char *);
    extern void gdk_window_set_skip_pager_hint(GdkWindow * window,
					       gboolean);
    extern void gdk_window_set_skip_taskbar_hint(GdkWindow * window,
						 gboolean);
    extern void gdk_window_set_source_events(GdkWindow * window,
					     GdkInputSource, GdkEventMask);
    extern void gdk_window_set_startup_id(GdkWindow * window,
					  const char *);
    extern gboolean gdk_window_set_static_gravities(GdkWindow * window,
						    gboolean);
    extern void gdk_window_set_support_multidevice(GdkWindow * window,
						   gboolean);
    extern void gdk_window_set_title(GdkWindow * window, const char *);
    extern void gdk_window_set_transient_for(GdkWindow * window,
					     GdkWindow *);
    extern void gdk_window_set_type_hint(GdkWindow * window,
					 GdkWindowTypeHint);
    extern void gdk_window_set_urgency_hint(GdkWindow * window, gboolean);
    extern void gdk_window_set_user_data(GdkWindow * window, gpointer);
    extern void gdk_window_shape_combine_region(GdkWindow * window,
						const cairo_region_t, gint,
						gint);
    extern void gdk_window_show(GdkWindow * window);
    extern void gdk_window_show_unraised(GdkWindow * window);
    extern GType gdk_window_state_get_type(void);
    extern void gdk_window_stick(GdkWindow * window);
    extern void gdk_window_thaw_toplevel_updates_libgtk_only(GdkWindow *
							     window);
    extern void gdk_window_thaw_updates(GdkWindow * window);
    extern GType gdk_window_type_get_type(void);
    extern GType gdk_window_type_hint_get_type(void);
    extern void gdk_window_unfullscreen(GdkWindow * window);
    extern void gdk_window_unmaximize(GdkWindow * window);
    extern void gdk_window_unstick(GdkWindow * window);
    extern GType gdk_window_window_class_get_type(void);
    extern void gdk_window_withdraw(GdkWindow * window);
    extern GType gdk_wm_decoration_get_type(void);
    extern GType gdk_wm_function_get_type(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
