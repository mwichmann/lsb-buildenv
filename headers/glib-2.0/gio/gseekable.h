#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GSEEKABLE_H_
#define _GLIB_2_0_GIO_GSEEKABLE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_SEEKABLE	(g_seekable_get_type ())
#define G_SEEKABLE(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_SEEKABLE, GSeekable))
#define G_IS_SEEKABLE(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_SEEKABLE))
#define G_SEEKABLE_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_SEEKABLE, GSeekableIface))


    typedef struct _GSeekableIface GSeekableIface;

    struct _GSeekableIface {
	GTypeInterface g_iface;
	 goffset(*tell) (GSeekable * seekable);
	 gboolean(*can_seek) (GSeekable * seekable);
	 gboolean(*seek) (GSeekable * seekable, goffset offset,
			  GSeekType type, GCancellable * cancellable,
			  GError * *error);
	 gboolean(*can_truncate) (GSeekable * seekable);
	 gboolean(*truncate_fn) (GSeekable * seekable, goffset offset,
				 GCancellable * cancellable,
				 GError * *error);
    };


/* Function prototypes */

    extern gboolean g_seekable_can_seek(GSeekable * seekable);
    extern gboolean g_seekable_can_truncate(GSeekable * seekable);
    extern GType g_seekable_get_type(void);
    extern gboolean g_seekable_seek(GSeekable * seekable, goffset offset,
				    GSeekType type,
				    GCancellable * cancellable,
				    GError * *error);
    extern goffset g_seekable_tell(GSeekable * seekable);
    extern gboolean g_seekable_truncate(GSeekable * seekable,
					goffset offset,
					GCancellable * cancellable,
					GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
