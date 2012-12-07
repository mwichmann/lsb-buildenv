#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GTHEMEDICON_H_
#define _GLIB_2_0_GIO_GTHEMEDICON_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_THEMED_ICON	(g_themed_icon_get_type ())
#define G_THEMED_ICON_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_THEMED_ICON, GThemedIconClass))
#define G_IS_THEMED_ICON_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_THEMED_ICON))
#define G_THEMED_ICON(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_THEMED_ICON, GThemedIcon))
#define G_IS_THEMED_ICON(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_THEMED_ICON))
#define G_THEMED_ICON_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_THEMED_ICON, GThemedIconClass))


    typedef struct _GThemedIconClass GThemedIconClass;


/* Function prototypes */

    extern void g_themed_icon_append_name(GThemedIcon * icon,
					  const char *iconname);
    extern const char *const *g_themed_icon_get_names(GThemedIcon * icon);
    extern GType g_themed_icon_get_type(void);
    extern GIcon *g_themed_icon_new(const char *iconname);
    extern GIcon *g_themed_icon_new_from_names(void iconnames, int len);
    extern GIcon *g_themed_icon_new_with_default_fallbacks(const char
							   *iconname);
    extern void g_themed_icon_prepend_name(GThemedIcon * icon,
					   const char *iconname);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
