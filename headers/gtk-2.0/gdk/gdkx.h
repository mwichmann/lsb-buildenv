#if (__LSB_VERSION__ >= 31 )
#ifndef _GTK_2_0_GDK_GDKX_H_
#define _GTK_2_0_GDK_GDKX_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <gtk-2.0/gdk/gdk.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
#define GDK_WINDOW_DESTROYED(d)	 \
	(((GdkWindowObject*)(GDK_WINDOW (d)))->destroyed)
#define GDK_WINDOW_TYPE(d)	 \
	(((GdkWindowObject*)(GDK_WINDOW (d)))->window_type)
#define GDK_COLORMAP_XCOLORMAP(cmap)	 \
	(gdk_x11_colormap_get_xcolormap (cmap))
#define GDK_DISPLAY_XDISPLAY(display)	 \
	(gdk_x11_display_get_xdisplay (display))
#define GDK_SCREEN_XDISPLAY(screen)	 \
	(gdk_x11_display_get_xdisplay (gdk_screen_get_display (screen)))
#define GDK_PIXMAP_XDISPLAY(win)	 \
	(gdk_x11_drawable_get_xdisplay (((GdkPixmapObject *)win)->impl))
#define GDK_WINDOW_XDISPLAY(win)	 \
	(gdk_x11_drawable_get_xdisplay (((GdkWindowObject *)win)->impl))
#define GDK_SCREEN_XNUMBER(screen)	 \
	(gdk_x11_screen_get_screen_number (screen))
#define GDK_PARENT_RELATIVE_BG	((GdkPixmap *)1L)
#define GDK_NO_BG	((GdkPixmap *)2L)
#define GDK_COLORMAP_XDISPLAY(cmap)	(gdk_x11_colormap_get_xdisplay (cmap))
#define GDK_CURSOR_XCURSOR(cursor)	(gdk_x11_cursor_get_xcursor (cursor))
#define GDK_CURSOR_XDISPLAY(cursor)	(gdk_x11_cursor_get_xdisplay (cursor))
#define GDK_DRAWABLE_XDISPLAY(win)	(gdk_x11_drawable_get_xdisplay (win))
#define GDK_DRAWABLE_XID(win)	(gdk_x11_drawable_get_xid (win))
#define GDK_PIXMAP_XID(win)	(gdk_x11_drawable_get_xid (win))
#define GDK_WINDOW_XID(win)	(gdk_x11_drawable_get_xid (win))
#define GDK_WINDOW_XWINDOW(win)	(gdk_x11_drawable_get_xid (win))
#define GDK_GC_XDISPLAY(gc)	(gdk_x11_gc_get_xdisplay (gc))
#define GDK_GC_XGC(gc)	(gdk_x11_gc_get_xgc (gc))
#define GDK_ROOT_WINDOW()	(gdk_x11_get_default_root_xwindow ())
#define GDK_IMAGE_XDISPLAY(image)	(gdk_x11_image_get_xdisplay (image))
#define GDK_IMAGE_XIMAGE(image)	(gdk_x11_image_get_ximage (image))
#define GDK_SCREEN_XSCREEN(screen)	(gdk_x11_screen_get_xscreen (screen))
#define GDK_VISUAL_XVISUAL(visual)	(gdk_x11_visual_get_xvisual (visual))
#define GDK_DISPLAY()	gdk_display
#endif				// __LSB_VERSION__ >= 3.1




// Function prototypes

#if __LSB_VERSION__ >= 31
    extern Display *gdk_display;
    extern gboolean gdk_net_wm_supports(GdkAtom);
    extern void gdk_synthesize_window_state(GdkWindow *, GdkWindowState,
					    GdkWindowState);
    extern void gdk_window_destroy_notify(GdkWindow *);
    extern Atom gdk_x11_atom_to_xatom(GdkAtom);
    extern Atom gdk_x11_atom_to_xatom_for_display(GdkDisplay *, GdkAtom);
    extern GdkColormap *gdk_x11_colormap_foreign_new(GdkVisual *,
						     Colormap);
    extern Colormap gdk_x11_colormap_get_xcolormap(GdkColormap *);
    extern Display *gdk_x11_colormap_get_xdisplay(GdkColormap *);
    extern Cursor gdk_x11_cursor_get_xcursor(GdkCursor *);
    extern Display *gdk_x11_cursor_get_xdisplay(GdkCursor *);
    extern Display *gdk_x11_display_get_xdisplay(GdkDisplay *);
    extern void gdk_x11_display_grab(GdkDisplay *);
    extern void gdk_x11_display_ungrab(GdkDisplay *);
    extern Display *gdk_x11_drawable_get_xdisplay(GdkDrawable *);
    extern XID gdk_x11_drawable_get_xid(GdkDrawable *);
    extern Display *gdk_x11_gc_get_xdisplay(GdkGC *);
    extern GC gdk_x11_gc_get_xgc(GdkGC *);
    extern Window gdk_x11_get_default_root_xwindow(void);
    extern gint gdk_x11_get_default_screen(void);
    extern Display *gdk_x11_get_default_xdisplay(void);
    extern guint32 gdk_x11_get_server_time(GdkWindow *);
    extern Atom gdk_x11_get_xatom_by_name(const gchar *);
    extern Atom gdk_x11_get_xatom_by_name_for_display(GdkDisplay *,
						      const gchar *);
    extern const gchar *gdk_x11_get_xatom_name(Atom);
    extern const gchar *gdk_x11_get_xatom_name_for_display(GdkDisplay *,
							   Atom);
    extern void gdk_x11_grab_server(void);
    extern Display *gdk_x11_image_get_xdisplay(GdkImage *);
    extern XImage *gdk_x11_image_get_ximage(GdkImage *);
    extern GdkDisplay *gdk_x11_lookup_xdisplay(Display *);
    extern void gdk_x11_register_standard_event_type(GdkDisplay *, gint,
						     gint);
    extern int gdk_x11_screen_get_screen_number(GdkScreen *);
    extern const char *gdk_x11_screen_get_window_manager_name(GdkScreen *);
    extern Screen *gdk_x11_screen_get_xscreen(GdkScreen *);
    extern GdkVisual *gdk_x11_screen_lookup_visual(GdkScreen *, VisualID);
    extern gboolean gdk_x11_screen_supports_net_wm_hint(GdkScreen *,
							GdkAtom);
    extern void gdk_x11_ungrab_server(void);
    extern Visual *gdk_x11_visual_get_xvisual(GdkVisual *);
    extern void gdk_x11_window_set_user_time(GdkWindow *, guint32);
    extern GdkAtom gdk_x11_xatom_to_atom(Atom);
    extern GdkAtom gdk_x11_xatom_to_atom_for_display(GdkDisplay *, Atom);
    extern gpointer gdk_xid_table_lookup(XID);
    extern gpointer gdk_xid_table_lookup_for_display(GdkDisplay *, XID);
    extern GdkVisual *gdkx_visual_get(VisualID);
#endif				// __LSB_VERSION__ >= 3.1

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
