#if (__LSB_VERSION__ >= 50 )
#ifndef _GIO_UNIX_2_0_GIO_GUNIXINPUTSTREAM_H_
#define _GIO_UNIX_2_0_GIO_GUNIXINPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/ginputstream.h>
#include <glib-2.0/gio/gio.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_UNIX_INPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_UNIX_INPUT_STREAM, GUnixInputStreamClass))
#define G_IS_UNIX_INPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_UNIX_INPUT_STREAM))
#define G_UNIX_INPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_UNIX_INPUT_STREAM, GUnixInputStream))
#define G_IS_UNIX_INPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_UNIX_INPUT_STREAM))
#define G_UNIX_INPUT_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_UNIX_INPUT_STREAM, GUnixInputStreamClass))
#define G_TYPE_UNIX_INPUT_STREAM	(g_unix_input_stream_get_type ())


    typedef struct _GUnixInputStream GUnixInputStream;

    typedef struct _GUnixInputStreamClass GUnixInputStreamClass;

    typedef struct _GUnixInputStreamPrivate GUnixInputStreamPrivate;

    struct _GUnixInputStreamClass {
	GInputStreamClass parent_class;
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
    };

    struct _GUnixInputStream {
	GInputStream parent_instance;
	GUnixInputStreamPrivate *priv;
    };


/* Function prototypes */

    extern gboolean g_unix_input_stream_get_close_fd(GUnixInputStream *
						     stream);
    extern gint g_unix_input_stream_get_fd(GUnixInputStream * stream);
    extern GType g_unix_input_stream_get_type(void);
    extern GInputStream *g_unix_input_stream_new(gint fd,
						 gboolean close_fd);
    extern void g_unix_input_stream_set_close_fd(GUnixInputStream * stream,
						 gboolean close_fd);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
