#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GCONVERTEROUTPUTSTREAM_H_
#define _GLIB_2_0_GIO_GCONVERTEROUTPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/goutputstream.h>
#include <glib-2.0/gio/gfilteroutputstream.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_CONVERTER_OUTPUT_STREAM	(g_converter_output_stream_get_type ())
#define G_CONVERTER_OUTPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_CONVERTER_OUTPUT_STREAM, GConverterOutputStreamClass))
#define G_IS_CONVERTER_OUTPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_CONVERTER_OUTPUT_STREAM))
#define G_CONVERTER_OUTPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_CONVERTER_OUTPUT_STREAM, GConverterOutputStream))
#define G_IS_CONVERTER_OUTPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_CONVERTER_OUTPUT_STREAM))
#define G_CONVERTER_OUTPUT_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_CONVERTER_OUTPUT_STREAM, GConverterOutputStreamClass))


    typedef struct _GConverterOutputStreamClass
	GConverterOutputStreamClass;

    typedef struct _GConverterOutputStreamPrivate
	GConverterOutputStreamPrivate;

    struct _GConverterOutputStream {
	GFilterOutputStream parent_instance;
	GConverterOutputStreamPrivate *priv;
    };

    struct _GConverterOutputStreamClass {
	GFilterOutputStreamClass parent_class;
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
    };


/* Function prototypes */

    extern GConverter
	*g_converter_output_stream_get_converter(GConverterOutputStream *
						 converter_stream);
    extern GType g_converter_output_stream_get_type(void);
    extern GOutputStream *g_converter_output_stream_new(GOutputStream *
							base_stream,
							GConverter *
							converter);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
