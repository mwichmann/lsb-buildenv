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

    typedef struct _GdkEventMotion GdkEventMotion;

    typedef struct _GdkEventKey GdkEventKey;

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
	GDK_NOTHING,
	GDK_DELETE,
	GDK_DESTROY,
	GDK_EXPOSE,
	GDK_MOTION_NOTIFY,
	GDK_BUTTON_PRESS,
	GDK_2BUTTON_PRESS,
	GDK_DOUBLE_BUTTON_PRESS,
	GDK_3BUTTON_PRESS,
	GDK_TRIPLE_BUTTON_PRESS,
	GDK_BUTTON_RELEASE,
	GDK_KEY_PRESS,
	GDK_KEY_RELEASE,
	GDK_ENTER_NOTIFY,
	GDK_LEAVE_NOTIFY,
	GDK_FOCUS_CHANGE,
	GDK_CONFIGURE,
	GDK_MAP,
	GDK_UNMAP,
	GDK_PROPERTY_NOTIFY,
	GDK_SELECTION_CLEAR,
	GDK_SELECTION_REQUEST,
	GDK_SELECTION_NOTIFY,
	GDK_PROXIMITY_IN,
	GDK_PROXIMITY_OUT,
	GDK_DRAG_ENTER,
	GDK_DRAG_LEAVE,
	GDK_DRAG_MOTION,
	GDK_DRAG_STATUS,
	GDK_DROP_START,
	GDK_DROP_FINISHED,
	GDK_CLIENT_EVENT,
	GDK_VISIBILITY_NOTIFY,
	GDK_SCROLL,
	GDK_WINDOW_STATE,
	GDK_SETTING,
	GDK_OWNER_CHANGE,
	GDK_GRAB_BROKEN,
	GDK_DAMAGE,
	GDK_TOUCH_BEGIN,
	GDK_TOUCH_UPDATE,
	GDK_TOUCH_END,
	GDK_TOUCH_CANCEL,
	GDK_EVENT_LAST
    } GdkEventType;

    typedef enum {
	GDK_SCROLL_UP,
	GDK_SCROLL_DOWN,
	GDK_SCROLL_LEFT,
	GDK_SCROLL_RIGHT,
	GDK_SCROLL_SMOOTH
    } GdkScrollDirection;

    typedef enum {
	GDK_WINDOW_STATE_WITHDRAWN,
	GDK_WINDOW_STATE_ICONIFIED,
	GDK_WINDOW_STATE_MAXIMIZED,
	GDK_WINDOW_STATE_STICKY,
	GDK_WINDOW_STATE_FULLSCREEN,
	GDK_WINDOW_STATE_ABOVE,
	GDK_WINDOW_STATE_BELOW,
	GDK_WINDOW_STATE_FOCUSED
    } GdkWindowState;

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
	GDK_ACTION_DEFAULT,
	GDK_ACTION_COPY,
	GDK_ACTION_MOVE,
	GDK_ACTION_LINK,
	GDK_ACTION_PRIVATE,
	GDK_ACTION_ASK
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

    typedef struct _GdkWindow GdkWindow;   /*XXX hand-edit: move from below */

    typedef enum {
	GDK_WINDOW_ROOT,
	GDK_WINDOW_TOPLEVEL,
	GDK_WINDOW_CHILD,
	GDK_WINDOW_TEMP,
	GDK_WINDOW_FOREIGN,
	GDK_WINDOW_OFFSCREEN
    } GdkWindowType;

    typedef enum {
	GDK_HINT_POS,
	GDK_HINT_MIN_SIZE,
	GDK_HINT_MAX_SIZE,
	GDK_HINT_BASE_SIZE,
	GDK_HINT_ASPECT,
	GDK_HINT_RESIZE_INC,
	GDK_HINT_WIN_GRAVITY,
	GDK_HINT_USER_POS,
	GDK_HINT_USER_SIZE
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
	GDK_DECOR_ALL,
	GDK_DECOR_BORDER,
	GDK_DECOR_RESIZEH,
	GDK_DECOR_TITLE,
	GDK_DECOR_MENU,
	GDK_DECOR_MINIMIZE,
	GDK_DECOR_MAXIMIZE
    } GdkWMDecoration;

    typedef enum {
	GDK_FUNC_ALL,
	GDK_FUNC_RESIZE,
	GDK_FUNC_MOVE,
	GDK_FUNC_MINIMIZE,
	GDK_FUNC_MAXIMIZE,
	GDK_FUNC_CLOSE
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
	GDK_X_CURSOR,
	GDK_ARROW,
	GDK_BASED_ARROW_DOWN,
	GDK_BASED_ARROW_UP,
	GDK_BOAT,
	GDK_BOGOSITY,
	GDK_BOTTOM_LEFT_CORNER,
	GDK_BOTTOM_RIGHT_CORNER,
	GDK_BOTTOM_SIDE,
	GDK_BOTTOM_TEE,
	GDK_BOX_SPIRAL,
	GDK_CENTER_PTR,
	GDK_CIRCLE,
	GDK_CLOCK,
	GDK_COFFEE_MUG,
	GDK_CROSS,
	GDK_CROSS_REVERSE,
	GDK_CROSSHAIR,
	GDK_DIAMOND_CROSS,
	GDK_DOT,
	GDK_DOTBOX,
	GDK_DOUBLE_ARROW,
	GDK_DRAFT_LARGE,
	GDK_DRAFT_SMALL,
	GDK_DRAPED_BOX,
	GDK_EXCHANGE,
	GDK_FLEUR,
	GDK_GOBBLER,
	GDK_GUMBY,
	GDK_HAND1,
	GDK_HAND2,
	GDK_HEART,
	GDK_ICON,
	GDK_IRON_CROSS,
	GDK_LEFT_PTR,
	GDK_LEFT_SIDE,
	GDK_LEFT_TEE,
	GDK_LEFTBUTTON,
	GDK_LL_ANGLE,
	GDK_LR_ANGLE,
	GDK_MAN,
	GDK_MIDDLEBUTTON,
	GDK_MOUSE,
	GDK_PENCIL,
	GDK_PIRATE,
	GDK_PLUS,
	GDK_QUESTION_ARROW,
	GDK_RIGHT_PTR,
	GDK_RIGHT_SIDE,
	GDK_RIGHT_TEE,
	GDK_RIGHTBUTTON,
	GDK_RTL_LOGO,
	GDK_SAILBOAT,
	GDK_SB_DOWN_ARROW,
	GDK_SB_H_DOUBLE_ARROW,
	GDK_SB_LEFT_ARROW,
	GDK_SB_RIGHT_ARROW,
	GDK_SB_UP_ARROW,
	GDK_SB_V_DOUBLE_ARROW,
	GDK_SHUTTLE,
	GDK_SIZING,
	GDK_SPIDER,
	GDK_SPRAYCAN,
	GDK_STAR,
	GDK_TARGET,
	GDK_TCROSS,
	GDK_TOP_LEFT_ARROW,
	GDK_TOP_LEFT_CORNER,
	GDK_TOP_RIGHT_CORNER,
	GDK_TOP_SIDE,
	GDK_TOP_TEE,
	GDK_TREK,
	GDK_UL_ANGLE,
	GDK_UMBRELLA,
	GDK_UR_ANGLE,
	GDK_WATCH,
	GDK_XTERM,
	GDK_LAST_CURSOR,
	GDK_BLANK_CURSOR,
	GDK_CURSOR_IS_PIXMAP
    } GdkCursorType;

    typedef struct _GdkPoint GdkPoint;

    typedef struct _cairo_rectangle_int GdkRectangle;

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
	GDK_SHIFT_MASK,
	GDK_LOCK_MASK,
	GDK_CONTROL_MASK,
	GDK_MOD1_MASK,
	GDK_MOD2_MASK,
	GDK_MOD3_MASK,
	GDK_MOD4_MASK,
	GDK_MOD5_MASK,
	GDK_BUTTON1_MASK,
	GDK_BUTTON2_MASK,
	GDK_BUTTON3_MASK,
	GDK_BUTTON4_MASK,
	GDK_BUTTON5_MASK,
	GDK_MODIFIER_RESERVED_13_MASK,
	GDK_MODIFIER_RESERVED_14_MASK,
	GDK_MODIFIER_RESERVED_15_MASK,
	GDK_MODIFIER_RESERVED_16_MASK,
	GDK_MODIFIER_RESERVED_17_MASK,
	GDK_MODIFIER_RESERVED_18_MASK,
	GDK_MODIFIER_RESERVED_19_MASK,
	GDK_MODIFIER_RESERVED_20_MASK,
	GDK_MODIFIER_RESERVED_21_MASK,
	GDK_MODIFIER_RESERVED_22_MASK,
	GDK_MODIFIER_RESERVED_23_MASK,
	GDK_MODIFIER_RESERVED_24_MASK,
	GDK_MODIFIER_RESERVED_25_MASK,
	GDK_SUPER_MASK,
	GDK_HYPER_MASK,
	GDK_META_MASK,
	GDK_MODIFIER_RESERVED_29_MASK,
	GDK_RELEASE_MASK,
	GDK_MODIFIER_MASK
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
	GDK_EXPOSURE_MASK,
	GDK_POINTER_MOTION_MASK,
	GDK_POINTER_MOTION_HINT_MASK,
	GDK_BUTTON_MOTION_MASK,
	GDK_BUTTON1_MOTION_MASK,
	GDK_BUTTON2_MOTION_MASK,
	GDK_BUTTON3_MOTION_MASK,
	GDK_BUTTON_PRESS_MASK,
	GDK_BUTTON_RELEASE_MASK,
	GDK_KEY_PRESS_MASK,
	GDK_KEY_RELEASE_MASK,
	GDK_ENTER_NOTIFY_MASK,
	GDK_LEAVE_NOTIFY_MASK,
	GDK_FOCUS_CHANGE_MASK,
	GDK_STRUCTURE_MASK,
	GDK_PROPERTY_CHANGE_MASK,
	GDK_VISIBILITY_NOTIFY_MASK,
	GDK_PROXIMITY_IN_MASK,
	GDK_PROXIMITY_OUT_MASK,
	GDK_SUBSTRUCTURE_MASK,
	GDK_SCROLL_MASK,
	GDK_TOUCH_MASK,
	GDK_SMOOTH_SCROLL_MASK,
	GDK_ALL_EVENTS_MASK
    } GdkEventMask;

    struct _GdkRGBA {
	gdouble red;
	gdouble green;
	gdouble blue;
	gdouble alpha;
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
    extern void gdk_cairo_rectangle(cairo_t * cr,
				    const struct _cairo_rectangle_int *);
    extern void gdk_cairo_region(cairo_t * cr,
				 const struct _cairo_region *);
    extern cairo_region_t
	*gdk_cairo_region_create_from_surface(cairo_surface_t * surface);
    extern void gdk_cairo_set_source_color(cairo_t * cr,
					   const struct _GdkColor *);
    extern void gdk_cairo_set_source_pixbuf(cairo_t * cr,
					    const struct _GdkPixbuf *,
					    gdouble, gdouble);
    extern void gdk_cairo_set_source_rgba(cairo_t * cr,
					  const struct _GdkRGBA *);
    extern void gdk_cairo_set_source_window(cairo_t * cr, GdkWindow *,
					    gdouble, gdouble);
    extern GdkColor *gdk_color_copy(const struct _GdkColor *color);
    extern gboolean gdk_color_equal(const struct _GdkColor *colora,
				    const struct _GdkColor *);
    extern void gdk_color_free(GdkColor * color);
    extern GType gdk_color_get_type(void);
    extern guint gdk_color_hash(const struct _GdkColor *color);
    extern gboolean gdk_color_parse(const char *spec, GdkColor *);
    extern gchar *gdk_color_to_string(const struct _GdkColor *color);
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
    extern gboolean gdk_rectangle_intersect(const struct
					    _cairo_rectangle_int *src1,
					    const struct
					    _cairo_rectangle_int *,
					    GdkRectangle *);
    extern void gdk_rectangle_union(const struct _cairo_rectangle_int
				    *src1,
				    const struct _cairo_rectangle_int *,
				    GdkRectangle *);
    extern GdkRGBA *gdk_rgba_copy(const struct _GdkRGBA *rgba);
    extern gboolean gdk_rgba_equal(gconstpointer p1, gconstpointer);
    extern void gdk_rgba_free(GdkRGBA * rgba);
    extern GType gdk_rgba_get_type(void);
    extern guint gdk_rgba_hash(gconstpointer p);
    extern gboolean gdk_rgba_parse(GdkRGBA * rgba, const char *);
    extern gchar *gdk_rgba_to_string(const struct _GdkRGBA *rgba);
    extern GdkWindow *gdk_screen_get_active_window(GdkScreen * screen);
    extern GdkScreen *gdk_screen_get_default(void);
    extern GdkDisplay *gdk_screen_get_display(GdkScreen * screen);
    extern const struct _cairo_font_options
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
					    const struct
					    _cairo_font_options *);
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
					    const struct
					    _cairo_rectangle_int *);
    extern void gdk_window_begin_paint_region(GdkWindow * window,
					      const struct _cairo_region
					      *);
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
						      const struct
						      _cairo_region *,
						      gint, gint);
    extern void gdk_window_invalidate_maybe_recurse(GdkWindow * window,
						    const struct
						    _cairo_region *,
						    GdkWindowChildFunc,
						    void *);
    extern void gdk_window_invalidate_rect(GdkWindow * window,
					   const struct
					   _cairo_rectangle_int *,
					   gboolean);
    extern void gdk_window_invalidate_region(GdkWindow * window,
					     const struct _cairo_region *,
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
				       const struct _cairo_region *, gint,
				       gint);
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
					  const struct _GdkColor *);
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
						const struct _cairo_region
						*, gint, gint);
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
