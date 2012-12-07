#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GCHARSETCONVERTER_H_
#define _GLIB_2_0_GIO_GCHARSETCONVERTER_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_CHARSET_CONVERTER	(g_charset_converter_get_type ())
#define G_CHARSET_CONVERTER_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_CHARSET_CONVERTER, GCharsetConverterClass))
#define G_IS_CHARSET_CONVERTER_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_CHARSET_CONVERTER))
#define G_CHARSET_CONVERTER(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_CHARSET_CONVERTER, GCharsetConverter))
#define G_IS_CHARSET_CONVERTER(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_CHARSET_CONVERTER))
#define G_CHARSET_CONVERTER_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_CHARSET_CONVERTER, GCharsetConverterClass))


    typedef struct _GCharsetConverterClass GCharsetConverterClass;

    struct _GCharsetConverterClass {
	GObjectClass parent_class;
    };


/* Function prototypes */

    extern guint g_charset_converter_get_num_fallbacks(GCharsetConverter *
						       converter);
    extern GType g_charset_converter_get_type(void);
    extern gboolean g_charset_converter_get_use_fallback(GCharsetConverter
							 * converter);
    extern GCharsetConverter *g_charset_converter_new(const char
						      *to_charset,
						      const char
						      *from_charset,
						      GError * *error);
    extern void g_charset_converter_set_use_fallback(GCharsetConverter *
						     converter,
						     gboolean
						     use_fallback);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
