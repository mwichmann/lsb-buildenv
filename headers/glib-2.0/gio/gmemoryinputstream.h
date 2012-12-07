#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GMEMORYINPUTSTREAM_H_
#define _GLIB_2_0_GIO_GMEMORYINPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/ginputstream.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_MEMORY_INPUT_STREAM	(g_memory_input_stream_get_type ())
#define G_MEMORY_INPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_MEMORY_INPUT_STREAM, GMemoryInputStreamClass))
#define G_IS_MEMORY_INPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_MEMORY_INPUT_STREAM))
#define G_MEMORY_INPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_MEMORY_INPUT_STREAM, GMemoryInputStream))
#define G_IS_MEMORY_INPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_MEMORY_INPUT_STREAM))
#define G_MEMORY_INPUT_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_MEMORY_INPUT_STREAM, GMemoryInputStreamClass))


    typedef struct _GMemoryInputStreamClass GMemoryInputStreamClass;

    typedef struct _GMemoryInputStreamPrivate GMemoryInputStreamPrivate;

    struct _GMemoryInputStream {
	GInputStream parent_instance;
	GMemoryInputStreamPrivate *priv;
    };

    struct _GMemoryInputStreamClass {
	GInputStreamClass parent_class;
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
    };


/* Function prototypes */

    extern void g_memory_input_stream_add_data(GMemoryInputStream * stream,
					       const void *data,
					       gssize len,
					       GDestroyNotify destroy);
    extern GType g_memory_input_stream_get_type(void);
    extern GInputStream *g_memory_input_stream_new(void);
    extern GInputStream *g_memory_input_stream_new_from_data(const void
							     *data,
							     gssize len,
							     GDestroyNotify
							     destroy);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
