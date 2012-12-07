#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GTLSFILEDATABASE_H_
#define _GLIB_2_0_GIO_GTLSFILEDATABASE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_TLS_FILE_DATABASE	(g_tls_file_database_get_type ())
#define G_TLS_FILE_DATABASE(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TLS_FILE_DATABASE, GTlsFileDatabase))
#define G_IS_TLS_FILE_DATABASE(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TLS_FILE_DATABASE))
#define G_TLS_FILE_DATABASE_GET_INTERFACE(inst)	(G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_TLS_FILE_DATABASE, GTlsFileDatabaseInterface))


    typedef struct _GTlsFileDatabaseInterface GTlsFileDatabaseInterface;

    struct _GTlsFileDatabaseInterface {
	GTypeInterface g_iface;
	gpointer padding[8];
    };


/* Function prototypes */

    extern GType g_tls_file_database_get_type(void);
    extern GTlsDatabase *g_tls_file_database_new(const gchar * anchors,
						 GError * *error);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
