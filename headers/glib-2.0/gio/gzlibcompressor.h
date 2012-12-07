#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GZLIBCOMPRESSOR_H_
#define _GLIB_2_0_GIO_GZLIBCOMPRESSOR_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_ZLIB_COMPRESSOR_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_ZLIB_COMPRESSOR, GZlibCompressorClass))
#define G_IS_ZLIB_COMPRESSOR_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_ZLIB_COMPRESSOR))
#define G_ZLIB_COMPRESSOR(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_ZLIB_COMPRESSOR, GZlibCompressor))
#define G_IS_ZLIB_COMPRESSOR(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_ZLIB_COMPRESSOR))
#define G_ZLIB_COMPRESSOR_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_ZLIB_COMPRESSOR, GZlibCompressorClass))
#define G_TYPE_ZLIB_COMPRESSOR	(g_zlib_compressor_get_type ())


    typedef struct _GZlibCompressorClass GZlibCompressorClass;

    struct _GZlibCompressorClass {
	GObjectClass parent_class;
    };


/* Function prototypes */

    extern GFileInfo *g_zlib_compressor_get_file_info(GZlibCompressor *
						      compressor);
    extern GType g_zlib_compressor_get_type(void);
    extern GZlibCompressor *g_zlib_compressor_new(GZlibCompressorFormat
						  format, int level);
    extern void g_zlib_compressor_set_file_info(GZlibCompressor *
						compressor,
						GFileInfo * file_info);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
