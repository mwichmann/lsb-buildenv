#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GMOUNTOPERATION_H_
#define _GLIB_2_0_GIO_GMOUNTOPERATION_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_MOUNT_OPERATION	(g_mount_operation_get_type ())
#define G_MOUNT_OPERATION_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_MOUNT_OPERATION, GMountOperationClass))
#define G_IS_MOUNT_OPERATION_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_MOUNT_OPERATION))
#define G_MOUNT_OPERATION(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_MOUNT_OPERATION, GMountOperation))
#define G_IS_MOUNT_OPERATION(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_MOUNT_OPERATION))
#define G_MOUNT_OPERATION_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_MOUNT_OPERATION, GMountOperationClass))


    typedef struct _GMountOperationPrivate GMountOperationPrivate;


/* Function prototypes */

    extern gboolean g_mount_operation_get_anonymous(GMountOperation * op);
    extern int g_mount_operation_get_choice(GMountOperation * op);
    extern const char *g_mount_operation_get_domain(GMountOperation * op);
    extern const char *g_mount_operation_get_password(GMountOperation *
						      op);
    extern GPasswordSave
	g_mount_operation_get_password_save(GMountOperation * op);
    extern GType g_mount_operation_get_type(void);
    extern const char *g_mount_operation_get_username(GMountOperation *
						      op);
    extern GMountOperation *g_mount_operation_new(void);
    extern void g_mount_operation_reply(GMountOperation * op,
					GMountOperationResult result);
    extern void g_mount_operation_set_anonymous(GMountOperation * op,
						gboolean anonymous);
    extern void g_mount_operation_set_choice(GMountOperation * op,
					     int choice);
    extern void g_mount_operation_set_domain(GMountOperation * op,
					     const char *domain);
    extern void g_mount_operation_set_password(GMountOperation * op,
					       const char *password);
    extern void g_mount_operation_set_password_save(GMountOperation * op,
						    GPasswordSave save);
    extern void g_mount_operation_set_username(GMountOperation * op,
					       const char *username);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
