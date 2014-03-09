#if (__LSB_VERSION__ >= 50 )
#ifndef _GTK_3_0_GDK_GDKX_H_
#define _GTK_3_0_GDK_GDKX_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <gtk-3.0/gdk/gdk.h>

#ifdef __cplusplus
extern "C" {
#endif


#define __GDKX_H_INSIDE__
#define __GDK_X11_APP_LAUNCH_CONTEXT_H__
#define __GDK_X11_CURSOR_H__
#define __GDK_X11_DEVICE_CORE_H__
#define __GDK_X11_DEVICE_H__
#define __GDK_X11_DEVICE_MANAGER_CORE_H__
#define __GDK_X11_DEVICE_MANAGER_H__
#define __GDK_X11_DEVICE_MANAGER_XI2_H__
#define __GDK_X11_DEVICE_XI2_H__
#define __GDK_X11_DISPLAY_H__
#define __GDK_X11_DISPLAY_MANAGER_H__
#define __GDK_X11_DND_H__
#define __GDK_X11_KEYS_H__
#define __GDK_X11_PROPERTY_H__
#define __GDK_X11_SCREEN_H__
#define __GDK_X11_SELECTION_H__
#define __GDK_X11_UTILS_H__
#define __GDK_X11_VISUAL_H__
#define __GDK_X11_WINDOW_H__
#define __GDK_X_H__
#define GDK_TYPE_X11_APP_LAUNCH_CONTEXT	(gdk_x11_app_launch_context_get_type ())
#define GDK_TYPE_X11_CURSOR	(gdk_x11_cursor_get_type ())
#define GDK_TYPE_X11_DEVICE_CORE	(gdk_x11_device_core_get_type ())
#define GDK_TYPE_X11_DEVICE_MANAGER_CORE	(gdk_x11_device_manager_core_get_type ())
#define GDK_TYPE_X11_DEVICE_MANAGER_XI2	(gdk_x11_device_manager_xi2_get_type ())
#define GDK_TYPE_X11_DEVICE_XI2	(gdk_x11_device_xi2_get_type ())
#define GDK_TYPE_X11_DISPLAY	(gdk_x11_display_get_type())
#define GDK_TYPE_X11_DISPLAY_MANAGER	(gdk_x11_display_manager_get_type())
#define GDK_TYPE_X11_DRAG_CONTEXT	(gdk_x11_drag_context_get_type ())
#define GDK_TYPE_X11_KEYMAP	(gdk_x11_keymap_get_type())
#define GDK_TYPE_X11_SCREEN	(gdk_x11_screen_get_type ())
#define GDK_TYPE_X11_VISUAL	(gdk_x11_visual_get_type ())
#define GDK_TYPE_X11_WINDOW	(gdk_x11_window_get_type ())
#define GDK_X11_DEVICE_CORE_CLASS(c)	(G_TYPE_CHECK_CLASS_CAST ((c), GDK_TYPE_X11_DEVICE_CORE, GdkX11DeviceCoreClass))
#define GDK_X11_DEVICE_MANAGER_CORE_CLASS(c)	(G_TYPE_CHECK_CLASS_CAST ((c), GDK_TYPE_X11_DEVICE_MANAGER_CORE, GdkX11DeviceManagerCoreClass))
#define GDK_X11_DEVICE_MANAGER_XI2_CLASS(c)	(G_TYPE_CHECK_CLASS_CAST ((c), GDK_TYPE_X11_DEVICE_MANAGER_XI2, GdkX11DeviceManagerXI2Class))
#define GDK_X11_DEVICE_XI2_CLASS(c)	(G_TYPE_CHECK_CLASS_CAST ((c), GDK_TYPE_X11_DEVICE_XI2, GdkX11DeviceXI2Class))
#define GDK_X11_APP_LAUNCH_CONTEXT_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_X11_APP_LAUNCH_CONTEXT, GdkX11AppLaunchContextClass))
#define GDK_X11_CURSOR_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_X11_CURSOR, GdkX11CursorClass))
#define GDK_X11_DISPLAY_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_X11_DISPLAY, GdkX11DisplayClass))
#define GDK_X11_DISPLAY_MANAGER_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_X11_DISPLAY_MANAGER, GdkX11DisplayManagerClass))
#define GDK_X11_DRAG_CONTEXT_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_X11_DRAG_CONTEXT, GdkX11DragContextClass))
#define GDK_X11_KEYMAP_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_X11_KEYMAP, GdkX11KeymapClass))
#define GDK_X11_SCREEN_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_X11_SCREEN, GdkX11ScreenClass))
#define GDK_X11_VISUAL_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_X11_VISUAL, GdkX11VisualClass))
#define GDK_X11_WINDOW_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_X11_WINDOW, GdkX11WindowClass))
#define GDK_IS_X11_DEVICE_CORE_CLASS(c)	(G_TYPE_CHECK_CLASS_TYPE ((c), GDK_TYPE_X11_DEVICE_CORE))
#define GDK_IS_X11_DEVICE_MANAGER_CORE_CLASS(c)	(G_TYPE_CHECK_CLASS_TYPE ((c), GDK_TYPE_X11_DEVICE_MANAGER_CORE))
#define GDK_IS_X11_DEVICE_MANAGER_XI2_CLASS(c)	(G_TYPE_CHECK_CLASS_TYPE ((c), GDK_TYPE_X11_DEVICE_MANAGER_XI2))
#define GDK_IS_X11_DEVICE_XI2_CLASS(c)	(G_TYPE_CHECK_CLASS_TYPE ((c), GDK_TYPE_X11_DEVICE_XI2))
#define GDK_IS_X11_APP_LAUNCH_CONTEXT_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_X11_APP_LAUNCH_CONTEXT))
#define GDK_IS_X11_CURSOR_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_X11_CURSOR))
#define GDK_IS_X11_DISPLAY_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_X11_DISPLAY))
#define GDK_IS_X11_DISPLAY_MANAGER_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_X11_DISPLAY_MANAGER))
#define GDK_IS_X11_DRAG_CONTEXT_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_X11_DRAG_CONTEXT))
#define GDK_IS_X11_KEYMAP_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_X11_KEYMAP))
#define GDK_IS_X11_SCREEN_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_X11_SCREEN))
#define GDK_IS_X11_VISUAL_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_X11_VISUAL))
#define GDK_IS_X11_WINDOW_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_X11_WINDOW))
#define GDK_X11_DEVICE_CORE(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GDK_TYPE_X11_DEVICE_CORE, GdkX11DeviceCore))
#define GDK_X11_DEVICE_MANAGER_CORE(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GDK_TYPE_X11_DEVICE_MANAGER_CORE, GdkX11DeviceManagerCore))
#define GDK_X11_DEVICE_MANAGER_XI2(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GDK_TYPE_X11_DEVICE_MANAGER_XI2, GdkX11DeviceManagerXI2))
#define GDK_X11_DEVICE_XI2(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GDK_TYPE_X11_DEVICE_XI2, GdkX11DeviceXI2))
#define GDK_X11_APP_LAUNCH_CONTEXT(object)	(G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_X11_APP_LAUNCH_CONTEXT, GdkX11AppLaunchContext))
#define GDK_X11_CURSOR(object)	(G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_X11_CURSOR, GdkX11Cursor))
#define GDK_X11_DISPLAY(object)	(G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_X11_DISPLAY, GdkX11Display))
#define GDK_X11_DISPLAY_MANAGER(object)	(G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_X11_DISPLAY_MANAGER, GdkX11DisplayManager))
#define GDK_X11_DRAG_CONTEXT(object)	(G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_X11_DRAG_CONTEXT, GdkX11DragContext))
#define GDK_X11_KEYMAP(object)	(G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_X11_KEYMAP, GdkX11Keymap))
#define GDK_X11_SCREEN(object)	(G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_X11_SCREEN, GdkX11Screen))
#define GDK_X11_VISUAL(object)	(G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_X11_VISUAL, GdkX11Visual))
#define GDK_X11_WINDOW(object)	(G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_X11_WINDOW, GdkX11Window))
#define GDK_IS_X11_DEVICE_CORE(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GDK_TYPE_X11_DEVICE_CORE))
#define GDK_IS_X11_DEVICE_MANAGER_CORE(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GDK_TYPE_X11_DEVICE_MANAGER_CORE))
#define GDK_IS_X11_DEVICE_MANAGER_XI2(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GDK_TYPE_X11_DEVICE_MANAGER_XI2))
#define GDK_IS_X11_DEVICE_XI2(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GDK_TYPE_X11_DEVICE_XI2))
#define GDK_IS_X11_APP_LAUNCH_CONTEXT(object)	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_X11_APP_LAUNCH_CONTEXT))
#define GDK_IS_X11_CURSOR(object)	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_X11_CURSOR))
#define GDK_IS_X11_DISPLAY(object)	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_X11_DISPLAY))
#define GDK_IS_X11_DISPLAY_MANAGER(object)	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_X11_DISPLAY_MANAGER))
#define GDK_IS_X11_DRAG_CONTEXT(object)	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_X11_DRAG_CONTEXT))
#define GDK_IS_X11_KEYMAP(object)	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_X11_KEYMAP))
#define GDK_IS_X11_SCREEN(object)	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_X11_SCREEN))
#define GDK_IS_X11_VISUAL(object)	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_X11_VISUAL))
#define GDK_IS_X11_WINDOW(object)	(G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_X11_WINDOW))
#define GDK_X11_DEVICE_CORE_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), GDK_TYPE_X11_DEVICE_CORE, GdkX11DeviceCoreClass))
#define GDK_X11_DEVICE_MANAGER_CORE_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), GDK_TYPE_X11_DEVICE_MANAGER_CORE, GdkX11DeviceManagerCoreClass))
#define GDK_X11_DEVICE_MANAGER_XI2_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), GDK_TYPE_X11_DEVICE_MANAGER_XI2, GdkX11DeviceManagerXI2Class))
#define GDK_X11_DEVICE_XI2_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), GDK_TYPE_X11_DEVICE_XI2, GdkX11DeviceXI2Class))
#define GDK_X11_APP_LAUNCH_CONTEXT_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_X11_APP_LAUNCH_CONTEXT, GdkX11AppLaunchContextClass))
#define GDK_X11_CURSOR_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_X11_CURSOR, GdkX11CursorClass))
#define GDK_X11_DISPLAY_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_X11_DISPLAY, GdkX11DisplayClass))
#define GDK_X11_DISPLAY_MANAGER_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_X11_DISPLAY_MANAGER, GdkX11DisplayManagerClass))
#define GDK_X11_DRAG_CONTEXT_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_X11_DRAG_CONTEXT, GdkX11DragContextClass))
#define GDK_X11_KEYMAP_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_X11_KEYMAP, GdkX11KeymapClass))
#define GDK_X11_SCREEN_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_X11_SCREEN, GdkX11ScreenClass))
#define GDK_X11_VISUAL_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_X11_VISUAL, GdkX11VisualClass))
#define GDK_X11_WINDOW_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_X11_WINDOW, GdkX11WindowClass))
#define GDK_POINTER_TO_XID(pointer)	GPOINTER_TO_UINT(pointer)
#define GDK_XID_TO_POINTER(pointer)	GUINT_TO_POINTER(pointer)



/* Function prototypes */

    extern GType gdk_x11_app_launch_context_get_type(void);
    extern Atom gdk_x11_atom_to_xatom(GdkAtom atom);
    extern Atom gdk_x11_atom_to_xatom_for_display(GdkDisplay * display,
						  GdkAtom);
    extern GType gdk_x11_cursor_get_type(void);
    extern Cursor gdk_x11_cursor_get_xcursor(GdkCursor * cursor);
    extern Display *gdk_x11_cursor_get_xdisplay(GdkCursor * cursor);
    extern GType gdk_x11_device_core_get_type(void);
    extern gint gdk_x11_device_get_id(GdkDevice * device);
    extern GType gdk_x11_device_manager_core_get_type(void);
    extern GdkDevice *gdk_x11_device_manager_lookup(GdkDeviceManager *
						    device_manager, gint);
    extern GType gdk_x11_device_manager_xi2_get_type(void);
    extern GType gdk_x11_device_xi2_get_type(void);
    extern void gdk_x11_display_broadcast_startup_message(GdkDisplay *
							  display,
							  const char *,
							  ...);
    extern gint gdk_x11_display_error_trap_pop(GdkDisplay * display);
    extern void gdk_x11_display_error_trap_pop_ignored(GdkDisplay *
						       display);
    extern void gdk_x11_display_error_trap_push(GdkDisplay * display);
    extern const char
	*gdk_x11_display_get_startup_notification_id(GdkDisplay * display);
    extern GType gdk_x11_display_get_type(void);
    extern guint32 gdk_x11_display_get_user_time(GdkDisplay * display);
    extern Display *gdk_x11_display_get_xdisplay(GdkDisplay * display);
    extern void gdk_x11_display_grab(GdkDisplay * display);
    extern GType gdk_x11_display_manager_get_type(void);
    extern void gdk_x11_display_set_cursor_theme(GdkDisplay * display,
						 const char *, gint);
    extern void gdk_x11_display_set_startup_notification_id(GdkDisplay *
							    display,
							    const char *);
    extern gint gdk_x11_display_string_to_compound_text(GdkDisplay *
							display,
							const char *,
							GdkAtom *, gint *,
							guchar * *,
							gint *);
    extern gint gdk_x11_display_text_property_to_text_list(GdkDisplay *
							   display,
							   GdkAtom, gint,
							   const unsigned
							   char *, gint,
							   gchar * **);
    extern void gdk_x11_display_ungrab(GdkDisplay * display);
    extern gboolean gdk_x11_display_utf8_to_compound_text(GdkDisplay *
							  display,
							  const char *,
							  GdkAtom *,
							  gint *,
							  guchar * *,
							  gint *);
    extern GType gdk_x11_drag_context_get_type(void);
    extern void gdk_x11_free_compound_text(guchar * ctext);
    extern void gdk_x11_free_text_list(gchar * *list);
    extern Window gdk_x11_get_default_root_xwindow(void);
    extern gint gdk_x11_get_default_screen(void);
    extern Display *gdk_x11_get_default_xdisplay(void);
    extern guint32 gdk_x11_get_server_time(GdkWindow * window);
    extern Atom gdk_x11_get_xatom_by_name(const char *atom_name);
    extern Atom gdk_x11_get_xatom_by_name_for_display(GdkDisplay * display,
						      const char *);
    extern const char *gdk_x11_get_xatom_name(Atom xatom);
    extern const char *gdk_x11_get_xatom_name_for_display(GdkDisplay *
							  display, Atom);
    extern void gdk_x11_grab_server(void);
    extern gint gdk_x11_keymap_get_group_for_state(GdkKeymap * keymap,
						   guint);
    extern GType gdk_x11_keymap_get_type(void);
    extern gboolean gdk_x11_keymap_key_is_modifier(GdkKeymap * keymap,
						   guint);
    extern GdkDisplay *gdk_x11_lookup_xdisplay(Display * xdisplay);
    extern void gdk_x11_register_standard_event_type(GdkDisplay * display,
						     gint, gint);
    extern XID gdk_x11_screen_get_monitor_output(GdkScreen * screen, gint);
    extern int gdk_x11_screen_get_screen_number(GdkScreen * screen);
    extern GType gdk_x11_screen_get_type(void);
    extern const char *gdk_x11_screen_get_window_manager_name(GdkScreen *
							      screen);
    extern Screen *gdk_x11_screen_get_xscreen(GdkScreen * screen);
    extern GdkVisual *gdk_x11_screen_lookup_visual(GdkScreen * screen,
						   VisualID);
    extern gboolean gdk_x11_screen_supports_net_wm_hint(GdkScreen * screen,
							GdkAtom);
    extern void gdk_x11_set_sm_client_id(const char *sm_client_id);
    extern void gdk_x11_ungrab_server(void);
    extern GType gdk_x11_visual_get_type(void);
    extern Visual *gdk_x11_visual_get_xvisual(GdkVisual * visual);
    extern GdkWindow *gdk_x11_window_foreign_new_for_display(GdkDisplay *
							     display,
							     Window);
    extern GType gdk_x11_window_get_type(void);
    extern Window gdk_x11_window_get_xid(GdkWindow * window);
    extern GdkWindow *gdk_x11_window_lookup_for_display(GdkDisplay *
							display, Window);
    extern void gdk_x11_window_move_to_current_desktop(GdkWindow * window);
    extern void gdk_x11_window_set_hide_titlebar_when_maximized(GdkWindow *
								window,
								gboolean);
    extern void gdk_x11_window_set_theme_variant(GdkWindow * window,
						 char *);
    extern void gdk_x11_window_set_user_time(GdkWindow * window, guint32);
    extern void gdk_x11_window_set_utf8_property(GdkWindow * window,
						 const char *,
						 const char *);
    extern GdkAtom gdk_x11_xatom_to_atom(Atom xatom);
    extern GdkAtom gdk_x11_xatom_to_atom_for_display(GdkDisplay * display,
						     Atom);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
