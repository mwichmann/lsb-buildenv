#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GCONVERTERINPUTSTREAM_H_
#define _GLIB_2_0_GIO_GCONVERTERINPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gfilterinputstream.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/ginputstream.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_CONVERTER_INPUT_STREAM	(g_converter_input_stream_get_type ())
#define G_CONVERTER_INPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_CONVERTER_INPUT_STREAM, GConverterInputStreamClass))
#define G_IS_CONVERTER_INPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_CONVERTER_INPUT_STREAM))
#define G_CONVERTER_INPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_CONVERTER_INPUT_STREAM, GConverterInputStream))
#define G_IS_CONVERTER_INPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_CONVERTER_INPUT_STREAM))
#define G_CONVERTER_INPUT_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_CONVERTER_INPUT_STREAM, GConverterInputStreamClass))


    typedef struct _GConverterInputStreamClass GConverterInputStreamClass;

    typedef struct _GConverterInputStreamPrivate
	GConverterInputStreamPrivate;

    struct _GConverterInputStream {
	GFilterInputStream parent_instance;
	GConverterInputStreamPrivate *priv;
    };

    struct _GConverterInputStreamClass {
	GFilterInputStreamClass parent_class;
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
    };


/* Function prototypes */

    extern GConverter
	*g_converter_input_stream_get_converter(GConverterInputStream *
						converter_stream);
    extern GType g_converter_input_stream_get_type(void);
    extern GInputStream *g_converter_input_stream_new(GInputStream *
						      base_stream,
						      GConverter *
						      converter);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
