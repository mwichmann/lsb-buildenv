#if (__LSB_VERSION__ >= 50 )
#ifndef _GIO_UNIX_2_0_GIO_GFILEDESCRIPTORBASED_H_
#define _GIO_UNIX_2_0_GIO_GFILEDESCRIPTORBASED_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gio.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_FILE_DESCRIPTOR_BASED	(g_file_descriptor_based_get_type ())
#define G_FILE_DESCRIPTOR_BASED(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_FILE_DESCRIPTOR_BASED, GFileDescriptorBased))
#define G_IS_FILE_DESCRIPTOR_BASED(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_FILE_DESCRIPTOR_BASED))
#define G_FILE_DESCRIPTOR_BASED_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_FILE_DESCRIPTOR_BASED, GFileDescriptorBasedIface))


    typedef struct _GFileDescriptorBasedIface GFileDescriptorBasedIface;

    struct _GFileDescriptorBasedIface {
	GTypeInterface g_iface;
	int (*get_fd) (GFileDescriptorBased * fd_based);
    };


/* Function prototypes */

    extern int g_file_descriptor_based_get_fd(GFileDescriptorBased *
					      fd_based);
    extern GType g_file_descriptor_based_get_type(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
