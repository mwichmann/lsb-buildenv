#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GICON_H_
#define _GLIB_2_0_GIO_GICON_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_ICON	(g_icon_get_type ())
#define G_ICON(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_ICON, GIcon))
#define G_IS_ICON(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_ICON))
#define G_ICON_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_ICON, GIconIface))


    typedef struct _GIconIface GIconIface;

    struct _GIconIface {
	GTypeInterface g_iface;
	 guint(*hash) (GIcon * icon);
	 gboolean(*equal) (GIcon * icon1, GIcon * icon2);
	 gboolean(*to_tokens) (GIcon * icon, GPtrArray * tokens,
			       gint * out_version);
	GIcon *(*from_tokens) (GIcon * icon, gint num_tokens, gint version,
			       GError * *error);
    };


/* Function prototypes */

    extern gboolean g_icon_equal(GIcon * icon1, GIcon * icon2);
    extern GType g_icon_get_type(void);
    extern guint g_icon_hash(gconstpointer icon);
    extern GIcon *g_icon_new_for_string(const gchar * str,
					GError * *error);
    extern gchar *g_icon_to_string(GIcon * icon);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
