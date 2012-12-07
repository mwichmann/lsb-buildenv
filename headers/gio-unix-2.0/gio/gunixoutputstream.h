#if (__LSB_VERSION__ >= 50 )
#ifndef _GIO_UNIX_2_0_GIO_GUNIXOUTPUTSTREAM_H_
#define _GIO_UNIX_2_0_GIO_GUNIXOUTPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/goutputstream.h>
#include <glib-2.0/gio/gio.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_UNIX_OUTPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_UNIX_OUTPUT_STREAM, GUnixOutputStreamClass))
#define G_IS_UNIX_OUTPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_UNIX_OUTPUT_STREAM))
#define G_UNIX_OUTPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_UNIX_OUTPUT_STREAM, GUnixOutputStream))
#define G_IS_UNIX_OUTPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_UNIX_OUTPUT_STREAM))
#define G_UNIX_OUTPUT_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_UNIX_OUTPUT_STREAM, GUnixOutputStreamClass))
#define G_TYPE_UNIX_OUTPUT_STREAM	(g_unix_output_stream_get_type ())


    typedef struct _GUnixOutputStream GUnixOutputStream;

    typedef struct _GUnixOutputStreamClass GUnixOutputStreamClass;

    typedef struct _GUnixOutputStreamPrivate GUnixOutputStreamPrivate;

    struct _GUnixOutputStreamClass {
	GOutputStreamClass parent_class;
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
    };

    struct _GUnixOutputStream {
	GOutputStream parent_instance;
	GUnixOutputStreamPrivate *priv;
    };


/* Function prototypes */

    extern gboolean g_unix_output_stream_get_close_fd(GUnixOutputStream *
						      stream);
    extern gint g_unix_output_stream_get_fd(GUnixOutputStream * stream);
    extern GType g_unix_output_stream_get_type(void);
    extern GOutputStream *g_unix_output_stream_new(gint fd,
						   gboolean close_fd);
    extern void g_unix_output_stream_set_close_fd(GUnixOutputStream *
						  stream,
						  gboolean close_fd);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
