#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GMEMORYOUTPUTSTREAM_H_
#define _GLIB_2_0_GIO_GMEMORYOUTPUTSTREAM_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/goutputstream.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_MEMORY_OUTPUT_STREAM	(g_memory_output_stream_get_type ())
#define G_MEMORY_OUTPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_MEMORY_OUTPUT_STREAM, GMemoryOutputStreamClass))
#define G_IS_MEMORY_OUTPUT_STREAM_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_MEMORY_OUTPUT_STREAM))
#define G_MEMORY_OUTPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_MEMORY_OUTPUT_STREAM, GMemoryOutputStream))
#define G_IS_MEMORY_OUTPUT_STREAM(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_MEMORY_OUTPUT_STREAM))
#define G_MEMORY_OUTPUT_STREAM_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_MEMORY_OUTPUT_STREAM, GMemoryOutputStreamClass))


    typedef struct _GMemoryOutputStreamClass GMemoryOutputStreamClass;

    typedef struct _GMemoryOutputStreamPrivate GMemoryOutputStreamPrivate;

    typedef gpointer(*GReallocFunc) (gpointer data, gsize size);

    struct _GMemoryOutputStream {
	GOutputStream parent_instance;
	GMemoryOutputStreamPrivate *priv;
    };

    struct _GMemoryOutputStreamClass {
	GOutputStreamClass parent_class;
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
    };


/* Function prototypes */

    extern gpointer g_memory_output_stream_get_data(GMemoryOutputStream *
						    ostream);
    extern gsize g_memory_output_stream_get_data_size(GMemoryOutputStream *
						      ostream);
    extern gsize g_memory_output_stream_get_size(GMemoryOutputStream *
						 ostream);
    extern GType g_memory_output_stream_get_type(void);
    extern GOutputStream *g_memory_output_stream_new(gpointer data,
						     gsize size,
						     GReallocFunc
						     realloc_function,
						     GDestroyNotify
						     destroy_function);
    extern gpointer g_memory_output_stream_steal_data(GMemoryOutputStream *
						      ostream);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
