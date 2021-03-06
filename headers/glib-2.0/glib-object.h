#if (__LSB_VERSION__ >= 31 )
#ifndef _GLIB_2_0_GLIB_OBJECT_H_
#define _GLIB_2_0_GLIB_OBJECT_H_

#include <stdarg.h>
#include <glib-2.0/glib.h>

#if !defined(LSB_DECL_DEPRECATED)
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && (__GNUC__ - 0 > 3 || (__GNUC__ - 0 == 3 && __GNUC_MINOR__ - 0 >= 2))
#define LSB_DECL_DEPRECATED __attribute__ ((__deprecated__))
#else
#define LSB_DECL_DEPRECATED
#endif
#endif				/* LSB_DECL_DEPRECATED */

#ifdef __cplusplus
extern "C" {
#endif


#define G_CLOSURE_NEEDS_MARSHAL(closure)	 \
	(((GClosure*) (closure))->marshal == NULL)
#define G_TYPE_FROM_INTERFACE(g_iface)	 \
	(((GTypeInterface*) (g_iface))->g_type)
#define _G_TYPE_CCC(cp,gt,ct)	 \
	((ct*) g_type_check_class_cast ((GTypeClass*) cp, gt))
#define _G_TYPE_CIC(ip,gt,ct)	 \
	((ct*) g_type_check_instance_cast ((GTypeInstance*) ip, gt))
#define _G_TYPE_IGI(ip,gt,ct)	 \
	((ct*) g_type_interface_peek (((GTypeInstance*) ip)->g_class, gt))
#define G_TYPE_INSTANCE_GET_PRIVATE(instance,g_type,c_type)	 \
	((c_type*) g_type_instance_get_private ((GTypeInstance*) (instance), \
	(g_type)))
#define G_TYPE_MAKE_FUNDAMENTAL(x)	 \
	((GType) ((x) << G_TYPE_FUNDAMENTAL_SHIFT))
#define G_ENUM_CLASS(class)	 \
	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_ENUM, GEnumClass))
#define G_FLAGS_CLASS(class)	 \
	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_FLAGS, GFlagsClass))
#define G_OBJECT_CLASS(class)	 \
	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_OBJECT, GObjectClass))
#define G_TYPE_MODULE_CLASS(class)	 \
	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_TYPE_MODULE, \
	GTypeModuleClass))
#define G_PARAM_SPEC_CLASS(pclass)	 \
	(G_TYPE_CHECK_CLASS_CAST ((pclass), G_TYPE_PARAM, GParamSpecClass))
#define G_TYPE_PLUGIN_CLASS(vtable)	 \
	(G_TYPE_CHECK_CLASS_CAST ((vtable), G_TYPE_TYPE_PLUGIN, \
	GTypePluginClass))
#define G_IS_ENUM_CLASS(class)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_ENUM))
#define G_IS_FLAGS_CLASS(class)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_FLAGS))
#define G_IS_OBJECT_CLASS(class)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_OBJECT))
#define G_IS_TYPE_MODULE_CLASS(class)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_TYPE_MODULE))
#define G_IS_PARAM_SPEC_CLASS(pclass)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((pclass), G_TYPE_PARAM))
#define G_IS_TYPE_PLUGIN_CLASS(vtable)	 \
	(G_TYPE_CHECK_CLASS_TYPE ((vtable), G_TYPE_TYPE_PLUGIN))
#define G_TYPE_PLUGIN(inst)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TYPE_PLUGIN, \
	GTypePlugin))
#define G_TYPE_MODULE(module)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((module), G_TYPE_TYPE_MODULE, \
	GTypeModule))
#define G_OBJECT(object)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((object), G_TYPE_OBJECT, GObject))
#define G_PARAM_SPEC(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM, GParamSpec))
#define G_PARAM_SPEC_BOOLEAN(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_BOOLEAN, \
	GParamSpecBoolean))
#define G_PARAM_SPEC_BOXED(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_BOXED, \
	GParamSpecBoxed))
#define G_PARAM_SPEC_CHAR(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_CHAR, \
	GParamSpecChar))
#define G_PARAM_SPEC_DOUBLE(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_DOUBLE, \
	GParamSpecDouble))
#define G_PARAM_SPEC_ENUM(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_ENUM, \
	GParamSpecEnum))
#define G_PARAM_SPEC_FLAGS(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_FLAGS, \
	GParamSpecFlags))
#define G_PARAM_SPEC_FLOAT(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_FLOAT, \
	GParamSpecFloat))
#define G_PARAM_SPEC_INT(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_INT, \
	GParamSpecInt))
#define G_PARAM_SPEC_INT64(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_INT64, \
	GParamSpecInt64))
#define G_PARAM_SPEC_LONG(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_LONG, \
	GParamSpecLong))
#define G_PARAM_SPEC_OBJECT(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_OBJECT, \
	GParamSpecObject))
#define G_PARAM_SPEC_OVERRIDE(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_OVERRIDE, \
	GParamSpecOverride))
#define G_PARAM_SPEC_PARAM(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_PARAM, \
	GParamSpecParam))
#define G_PARAM_SPEC_POINTER(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_POINTER, \
	GParamSpecPointer))
#define G_PARAM_SPEC_STRING(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_STRING, \
	GParamSpecString))
#define G_PARAM_SPEC_UCHAR(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_UCHAR, \
	GParamSpecUChar))
#define G_PARAM_SPEC_UINT(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_UINT, \
	GParamSpecUInt))
#define G_PARAM_SPEC_UINT64(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_UINT64, \
	GParamSpecUInt64))
#define G_PARAM_SPEC_ULONG(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_ULONG, \
	GParamSpecULong))
#define G_PARAM_SPEC_UNICHAR(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_UNICHAR, \
	GParamSpecUnichar))
#define G_PARAM_SPEC_VALUE_ARRAY(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_VALUE_ARRAY, \
	GParamSpecValueArray))	/* : DEPRECATED */
#define G_IS_TYPE_PLUGIN(inst)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TYPE_PLUGIN))
#define G_IS_TYPE_MODULE(module)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((module), G_TYPE_TYPE_MODULE))
#define G_IS_OBJECT(object)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((object), G_TYPE_OBJECT))
#define G_IS_PARAM_SPEC(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM))
#define G_IS_PARAM_SPEC_BOOLEAN(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_BOOLEAN))
#define G_IS_PARAM_SPEC_BOXED(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_BOXED))
#define G_IS_PARAM_SPEC_CHAR(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_CHAR))
#define G_IS_PARAM_SPEC_DOUBLE(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_DOUBLE))
#define G_IS_PARAM_SPEC_ENUM(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_ENUM))
#define G_IS_PARAM_SPEC_FLAGS(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_FLAGS))
#define G_IS_PARAM_SPEC_FLOAT(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_FLOAT))
#define G_IS_PARAM_SPEC_INT(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_INT))
#define G_IS_PARAM_SPEC_INT64(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_INT64))
#define G_IS_PARAM_SPEC_LONG(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_LONG))
#define G_IS_PARAM_SPEC_OBJECT(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_OBJECT))
#define G_IS_PARAM_SPEC_OVERRIDE(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_OVERRIDE))
#define G_IS_PARAM_SPEC_PARAM(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_PARAM))
#define G_IS_PARAM_SPEC_POINTER(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_POINTER))
#define G_IS_PARAM_SPEC_STRING(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_STRING))
#define G_IS_PARAM_SPEC_UCHAR(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_UCHAR))
#define G_IS_PARAM_SPEC_UINT(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_UINT))
#define G_IS_PARAM_SPEC_UINT64(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_UINT64))
#define G_IS_PARAM_SPEC_ULONG(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_ULONG))
#define G_IS_PARAM_SPEC_UNICHAR(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_UNICHAR))
#define G_IS_PARAM_SPEC_VALUE_ARRAY(pspec)	 \
	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_VALUE_ARRAY))	/* : DEPRECATED */
#define G_VALUE_HOLDS(value,type)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), (type)))
#define G_VALUE_HOLDS_BOOLEAN(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_BOOLEAN))
#define G_VALUE_HOLDS_BOXED(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_BOXED))
#define G_VALUE_HOLDS_CHAR(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_CHAR))
#define G_VALUE_HOLDS_DOUBLE(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_DOUBLE))
#define G_VALUE_HOLDS_ENUM(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_ENUM))
#define G_VALUE_HOLDS_FLAGS(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_FLAGS))
#define G_VALUE_HOLDS_FLOAT(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_FLOAT))
#define G_VALUE_HOLDS_INT(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_INT))
#define G_VALUE_HOLDS_INT64(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_INT64))
#define G_VALUE_HOLDS_LONG(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_LONG))
#define G_VALUE_HOLDS_OBJECT(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_OBJECT))
#define G_VALUE_HOLDS_PARAM(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_PARAM))
#define G_VALUE_HOLDS_POINTER(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_POINTER))
#define G_VALUE_HOLDS_STRING(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_STRING))
#define G_VALUE_HOLDS_UCHAR(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_UCHAR))
#define G_VALUE_HOLDS_UINT(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_UINT))
#define G_VALUE_HOLDS_UINT64(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_UINT64))
#define G_VALUE_HOLDS_ULONG(value)	 \
	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_ULONG))
#define G_TYPE_FROM_INSTANCE(instance)	 \
	(G_TYPE_FROM_CLASS (((GTypeInstance*) (instance))->g_class))
#define G_TYPE_IS_INTERFACE(type)	 \
	(G_TYPE_FUNDAMENTAL (type) == G_TYPE_INTERFACE)
#define G_TYPE_IS_OBJECT(type)	 \
	(G_TYPE_FUNDAMENTAL (type) == G_TYPE_OBJECT)
#define G_TYPE_MODULE_GET_CLASS(module)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((module), G_TYPE_TYPE_MODULE, \
	GTypeModuleClass))
#define G_OBJECT_GET_CLASS(object)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((object), G_TYPE_OBJECT, GObjectClass))
#define G_PARAM_SPEC_GET_CLASS(pspec)	 \
	(G_TYPE_INSTANCE_GET_CLASS ((pspec), G_TYPE_PARAM, GParamSpecClass))
#define G_TYPE_PLUGIN_GET_CLASS(inst)	 \
	(G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_TYPE_PLUGIN, \
	GTypePluginClass))
#define G_ENUM_CLASS_TYPE_NAME(class)	 \
	(g_type_name (G_ENUM_CLASS_TYPE (class)))
#define G_FLAGS_CLASS_TYPE_NAME(class)	 \
	(g_type_name (G_FLAGS_TYPE (class)))
#define G_OBJECT_CLASS_NAME(class)	 \
	(g_type_name (G_OBJECT_CLASS_TYPE (class)))
#define G_PARAM_SPEC_TYPE_NAME(pspec)	 \
	(g_type_name (G_PARAM_SPEC_TYPE (pspec)))
#define G_TYPE_IS_ABSTRACT(type)	 \
	(g_type_test_flags ((type), G_TYPE_FLAG_ABSTRACT))
#define G_TYPE_IS_CLASSED(type)	 \
	(g_type_test_flags ((type), G_TYPE_FLAG_CLASSED))
#define G_TYPE_IS_DEEP_DERIVABLE(type)	 \
	(g_type_test_flags ((type), G_TYPE_FLAG_DEEP_DERIVABLE))
#define G_TYPE_IS_DERIVABLE(type)	 \
	(g_type_test_flags ((type), G_TYPE_FLAG_DERIVABLE))
#define G_TYPE_IS_INSTANTIATABLE(type)	 \
	(g_type_test_flags ((type), G_TYPE_FLAG_INSTANTIATABLE))
#define G_TYPE_IS_VALUE_ABSTRACT(type)	 \
	(g_type_test_flags ((type), G_TYPE_FLAG_VALUE_ABSTRACT))
#define G_TYPE_HAS_VALUE_TABLE(type)	 \
	(g_type_value_table_peek (type) != NULL)
#define G_TYPE_CHECK_CLASS_CAST(g_class,g_type,c_type)	 \
	(_G_TYPE_CCC ((g_class), (g_type), c_type))
#define G_TYPE_CHECK_CLASS_TYPE(g_class,g_type)	 \
	(_G_TYPE_CCT ((g_class), (g_type)))
#define G_TYPE_CHECK_INSTANCE(instance)	 \
	(_G_TYPE_CHI ((GTypeInstance*) (instance)))
#define G_TYPE_CHECK_INSTANCE_CAST(instance,g_type,c_type)	 \
	(_G_TYPE_CIC ((instance), (g_type), c_type))
#define G_TYPE_CHECK_INSTANCE_TYPE(instance,g_type)	 \
	(_G_TYPE_CIT ((instance), (g_type)))
#define G_TYPE_CHECK_VALUE_TYPE(value,g_type)	 \
	(_G_TYPE_CVH ((value), (g_type)))
#define G_TYPE_INSTANCE_GET_CLASS(instance,g_type,c_type)	 \
	(_G_TYPE_IGC ((instance), (g_type), c_type))
#define G_TYPE_INSTANCE_GET_INTERFACE(instance,g_type,c_type)	 \
	(_G_TYPE_IGI ((instance), (g_type), c_type))
#define G_DEFINE_TYPE_WITH_CODE(TN,t_n,T_P,_C_)	 \
	G_DEFINE_TYPE_EXTENDED (TN, t_n, T_P, 0, _C_)
#define G_DEFINE_TYPE(TN,t_n,T_P)	 \
	G_DEFINE_TYPE_EXTENDED (TN, t_n, T_P, 0, {})
#define G_DEFINE_ABSTRACT_TYPE(TN,t_n,T_P)	 \
	G_DEFINE_TYPE_EXTENDED (TN, t_n, T_P, G_TYPE_FLAG_ABSTRACT, {})
#define G_OBJECT_WARN_INVALID_PROPERTY_ID(object,property_id,pspec)	 \
	G_OBJECT_WARN_INVALID_PSPEC ((object), "property", (property_id), \
	(pspec))
#define g_signal_connect(instance,detailed_signal,c_handler,data)	 \
	g_signal_connect_data ((instance), (detailed_signal), (c_handler), \
	(data), NULL, (GConnectFlags) 0)
#define g_signal_connect_after(instance,detailed_signal,c_handler,data)	 \
	g_signal_connect_data ((instance), (detailed_signal), (c_handler), \
	(data), NULL, G_CONNECT_AFTER)
#define g_signal_connect_swapped(instance,detailed_signal,c_handler,data)	 \
	g_signal_connect_data ((instance), (detailed_signal), (c_handler), \
	(data), NULL, G_CONNECT_SWAPPED)
#define g_signal_handlers_block_by_func(instance,func,data)	 \
	g_signal_handlers_block_matched ((instance), (GSignalMatchType) \
	(G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA), 0, 0, NULL, (func), \
	(data))
#define g_signal_handlers_disconnect_by_func(instance,func,data)	 \
	g_signal_handlers_disconnect_matched ((instance), (GSignalMatchType) \
	(G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA), 0, 0, NULL, (func), \
	(data))
#define g_signal_handlers_unblock_by_func(instance,func,data)	 \
	g_signal_handlers_unblock_matched ((instance), (GSignalMatchType) \
	(G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA), 0, 0, NULL, (func), \
	(data))
#define G_CCLOSURE_SWAP_DATA(cclosure)	 \
 (((GClosure*) (cclosure))->derivative_flag)
#define G_TYPE_FROM_CLASS(g_class)	(((GTypeClass*) (g_class))->g_type)
#define G_VALUE_TYPE(value)	(((GValue*) (value))->g_type)
#define _G_TYPE_IGC(ip,gt,ct)	((ct*) (((GTypeInstance*) ip)->g_class))
#define G_CALLBACK(f)	((GCallback) (f))
#define G_TYPE_FLAG_RESERVED_ID_BIT	((GType) (1 << 0))
#define G_TYPE_IS_FUNDAMENTAL(type)	((type) <= G_TYPE_FUNDAMENTAL_MAX)
#define G_TYPE_IS_DERIVED(type)	((type) > G_TYPE_FUNDAMENTAL_MAX)
#define G_PARAM_MASK	(0x000000ff)
#define G_VALUE_NOCOPY_CONTENTS	(1 << 27)
#define G_TYPE_FUNDAMENTAL_SHIFT	(2)
#define G_TYPE_FUNDAMENTAL_MAX	(255 << G_TYPE_FUNDAMENTAL_SHIFT)
#define G_TYPE_RESERVED_GLIB_LAST	(31)
#define G_TYPE_RESERVED_BSE_FIRST	(32)
#define G_TYPE_RESERVED_BSE_LAST	(48)
#define G_TYPE_RESERVED_USER_FIRST	(49)
#define G_PARAM_USER_SHIFT	(8)
#define G_TYPE_CLOSURE	(g_closure_get_type ())
#define G_TYPE_GSTRING	(g_gstring_get_type ())
#define G_TYPE_IO_CHANNEL	(g_io_channel_get_type ())
#define G_TYPE_IO_CONDITION	(g_io_condition_get_type ())
#define G_PARAM_READWRITE	(G_PARAM_READABLE | G_PARAM_WRITABLE)
#define G_PARAM_SPEC_VALUE_TYPE(pspec)	(G_PARAM_SPEC (pspec)->value_type)
#define G_TYPE_PARAM_CHAR	(g_param_spec_types[0])
#define G_TYPE_PARAM_ENUM	(g_param_spec_types[10])
#define G_TYPE_PARAM_FLAGS	(g_param_spec_types[11])
#define G_TYPE_PARAM_FLOAT	(g_param_spec_types[12])
#define G_TYPE_PARAM_DOUBLE	(g_param_spec_types[13])
#define G_TYPE_PARAM_STRING	(g_param_spec_types[14])
#define G_TYPE_PARAM_PARAM	(g_param_spec_types[15])
#define G_TYPE_PARAM_BOXED	(g_param_spec_types[16])
#define G_TYPE_PARAM_POINTER	(g_param_spec_types[17])
#define G_TYPE_PARAM_VALUE_ARRAY	(g_param_spec_types[18])	/* : DEPRECATED */
#define G_TYPE_PARAM_OBJECT	(g_param_spec_types[19])
#define G_TYPE_PARAM_UCHAR	(g_param_spec_types[1])
#define G_TYPE_PARAM_OVERRIDE	(g_param_spec_types[20])
#define G_TYPE_PARAM_BOOLEAN	(g_param_spec_types[2])
#define G_TYPE_PARAM_INT	(g_param_spec_types[3])
#define G_TYPE_PARAM_UINT	(g_param_spec_types[4])
#define G_TYPE_PARAM_LONG	(g_param_spec_types[5])
#define G_TYPE_PARAM_ULONG	(g_param_spec_types[6])
#define G_TYPE_PARAM_INT64	(g_param_spec_types[7])
#define G_TYPE_PARAM_UINT64	(g_param_spec_types[8])
#define G_TYPE_PARAM_UNICHAR	(g_param_spec_types[9])
#define G_TYPE_STRV	(g_strv_get_type ())
#define _G_TYPE_CCT(cp,gt)	(g_type_check_class_is_a ((GTypeClass*) cp, gt))
#define _G_TYPE_CHI(ip)	(g_type_check_instance ((GTypeInstance*) ip))
#define _G_TYPE_CIT(ip,gt)	(g_type_check_instance_is_a ((GTypeInstance*) ip, gt))
#define G_TYPE_IS_VALUE(type)	(g_type_check_is_value_type (type))
#define G_TYPE_IS_VALUE_TYPE(type)	(g_type_check_is_value_type (type))
#define _G_TYPE_CHV(vl)	(g_type_check_value ((GValue*) vl))
#define G_IS_VALUE(value)	(G_TYPE_CHECK_VALUE (value))
#define _G_TYPE_CVH(vl,gt)	(g_type_check_value_holds ((GValue*) vl, gt))
#define G_SIGNAL_TYPE_STATIC_SCOPE	(G_TYPE_FLAG_RESERVED_ID_BIT)
#define G_ENUM_CLASS_TYPE(class)	(G_TYPE_FROM_CLASS (class))
#define G_FLAGS_CLASS_TYPE(class)	(G_TYPE_FROM_CLASS (class))
#define G_OBJECT_CLASS_TYPE(class)	(G_TYPE_FROM_CLASS (class))
#define G_OBJECT_TYPE(object)	(G_TYPE_FROM_INSTANCE (object))
#define G_PARAM_SPEC_TYPE(pspec)	(G_TYPE_FROM_INSTANCE (pspec))
#define G_TYPE_IS_BOXED(type)	(G_TYPE_FUNDAMENTAL (type) == G_TYPE_BOXED)
#define G_TYPE_IS_ENUM(type)	(G_TYPE_FUNDAMENTAL (type) == G_TYPE_ENUM)
#define G_TYPE_IS_FLAGS(type)	(G_TYPE_FUNDAMENTAL (type) == G_TYPE_FLAGS)
#define G_TYPE_IS_PARAM(type)	(G_TYPE_FUNDAMENTAL (type) == G_TYPE_PARAM)
#define G_TYPE_FUNDAMENTAL(type)	(g_type_fundamental (type))
#define G_TYPE_TYPE_MODULE	(g_type_module_get_type ())
#define G_OBJECT_TYPE_NAME(object)	(g_type_name (G_OBJECT_TYPE (object)))
#define G_VALUE_TYPE_NAME(value)	(g_type_name (G_VALUE_TYPE (value)))
#define G_TYPE_TYPE_PLUGIN	(g_type_plugin_get_type ())
#define G_TYPE_VALUE_ARRAY	(g_value_array_get_type ())	/* : DEPRECATED */
#define G_TYPE_VALUE	(g_value_get_type ())
#define G_TYPE_CHECK_VALUE(value)	(_G_TYPE_CHV ((value)))
#define G_SIGNAL_MATCH_MASK	0x3f
#define GOBJECT_VAR	extern
#define g_cclosure_marshal_BOOL__FLAGS	g_cclosure_marshal_BOOLEAN__FLAGS
#define G_TYPE_INVALID	G_TYPE_MAKE_FUNDAMENTAL (0)
#define G_TYPE_NONE	G_TYPE_MAKE_FUNDAMENTAL (1)
#define G_TYPE_INT64	G_TYPE_MAKE_FUNDAMENTAL (10)
#define G_TYPE_UINT64	G_TYPE_MAKE_FUNDAMENTAL (11)
#define G_TYPE_ENUM	G_TYPE_MAKE_FUNDAMENTAL (12)
#define G_TYPE_FLAGS	G_TYPE_MAKE_FUNDAMENTAL (13)
#define G_TYPE_FLOAT	G_TYPE_MAKE_FUNDAMENTAL (14)
#define G_TYPE_DOUBLE	G_TYPE_MAKE_FUNDAMENTAL (15)
#define G_TYPE_STRING	G_TYPE_MAKE_FUNDAMENTAL (16)
#define G_TYPE_POINTER	G_TYPE_MAKE_FUNDAMENTAL (17)
#define G_TYPE_BOXED	G_TYPE_MAKE_FUNDAMENTAL (18)
#define G_TYPE_PARAM	G_TYPE_MAKE_FUNDAMENTAL (19)
#define G_TYPE_INTERFACE	G_TYPE_MAKE_FUNDAMENTAL (2)
#define G_TYPE_OBJECT	G_TYPE_MAKE_FUNDAMENTAL (20)
#define G_TYPE_CHAR	G_TYPE_MAKE_FUNDAMENTAL (3)
#define G_TYPE_UCHAR	G_TYPE_MAKE_FUNDAMENTAL (4)
#define G_TYPE_BOOLEAN	G_TYPE_MAKE_FUNDAMENTAL (5)
#define G_TYPE_INT	G_TYPE_MAKE_FUNDAMENTAL (6)
#define G_TYPE_UINT	G_TYPE_MAKE_FUNDAMENTAL (7)
#define G_TYPE_LONG	G_TYPE_MAKE_FUNDAMENTAL (8)
#define G_TYPE_ULONG	G_TYPE_MAKE_FUNDAMENTAL (9)
#if __LSB_VERSION__ < 50
#define G_CLOSURE_N_NOTIFIERS(cl)	 \
	((cl)->meta_marshal + ((cl)->n_guards << 1L) + (cl)->n_fnotifiers + \
	(cl)->n_inotifiers)
#define G_DEFINE_ABSTRACT_TYPE_WITH_CODE(TN,t_n,T_P,_C_)	 \
	G_DEFINE_TYPE_EXTENDED (TN, t_n, T_P, G_TYPE_FLAG_ABSTRACT, _C_)
#define G_DEFINE_TYPE_EXTENDED(TypeName,type_name,TYPE_PARENT,flags,CODE)	 \
	static void type_name ##_init (TypeName *self); static void type_name \
	##_class_init (TypeName ##Class *klass); static gpointer type_name \
	##_parent_class = NULL; static void type_name ##_class_intern_init \
	(gpointer klass) { type_name ##_parent_class = \
	g_type_class_peek_parent (klass); type_name ##_class_init ((TypeName \
	##Class*) klass); } GType type_name ##_get_type (void) { static GType \
	g_define_type_id = 0; if (G_UNLIKELY (g_define_type_id == 0)) { static \
	const GTypeInfo g_define_type_info = { sizeof (TypeName ##Class), \
	(GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) \
	type_name ##_class_intern_init, (GClassFinalizeFunc) NULL, NULL, \
	sizeof (TypeName), 0, (GInstanceInitFunc) type_name ##_init, NULL }; \
	g_define_type_id = g_type_register_static (TYPE_PARENT, #TypeName, \
	&g_define_type_info, (GTypeFlags) flags); { CODE ; } } return \
	g_define_type_id; }
#define G_IMPLEMENT_INTERFACE(TYPE_IFACE,iface_init)	 \
	{ static const GInterfaceInfo g_implement_interface_info = { \
	(GInterfaceInitFunc) iface_init }; g_type_add_interface_static \
	(g_define_type_id, TYPE_IFACE, &g_implement_interface_info); }
#define G_TYPE_RESERVED_GLIB_FIRST	(21)
#define G_SIGNAL_FLAGS_MASK	0x7f
#endif				/* __LSB_VERSION__ < 5.0 */

#if __LSB_VERSION__ >= 41
#define G_TYPE_GTYPE	(g_gtype_get_type())
#define G_TYPE_HASH_TABLE	(g_hash_table_get_type ())
#define G_TYPE_INITIALLY_UNOWNED	(g_initially_unowned_get_type())
#endif				/* __LSB_VERSION__ >= 4.1 */

#if __LSB_VERSION__ >= 50
#define G_OBJECT_WARN_INVALID_PSPEC(object,pname,property_id,pspec)	 \
G_STMT_START { \
  GObject *_object = (GObject*) (object); \
  GParamSpec *_pspec = (GParamSpec*) (pspec); \
  guint _property_id = (property_id); \
  g_warning ("%s: invalid %s id %u for \"%s\" of type `%s' in `%s'", \
	     G_STRLOC, \
             (pname), \
             _property_id, \
             _pspec->name, \
             g_type_name (G_PARAM_SPEC_TYPE (_pspec)), \
             G_OBJECT_TYPE_NAME (_object)); \
} G_STMT_END
#define G_CLOSURE_N_NOTIFIERS(cl)	(((cl)->n_guards << 1L) + \
	(cl)->n_fnotifiers + (cl)->n_inotifiers)
#define G_TYPE_CLASS_GET_PRIVATE(klass,g_type,c_type)	((c_type*) g_type_class_get_private ((GTypeClass*) (klass), (g_type)))
#define G_REAL_CLOSURE(_c)	((GRealClosure *)G_STRUCT_MEMBER_P ((_c), -G_STRUCT_OFFSET (GRealClosure, closure)))
#define G_ATOMIC_ARRAY_GET_LOCKED(_array,_type)	((_type *)((_array)->data))
#define G_ATOMIC_ARRAY_DATA_SIZE(mem)	(*((gsize *) (mem) - 1))
#define G_TYPE_RESERVED_GLIB_FIRST	(22)
#define G_TYPE_ARRAY	(g_array_get_type ())
#define G_TYPE_BINDING_FLAGS	(g_binding_flags_get_type ())
#define G_TYPE_BINDING	(g_binding_get_type ())
#define G_TYPE_BYTES	(g_bytes_get_type ())
#define G_TYPE_BYTE_ARRAY	(g_byte_array_get_type ())
#define G_TYPE_DATE	(g_date_get_type ())
#define G_TYPE_DATE_TIME	(g_date_time_get_type ())
#define G_TYPE_ERROR	(g_error_get_type ())
#define G_TYPE_KEY_FILE	(g_key_file_get_type ())
#define G_TYPE_MAIN_CONTEXT	(g_main_context_get_type ())
#define G_TYPE_MAIN_LOOP	(g_main_loop_get_type ())
#define G_TYPE_MATCH_INFO	(g_match_info_get_type ())
#define G_TYPE_PARAM_GTYPE	(g_param_spec_types[21])
#define G_TYPE_PARAM_VARIANT	(g_param_spec_types[22])
#define G_PARAM_STATIC_STRINGS	(G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB)
#define G_TYPE_PTR_ARRAY	(g_ptr_array_get_type ())
#define G_TYPE_REGEX	(g_regex_get_type ())
#define G_TYPE_SOURCE	(g_source_get_type ())
#define G_INITIALLY_UNOWNED_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_INITIALLY_UNOWNED, GInitiallyUnownedClass))
#define G_IS_INITIALLY_UNOWNED_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_INITIALLY_UNOWNED))
#define G_BINDING(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_BINDING, GBinding))
#define G_INITIALLY_UNOWNED(object)	(G_TYPE_CHECK_INSTANCE_CAST ((object), G_TYPE_INITIALLY_UNOWNED, GInitiallyUnowned))
#define G_PARAM_SPEC_GTYPE(pspec)	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_GTYPE, GParamSpecGType))
#define G_PARAM_SPEC_VARIANT(pspec)	(G_TYPE_CHECK_INSTANCE_CAST ((pspec), G_TYPE_PARAM_VARIANT, GParamSpecVariant))
#define G_IS_BINDING(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_BINDING))
#define G_IS_INITIALLY_UNOWNED(object)	(G_TYPE_CHECK_INSTANCE_TYPE ((object), G_TYPE_INITIALLY_UNOWNED))
#define G_IS_PARAM_SPEC_GTYPE(pspec)	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_GTYPE))
#define G_IS_PARAM_SPEC_VARIANT(pspec)	(G_TYPE_CHECK_INSTANCE_TYPE ((pspec), G_TYPE_PARAM_VARIANT))
#define G_VALUE_HOLDS_GTYPE(value)	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_GTYPE))
#define G_VALUE_HOLDS_VARIANT(value)	(G_TYPE_CHECK_VALUE_TYPE ((value), G_TYPE_VARIANT))
#define G_INITIALLY_UNOWNED_GET_CLASS(object)	(G_TYPE_INSTANCE_GET_CLASS ((object), G_TYPE_INITIALLY_UNOWNED, GInitiallyUnownedClass))
#define G_TYPE_VARIANT_BUILDER	(g_variant_builder_get_type ())
#define G_TYPE_VARIANT_TYPE	(g_variant_type_get_gtype ())
#define G_SIGNAL_FLAGS_MASK	0x1ff
#define _G_DEFINE_BOXED_TYPE_BEGIN(TypeName,type_name,copy_func,free_func)	GType type_name ##_get_type (void) { static volatile gsize g_define_type_id__volatile = 0; if (g_once_init_enter (&g_define_type_id__volatile)) { GType g_define_type_id = g_boxed_type_register_static (g_intern_static_string (#TypeName), (GBoxedCopyFunc) copy_func, (GBoxedFreeFunc) free_func); {
#define _G_DEFINE_POINTER_TYPE_BEGIN(TypeName,type_name)	GType type_name ##_get_type (void) { static volatile gsize g_define_type_id__volatile = 0; if (g_once_init_enter (&g_define_type_id__volatile)) { GType g_define_type_id = g_pointer_type_register_static (g_intern_static_string (#TypeName)); {
#define g_cclosure_marshal_BOOL__BOXED_BOXED	g_cclosure_marshal_BOOLEAN__BOXED_BOXED
#define G_DEFINE_BOXED_TYPE(TypeName,type_name,copy_func,free_func)	G_DEFINE_BOXED_TYPE_WITH_CODE (TypeName, type_name, copy_func, free_func, {})
#define G_DEFINE_DYNAMIC_TYPE(TN,t_n,T_P)	G_DEFINE_DYNAMIC_TYPE_EXTENDED (TN, t_n, T_P, 0, {})
#define G_DEFINE_INTERFACE(TN,t_n,T_P)	G_DEFINE_INTERFACE_WITH_CODE(TN, t_n, T_P, ;)
#define G_DEFINE_POINTER_TYPE(TypeName,type_name)	G_DEFINE_POINTER_TYPE_WITH_CODE (TypeName, type_name, {})
#define g_signal_handlers_disconnect_by_data(instance,data)	g_signal_handlers_disconnect_matched ((instance), G_SIGNAL_MATCH_DATA, 0, 0, NULL, NULL, (data))
#define g_clear_object(object_ptr)	G_STMT_START { gpointer *_p = (gpointer) (object_ptr); gpointer _o; do _o = g_atomic_pointer_get (_p); while G_UNLIKELY (!g_atomic_pointer_compare_and_exchange (_p, _o, NULL)); if (_o) g_object_unref (_o); } G_STMT_END
#define G_ATOMIC_ARRAY_DO_TRANSACTION(_array,_type,_C_)	G_STMT_START { volatile gpointer *_datap = &(_array)->data; _type *transaction_data, *__check; __check = g_atomic_pointer_get (_datap); do { transaction_data = __check; {_C_;} __check = g_atomic_pointer_get (_datap); } while (transaction_data != __check); } G_STMT_END
#define G_TYPE_VARIANT	G_TYPE_MAKE_FUNDAMENTAL (21)
#define G_DEFINE_DYNAMIC_TYPE_EXTENDED(TypeName,type_name,TYPE_PARENT,flags,CODE)	\
static void     type_name##_init              (TypeName        *self); \
static void     type_name##_class_init        (TypeName##Class *klass); \
static void     type_name##_class_finalize    (TypeName##Class *klass); \
static gpointer type_name##_parent_class = NULL; \
static GType    type_name##_type_id = 0; \
static void     type_name##_class_intern_init (gpointer klass) \
{ \
  type_name##_parent_class = g_type_class_peek_parent (klass); \
  type_name##_class_init ((TypeName##Class*) klass); \
} \
GType \
type_name##_get_type (void) \
{ \
  return type_name##_type_id; \
} \
static void \
type_name##_register_type (GTypeModule *type_module) \
{ \
  GType g_define_type_id G_GNUC_UNUSED; \
  const GTypeInfo g_define_type_info = { \
    sizeof (TypeName##Class), \
    (GBaseInitFunc) NULL, \
    (GBaseFinalizeFunc) NULL, \
    (GClassInitFunc) type_name##_class_intern_init, \
    (GClassFinalizeFunc) type_name##_class_finalize, \
    NULL,   /* class_data */ \
    sizeof (TypeName), \
    0,      /* n_preallocs */ \
    (GInstanceInitFunc) type_name##_init, \
    NULL    /* value_table */ \
  }; \
  type_name##_type_id = g_type_module_register_type (type_module, \
                                                     TYPE_PARENT, \
                                                     #TypeName, \
                                                     &g_define_type_info, \
                                                     (GTypeFlags) flags); \
  g_define_type_id = type_name##_type_id; \
  { CODE ; } \
}
#define _G_DEFINE_INTERFACE_EXTENDED_BEGIN(TypeName,type_name,TYPE_PREREQ)	\
\
static void     type_name##_default_init        (TypeName##Interface *klass); \
\
GType \
type_name##_get_type (void) \
{ \
  static volatile gsize g_define_type_id__volatile = 0; \
  if (g_once_init_enter (&g_define_type_id__volatile))  \
    { \
      GType g_define_type_id = \
        g_type_register_static_simple (G_TYPE_INTERFACE, \
                                       g_intern_static_string (#TypeName), \
                                       sizeof (TypeName##Interface), \
                                       (GClassInitFunc)type_name##_default_init, \
                                       0, \
                                       (GInstanceInitFunc)NULL, \
                                       (GTypeFlags) 0); \
      if (TYPE_PREREQ) \
        g_type_interface_add_prerequisite (g_define_type_id, TYPE_PREREQ); \
      {				/* custom code follows */
#define _G_DEFINE_TYPE_EXTENDED_BEGIN(TypeName,type_name,TYPE_PARENT,flags)	\
\
static void     type_name##_init              (TypeName        *self); \
static void     type_name##_class_init        (TypeName##Class *klass); \
static gpointer type_name##_parent_class = NULL; \
static void     type_name##_class_intern_init (gpointer klass) \
{ \
  type_name##_parent_class = g_type_class_peek_parent (klass); \
  type_name##_class_init ((TypeName##Class*) klass); \
} \
\
GType \
type_name##_get_type (void) \
{ \
  static volatile gsize g_define_type_id__volatile = 0; \
  if (g_once_init_enter (&g_define_type_id__volatile))  \
    { \
      GType g_define_type_id = \
        g_type_register_static_simple (TYPE_PARENT, \
                                       g_intern_static_string (#TypeName), \
                                       sizeof (TypeName##Class), \
                                       (GClassInitFunc) type_name##_class_intern_init, \
                                       sizeof (TypeName), \
                                       (GInstanceInitFunc) type_name##_init, \
                                       (GTypeFlags) flags); \
      { /* custom code follows */;
#define G_DEFINE_BOXED_TYPE_WITH_CODE(TypeName,type_name,copy_func,free_func,_C_)	_G_DEFINE_BOXED_TYPE_BEGIN (TypeName, type_name, copy_func, free_func) {_C_;} _G_DEFINE_TYPE_EXTENDED_END()
#define G_DEFINE_INTERFACE_WITH_CODE(TN,t_n,T_P,_C_)	_G_DEFINE_INTERFACE_EXTENDED_BEGIN(TN, t_n, T_P) {_C_;} _G_DEFINE_INTERFACE_EXTENDED_END()
#define G_DEFINE_POINTER_TYPE_WITH_CODE(TypeName,type_name,_C_)	_G_DEFINE_POINTER_TYPE_BEGIN (TypeName, type_name) {_C_;} _G_DEFINE_TYPE_EXTENDED_END()
#define G_DEFINE_ABSTRACT_TYPE_WITH_CODE(TN,t_n,T_P,_C_)	_G_DEFINE_TYPE_EXTENDED_BEGIN (TN, t_n, T_P, G_TYPE_FLAG_ABSTRACT) {_C_;} _G_DEFINE_TYPE_EXTENDED_END()
#define G_DEFINE_TYPE_EXTENDED(TN,t_n,T_P,_f_,_C_)	_G_DEFINE_TYPE_EXTENDED_BEGIN (TN, t_n, T_P, _f_) {_C_;} _G_DEFINE_TYPE_EXTENDED_END()
#define G_VALUE_INIT	{ 0, { { 0 } } }
#define G_IMPLEMENT_INTERFACE_DYNAMIC(TYPE_IFACE,iface_init)	{ const GInterfaceInfo g_implement_interface_info = { (GInterfaceInitFunc) iface_init, NULL, NULL }; g_type_module_add_interface (type_module, g_define_type_id, TYPE_IFACE, &g_implement_interface_info); }
#define G_IMPLEMENT_INTERFACE(TYPE_IFACE,iface_init)	{ \
  const GInterfaceInfo g_implement_interface_info = { \
    (GInterfaceInitFunc) iface_init, NULL, NULL \
  }; \
  g_type_add_interface_static (g_define_type_id, TYPE_IFACE, &g_implement_interface_info); \
}
#define _G_DEFINE_INTERFACE_EXTENDED_END()	} g_once_init_leave (&g_define_type_id__volatile, g_define_type_id); } return g_define_type_id__volatile; }
#define _G_DEFINE_TYPE_EXTENDED_END()	} g_once_init_leave (&g_define_type_id__volatile, g_define_type_id); } return g_define_type_id__volatile; }
#endif				/* __LSB_VERSION__ >= 5.0 */




/* Pre Header Section for glib-2.0/glib-object.h*/
    typedef gulong GType;

    typedef struct _GTypeClass GTypeClass;

    typedef struct _GTypeInstance GTypeInstance;

    typedef struct _GValue GValue;

    typedef enum {
	G_PARAM_READABLE = 1,
	G_PARAM_WRITABLE = 2,
	G_PARAM_CONSTRUCT = 4,
	G_PARAM_CONSTRUCT_ONLY = 8,
	G_PARAM_LAX_VALIDATION = 16,
	G_PARAM_STATIC_NAME = 32,
	G_PARAM_PRIVATE = G_PARAM_STATIC_NAME,
	G_PARAM_STATIC_NICK = 64,
	G_PARAM_STATIC_BLURB = 128,
#if __LSB_VERSION__ >= 50
	G_PARAM_DEPRECATED = 1 << 31
#endif				/* __LSB_VERSION__ >= 50 */
    } GParamFlags;

    typedef struct _GParamSpec GParamSpec;

    typedef struct _GClosure GClosure;

    typedef void (*GClosureNotify) (gpointer data, GClosure * closure);

    typedef struct _GClosureNotifyData GClosureNotifyData;

    typedef gboolean(*GTypeClassCacheFunc) (gpointer, GTypeClass *);

    struct _GTypeClass {
	GType g_type;
    };

    struct _GTypeInstance {
	GTypeClass *g_class;
    };

    struct _GValue {
	GType g_type;
	union {
	    gint v_int;
	    guint v_uint;
	    glong v_long;
	    gulong v_ulong;
	    gint64 v_int64;
	    guint64 v_uint64;
	    gfloat v_float;
	    gdouble v_double;
	    gpointer v_pointer;
	} data[2];
    };

    struct _GParamSpec {
	GTypeInstance g_type_instance;
	gchar *name;
	GParamFlags flags;
	GType value_type;
	GType owner_type;
	gchar *_nick;
	gchar *_blurb;
	GData *qdata;
	guint ref_count;
	guint param_id;
    };

    struct _GClosure {
	volatile guint ref_count:15;
#if __LSB_VERSION__ < 50
	volatile guint meta_marshal:1;
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	volatile guint meta_marshal_nouse:1;
#endif				/* __LSB_VERSION__ >= 50 */
	volatile guint n_guards:1;
	volatile guint n_fnotifiers:2;
	volatile guint n_inotifiers:8;
	volatile guint in_inotify:1;
	volatile guint floating:1;
	volatile guint derivative_flag:1;
	volatile guint in_marshal:1;
	volatile guint is_invalid:1;
	void (*marshal) (GClosure * closure, GValue * return_value,
			 guint n_param_values, const GValue * param_values,
			 gpointer invocation_hint, gpointer marshal_data);
	gpointer data;
	GClosureNotifyData *notifiers;
    };

    struct _GClosureNotifyData {
	gpointer data;
	GClosureNotify notify;
    };


/* Default Header Section for glib-2.0/glib-object.h*/
    typedef struct _GObject GObject;

    typedef struct _GObjectConstructParam GObjectConstructParam;

    typedef struct _GObjectClass GObjectClass;

    typedef void (*GTypeInterfaceCheckFunc) (gpointer, gpointer);

    typedef struct _GValueArray GValueArray;

    typedef struct _GEnumValue GEnumValue;

    typedef struct _GEnumClass GEnumClass;

    typedef struct _GParamSpecPool GParamSpecPool;

    typedef enum {
	G_TYPE_DEBUG_NONE = 0,
	G_TYPE_DEBUG_OBJECTS = 1,
	G_TYPE_DEBUG_SIGNALS = 2,
	G_TYPE_DEBUG_MASK = 3
    } GTypeDebugFlags;

    typedef struct _GTypePlugin GTypePlugin;

    typedef enum {
	G_SIGNAL_MATCH_ID = 1,
	G_SIGNAL_MATCH_DETAIL = 2,
	G_SIGNAL_MATCH_CLOSURE = 4,
	G_SIGNAL_MATCH_FUNC = 8,
	G_SIGNAL_MATCH_DATA = 16,
	G_SIGNAL_MATCH_UNBLOCKED = 32
    } GSignalMatchType;

    typedef struct _GFlagsValue GFlagsValue;

    typedef void (*GClosureMarshal) (GClosure * closure,
				     GValue * return_value,
				     guint n_param_values,
				     const GValue * param_values,
				     gpointer invocation_hint,
				     gpointer marshal_data);

    typedef void (*GCallback) (void);

    typedef struct _GFlagsClass GFlagsClass;

    typedef enum {
	G_SIGNAL_RUN_FIRST = 1,
	G_SIGNAL_RUN_LAST = 2,
	G_SIGNAL_RUN_CLEANUP = 4,
	G_SIGNAL_NO_RECURSE = 8,
	G_SIGNAL_DETAILED = 16,
	G_SIGNAL_ACTION = 32,
	G_SIGNAL_NO_HOOKS = 64,
#if __LSB_VERSION__ >= 50
	G_SIGNAL_MUST_COLLECT = 1 << 7,
	G_SIGNAL_DEPRECATED = 1 << 8
#endif				/* __LSB_VERSION__ >= 50 */
    } GSignalFlags;

    typedef struct _GSignalInvocationHint GSignalInvocationHint;

    typedef void (*GWeakNotify) (gpointer data,
				 GObject * where_the_object_was);

    typedef void (*GBaseInitFunc) (gpointer);

    typedef void (*GBaseFinalizeFunc) (gpointer);

    typedef void (*GClassInitFunc) (gpointer g_class, gpointer class_data);

    typedef void (*GClassFinalizeFunc) (gpointer g_class,
					gpointer class_data);

    typedef void (*GInstanceInitFunc) (GTypeInstance * instance,
				       gpointer g_class);

    typedef union _GTypeCValue GTypeCValue;

    typedef struct _GTypeValueTable GTypeValueTable;

    typedef struct _GTypeInfo GTypeInfo;

    typedef enum {
	G_TYPE_FLAG_ABSTRACT = 16,
	G_TYPE_FLAG_VALUE_ABSTRACT = 32
    } GTypeFlags;

    typedef struct _GTypeModule GTypeModule;

    typedef void (*GInterfaceInitFunc) (gpointer g_iface,
					gpointer iface_data);

    typedef void (*GInterfaceFinalizeFunc) (gpointer g_iface,
					    gpointer iface_data);

    typedef struct _GInterfaceInfo GInterfaceInfo;

    typedef gboolean(*GSignalAccumulator) (GSignalInvocationHint * ihint,
					   GValue * return_accu,
					   const GValue * handler_return,
					   gpointer data);

    typedef GClosureMarshal GSignalCMarshaller;

    typedef enum {
	G_CONNECT_AFTER = 1,
	G_CONNECT_SWAPPED = 2
    } GConnectFlags;

    typedef enum {
	G_TYPE_FLAG_CLASSED = 1,
	G_TYPE_FLAG_INSTANTIATABLE = 2,
	G_TYPE_FLAG_DERIVABLE = 4,
	G_TYPE_FLAG_DEEP_DERIVABLE = 8
    } GTypeFundamentalFlags;

    typedef struct _GTypeFundamentalInfo GTypeFundamentalInfo;

    typedef struct _GTypeQuery GTypeQuery;

    typedef gboolean(*GSignalEmissionHook) (GSignalInvocationHint * ihint,
					    guint n_param_values,
					    const GValue * param_values,
					    gpointer data);

    typedef void (*GValueTransform) (const GValue * src_value,
				     GValue * dest_value);

    typedef struct _GParameter GParameter;

    typedef struct _GParamSpecTypeInfo GParamSpecTypeInfo;

    typedef gpointer(*GBoxedCopyFunc) (gpointer);

    typedef void (*GBoxedFreeFunc) (gpointer);

    typedef struct _GSignalQuery GSignalQuery;

    typedef struct _GTypeInterface GTypeInterface;

    typedef void (*GTypePluginCompleteInterfaceInfo) (GTypePlugin * plugin,
						      GType instance_type,
						      GType interface_type,
						      GInterfaceInfo *
						      info);

    typedef struct _GParamSpecObject GParamSpecObject;

    typedef void (*GTypePluginUnuse) (GTypePlugin * plugin);

    typedef void (*GTypePluginUse) (GTypePlugin * plugin);

    typedef void (*GTypePluginCompleteTypeInfo) (GTypePlugin * plugin,
						 GType gtype,
						 GTypeInfo * info,
						 GTypeValueTable *
						 value_table);

    typedef struct _GTypePluginClass GTypePluginClass;

    typedef struct _GCClosure GCClosure;

    typedef struct _GParamSpecUnichar GParamSpecUnichar;

    typedef struct _GParamSpecUInt64 GParamSpecUInt64;

    typedef struct _GParamSpecBoxed GParamSpecBoxed;

    typedef struct _GParamSpecOverride GParamSpecOverride;

    typedef struct _GParamSpecClass GParamSpecClass;

    typedef struct _GParamSpecLong GParamSpecLong;

    typedef struct _GParamSpecEnum GParamSpecEnum;

    typedef struct _GParamSpecFloat GParamSpecFloat;

    typedef struct _GParamSpecString GParamSpecString;

    typedef struct _GParamSpecDouble GParamSpecDouble;

    typedef struct _GParamSpecParam GParamSpecParam;

    typedef struct _GParamSpecValueArray GParamSpecValueArray;

    typedef struct _GParamSpecFlags GParamSpecFlags;

    typedef struct _GParamSpecInt64 GParamSpecInt64;

    typedef struct _GParamSpecPointer GParamSpecPointer;

    typedef struct _GParamSpecInt GParamSpecInt;

    typedef struct _GTypeModuleClass GTypeModuleClass;

    typedef struct _GParamSpecUInt GParamSpecUInt;

    typedef struct _GParamSpecUChar GParamSpecUChar;

    typedef struct _GParamSpecULong GParamSpecULong;

    typedef struct _GParamSpecChar GParamSpecChar;

    typedef struct _GParamSpecBoolean GParamSpecBoolean;

    typedef void (*GObjectFinalizeFunc) (GObject * object);

    typedef void (*GObjectGetPropertyFunc) (GObject * object,
					    guint property_id,
					    GValue * value,
					    GParamSpec * pspec);

    typedef void (*GObjectSetPropertyFunc) (GObject * object,
					    guint property_id,
					    const GValue * value,
					    GParamSpec * pspec);

    typedef gchar *gchararray;

    typedef gchar **GStrv;

#if __LSB_VERSION__ >= 40
    typedef void (*GToggleNotify) (gpointer data, GObject * object,
				   gboolean is_last_ref);

#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 50
    typedef struct _GBinding GBinding;

    typedef gboolean(*GBindingTransformFunc) (GBinding * binding,
					      const GValue * source_value,
					      GValue * target_value,
					      gpointer user_data);

    typedef enum {
	G_BINDING_DEFAULT = 0,
	G_BINDING_BIDIRECTIONAL = 1 << 0,
	G_BINDING_SYNC_CREATE = 1 << 1,
	G_BINDING_INVERT_BOOLEAN = 1 << 2
    } GBindingFlags;

    typedef struct _GObject GInitiallyUnowned;

    typedef struct _GObjectClass GInitiallyUnownedClass;

    typedef struct _GParamSpecGType GParamSpecGType;

    typedef struct _GParamSpecVariant GParamSpecVariant;

    typedef void (*GVaClosureMarshal) (GClosure * closure,
				       GValue * return_value,
				       gpointer instance, va_list * args,
				       gpointer marshal_data, int n_params,
				       GType * param_types);

    typedef struct _GAtomicArray GAtomicArray;

    typedef struct _GRealClosure GRealClosure;

    typedef GVaClosureMarshal GSignalCVaMarshaller;

#endif				/* __LSB_VERSION__ >= 5.0 */

#if __LSB_VERSION__ >= 50
    struct GWeakRef {
	union {
	    void *p;
	} priv;
    };

    struct _GParamSpecGType {
	GParamSpec parent_instance;
	GType is_a_type;
    };

    struct _GParamSpecVariant {
	GParamSpec parent_instance;
	GVariantType *type;
	GVariant *default_value;
	gpointer padding[4];
    };

    struct _GAtomicArray {
	volatile gpointer data;
    };

    struct _GRealClosure {
	GClosureMarshal meta_marshal;
	gpointer meta_marshal_data;
	GVaClosureMarshal va_meta_marshal;
	GVaClosureMarshal va_marshal;
	GClosure closure;
    };

#endif				/* __LSB_VERSION__ >= 5.0 */

    struct _GObject {
	GTypeInstance g_type_instance;
	volatile guint ref_count;
	GData *qdata;
    };

    struct _GObjectConstructParam {
	GParamSpec *pspec;
	GValue *value;
    };

    struct _GObjectClass {
	GTypeClass g_type_class;
	GSList *construct_properties;
	GObject *(*constructor) (GType type, guint n_construct_properties,
				 GObjectConstructParam *
				 construct_properties);
	void (*set_property) (GObject * object, guint property_id,
			      const GValue * value, GParamSpec * pspec);
	void (*get_property) (GObject * object, guint property_id,
			      GValue * value, GParamSpec * pspec);
	void (*dispose) (GObject * object);
	void (*finalize) (GObject * object);
	void (*dispatch_properties_changed) (GObject * object,
					     guint n_pspecs,
					     GParamSpec * *pspecs);
	void (*notify) (GObject * object, GParamSpec * pspec);
#if __LSB_VERSION__ < 50
	gpointer pdummy[8];
#endif				/* __LSB_VERSION__ < 50 */
#if __LSB_VERSION__ >= 50
	void (*constructed) (GObject * object);
	gsize flags;
	gpointer pdummy[6];
#endif				/* __LSB_VERSION__ >= 50 */
    };

    struct _GValueArray {
	guint n_values;
	GValue *values;
	guint n_prealloced;
    };

    struct _GEnumValue {
	gint value;
	const gchar *value_name;
	const gchar *value_nick;
    };

    struct _GEnumClass {
	GTypeClass g_type_class;
	gint minimum;
	gint maximum;
	guint n_values;
	GEnumValue *values;
    };

    struct _GFlagsValue {
	guint value;
	const gchar *value_name;
	const gchar *value_nick;
    };

    struct _GFlagsClass {
	GTypeClass g_type_class;
	guint mask;
	guint n_values;
	GFlagsValue *values;
    };

    struct _GSignalInvocationHint {
	guint signal_id;
	GQuark detail;
	GSignalFlags run_type;
    };

    union _GTypeCValue {
	gint v_int;
	glong v_long;
	gint64 v_int64;
	gdouble v_double;
	gpointer v_pointer;
    };

    struct _GTypeValueTable {
	void (*value_init) (GValue * value);
	void (*value_free) (GValue * value);
	void (*value_copy) (const GValue * src_value, GValue * dest_value);
	 gpointer(*value_peek_pointer) (const GValue * value);
	gchar *collect_format;
	gchar *(*collect_value) (GValue * value, guint n_collect_values,
				 GTypeCValue * collect_values,
				 guint collect_flags);
	gchar *lcopy_format;
	gchar *(*lcopy_value) (const GValue * value,
			       guint n_collect_values,
			       GTypeCValue * collect_values,
			       guint collect_flags);
    };

    struct _GTypeInfo {
	guint16 class_size;
	GBaseInitFunc base_init;
	GBaseFinalizeFunc base_finalize;
	GClassInitFunc class_init;
	GClassFinalizeFunc class_finalize;
	gconstpointer class_data;
	guint16 instance_size;
	guint16 n_preallocs;
	GInstanceInitFunc instance_init;
	const GTypeValueTable *value_table;
    };

    struct _GTypeModule {
	GObject parent_instance;
	guint use_count;
	GSList *type_infos;
	GSList *interface_infos;
	gchar *name;
    };

    struct _GInterfaceInfo {
	GInterfaceInitFunc interface_init;
	GInterfaceFinalizeFunc interface_finalize;
	gpointer interface_data;
    };

    struct _GTypeFundamentalInfo {
	GTypeFundamentalFlags type_flags;
    };

    struct _GTypeQuery {
	GType type;
	const gchar *type_name;
	guint class_size;
	guint instance_size;
    };

    struct _GParameter {
	const gchar *name;
	GValue value;
    };

    struct _GParamSpecTypeInfo {
	guint16 instance_size;
	guint16 n_preallocs;
	void (*instance_init) (GParamSpec * pspec);
	GType value_type;
	void (*finalize) (GParamSpec * pspec);
	void (*value_set_default) (GParamSpec * pspec, GValue * value);
	 gboolean(*value_validate) (GParamSpec * pspec, GValue * value);
	 gint(*values_cmp) (GParamSpec * pspec, const GValue * value1,
			    const GValue * value2);
    };

    struct _GSignalQuery {
	guint signal_id;
	const gchar *signal_name;
	GType itype;
	GSignalFlags signal_flags;
	GType return_type;
	guint n_params;
	const GType *param_types;
    };

    struct _GTypeInterface {
	GType g_type;
	GType g_instance_type;
    };

    struct _GParamSpecObject {
	GParamSpec parent_instance;
    };

    struct _GTypePluginClass {
	GTypeInterface base_iface;
	GTypePluginUse use_plugin;
	GTypePluginUnuse unuse_plugin;
	GTypePluginCompleteTypeInfo complete_type_info;
	GTypePluginCompleteInterfaceInfo complete_interface_info;
    };

    struct _GCClosure {
	GClosure closure;
	gpointer callback;
    };

    struct _GParamSpecUnichar {
	GParamSpec parent_instance;
	gunichar default_value;
    };

    struct _GParamSpecUInt64 {
	GParamSpec parent_instance;
	guint64 minimum;
	guint64 maximum;
	guint64 default_value;
    };

    struct _GParamSpecBoxed {
	GParamSpec parent_instance;
    };

    struct _GParamSpecOverride {
	GParamSpec parent_instance;
	GParamSpec *overridden;
    };

    struct _GParamSpecClass {
	GTypeClass g_type_class;
	GType value_type;
	void (*finalize) (GParamSpec * pspec);
	void (*value_set_default) (GParamSpec * pspec, GValue * value);
	 gboolean(*value_validate) (GParamSpec * pspec, GValue * value);
	 gint(*values_cmp) (GParamSpec * pspec, const GValue * value1,
			    const GValue * value2);
	gpointer dummy[4];
    };

    struct _GParamSpecLong {
	GParamSpec parent_instance;
	glong minimum;
	glong maximum;
	glong default_value;
    };

    struct _GParamSpecEnum {
	GParamSpec parent_instance;
	GEnumClass *enum_class;
	gint default_value;
    };

    struct _GParamSpecFloat {
	GParamSpec parent_instance;
	gfloat minimum;
	gfloat maximum;
	gfloat default_value;
	gfloat epsilon;
    };

    struct _GParamSpecString {
	GParamSpec parent_instance;
	gchar *default_value;
	gchar *cset_first;
	gchar *cset_nth;
	gchar substitutor;
	guint null_fold_if_empty:1;
	guint ensure_non_null:1;
    };

    struct _GParamSpecDouble {
	GParamSpec parent_instance;
	gdouble minimum;
	gdouble maximum;
	gdouble default_value;
	gdouble epsilon;
    };

    struct _GParamSpecParam {
	GParamSpec parent_instance;
    };

    struct _GParamSpecValueArray {
	GParamSpec parent_instance;
	GParamSpec *element_spec;
	guint fixed_n_elements;
    };

    struct _GParamSpecFlags {
	GParamSpec parent_instance;
	GFlagsClass *flags_class;
	guint default_value;
    };

    struct _GParamSpecInt64 {
	GParamSpec parent_instance;
	gint64 minimum;
	gint64 maximum;
	gint64 default_value;
    };

    struct _GParamSpecPointer {
	GParamSpec parent_instance;
    };

    struct _GParamSpecInt {
	GParamSpec parent_instance;
	gint minimum;
	gint maximum;
	gint default_value;
    };

    struct _GTypeModuleClass {
	GObjectClass parent_class;
	 gboolean(*load) (GTypeModule * module);
	void (*unload) (GTypeModule * module);
	void (*reserved1) (void);
	void (*reserved2) (void);
	void (*reserved3) (void);
	void (*reserved4) (void);
    };

    struct _GParamSpecUInt {
	GParamSpec parent_instance;
	guint minimum;
	guint maximum;
	guint default_value;
    };

    struct _GParamSpecUChar {
	GParamSpec parent_instance;
	guint8 minimum;
	guint8 maximum;
	guint8 default_value;
    };

    struct _GParamSpecULong {
	GParamSpec parent_instance;
	gulong minimum;
	gulong maximum;
	gulong default_value;
    };

    struct _GParamSpecChar {
	GParamSpec parent_instance;
	gint8 minimum;
	gint8 maximum;
	gint8 default_value;
    };

    struct _GParamSpecBoolean {
	GParamSpec parent_instance;
	gboolean default_value;
    };


/* Function prototypes */

    extern gpointer g_boxed_copy(GType boxed_type,
				 gconstpointer src_boxed);
    extern void g_boxed_free(GType boxed_type, gpointer boxed);
    extern GType g_boxed_type_register_static(const gchar * name,
					      GBoxedCopyFunc boxed_copy,
					      GBoxedFreeFunc boxed_free);
    extern void g_cclosure_marshal_BOOLEAN__FLAGS(GClosure *, GValue *,
						  guint, const GValue *,
						  gpointer, gpointer);
    extern void g_cclosure_marshal_STRING__OBJECT_POINTER(GClosure *,
							  GValue *, guint,
							  const GValue *,
							  gpointer,
							  gpointer);
    extern void g_cclosure_marshal_VOID__BOOLEAN(GClosure * closure,
						 GValue * return_value,
						 guint n_param_values,
						 const GValue *
						 param_value,
						 gpointer invocation_hint,
						 gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__BOXED(GClosure * closure,
					       GValue * return_value,
					       guint n_param_values,
					       const GValue * param_value,
					       gpointer invocation_hint,
					       gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__CHAR(GClosure * closure,
					      GValue * return_value,
					      guint n_param_values,
					      const GValue * param_value,
					      gpointer invocation_hint,
					      gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__DOUBLE(GClosure * closure,
						GValue * return_value,
						guint n_param_values,
						const GValue * param_value,
						gpointer invocation_hint,
						gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__ENUM(GClosure * closure,
					      GValue * return_value,
					      guint n_param_values,
					      const GValue * param_value,
					      gpointer invocation_hint,
					      gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__FLAGS(GClosure * closure,
					       GValue * return_value,
					       guint n_param_values,
					       const GValue * param_value,
					       gpointer invocation_hint,
					       gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__FLOAT(GClosure * closure,
					       GValue * return_value,
					       guint n_param_values,
					       const GValue * param_value,
					       gpointer invocation_hint,
					       gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__INT(GClosure * closure,
					     GValue * return_value,
					     guint n_param_values,
					     const GValue * param_value,
					     gpointer invocation_hint,
					     gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__LONG(GClosure * closure,
					      GValue * return_value,
					      guint n_param_values,
					      const GValue * param_value,
					      gpointer invocation_hint,
					      gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__OBJECT(GClosure * closure,
						GValue * return_value,
						guint n_param_values,
						const GValue * param_value,
						gpointer invocation_hint,
						gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__PARAM(GClosure * closure,
					       GValue * return_value,
					       guint n_param_values,
					       const GValue * param_value,
					       gpointer invocation_hint,
					       gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__POINTER(GClosure * closure,
						 GValue * return_value,
						 guint n_param_values,
						 const GValue *
						 param_value,
						 gpointer invocation_hint,
						 gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__STRING(GClosure * closure,
						GValue * return_value,
						guint n_param_values,
						const GValue * param_value,
						gpointer invocation_hint,
						gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__UCHAR(GClosure * closure,
					       GValue * return_value,
					       guint n_param_values,
					       const GValue * param_value,
					       gpointer invocation_hint,
					       gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__UINT(GClosure * closure,
					      GValue * return_value,
					      guint n_param_values,
					      const GValue * param_value,
					      gpointer invocation_hint,
					      gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__UINT_POINTER(GClosure * closure,
						      GValue *
						      return_value,
						      guint n_param_values,
						      const GValue *
						      param_value,
						      gpointer
						      invocation_hint,
						      gpointer
						      marshal_data);
    extern void g_cclosure_marshal_VOID__ULONG(GClosure * closure,
					       GValue * return_value,
					       guint n_param_values,
					       const GValue * param_value,
					       gpointer invocation_hint,
					       gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__VOID(GClosure * closure,
					      GValue * return_value,
					      guint n_param_values,
					      const GValue * param_value,
					      gpointer invocation_hint,
					      gpointer marshal_data);
    extern GClosure *g_cclosure_new(GCallback callback_func,
				    gpointer user_data,
				    GClosureNotify destroy_data);
    extern GClosure *g_cclosure_new_object(GCallback callback_func,
					   GObject * object);
    extern GClosure *g_cclosure_new_object_swap(GCallback callback_func,
						GObject * object);
    extern GClosure *g_cclosure_new_swap(GCallback callback_func,
					 gpointer user_data,
					 GClosureNotify destroy_data);
    extern void g_closure_add_finalize_notifier(GClosure * closure,
						gpointer notify_data,
						GClosureNotify
						notify_func);
    extern void g_closure_add_invalidate_notifier(GClosure * closure,
						  gpointer notify_data,
						  GClosureNotify
						  notify_func);
    extern void g_closure_add_marshal_guards(GClosure * closure,
					     gpointer pre_marshal_data,
					     GClosureNotify
					     pre_marshal_notify,
					     gpointer post_marshal_data,
					     GClosureNotify
					     post_marshal_notify);
    extern GType g_closure_get_type(void);
    extern void g_closure_invalidate(GClosure * closure);
    extern void g_closure_invoke(GClosure * closure, GValue * return_value,
				 guint n_param_values,
				 const GValue * param_values,
				 gpointer invocation_hint);
    extern GClosure *g_closure_new_object(guint sizeof_closure,
					  GObject * object);
    extern GClosure *g_closure_new_simple(guint sizeof_closure,
					  gpointer data);
    extern GClosure *g_closure_ref(GClosure * closure);
    extern void g_closure_remove_finalize_notifier(GClosure * closure,
						   gpointer notify_data,
						   GClosureNotify
						   notify_func);
    extern void g_closure_remove_invalidate_notifier(GClosure * closure,
						     gpointer notify_data,
						     GClosureNotify
						     notify_func);
    extern void g_closure_set_marshal(GClosure * closure,
				      GClosureMarshal marshal);
    extern void g_closure_set_meta_marshal(GClosure * closure,
					   gpointer marshal_data,
					   GClosureMarshal meta_marshal);
    extern void g_closure_sink(GClosure * closure);
    extern void g_closure_unref(GClosure * closure);
    extern void g_enum_complete_type_info(GType g_enum_type,
					  GTypeInfo * info,
					  const GEnumValue * const_values);
    extern GEnumValue *g_enum_get_value(GEnumClass * enum_class,
					gint value);
    extern GEnumValue *g_enum_get_value_by_name(GEnumClass * enum_class,
						const gchar * name);
    extern GEnumValue *g_enum_get_value_by_nick(GEnumClass * enum_class,
						const gchar * nick);
    extern GType g_enum_register_static(const gchar * name,
					const GEnumValue *
					const_static_values);
    extern void g_flags_complete_type_info(GType g_flags_type,
					   GTypeInfo * info,
					   const GFlagsValue *
					   const_values);
    extern GFlagsValue *g_flags_get_first_value(GFlagsClass * flags_class,
						guint value);
    extern GFlagsValue *g_flags_get_value_by_name(GFlagsClass *
						  flags_class,
						  const gchar * name);
    extern GFlagsValue *g_flags_get_value_by_nick(GFlagsClass *
						  flags_class,
						  const gchar * nick);
    extern GType g_flags_register_static(const gchar * name,
					 const GFlagsValue *
					 const_static_values);
    extern GType g_gstring_get_type(void);
    extern GType g_io_channel_get_type(void);
    extern GType g_io_condition_get_type(void);
    extern void g_object_add_weak_pointer(GObject * object,
					  gpointer *
					  weak_pointer_location);
    extern GParamSpec *g_object_class_find_property(GObjectClass * oclass,
						    const gchar *
						    property_name);
    extern void g_object_class_install_property(GObjectClass * oclass,
						guint property_id,
						GParamSpec * pspec);
    extern GParamSpec **g_object_class_list_properties(GObjectClass *
						       oclass,
						       guint *
						       n_properties);
    extern void g_object_class_override_property(GObjectClass * oclass,
						 guint property_id,
						 const gchar * name);
    extern gpointer g_object_connect(gpointer object,
				     const gchar * signal_spec, ...);
    extern void g_object_disconnect(gpointer object,
				    const gchar * signal_spec, ...);
    extern void g_object_freeze_notify(GObject * object);
    extern void g_object_get(gpointer object,
			     const gchar * first_property_name, ...);
    extern void *g_object_get_data(GObject * object, const gchar * key);
    extern void g_object_get_property(GObject * object,
				      const gchar * property_name,
				      GValue * value);
    extern void *g_object_get_qdata(GObject * object, GQuark quark);
    extern void g_object_get_valist(GObject * object,
				    const gchar * first_property_name,
				    va_list var_args);
    extern GParamSpec *g_object_interface_find_property(gpointer g_iface,
							const gchar *
							property_name);
    extern void g_object_interface_install_property(gpointer g_iface,
						    GParamSpec * pspec);
    extern GParamSpec **g_object_interface_list_properties(gpointer
							   g_iface,
							   guint *
							   n_properties_p);
    extern gpointer g_object_new(GType object_type,
				 const gchar * first_property_name, ...);
    extern GObject *g_object_new_valist(GType object_type,
					const gchar * first_property_name,
					va_list var_args);
    extern gpointer g_object_newv(GType object_type, guint n_parameters,
				  GParameter * parameters);
    extern void g_object_notify(GObject * object,
				const gchar * property_name);
    extern gpointer g_object_ref(gpointer object);
    extern void g_object_remove_weak_pointer(GObject * object,
					     gpointer *
					     weak_pointer_location);
    extern void g_object_run_dispose(GObject * object);
    extern void g_object_set(gpointer object,
			     const gchar * first_property_name, ...);
    extern void g_object_set_data(GObject * object, const gchar * key,
				  gpointer data);
    extern void g_object_set_data_full(GObject * object, const gchar * key,
				       gpointer data,
				       GDestroyNotify destroy);
    extern void g_object_set_property(GObject * object,
				      const gchar * property_name,
				      const GValue * value);
    extern void g_object_set_qdata(GObject * object, GQuark quark,
				   gpointer data);
    extern void g_object_set_qdata_full(GObject * object, GQuark quark,
					gpointer data,
					GDestroyNotify destroy);
    extern void g_object_set_valist(GObject * object,
				    const gchar * first_property_name,
				    va_list var_args);
    extern void *g_object_steal_data(GObject * object, const gchar * key);
    extern void *g_object_steal_qdata(GObject * object, GQuark quark);
    extern void g_object_thaw_notify(GObject * object);
    extern void g_object_unref(gpointer object);
    extern void g_object_watch_closure(GObject * object,
				       GClosure * closure);
    extern void g_object_weak_ref(GObject * object, GWeakNotify notify,
				  gpointer data);
    extern void g_object_weak_unref(GObject * object, GWeakNotify notify,
				    gpointer data);
    extern GParamSpec *g_param_spec_boolean(const gchar * name,
					    const gchar * nick,
					    const gchar * blurb,
					    gboolean default_value,
					    GParamFlags flags);
    extern GParamSpec *g_param_spec_boxed(const gchar * name,
					  const gchar * nick,
					  const gchar * blurb,
					  GType boxed_type,
					  GParamFlags flags);
    extern GParamSpec *g_param_spec_char(const gchar * name,
					 const gchar * nick,
					 const gchar * blurb,
					 gint8 minimum, gint8 maximum,
					 gint8 default_value,
					 GParamFlags flags);
    extern GParamSpec *g_param_spec_double(const gchar * name,
					   const gchar * nick,
					   const gchar * blurb,
					   gdouble minimum,
					   gdouble maximum,
					   gdouble default_value,
					   GParamFlags flags);
    extern GParamSpec *g_param_spec_enum(const gchar * name,
					 const gchar * nick,
					 const gchar * blurb,
					 GType enum_type,
					 gint default_value,
					 GParamFlags flags);
    extern GParamSpec *g_param_spec_flags(const gchar * name,
					  const gchar * nick,
					  const gchar * blurb,
					  GType flags_type,
					  guint default_value,
					  GParamFlags flags);
    extern GParamSpec *g_param_spec_float(const gchar * name,
					  const gchar * nick,
					  const gchar * blurb,
					  gfloat minimum, gfloat maximum,
					  gfloat default_value,
					  GParamFlags flags);
    extern const gchar *g_param_spec_get_blurb(GParamSpec * pspec);
    extern const gchar *g_param_spec_get_name(GParamSpec * pspec);
    extern const gchar *g_param_spec_get_nick(GParamSpec * pspec);
    extern gpointer g_param_spec_get_qdata(GParamSpec * pspec,
					   GQuark quark);
    extern GParamSpec *g_param_spec_get_redirect_target(GParamSpec *
							pspec);
    extern GParamSpec *g_param_spec_int(const gchar * name,
					const gchar * nick,
					const gchar * blurb, gint minimum,
					gint maximum, gint default_value,
					GParamFlags flags);
    extern GParamSpec *g_param_spec_int64(const gchar * name,
					  const gchar * nick,
					  const gchar * blurb,
					  gint64 minimum, gint64 maximum,
					  gint64 default_value,
					  GParamFlags flags);
    extern gpointer g_param_spec_internal(GType param_type,
					  const gchar * name,
					  const gchar * nick,
					  const gchar * blurb,
					  GParamFlags flags);
    extern GParamSpec *g_param_spec_long(const gchar * name,
					 const gchar * nick,
					 const gchar * blurb,
					 glong minimum, glong maximum,
					 glong default_value,
					 GParamFlags flags);
    extern GParamSpec *g_param_spec_object(const gchar * name,
					   const gchar * nick,
					   const gchar * blurb,
					   GType object_type,
					   GParamFlags flags);
    extern GParamSpec *g_param_spec_override(const gchar * name,
					     GParamSpec * overridden);
    extern GParamSpec *g_param_spec_param(const gchar * name,
					  const gchar * nick,
					  const gchar * blurb,
					  GType param_type,
					  GParamFlags flags);
    extern GParamSpec *g_param_spec_pointer(const gchar * name,
					    const gchar * nick,
					    const gchar * blurb,
					    GParamFlags flags);
    extern void g_param_spec_pool_insert(GParamSpecPool * pool,
					 GParamSpec * pspec,
					 GType owner_type);
    extern GParamSpec **g_param_spec_pool_list(GParamSpecPool * pool,
					       GType owner_type,
					       guint * n_pspecs_p);
    extern GList *g_param_spec_pool_list_owned(GParamSpecPool * pool,
					       GType owner_type);
    extern GParamSpec *g_param_spec_pool_lookup(GParamSpecPool * pool,
						const gchar * param_name,
						GType owner_type,
						gboolean walk_ancestors);
    extern GParamSpecPool *g_param_spec_pool_new(gboolean type_prefixing);
    extern void g_param_spec_pool_remove(GParamSpecPool * pool,
					 GParamSpec * pspec);
    extern GParamSpec *g_param_spec_ref(GParamSpec * pspec);
    extern void g_param_spec_set_qdata(GParamSpec * pspec, GQuark quark,
				       gpointer data);
    extern void g_param_spec_set_qdata_full(GParamSpec * pspec,
					    GQuark quark, gpointer data,
					    GDestroyNotify destroy);
    extern void g_param_spec_sink(GParamSpec * pspec);
    extern gpointer g_param_spec_steal_qdata(GParamSpec * pspec,
					     GQuark quark);
    extern GParamSpec *g_param_spec_string(const gchar * name,
					   const gchar * nick,
					   const gchar * blurb,
					   const gchar * default_value,
					   GParamFlags flags);
    extern GType *g_param_spec_types;
    extern GParamSpec *g_param_spec_uchar(const gchar * name,
					  const gchar * nick,
					  const gchar * blurb,
					  guint8 minimum, guint8 maximum,
					  guint8 default_value,
					  GParamFlags flags);
    extern GParamSpec *g_param_spec_uint(const gchar * name,
					 const gchar * nick,
					 const gchar * blurb,
					 guint minimum, guint maximum,
					 guint default_value,
					 GParamFlags flags);
    extern GParamSpec *g_param_spec_uint64(const gchar * name,
					   const gchar * nick,
					   const gchar * blurb,
					   guint64 minimum,
					   guint64 maximum,
					   guint64 default_value,
					   GParamFlags flags);
    extern GParamSpec *g_param_spec_ulong(const gchar * name,
					  const gchar * nick,
					  const gchar * blurb,
					  gulong minimum, gulong maximum,
					  gulong default_value,
					  GParamFlags flags);
    extern GParamSpec *g_param_spec_unichar(const gchar * name,
					    const gchar * nick,
					    const gchar * blurb,
					    gunichar default_value,
					    GParamFlags flags);
    extern void g_param_spec_unref(GParamSpec * pspec);
    extern GParamSpec *g_param_spec_value_array(const gchar * name,
						const gchar * nick,
						const gchar * blurb,
						GParamSpec * element_spec,
						GParamFlags flags);
    extern GType g_param_type_register_static(const gchar * name,
					      const GParamSpecTypeInfo *
					      pspec_info);
    extern gboolean g_param_value_convert(GParamSpec * pspec,
					  const GValue * src_value,
					  GValue * dest_value,
					  gboolean strict_validation);
    extern gboolean g_param_value_defaults(GParamSpec * pspec,
					   GValue * value);
    extern void g_param_value_set_default(GParamSpec * pspec,
					  GValue * value);
    extern gboolean g_param_value_validate(GParamSpec * pspec,
					   GValue * value);
    extern gint g_param_values_cmp(GParamSpec * pspec,
				   const GValue * value1,
				   const GValue * value2);
    extern GType g_pointer_type_register_static(const gchar * name);
    extern gboolean g_signal_accumulator_true_handled(GSignalInvocationHint
						      * ihint,
						      GValue * return_accu,
						      const GValue *
						      handler_return,
						      gpointer dummy);
    extern gulong g_signal_add_emission_hook(guint signal_id,
					     GQuark detail,
					     GSignalEmissionHook hook_func,
					     gpointer hook_data,
					     GDestroyNotify data_destroy);
    extern void g_signal_chain_from_overridden(const GValue *
					       instance_and_params,
					       GValue * return_value);
    extern gulong g_signal_connect_closure(gpointer instance,
					   const gchar * detailed_signal,
					   GClosure * closure,
					   gboolean after);
    extern gulong g_signal_connect_closure_by_id(gpointer instance,
						 guint signal_id,
						 GQuark detail,
						 GClosure * closure,
						 gboolean after);
    extern gulong g_signal_connect_data(gpointer instance,
					const gchar * detailed_signal,
					GCallback c_handler, gpointer data,
					GClosureNotify destroy_data,
					GConnectFlags connect_flags);
    extern gulong g_signal_connect_object(gpointer instance,
					  const gchar * detailed_signal,
					  GCallback c_handler,
					  gpointer gobject,
					  GConnectFlags connect_flags);
    extern void g_signal_emit(gpointer instance, guint signal_id,
			      GQuark detail, ...);
    extern void g_signal_emit_by_name(gpointer instance,
				      const gchar * detailed_signal, ...);
    extern void g_signal_emit_valist(gpointer instance, guint signal_id,
				     GQuark detail, va_list var_args);
    extern void g_signal_emitv(const GValue * instance_and_params,
			       guint signal_id, GQuark detail,
			       GValue * return_value);
    extern GSignalInvocationHint *g_signal_get_invocation_hint(gpointer
							       instance);
    extern void g_signal_handler_block(gpointer instance,
				       gulong handler_id);
    extern void g_signal_handler_disconnect(gpointer instance,
					    gulong handler_id);
    extern gulong g_signal_handler_find(gpointer instance,
					GSignalMatchType mask,
					guint signal_id, GQuark detail,
					GClosure * closure, gpointer func,
					gpointer data);
    extern gboolean g_signal_handler_is_connected(gpointer instance,
						  gulong handler_id);
    extern void g_signal_handler_unblock(gpointer instance,
					 gulong handler_id);
    extern guint g_signal_handlers_block_matched(gpointer instance,
						 GSignalMatchType mask,
						 guint signal_id,
						 GQuark detail,
						 GClosure * closure,
						 gpointer func,
						 gpointer data);
    extern guint g_signal_handlers_disconnect_matched(gpointer instance,
						      GSignalMatchType
						      mask,
						      guint signal_id,
						      GQuark detail,
						      GClosure * closure,
						      gpointer func,
						      gpointer data);
    extern guint g_signal_handlers_unblock_matched(gpointer instance,
						   GSignalMatchType mask,
						   guint signal_id,
						   GQuark detail,
						   GClosure * closure,
						   gpointer func,
						   gpointer data);
    extern gboolean g_signal_has_handler_pending(gpointer instance,
						 guint signal_id,
						 GQuark detail,
						 gboolean may_be_blocked);
    extern guint *g_signal_list_ids(GType itype, guint * n_ids);
    extern guint g_signal_lookup(const gchar * name, GType itype);
    extern const gchar *g_signal_name(guint signal_id);
    extern guint g_signal_new(const gchar * signal_name, GType itype,
			      GSignalFlags signal_flags,
			      guint class_offset,
			      GSignalAccumulator accumulator,
			      gpointer accu_data,
			      GSignalCMarshaller c_marshaller,
			      GType return_type, guint n_params, ...);
    extern guint g_signal_new_valist(const gchar * signal_name,
				     GType itype,
				     GSignalFlags signal_flags,
				     GClosure * class_closure,
				     GSignalAccumulator accumulator,
				     gpointer accu_data,
				     GSignalCMarshaller c_marshaller,
				     GType return_type, guint n_params,
				     va_list args);
    extern guint g_signal_newv(const gchar * signal_name, GType itype,
			       GSignalFlags signal_flags,
			       GClosure * class_closure,
			       GSignalAccumulator accumulator,
			       gpointer accu_data,
			       GSignalCMarshaller c_marshaller,
			       GType return_type, guint n_params,
			       GType * param_types);
    extern void g_signal_override_class_closure(guint signal_id,
						GType instance_type,
						GClosure * class_closure);
    extern gboolean g_signal_parse_name(const gchar * detailed_signal,
					GType itype, guint * signal_id_p,
					GQuark * detail_p,
					gboolean force_detail_quark);
    extern void g_signal_query(guint signal_id, GSignalQuery * query);
    extern void g_signal_remove_emission_hook(guint signal_id,
					      gulong hook_id);
    extern void g_signal_stop_emission(gpointer instance, guint signal_id,
				       GQuark detail);
    extern void g_signal_stop_emission_by_name(gpointer instance,
					       const gchar *
					       detailed_signal);
    extern GClosure *g_signal_type_cclosure_new(GType itype,
						guint struct_offset);
    extern void g_source_set_closure(GSource * source, GClosure * closure);
    extern gchar *g_strdup_value_contents(const GValue * value);
    extern GType g_strv_get_type(void);
    extern void g_type_add_class_cache_func(gpointer cache_data,
					    GTypeClassCacheFunc
					    cache_func);
    extern void g_type_add_interface_check(gpointer check_data,
					   GTypeInterfaceCheckFunc
					   check_func);
    extern void g_type_add_interface_dynamic(GType instance_type,
					     GType interface_type,
					     GTypePlugin * plugin);
    extern void g_type_add_interface_static(GType instance_type,
					    GType interface_type,
					    const GInterfaceInfo * info);
    extern GTypeClass *g_type_check_class_cast(GTypeClass * g_class,
					       GType is_a_type);
    extern gboolean g_type_check_class_is_a(GTypeClass * g_class,
					    GType is_a_type);
    extern gboolean g_type_check_instance(GTypeInstance * instance);
    extern GTypeInstance *g_type_check_instance_cast(GTypeInstance *
						     instance,
						     GType iface_type);
    extern gboolean g_type_check_instance_is_a(GTypeInstance * instance,
					       GType iface_type);
    extern gboolean g_type_check_is_value_type(GType type);
    extern gboolean g_type_check_value(GValue * value);
    extern gboolean g_type_check_value_holds(GValue * value, GType type);
    extern GType *g_type_children(GType type, guint * n_children);
    extern void g_type_class_add_private(gpointer g_class,
					 gsize private_size);
    extern gpointer g_type_class_peek(GType type);
    extern gpointer g_type_class_peek_parent(gpointer g_class);
    extern gpointer g_type_class_peek_static(GType type);
    extern gpointer g_type_class_ref(GType type);
    extern void g_type_class_unref(gpointer g_class);
    extern void g_type_class_unref_uncached(gpointer g_class);
    extern GTypeInstance *g_type_create_instance(GType type);
    extern gpointer g_type_default_interface_peek(GType g_type);
    extern gpointer g_type_default_interface_ref(GType g_type);
    extern void g_type_default_interface_unref(gpointer g_iface);
    extern guint g_type_depth(GType type);
    extern void g_type_free_instance(GTypeInstance * instance);
    extern GType g_type_from_name(const gchar * name);
    extern GType g_type_fundamental(GType type_id);
    extern GType g_type_fundamental_next(void);
    extern GTypePlugin *g_type_get_plugin(GType type);
    extern gpointer g_type_get_qdata(GType type, GQuark quark);
    extern void g_type_init(void);
    extern void g_type_init_with_debug_flags(GTypeDebugFlags debug_flags);
    extern gpointer g_type_instance_get_private(GTypeInstance * instance,
						GType private_type);
    extern void g_type_interface_add_prerequisite(GType interface_type,
						  GType prerequisite_type);
    extern GTypePlugin *g_type_interface_get_plugin(GType instance_type,
						    GType interface_type);
    extern gpointer g_type_interface_peek(gpointer instance_class,
					  GType iface_type);
    extern gpointer g_type_interface_peek_parent(gpointer g_iface);
    extern GType *g_type_interface_prerequisites(GType interface_type,
						 guint * n_prerequisites);
    extern GType *g_type_interfaces(GType type, guint * n_interfaces);
    extern gboolean g_type_is_a(GType type, GType is_a_type);
    extern void g_type_module_add_interface(GTypeModule * module,
					    GType instance_type,
					    GType interface_type,
					    const GInterfaceInfo *
					    interface_info);
    extern GType g_type_module_get_type(void);
    extern GType g_type_module_register_enum(GTypeModule * module,
					     const gchar * name,
					     const GEnumValue *
					     const_static_values);
    extern GType g_type_module_register_flags(GTypeModule * module,
					      const gchar * name,
					      const GFlagsValue *
					      const_static_values);
    extern GType g_type_module_register_type(GTypeModule * module,
					     GType parent_type,
					     const gchar * type_name,
					     const GTypeInfo * type_info,
					     GTypeFlags flags);
    extern void g_type_module_set_name(GTypeModule * module,
				       const gchar * name);
    extern void g_type_module_unuse(GTypeModule * module);
    extern gboolean g_type_module_use(GTypeModule * module);
    extern const gchar *g_type_name(GType type);
    extern const gchar *g_type_name_from_class(GTypeClass * g_class);
    extern const gchar *g_type_name_from_instance(GTypeInstance *
						  instance);
    extern GType g_type_next_base(GType leaf_type, GType root_type);
    extern GType g_type_parent(GType type);
    extern void g_type_plugin_complete_interface_info(GTypePlugin * plugin,
						      GType instance_type,
						      GType interface_type,
						      GInterfaceInfo *
						      info);
    extern void g_type_plugin_complete_type_info(GTypePlugin * plugin,
						 GType g_type,
						 GTypeInfo * info,
						 GTypeValueTable *
						 value_table);
    extern GType g_type_plugin_get_type(void);
    extern void g_type_plugin_unuse(GTypePlugin * plugin);
    extern void g_type_plugin_use(GTypePlugin * plugin);
    extern GQuark g_type_qname(GType type);
    extern void g_type_query(GType type, GTypeQuery * query);
    extern GType g_type_register_dynamic(GType parent_type,
					 const gchar * type_name,
					 GTypePlugin * plugin,
					 GTypeFlags flags);
    extern GType g_type_register_fundamental(GType type_id,
					     const gchar * type_name,
					     const GTypeInfo * info,
					     const GTypeFundamentalInfo *
					     finfo, GTypeFlags flags);
    extern GType g_type_register_static(GType parent_type,
					const gchar * type_name,
					const GTypeInfo * info,
					GTypeFlags flags);
    extern void g_type_remove_class_cache_func(gpointer cache_data,
					       GTypeClassCacheFunc
					       cache_func);
    extern void g_type_remove_interface_check(gpointer check_data,
					      GTypeInterfaceCheckFunc
					      check_func);
    extern void g_type_set_qdata(GType type, GQuark quark, gpointer data);
    extern gboolean g_type_test_flags(GType type, guint flags);
    extern GTypeValueTable *g_type_value_table_peek(GType type);
    extern GValueArray *g_value_array_append(GValueArray * value_array,
					     const GValue * value)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern GValueArray *g_value_array_copy(const GValueArray * value_array)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern void g_value_array_free(GValueArray * value_array)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern GValue *g_value_array_get_nth(GValueArray * value_array,
					 guint index_)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern GType g_value_array_get_type(void)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern GValueArray *g_value_array_insert(GValueArray * value_array,
					     guint index_,
					     const GValue * value)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern GValueArray *g_value_array_new(guint n_prealloced)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern GValueArray *g_value_array_prepend(GValueArray * value_array,
					      const GValue * value)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern GValueArray *g_value_array_remove(GValueArray * value_array,
					     guint index_)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern GValueArray *g_value_array_sort(GValueArray * value_array,
					   GCompareFunc compare_func)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern GValueArray *g_value_array_sort_with_data(GValueArray *
						     value_array,
						     GCompareDataFunc
						     compare_func,
						     gpointer user_data)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern void g_value_copy(const GValue * src_value,
			     GValue * dest_value);
    extern gpointer g_value_dup_boxed(const GValue * value);
    extern void *g_value_dup_object(const GValue * value);
    extern GParamSpec *g_value_dup_param(const GValue * value);
    extern gchar *g_value_dup_string(const GValue * value);
    extern gboolean g_value_fits_pointer(const GValue * value);
    extern gboolean g_value_get_boolean(const GValue * value);
    extern gpointer g_value_get_boxed(const GValue * value);
    extern gchar g_value_get_char(const GValue * value)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern gdouble g_value_get_double(const GValue * value);
    extern gint g_value_get_enum(const GValue * value);
    extern guint g_value_get_flags(const GValue * value);
    extern gfloat g_value_get_float(const GValue * value);
    extern gint g_value_get_int(const GValue * value);
    extern gint64 g_value_get_int64(const GValue * value);
    extern glong g_value_get_long(const GValue * value);
    extern void *g_value_get_object(const GValue * value);
    extern GParamSpec *g_value_get_param(const GValue * value);
    extern gpointer g_value_get_pointer(const GValue * value);
    extern const char *g_value_get_string(const GValue * value);
    extern GType g_value_get_type(void);
    extern guchar g_value_get_uchar(const GValue * value);
    extern guint g_value_get_uint(const GValue * value);
    extern guint64 g_value_get_uint64(const GValue * value);
    extern gulong g_value_get_ulong(const GValue * value);
    extern GValue *g_value_init(GValue * value, GType g_type);
    extern gpointer g_value_peek_pointer(const GValue * value);
    extern void g_value_register_transform_func(GType src_type,
						GType dest_type,
						GValueTransform
						transform_func);
    extern GValue *g_value_reset(GValue * value);
    extern void g_value_set_boolean(GValue * value, gboolean v_boolean);
    extern void g_value_set_boxed(GValue * value, gconstpointer v_boxed);
    extern void g_value_set_char(GValue * value, gchar v_char)
#if __LSB_VERSION__ >= 50
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 50 */
    ;
    extern void g_value_set_double(GValue * value, gdouble v_double);
    extern void g_value_set_enum(GValue * value, gint v_enum);
    extern void g_value_set_flags(GValue * value, guint v_flags);
    extern void g_value_set_float(GValue * value, gfloat v_float);
    extern void g_value_set_instance(GValue * value, gpointer instance);
    extern void g_value_set_int(GValue * value, gint v_int);
    extern void g_value_set_int64(GValue * value, gint64 v_int64);
    extern void g_value_set_long(GValue * value, glong v_long);
    extern void g_value_set_object(GValue * value, gpointer v_object);
    extern void g_value_set_param(GValue * value, GParamSpec * param);
    extern void g_value_set_pointer(GValue * value, gpointer v_pointer);
    extern void g_value_set_static_boxed(GValue * value,
					 gconstpointer v_boxed);
    extern void g_value_set_static_string(GValue * value,
					  const gchar * v_string);
    extern void g_value_set_string(GValue * value, const gchar * v_string);
    extern void g_value_set_uchar(GValue * value, guchar v_uchar);
    extern void g_value_set_uint(GValue * value, guint v_uint);
    extern void g_value_set_uint64(GValue * value, guint64 v_uint64);
    extern void g_value_set_ulong(GValue * value, gulong v_ulong);
    extern void g_value_take_boxed(GValue * value, gconstpointer v_boxed);
    extern void g_value_take_object(GValue * value, gpointer v_object);
    extern void g_value_take_param(GValue * value, GParamSpec * param);
    extern void g_value_take_string(GValue * value, gchar * v_string);
    extern gboolean g_value_transform(const GValue * src_value,
				      GValue * dest_value);
    extern gboolean g_value_type_compatible(GType src_type,
					    GType dest_type);
    extern gboolean g_value_type_transformable(GType src_type,
					       GType dest_type);
    extern void g_value_unset(GValue * value);
#if __LSB_VERSION__ >= 40
    extern void g_object_add_toggle_ref(GObject * object,
					GToggleNotify notify,
					gpointer data);
    extern void g_object_remove_toggle_ref(GObject * object,
					   GToggleNotify notify,
					   gpointer data);
#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 41
    extern GType g_gtype_get_type(void);
    extern GType g_hash_table_get_type(void);
    extern GType g_initially_unowned_get_type(void);
    extern void g_object_force_floating(GObject *);
    extern gboolean g_object_is_floating(gpointer object);
    extern gpointer g_object_ref_sink(gpointer object);
    extern GParamSpec *g_param_spec_gtype(const gchar *, const gchar *,
					  const gchar *, GType,
					  GParamFlags);
    extern GParamSpec *g_param_spec_ref_sink(GParamSpec *);
    extern GType g_type_register_static_simple(GType, const gchar *, guint,
					       GClassInitFunc, guint,
					       GInstanceInitFunc,
					       GTypeFlags);
    extern GType g_value_get_gtype(const GValue *);
    extern void g_value_set_gtype(GValue *, GType);
#endif				/* __LSB_VERSION__ >= 4.1 */

#if __LSB_VERSION__ >= 50
    extern GType g_array_get_type(void);
    extern GType g_binding_flags_get_type(void);
    extern GBindingFlags g_binding_get_flags(GBinding * binding);
    extern GObject *g_binding_get_source(GBinding * binding);
    extern const gchar *g_binding_get_source_property(GBinding * binding);
    extern GObject *g_binding_get_target(GBinding * binding);
    extern const gchar *g_binding_get_target_property(GBinding * binding);
    extern GType g_binding_get_type(void);
    extern GType g_byte_array_get_type(void);
    extern GType g_bytes_get_type(void);
    extern void g_cclosure_marshal_VOID__BOOLEANv(GClosure * closure,
						  GValue * return_value,
						  gpointer instance,
						  va_list args,
						  gpointer marshal_data,
						  int n_params,
						  GType * param_types);
    extern void g_cclosure_marshal_VOID__BOXEDv(GClosure * closure,
						GValue * return_value,
						gpointer instance,
						va_list args,
						gpointer marshal_data,
						int n_params,
						GType * param_types);
    extern void g_cclosure_marshal_VOID__CHARv(GClosure * closure,
					       GValue * return_value,
					       gpointer instance,
					       va_list args,
					       gpointer marshal_data,
					       int n_params,
					       GType * param_types);
    extern void g_cclosure_marshal_VOID__DOUBLEv(GClosure * closure,
						 GValue * return_value,
						 gpointer instance,
						 va_list args,
						 gpointer marshal_data,
						 int n_params,
						 GType * param_types);
    extern void g_cclosure_marshal_VOID__ENUMv(GClosure * closure,
					       GValue * return_value,
					       gpointer instance,
					       va_list args,
					       gpointer marshal_data,
					       int n_params,
					       GType * param_types);
    extern void g_cclosure_marshal_VOID__FLAGSv(GClosure * closure,
						GValue * return_value,
						gpointer instance,
						va_list args,
						gpointer marshal_data,
						int n_params,
						GType * param_types);
    extern void g_cclosure_marshal_VOID__FLOATv(GClosure * closure,
						GValue * return_value,
						gpointer instance,
						va_list args,
						gpointer marshal_data,
						int n_params,
						GType * param_types);
    extern void g_cclosure_marshal_VOID__INTv(GClosure * closure,
					      GValue * return_value,
					      gpointer instance,
					      va_list args,
					      gpointer marshal_data,
					      int n_params,
					      GType * param_types);
    extern void g_cclosure_marshal_VOID__LONGv(GClosure * closure,
					       GValue * return_value,
					       gpointer instance,
					       va_list args,
					       gpointer marshal_data,
					       int n_params,
					       GType * param_types);
    extern void g_cclosure_marshal_VOID__OBJECTv(GClosure * closure,
						 GValue * return_value,
						 gpointer instance,
						 va_list args,
						 gpointer marshal_data,
						 int n_params,
						 GType * param_types);
    extern void g_cclosure_marshal_VOID__PARAMv(GClosure * closure,
						GValue * return_value,
						gpointer instance,
						va_list args,
						gpointer marshal_data,
						int n_params,
						GType * param_types);
    extern void g_cclosure_marshal_VOID__POINTERv(GClosure * closure,
						  GValue * return_value,
						  gpointer instance,
						  va_list args,
						  gpointer marshal_data,
						  int n_params,
						  GType * param_types);
    extern void g_cclosure_marshal_VOID__STRINGv(GClosure * closure,
						 GValue * return_value,
						 gpointer instance,
						 va_list args,
						 gpointer marshal_data,
						 int n_params,
						 GType * param_types);
    extern void g_cclosure_marshal_VOID__UCHARv(GClosure * closure,
						GValue * return_value,
						gpointer instance,
						va_list args,
						gpointer marshal_data,
						int n_params,
						GType * param_types);
    extern void g_cclosure_marshal_VOID__UINT_POINTERv(GClosure * closure,
						       GValue *
						       return_value,
						       gpointer instance,
						       va_list args,
						       gpointer
						       marshal_data,
						       int n_params,
						       GType *
						       param_types);
    extern void g_cclosure_marshal_VOID__UINTv(GClosure * closure,
					       GValue * return_value,
					       gpointer instance,
					       va_list args,
					       gpointer marshal_data,
					       int n_params,
					       GType * param_types);
    extern void g_cclosure_marshal_VOID__ULONGv(GClosure * closure,
						GValue * return_value,
						gpointer instance,
						va_list args,
						gpointer marshal_data,
						int n_params,
						GType * param_types);
    extern void g_cclosure_marshal_VOID__VARIANT(GClosure * closure,
						 GValue * return_value,
						 guint n_param_values,
						 const GValue *
						 param_value,
						 gpointer invocation_hint,
						 gpointer marshal_data);
    extern void g_cclosure_marshal_VOID__VARIANTv(GClosure * closure,
						  GValue * return_value,
						  gpointer instance,
						  va_list args,
						  gpointer marshal_data,
						  int n_params,
						  GType * param_types);
    extern void g_cclosure_marshal_VOID__VOIDv(GClosure * closure,
					       GValue * return_value,
					       gpointer instance,
					       va_list args,
					       gpointer marshal_data,
					       int n_params,
					       GType * param_types);
    extern void g_cclosure_marshal_generic(GClosure * closure,
					   GValue * return_gvalue,
					   guint n_param_values,
					   const GValue * param_values,
					   gpointer invocation_hint,
					   gpointer marshal_data);
    extern void g_cclosure_marshal_generic_va(GClosure * closure,
					      GValue * return_value,
					      gpointer instance,
					      va_list args_list,
					      gpointer marshal_data,
					      int n_params,
					      GType * param_types);
#undef g_clear_object
    extern void g_clear_object(volatile GObject * *object_ptr);
    extern GType g_date_get_type(void);
    extern GType g_date_time_get_type(void);
    extern GType g_error_get_type(void);
    extern GType g_key_file_get_type(void);
    extern GType g_main_context_get_type(void);
    extern GType g_main_loop_get_type(void);
    extern GType g_match_info_get_type(void);
    extern GBinding *g_object_bind_property(gpointer source,
					    const gchar * source_property,
					    gpointer target,
					    const gchar * target_property,
					    GBindingFlags flags);
    extern GBinding *g_object_bind_property_full(gpointer source,
						 const gchar *
						 source_property,
						 gpointer target,
						 const gchar *
						 target_property,
						 GBindingFlags flags,
						 GBindingTransformFunc
						 transform_to,
						 GBindingTransformFunc
						 transform_from,
						 gpointer user_data,
						 GDestroyNotify notify);
    extern GBinding *g_object_bind_property_with_closures(gpointer source,
							  const gchar *
							  source_property,
							  gpointer target,
							  const gchar *
							  target_property,
							  GBindingFlags
							  flags,
							  GClosure *
							  transform_to,
							  GClosure *
							  transform_from);
    extern void g_object_class_install_properties(GObjectClass * oclass,
						  guint n_pspecs,
						  GParamSpec * *pspecs);
    extern gsize g_object_compat_control(gsize what, void *data);
    extern GType g_object_get_type(void);
    extern void g_object_notify_by_pspec(GObject * object,
					 GParamSpec * pspec);
    extern GParamSpec *g_param_spec_variant(const gchar * name,
					    const gchar * nick,
					    const gchar * blurb,
					    GVariantType * type,
					    GVariant * default_value,
					    GParamFlags flags);
    extern GType g_ptr_array_get_type(void);
    extern GType g_regex_get_type(void);
    extern gboolean g_signal_accumulator_first_wins(GSignalInvocationHint *
						    ihint,
						    GValue * return_accu,
						    const GValue *
						    handler_return,
						    gpointer dummy);
    extern void g_signal_chain_from_overridden_handler(gpointer instance,
						       ...);
    extern guint g_signal_new_class_handler(const char *signal_name,
					    GType itype,
					    GSignalFlags signal_flags,
					    GCallback class_handler,
					    GSignalAccumulator accumulator,
					    gpointer accu_data,
					    GSignalCMarshaller
					    c_marshaller,
					    GType return_type,
					    guint n_params, ...);
    extern void g_signal_override_class_handler(const char *signal_name,
						GType instance_type,
						GCallback class_handler);
    extern void g_signal_set_va_marshaller(guint signal_id,
					   GType instance_type,
					   GSignalCVaMarshaller
					   va_marshaller);
    extern GType g_source_get_type(void);
    extern void g_source_set_dummy_callback(GSource * source);
    extern void g_type_add_class_private(GType class_type,
					 gsize private_size);
    extern gpointer g_type_class_get_private(GTypeClass * klass,
					     GType private_type);
    extern GVariant *g_value_dup_variant(const GValue * value);
    extern gint8 g_value_get_schar(const GValue * value);
    extern GVariant *g_value_get_variant(const GValue * value);
    /* g_value_set_boxed_take_ownership is deprecated and should not be used in newly-written code. Use g_value_take_boxed instead. */
    extern void g_value_set_boxed_take_ownership(GValue * value,
						 gconstpointer v_boxed)
	LSB_DECL_DEPRECATED;
    /* g_value_set_object_take_ownership is deprecated and should not be used in newly-written code. Use g_value_take_object instead. */
    extern void g_value_set_object_take_ownership(GValue * value,
						  void *v_object)
	LSB_DECL_DEPRECATED;
    /* g_value_set_param_take_ownership is deprecated and should not be used in newly-written code. Use g_value_take_param instead. */
    extern void g_value_set_param_take_ownership(GValue * value,
						 GParamSpec *
						 param)
	LSB_DECL_DEPRECATED;
    extern void g_value_set_schar(GValue * value, gint8 v_char);
    /* g_value_set_string_take_ownership is deprecated and should not be used in newly-written code. Use g_value_take_string instead. */
    extern void g_value_set_string_take_ownership(GValue * value,
						  gchar *
						  v_string)
	LSB_DECL_DEPRECATED;
    extern void g_value_set_variant(GValue * value, GVariant * variant);
    extern void g_value_take_variant(GValue * value, GVariant * variant);
    extern GType g_variant_builder_get_type(void);
    extern GType g_variant_get_gtype(void) LSB_DECL_DEPRECATED;
    extern GType g_variant_type_get_gtype(void);
    extern void g_weak_ref_clear(struct GWeakRef *weak_ref);
    extern void *g_weak_ref_get(struct GWeakRef *weak_ref);
    extern void g_weak_ref_init(struct GWeakRef *weak_ref,
				gpointer object);
    extern void g_weak_ref_set(struct GWeakRef *weak_ref, gpointer object);
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
