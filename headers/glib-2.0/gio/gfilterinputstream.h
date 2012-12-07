#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GFILTERINPUTSTREAM_H_
#define _GLIB_2_0_GIO_GFILTERINPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/ginputstream.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_FILTER_INPUT_STREAM	(g_filter_input_stream_get_type ())
#define G_FILTER_INPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_FILTER_INPUT_STREAM, GFilterInputStreamClass))
#define G_IS_FILTER_INPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_FILTER_INPUT_STREAM))
#define G_FILTER_INPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_FILTER_INPUT_STREAM, GFilterInputStream))
#define G_IS_FILTER_INPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_FILTER_INPUT_STREAM))
#define G_FILTER_INPUT_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_FILTER_INPUT_STREAM, GFilterInputStreamClass))


    typedef struct _GFilterInputStreamClass GFilterInputStreamClass;

    struct _GFilterInputStream {
	GInputStream parent_instance;
	GInputStream *base_stream;
    };

    struct _GFilterInputStreamClass {
	GInputStreamClass parent_class;
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
    };


/* Function prototypes */

    extern GInputStream
	*g_filter_input_stream_get_base_stream(GFilterInputStream *
					       stream);
    extern gboolean
	g_filter_input_stream_get_close_base_stream(GFilterInputStream *
						    stream);
    extern GType g_filter_input_stream_get_type(void);
    extern void
	g_filter_input_stream_set_close_base_stream(GFilterInputStream *
						    stream,
						    gboolean close_base);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
