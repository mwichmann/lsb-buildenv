#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GTLSINTERACTION_H_
#define _GLIB_2_0_GIO_GTLSINTERACTION_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_TLS_INTERACTION	(g_tls_interaction_get_type ())
#define G_TLS_INTERACTION_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_TLS_INTERACTION, GTlsInteractionClass))
#define G_IS_TLS_INTERACTION_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_TLS_INTERACTION))
#define G_TLS_INTERACTION(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_TLS_INTERACTION, GTlsInteraction))
#define G_IS_TLS_INTERACTION(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_TLS_INTERACTION))
#define G_TLS_INTERACTION_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_TLS_INTERACTION, GTlsInteractionClass))


    typedef struct _GTlsInteractionClass GTlsInteractionClass;

    typedef struct _GTlsInteractionPrivate GTlsInteractionPrivate;

    struct _GTlsInteraction {
	GObject parent_instance;
	GTlsInteractionPrivate *priv;
    };

    struct _GTlsInteractionClass {
	GObjectClass parent_class;
	 GTlsInteractionResult(*ask_password) (GTlsInteraction *
					       interaction,
					       GTlsPassword * password,
					       GCancellable * cancellable,
					       GError * *error);
	void (*ask_password_async) (GTlsInteraction * interaction,
				    GTlsPassword * password,
				    GCancellable * cancellable,
				    GAsyncReadyCallback callback,
				    gpointer user_data);
	 GTlsInteractionResult(*ask_password_finish) (GTlsInteraction *
						      interaction,
						      GAsyncResult *
						      result,
						      GError * *error);
	gpointer padding[24];
    };


/* Function prototypes */

    extern GTlsInteractionResult
	g_tls_interaction_ask_password(GTlsInteraction * interaction,
				       GTlsPassword * password,
				       GCancellable * cancellable,
				       GError * *error);
    extern void g_tls_interaction_ask_password_async(GTlsInteraction *
						     interaction,
						     GTlsPassword *
						     password,
						     GCancellable *
						     cancellable,
						     GAsyncReadyCallback
						     callback,
						     gpointer user_data);
    extern GTlsInteractionResult
	g_tls_interaction_ask_password_finish(GTlsInteraction *
					      interaction,
					      GAsyncResult * result,
					      GError * *error);
    extern GType g_tls_interaction_get_type(void);
    extern GTlsInteractionResult
	g_tls_interaction_invoke_ask_password(GTlsInteraction *
					      interaction,
					      GTlsPassword * password,
					      GCancellable * cancellable,
					      GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
