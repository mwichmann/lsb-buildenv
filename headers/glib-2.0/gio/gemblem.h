#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GEMBLEM_H_
#define _GLIB_2_0_GIO_GEMBLEM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_EMBLEM	(g_emblem_get_type ())
#define G_EMBLEM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_EMBLEM, GEmblemClass))
#define G_IS_EMBLEM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_EMBLEM))
#define G_EMBLEM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_EMBLEM, GEmblem))
#define G_IS_EMBLEM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_EMBLEM))
#define G_EMBLEM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_EMBLEM, GEmblemClass))


    typedef struct _GEmblem GEmblem;

    typedef struct _GEmblemClass GEmblemClass;


/* Function prototypes */

    extern GIcon *g_emblem_get_icon(GEmblem * emblem);
    extern GEmblemOrigin g_emblem_get_origin(GEmblem * emblem);
    extern GType g_emblem_get_type(void);
    extern GEmblem *g_emblem_new(GIcon * icon);
    extern GEmblem *g_emblem_new_with_origin(GIcon * icon,
					     GEmblemOrigin origin);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
