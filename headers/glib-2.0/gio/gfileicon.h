#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GFILEICON_H_
#define _GLIB_2_0_GIO_GFILEICON_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_FILE_ICON	(g_file_icon_get_type ())
#define G_FILE_ICON_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_FILE_ICON, GFileIconClass))
#define G_IS_FILE_ICON_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_FILE_ICON))
#define G_FILE_ICON(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_FILE_ICON, GFileIcon))
#define G_IS_FILE_ICON(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_FILE_ICON))
#define G_FILE_ICON_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_FILE_ICON, GFileIconClass))


    typedef struct _GFileIconClass GFileIconClass;


/* Function prototypes */

    extern GFile *g_file_icon_get_file(GFileIcon * icon);
    extern GType g_file_icon_get_type(void);
    extern GIcon *g_file_icon_new(GFile * file);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
