#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSOBJECTSKELETON_H_
#define _GLIB_2_0_GIO_GDBUSOBJECTSKELETON_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DBUS_OBJECT_SKELETON	(g_dbus_object_skeleton_get_type ())
#define G_DBUS_OBJECT_SKELETON_CLASS(k)	(G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_DBUS_OBJECT_SKELETON, GDBusObjectSkeletonClass))
#define G_IS_DBUS_OBJECT_SKELETON_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_DBUS_OBJECT_SKELETON))
#define G_DBUS_OBJECT_SKELETON(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_DBUS_OBJECT_SKELETON, GDBusObjectSkeleton))
#define G_IS_DBUS_OBJECT_SKELETON(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_DBUS_OBJECT_SKELETON))
#define G_DBUS_OBJECT_SKELETON_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_DBUS_OBJECT_SKELETON, GDBusObjectSkeletonClass))


    typedef struct _GDBusObjectSkeletonClass GDBusObjectSkeletonClass;

    typedef struct _GDBusObjectSkeletonPrivate GDBusObjectSkeletonPrivate;

    struct _GDBusObjectSkeleton {
	GObject parent_instance;
	GDBusObjectSkeletonPrivate *priv;
    };

    struct _GDBusObjectSkeletonClass {
	GObjectClass parent_class;
	 gboolean(*authorize_method) (GDBusObjectSkeleton * object,
				      GDBusInterfaceSkeleton * interface_,
				      GDBusMethodInvocation * invocation);
	gpointer padding[8];
    };


/* Function prototypes */

    extern void g_dbus_object_skeleton_add_interface(GDBusObjectSkeleton *
						     object,
						     GDBusInterfaceSkeleton
						     * interface_);
    extern void g_dbus_object_skeleton_flush(GDBusObjectSkeleton * object);
    extern GType g_dbus_object_skeleton_get_type(void);
    extern GDBusObjectSkeleton *g_dbus_object_skeleton_new(const gchar *
							   object_path);
    extern void g_dbus_object_skeleton_remove_interface(GDBusObjectSkeleton
							* object,
							GDBusInterfaceSkeleton
							* interface_);
    extern void
	g_dbus_object_skeleton_remove_interface_by_name(GDBusObjectSkeleton
							* object,
							const gchar *
							interface_name);
    extern void g_dbus_object_skeleton_set_object_path(GDBusObjectSkeleton
						       * object,
						       const gchar *
						       object_path);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
