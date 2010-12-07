#if (__LSB_VERSION__ >= 41 )
#ifndef _GTK_2_0_GTK_GTKSTATUSICON_H_
#define _GTK_2_0_GTK_GTKSTATUSICON_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <gtk-2.0/gdk-pixbuf/gdk-pixbuf.h>
#include <gtk-2.0/gdk/gdk.h>
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gtk/gtkenums.h>

#ifdef __cplusplus
extern "C" {
#endif


#define __GTK_STATUS_ICON_H__
#define GTK_TYPE_STATUS_ICON	(gtk_status_icon_get_type ())
#define GTK_STATUS_ICON_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST ((k), GTK_TYPE_STATUS_ICON, GtkStatusIconClass))
#define GTK_IS_STATUS_ICON_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), GTK_TYPE_STATUS_ICON))
#define GTK_STATUS_ICON(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_STATUS_ICON, GtkStatusIcon))
#define GTK_IS_STATUS_ICON(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_STATUS_ICON))
#define GTK_STATUS_ICON_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), GTK_TYPE_STATUS_ICON, GtkStatusIconClass))


    typedef struct _GtkStatusIcon GtkStatusIcon;

    typedef struct _GtkStatusIconClass GtkStatusIconClass;

    typedef struct _GtkStatusIconPrivate GtkStatusIconPrivate;

    struct _GtkStatusIcon {
	GObject parent_instance;
	GtkStatusIconPrivate *priv;
    };

    struct _GtkStatusIconClass {
	GObjectClass parent_class;
	void (*activate) (void);
	void (*popup_menu) (void);
	 gboolean(*size_changed) (void);
	void *__gtk_reserved1;
	void *__gtk_reserved2;
	void *__gtk_reserved3;
	void *__gtk_reserved4;
	void *__gtk_reserved5;
	void *__gtk_reserved6;
    };


/* Function prototypes */

    extern gboolean gtk_status_icon_get_blinking(GtkStatusIcon *
						 status_icon);
    extern gboolean gtk_status_icon_get_geometry(GtkStatusIcon *
						 status_icon,
						 GdkScreen * *screen,
						 GdkRectangle * area,
						 GtkOrientation *
						 orientation);
    extern const char *gtk_status_icon_get_icon_name(GtkStatusIcon *
						     status_icon);
    extern GdkPixbuf *gtk_status_icon_get_pixbuf(GtkStatusIcon *
						 status_icon);
    extern gint gtk_status_icon_get_size(GtkStatusIcon * status_icon);
    extern const char *gtk_status_icon_get_stock(GtkStatusIcon *
						 status_icon);
    extern GtkImageType gtk_status_icon_get_storage_type(GtkStatusIcon *
							 status_icon);
    extern GType gtk_status_icon_get_type(void);
    extern gboolean gtk_status_icon_get_visible(GtkStatusIcon *
						status_icon);
    extern gboolean gtk_status_icon_is_embedded(GtkStatusIcon *
						status_icon);
    extern GtkStatusIcon *gtk_status_icon_new(void);
    extern GtkStatusIcon *gtk_status_icon_new_from_file(const char
							*filename);
    extern GtkStatusIcon *gtk_status_icon_new_from_icon_name(const char
							     *icon_name);
    extern GtkStatusIcon *gtk_status_icon_new_from_pixbuf(GdkPixbuf *
							  pixbuf);
    extern GtkStatusIcon *gtk_status_icon_new_from_stock(const char
							 *stock_id);
    extern void gtk_status_icon_position_menu(GtkMenu * menu, gint * x,
					      gint * y, gboolean * push_in,
					      gpointer user_data);
    extern void gtk_status_icon_set_blinking(GtkStatusIcon * status_icon,
					     gboolean blinking);
    extern void gtk_status_icon_set_from_file(GtkStatusIcon * status_icon,
					      const char *filename);
    extern void gtk_status_icon_set_from_icon_name(GtkStatusIcon *
						   status_icon,
						   const char *icon_name);
    extern void gtk_status_icon_set_from_pixbuf(GtkStatusIcon *
						status_icon,
						GdkPixbuf * pixbuf);
    extern void gtk_status_icon_set_from_stock(GtkStatusIcon * status_icon,
					       const char *stock_id);
    extern void gtk_status_icon_set_tooltip(GtkStatusIcon * status_icon,
					    const gchar * tooltip_text);
    extern void gtk_status_icon_set_visible(GtkStatusIcon * status_icon,
					    gboolean visible);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
