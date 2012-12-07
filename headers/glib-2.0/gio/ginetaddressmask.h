#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GINETADDRESSMASK_H_
#define _GLIB_2_0_GIO_GINETADDRESSMASK_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_INET_ADDRESS_MASK	(g_inet_address_mask_get_type ())
#define G_INET_ADDRESS_MASK_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_INET_ADDRESS_MASK, GInetAddressMaskClass))
#define G_IS_INET_ADDRESS_MASK_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_INET_ADDRESS_MASK))
#define G_INET_ADDRESS_MASK(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_INET_ADDRESS_MASK, GInetAddressMask))
#define G_IS_INET_ADDRESS_MASK(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_INET_ADDRESS_MASK))
#define G_INET_ADDRESS_MASK_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_INET_ADDRESS_MASK, GInetAddressMaskClass))


    typedef struct _GInetAddressMaskClass GInetAddressMaskClass;

    typedef struct _GInetAddressMaskPrivate GInetAddressMaskPrivate;

    struct _GInetAddressMask {
	GObject parent_instance;
	GInetAddressMaskPrivate *priv;
    };

    struct _GInetAddressMaskClass {
	GObjectClass parent_class;
    };


/* Function prototypes */

    extern gboolean g_inet_address_mask_equal(GInetAddressMask * mask,
					      GInetAddressMask * mask2);
    extern GInetAddress *g_inet_address_mask_get_address(GInetAddressMask *
							 mask);
    extern GSocketFamily g_inet_address_mask_get_family(GInetAddressMask *
							mask);
    extern guint g_inet_address_mask_get_length(GInetAddressMask * mask);
    extern GType g_inet_address_mask_get_type(void);
    extern gboolean g_inet_address_mask_matches(GInetAddressMask * mask,
						GInetAddress * address);
    extern GInetAddressMask *g_inet_address_mask_new(GInetAddress * addr,
						     guint length,
						     GError * *error);
    extern GInetAddressMask *g_inet_address_mask_new_from_string(const
								 gchar *
								 mask_string,
								 GError *
								 *error);
    extern gchar *g_inet_address_mask_to_string(GInetAddressMask * mask);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
