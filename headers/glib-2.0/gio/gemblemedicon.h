#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GEMBLEMEDICON_H_
#define _GLIB_2_0_GIO_GEMBLEMEDICON_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gemblem.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_EMBLEMED_ICON	(g_emblemed_icon_get_type ())
#define G_EMBLEMED_ICON_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_EMBLEMED_ICON, GEmblemedIconClass))
#define G_IS_EMBLEMED_ICON_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_EMBLEMED_ICON))
#define G_EMBLEMED_ICON(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_EMBLEMED_ICON, GEmblemedIcon))
#define G_IS_EMBLEMED_ICON(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_EMBLEMED_ICON))
#define G_EMBLEMED_ICON_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_EMBLEMED_ICON, GEmblemedIconClass))


    typedef struct _GEmblemedIcon GEmblemedIcon;

    typedef struct _GEmblemedIconClass GEmblemedIconClass;

    typedef struct _GEmblemedIconPrivate GEmblemedIconPrivate;

    struct _GEmblemedIcon {
	GObject parent_instance;
	GEmblemedIconPrivate *priv;
    };

    struct _GEmblemedIconClass {
	GObjectClass parent_class;
    };


/* Function prototypes */

    extern void g_emblemed_icon_add_emblem(GEmblemedIcon * emblemed,
					   GEmblem * emblem);
    extern void g_emblemed_icon_clear_emblems(GEmblemedIcon * emblemed);
    extern GList *g_emblemed_icon_get_emblems(GEmblemedIcon * emblemed);
    extern GIcon *g_emblemed_icon_get_icon(GEmblemedIcon * emblemed);
    extern GType g_emblemed_icon_get_type(void);
    extern GIcon *g_emblemed_icon_new(GIcon * icon, GEmblem * emblem);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
