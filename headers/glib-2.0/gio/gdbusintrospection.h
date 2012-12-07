#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GDBUSINTROSPECTION_H_
#define _GLIB_2_0_GIO_GDBUSINTROSPECTION_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/giotypes.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_TYPE_DBUS_ANNOTATION_INFO	(g_dbus_annotation_info_get_type ())
#define G_TYPE_DBUS_ARG_INFO	(g_dbus_arg_info_get_type ())
#define G_TYPE_DBUS_INTERFACE_INFO	(g_dbus_interface_info_get_type ())
#define G_TYPE_DBUS_METHOD_INFO	(g_dbus_method_info_get_type ())
#define G_TYPE_DBUS_NODE_INFO	(g_dbus_node_info_get_type ())
#define G_TYPE_DBUS_PROPERTY_INFO	(g_dbus_property_info_get_type ())
#define G_TYPE_DBUS_SIGNAL_INFO	(g_dbus_signal_info_get_type ())


    struct _GDBusAnnotationInfo {
	volatile gint ref_count;
	gchar *key;
	gchar *value;
	GDBusAnnotationInfo **annotations;
    };

    struct _GDBusArgInfo {
	volatile gint ref_count;
	gchar *name;
	gchar *signature;
	GDBusAnnotationInfo **annotations;
    };

    struct _GDBusMethodInfo {
	volatile gint ref_count;
	gchar *name;
	GDBusArgInfo **in_args;
	GDBusArgInfo **out_args;
	GDBusAnnotationInfo **annotations;
    };

    struct _GDBusSignalInfo {
	volatile gint ref_count;
	gchar *name;
	GDBusArgInfo **args;
	GDBusAnnotationInfo **annotations;
    };

    struct _GDBusPropertyInfo {
	volatile gint ref_count;
	gchar *name;
	gchar *signature;
	GDBusPropertyInfoFlags flags;
	GDBusAnnotationInfo **annotations;
    };

    struct _GDBusInterfaceInfo {
	volatile gint ref_count;
	gchar *name;
	GDBusMethodInfo **methods;
	GDBusSignalInfo **signals;
	GDBusPropertyInfo **properties;
	GDBusAnnotationInfo **annotations;
    };

    struct _GDBusNodeInfo {
	volatile gint ref_count;
	gchar *path;
	GDBusInterfaceInfo **interfaces;
	GDBusNodeInfo **nodes;
	GDBusAnnotationInfo **annotations;
    };


/* Function prototypes */

    extern GType g_dbus_annotation_info_get_type(void);
    extern const char *g_dbus_annotation_info_lookup(GDBusAnnotationInfo *
						     *annotations,
						     const gchar * name);
    extern GDBusAnnotationInfo
	*g_dbus_annotation_info_ref(GDBusAnnotationInfo * info);
    extern void g_dbus_annotation_info_unref(GDBusAnnotationInfo * info);
    extern GType g_dbus_arg_info_get_type(void);
    extern GDBusArgInfo *g_dbus_arg_info_ref(GDBusArgInfo * info);
    extern void g_dbus_arg_info_unref(GDBusArgInfo * info);
    extern void g_dbus_interface_info_cache_build(GDBusInterfaceInfo *
						  info);
    extern void g_dbus_interface_info_cache_release(GDBusInterfaceInfo *
						    info);
    extern void g_dbus_interface_info_generate_xml(GDBusInterfaceInfo *
						   info, guint indent,
						   GString *
						   string_builder);
    extern GType g_dbus_interface_info_get_type(void);
    extern GDBusMethodInfo
	*g_dbus_interface_info_lookup_method(GDBusInterfaceInfo * info,
					     const gchar * name);
    extern GDBusPropertyInfo
	*g_dbus_interface_info_lookup_property(GDBusInterfaceInfo * info,
					       const gchar * name);
    extern GDBusSignalInfo
	*g_dbus_interface_info_lookup_signal(GDBusInterfaceInfo * info,
					     const gchar * name);
    extern GDBusInterfaceInfo *g_dbus_interface_info_ref(GDBusInterfaceInfo
							 * info);
    extern void g_dbus_interface_info_unref(GDBusInterfaceInfo * info);
    extern GType g_dbus_method_info_get_type(void);
    extern GDBusMethodInfo *g_dbus_method_info_ref(GDBusMethodInfo * info);
    extern void g_dbus_method_info_unref(GDBusMethodInfo * info);
    extern void g_dbus_node_info_generate_xml(GDBusNodeInfo * info,
					      guint indent,
					      GString * string_builder);
    extern GType g_dbus_node_info_get_type(void);
    extern GDBusInterfaceInfo
	*g_dbus_node_info_lookup_interface(GDBusNodeInfo * info,
					   const gchar * name);
    extern GDBusNodeInfo *g_dbus_node_info_new_for_xml(const gchar *
						       xml_data,
						       GError * *error);
    extern GDBusNodeInfo *g_dbus_node_info_ref(GDBusNodeInfo * info);
    extern void g_dbus_node_info_unref(GDBusNodeInfo * info);
    extern GType g_dbus_property_info_get_type(void);
    extern GDBusPropertyInfo *g_dbus_property_info_ref(GDBusPropertyInfo *
						       info);
    extern void g_dbus_property_info_unref(GDBusPropertyInfo * info);
    extern GType g_dbus_signal_info_get_type(void);
    extern GDBusSignalInfo *g_dbus_signal_info_ref(GDBusSignalInfo * info);
    extern void g_dbus_signal_info_unref(GDBusSignalInfo * info);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
