#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GZLIBDECOMPRESSOR_H_
#define _GLIB_2_0_GIO_GZLIBDECOMPRESSOR_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_ZLIB_DECOMPRESSOR_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_ZLIB_DECOMPRESSOR, GZlibDecompressorClass))
#define G_IS_ZLIB_DECOMPRESSOR_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_ZLIB_DECOMPRESSOR))
#define G_ZLIB_DECOMPRESSOR(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_ZLIB_DECOMPRESSOR, GZlibDecompressor))
#define G_IS_ZLIB_DECOMPRESSOR(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_ZLIB_DECOMPRESSOR))
#define G_ZLIB_DECOMPRESSOR_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_ZLIB_DECOMPRESSOR, GZlibDecompressorClass))
#define G_TYPE_ZLIB_DECOMPRESSOR	(g_zlib_decompressor_get_type ())


    typedef struct _GZlibDecompressorClass GZlibDecompressorClass;

    struct _GZlibDecompressorClass {
	GObjectClass parent_class;
    };


/* Function prototypes */

    extern GFileInfo *g_zlib_decompressor_get_file_info(GZlibDecompressor *
							decompressor);
    extern GType g_zlib_decompressor_get_type(void);
    extern GZlibDecompressor *g_zlib_decompressor_new(GZlibCompressorFormat
						      format);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
