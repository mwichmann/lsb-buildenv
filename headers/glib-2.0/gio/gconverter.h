#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GCONVERTER_H_
#define _GLIB_2_0_GIO_GCONVERTER_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_CONVERTER	(g_converter_get_type ())
#define G_CONVERTER(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_CONVERTER, GConverter))
#define G_IS_CONVERTER(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_CONVERTER))
#define G_CONVERTER_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_CONVERTER, GConverterIface))


    typedef struct _GConverterIface GConverterIface;

    struct _GConverterIface {
	GTypeInterface g_iface;
	 GConverterResult(*convert) (GConverter * converter,
				     const void *inbuf, gsize inbuf_size,
				     void *outbuf, gsize outbuf_size,
				     GConverterFlags flags,
				     gsize * bytes_read,
				     gsize * bytes_written,
				     GError * *error);
	void (*reset) (GConverter * converter);
    };


/* Function prototypes */

    extern GConverterResult g_converter_convert(GConverter * converter,
						const void *inbuf,
						gsize inbuf_size,
						void *outbuf,
						gsize outbuf_size,
						GConverterFlags flags,
						gsize * bytes_read,
						gsize * bytes_written,
						GError * *error);
    extern GType g_converter_get_type(void);
    extern void g_converter_reset(GConverter * converter);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
