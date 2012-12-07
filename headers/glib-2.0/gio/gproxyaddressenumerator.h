#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GPROXYADDRESSENUMERATOR_H_
#define _GLIB_2_0_GIO_GPROXYADDRESSENUMERATOR_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gsocketaddressenumerator.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_PROXY_ADDRESS_ENUMERATOR	(g_proxy_address_enumerator_get_type ())
#define G_PROXY_ADDRESS_ENUMERATOR_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_PROXY_ADDRESS_ENUMERATOR, GProxyAddressEnumeratorClass))
#define G_IS_PROXY_ADDRESS_ENUMERATOR_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_PROXY_ADDRESS_ENUMERATOR))
#define G_PROXY_ADDRESS_ENUMERATOR(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_PROXY_ADDRESS_ENUMERATOR, GProxyAddressEnumerator))
#define G_IS_PROXY_ADDRESS_ENUMERATOR(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_PROXY_ADDRESS_ENUMERATOR))
#define G_PROXY_ADDRESS_ENUMERATOR_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_PROXY_ADDRESS_ENUMERATOR, GProxyAddressEnumeratorClass))


    typedef struct _GProxyAddressEnumeratorClass
	GProxyAddressEnumeratorClass;

    typedef struct _GProxyAddressEnumeratorPrivate
	GProxyAddressEnumeratorPrivate;

    struct _GProxyAddressEnumerator {
	GSocketAddressEnumerator parent_instance;
	GProxyAddressEnumeratorPrivate *priv;
    };

    struct _GProxyAddressEnumeratorClass {
	GSocketAddressEnumeratorClass parent_class;
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
	void (*_g_reserved6) (void);
	void (*_g_reserved7) (void);
    };


/* Function prototypes */

    extern GType g_proxy_address_enumerator_get_type(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
