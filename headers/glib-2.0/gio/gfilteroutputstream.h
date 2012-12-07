#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GFILTEROUTPUTSTREAM_H_
#define _GLIB_2_0_GIO_GFILTEROUTPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/goutputstream.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_FILTER_OUTPUT_STREAM	(g_filter_output_stream_get_type ())
#define G_FILTER_OUTPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_FILTER_OUTPUT_STREAM, GFilterOutputStreamClass))
#define G_IS_FILTER_OUTPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_FILTER_OUTPUT_STREAM))
#define G_FILTER_OUTPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_FILTER_OUTPUT_STREAM, GFilterOutputStream))
#define G_IS_FILTER_OUTPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_FILTER_OUTPUT_STREAM))
#define G_FILTER_OUTPUT_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_FILTER_OUTPUT_STREAM, GFilterOutputStreamClass))


    typedef struct _GFilterOutputStreamClass GFilterOutputStreamClass;

    struct _GFilterOutputStream {
	GOutputStream parent_instance;
	GOutputStream *base_stream;
    };

    struct _GFilterOutputStreamClass {
	GOutputStreamClass parent_class;
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
    };


/* Function prototypes */

    extern GOutputStream
	*g_filter_output_stream_get_base_stream(GFilterOutputStream *
						stream);
    extern gboolean
	g_filter_output_stream_get_close_base_stream(GFilterOutputStream *
						     stream);
    extern GType g_filter_output_stream_get_type(void);
    extern void
	g_filter_output_stream_set_close_base_stream(GFilterOutputStream *
						     stream,
						     gboolean close_base);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
