#if (__LSB_VERSION__ >= 31 )
#ifndef _GLIB_2_0_GLIB_H_
#define _GLIB_2_0_GLIB_H_

#include <limits.h>
#include <sys/types.h>
#include <time.h>
#include <stddef.h>
#include <stdarg.h>

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


#define GLIB_HAVE_ALLOCA_H
#define GLIB_HAVE_SYS_POLL_H
#define G_GINT32_MODIFIER	""
#define G_GNUC_FUNCTION	""
#define G_GNUC_PRETTY_FUNCTION	""
#if defined __i386__
#define G_GSIZE_MODIFIER	""
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define G_GSIZE_MODIFIER	""
#endif
#if defined __s390__ && !defined __s390x__
#define G_GSIZE_MODIFIER	""
#endif
#define G_OPTION_REMAINING	""
#define G_OS_UNIX
#define G_THREADS_ENABLED
#define G_THREADS_IMPL_POSIX
#define G_WIN32_DLLMAIN_FOR_DLL_NAME(static,dll_name)
#define G_CSET_LATINC	 \
	"\300\301\302\303\304\305\306" \
	"\307\310\311\312\313\314\315\316\317\320" "\321\322\323\324\325\326" \
	"\330\331\332\333\334\335\336"
#define G_CSET_LATINS	 \
	"\337\340\341\342\343\344\345\346" \
	"\347\350\351\352\353\354\355\356\357\360" "\361\362\363\364\365\366" \
	"\370\371\372\373\374\375\376\377"
#define g_mem_chunk_create(type,pre_alloc,alloc_type)	 \
	( g_mem_chunk_new (#type " mem chunks (" #pre_alloc ")", sizeof \
	(type), sizeof (type) * (pre_alloc), (alloc_type)) )
#define G_NODE_IS_ROOT(node)	 \
	(((GNode*) (node))->parent == NULL && ((GNode*) (node))->prev == NULL \
	&& ((GNode*) (node))->next == NULL)
#define g_once(once,func,arg)	 \
	(((once)->status == G_ONCE_STATUS_READY) ? (once)->retval : \
	g_once_impl ((once), (func), (arg)))
#define CLAMP(x,low,high)	 \
	(((x) > (high)) ? (high) : (((x) < (low)) ? (low) : (x)))
#define G_STRUCT_OFFSET(struct_type,member)	 \
	((glong) ((guint8*) &((struct_type*) 0)->member))
#define G_STRUCT_MEMBER_P(struct_p,struct_offset)	 \
	((gpointer) ((guint8*) (struct_p) + (glong) (struct_offset)))
#define GUINT16_SWAP_LE_BE_CONSTANT(val)	 \
	((guint16) ( (guint16) ((guint16) (val) >> 8) | (guint16) ((guint16) \
	(val) << 8)))
#define GUINT32_SWAP_LE_BE_CONSTANT(val)	 \
	((guint32) ( (((guint32) (val) & (guint32) 0x000000ffU) << 24) | \
	(((guint32) (val) & (guint32) 0x0000ff00U) << 8) | (((guint32) (val) & \
	(guint32) 0x00ff0000U) >> 8) | (((guint32) (val) & (guint32) \
	0xff000000U) >> 24)))
#define GUINT32_SWAP_LE_PDP(val)	 \
	((guint32) ( (((guint32) (val) & (guint32) 0x0000ffffU) << 16) | \
	(((guint32) (val) & (guint32) 0xffff0000U) >> 16)))
#define GUINT32_SWAP_BE_PDP(val)	 \
	((guint32) ( (((guint32) (val) & (guint32) 0x00ff00ffU) << 8) | \
	(((guint32) (val) & (guint32) 0xff00ff00U) >> 8)))
#define GUINT64_SWAP_LE_BE_CONSTANT(val)	 \
	((guint64) ( (((guint64) (val) & (guint64) G_GINT64_CONSTANT \
	(0x00000000000000ffU)) << 56) | (((guint64) (val) & (guint64) \
	G_GINT64_CONSTANT (0x000000000000ff00U)) << 40) | (((guint64) (val) & \
	(guint64) G_GINT64_CONSTANT (0x0000000000ff0000U)) << 24) | \
	(((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x00000000ff000000U)) \
	<< 8) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT \
	(0x000000ff00000000U)) >> 8) | (((guint64) (val) & (guint64) \
	G_GINT64_CONSTANT (0x0000ff0000000000U)) >> 24) | (((guint64) (val) & \
	(guint64) G_GINT64_CONSTANT (0x00ff000000000000U)) >> 40) | \
	(((guint64) (val) & (guint64) G_GINT64_CONSTANT (0xff00000000000000U)) \
	>> 56)))
#define g_ascii_isalnum(c)	 \
	((g_ascii_table[(guchar) (c)] & G_ASCII_ALNUM) != 0)
#define g_ascii_isalpha(c)	 \
	((g_ascii_table[(guchar) (c)] & G_ASCII_ALPHA) != 0)
#define g_ascii_iscntrl(c)	 \
	((g_ascii_table[(guchar) (c)] & G_ASCII_CNTRL) != 0)
#define g_ascii_isdigit(c)	 \
	((g_ascii_table[(guchar) (c)] & G_ASCII_DIGIT) != 0)
#define g_ascii_isgraph(c)	 \
	((g_ascii_table[(guchar) (c)] & G_ASCII_GRAPH) != 0)
#define g_ascii_islower(c)	 \
	((g_ascii_table[(guchar) (c)] & G_ASCII_LOWER) != 0)
#define g_ascii_isprint(c)	 \
	((g_ascii_table[(guchar) (c)] & G_ASCII_PRINT) != 0)
#define g_ascii_ispunct(c)	 \
	((g_ascii_table[(guchar) (c)] & G_ASCII_PUNCT) != 0)
#define g_ascii_isspace(c)	 \
	((g_ascii_table[(guchar) (c)] & G_ASCII_SPACE) != 0)
#define g_ascii_isupper(c)	 \
	((g_ascii_table[(guchar) (c)] & G_ASCII_UPPER) != 0)
#define g_ascii_isxdigit(c)	 \
	((g_ascii_table[(guchar) (c)] & G_ASCII_XDIGIT) != 0)
#define G_HOOK_ACTIVE(hook)	 \
	((G_HOOK_FLAGS (hook) & G_HOOK_FLAG_ACTIVE) != 0)
#define G_HOOK_IN_CALL(hook)	 \
	((G_HOOK_FLAGS (hook) & G_HOOK_FLAG_IN_CALL) != 0)
#define g_node_first_child(node)	 \
	((node) ? ((GNode*) (node))->children : NULL)
#define g_node_next_sibling(node)	 \
	((node) ? ((GNode*) (node))->next : NULL)
#define g_node_prev_sibling(node)	 \
	((node) ? ((GNode*) (node))->prev : NULL)
#define g_new(struct_type,n_structs)	 \
	((struct_type *) g_malloc (((gsize) sizeof (struct_type)) * ((gsize) \
	(n_structs))))
#define g_new0(struct_type,n_structs)	 \
	((struct_type *) g_malloc0 (((gsize) sizeof (struct_type)) * ((gsize) \
	(n_structs))))
#define g_renew(struct_type,mem,n_structs)	 \
	((struct_type *) g_realloc ((mem), ((gsize) sizeof (struct_type)) * \
	((gsize) (n_structs))))
#define g_newa(struct_type,n_structs)	 \
	((struct_type*) g_alloca (sizeof (struct_type) * (gsize) \
	(n_structs)))
#define G_STRUCT_MEMBER(member_type,struct_p,struct_offset)	 \
	(*(member_type*) G_STRUCT_MEMBER_P ((struct_p), (struct_offset)))
#define G_THREAD_UF(op,arglist)	 \
	(*g_thread_functions_for_glib_use . op) arglist
#define GLIB_CHECK_VERSION(major,minor,micro)	 \
	(GLIB_MAJOR_VERSION > (major) || (GLIB_MAJOR_VERSION == (major) && \
	GLIB_MINOR_VERSION > (minor)) || (GLIB_MAJOR_VERSION == (major) && \
	GLIB_MINOR_VERSION == (minor) && GLIB_MICRO_VERSION >= (micro)))
#define g_atomic_int_dec_and_test(atomic)	 \
	(g_atomic_int_exchange_and_add ((atomic), -1) == 1)
#define g_static_mutex_get_mutex_impl_shortcut(mutex)	 \
	(g_atomic_pointer_get ((gpointer*)mutex) ? *(mutex) : \
	g_static_mutex_get_mutex_impl (mutex))
#define g_datalist_get_data(dl,k)	 \
	(g_datalist_id_get_data ((dl), g_quark_try_string (k)))
#define g_dataset_get_data(l,k)	 \
	(g_dataset_id_get_data ((l), g_quark_try_string (k)))
#define G_HOOK_IS_VALID(hook)	 \
	(G_HOOK (hook)->hook_id != 0 && (G_HOOK_FLAGS (hook) & \
	G_HOOK_FLAG_ACTIVE))
#define G_HOOK_IS_UNLINKED(hook)	 \
	(G_HOOK (hook)->next == NULL && G_HOOK (hook)->prev == NULL && G_HOOK \
	(hook)->hook_id == 0 && G_HOOK (hook)->ref_count == 0)
#define g_thread_create(func,data,joinable,error)	 \
	(g_thread_create_full (func, data, 0, joinable, FALSE, \
	G_THREAD_PRIORITY_NORMAL, error))
#define G_THREAD_ECF(op,fail,mutex,type)	 \
	(g_thread_supported () ? ((type(*)(GMutex*, gulong, gchar*)) \
	(*g_thread_functions_for_glib_use . op)) (mutex, G_MUTEX_DEBUG_MAGIC, \
	G_STRLOC) : (fail))
#define G_THREAD_CF(op,fail,arg)	 \
	(g_thread_supported () ? G_THREAD_UF (op, arg) : (fail))
#define g_static_mutex_get_mutex(mutex)	 \
	(g_thread_use_default_impl ? ((GMutex*) &((mutex)->static_mutex)) : \
	g_static_mutex_get_mutex_impl_shortcut (&((mutex)->runtime_mutex)))
#define G_LOCK_DEFINE(name)	 \
	GStaticMutex G_LOCK_NAME (name) = G_STATIC_MUTEX_INIT
#define g_datalist_remove_no_notify(dl,k)	 \
	g_datalist_id_remove_no_notify ((dl), g_quark_try_string (k))
#define g_datalist_id_remove_data(dl,q)	 \
	g_datalist_id_set_data ((dl), (q), NULL)
#define g_datalist_remove_data(dl,k)	 \
	g_datalist_id_set_data ((dl), g_quark_try_string (k), NULL)
#define g_datalist_id_set_data(dl,q,d)	 \
	g_datalist_id_set_data_full ((dl), (q), (d), NULL)
#define g_datalist_set_data_full(dl,k,d,f)	 \
	g_datalist_id_set_data_full ((dl), g_quark_from_string (k), (d), (f))
#define g_datalist_set_data(dl,k,d)	 \
	g_datalist_set_data_full ((dl), (k), (d), NULL)
#define g_dataset_remove_no_notify(l,k)	 \
	g_dataset_id_remove_no_notify ((l), g_quark_try_string (k))
#define g_dataset_id_remove_data(l,k)	 \
	g_dataset_id_set_data ((l), (k), NULL)
#define g_dataset_remove_data(l,k)	 \
	g_dataset_id_set_data ((l), g_quark_try_string (k), NULL)
#define g_dataset_id_set_data(l,k,d)	 \
	g_dataset_id_set_data_full ((l), (k), (d), NULL)
#define g_dataset_set_data_full(l,k,d,f)	 \
	g_dataset_id_set_data_full ((l), g_quark_from_string (k), (d), (f))
#define g_dataset_set_data(l,k,d)	 \
	g_dataset_set_data_full ((l), (k), (d), NULL)
#define g_hook_append(hook_list,hook)	 \
	g_hook_insert_before ((hook_list), NULL, (hook))
#define g_critical(...)	 \
	g_log (G_LOG_DOMAIN, G_LOG_LEVEL_CRITICAL, __VA_ARGS__)
#define g_message(...)	 \
	g_log (G_LOG_DOMAIN, G_LOG_LEVEL_MESSAGE, __VA_ARGS__)
#define g_warning(...)	 \
	g_log (G_LOG_DOMAIN, G_LOG_LEVEL_WARNING, __VA_ARGS__)
#define g_static_mutex_lock(mutex)	 \
	g_mutex_lock (g_static_mutex_get_mutex (mutex))
#define g_static_mutex_trylock(mutex)	 \
	g_mutex_trylock (g_static_mutex_get_mutex (mutex))
#define g_static_mutex_unlock(mutex)	 \
	g_mutex_unlock (g_static_mutex_get_mutex (mutex))
#define g_node_insert_data(parent,position,data)	 \
	g_node_insert ((parent), (position), g_node_new (data))
#define g_node_insert_data_before(parent,sibling,data)	 \
	g_node_insert_before ((parent), (sibling), g_node_new (data))
#define g_node_append(parent,node)	 \
	g_node_insert_before ((parent), NULL, (node))
#define g_node_append_data(parent,data)	 \
	g_node_insert_before ((parent), NULL, g_node_new (data))
#define g_node_prepend_data(parent,data)	 \
	g_node_prepend ((parent), g_node_new (data))
#define g_chunk_free(mem,mem_chunk)	 \
	G_STMT_START { g_mem_chunk_free ((mem_chunk), (mem)); } G_STMT_END
#define g_memmove(d,s,n)	 \
	G_STMT_START { memmove ((d), (s), (n)); } G_STMT_END
#define g_assert_not_reached()	 \
	G_STMT_START{ g_assert_warning (G_LOG_DOMAIN, __FILE__, __LINE__, \
	__PRETTY_FUNCTION__, NULL); }G_STMT_END
#define g_return_val_if_reached(val)	 \
	G_STMT_START{ g_log (G_LOG_DOMAIN, G_LOG_LEVEL_CRITICAL, "file %s: \
	line %d (%s): should not be reached", __FILE__, __LINE__, \
	__PRETTY_FUNCTION__); return (val); }G_STMT_END
#define g_return_if_reached()	 \
	G_STMT_START{ g_log (G_LOG_DOMAIN, G_LOG_LEVEL_CRITICAL, "file %s: \
	line %d (%s): should not be reached", __FILE__, __LINE__, \
	__PRETTY_FUNCTION__); return; }G_STMT_END
#define g_assert(expr)	 \
	G_STMT_START{ if G_LIKELY(expr) { } else g_assert_warning \
	(G_LOG_DOMAIN, __FILE__, __LINE__, __PRETTY_FUNCTION__, #expr); \
	}G_STMT_END
#define g_return_val_if_fail(expr,val)	 \
	G_STMT_START{ if G_LIKELY(expr) { } else { g_return_if_fail_warning \
	(G_LOG_DOMAIN, __PRETTY_FUNCTION__, #expr); return (val); }; \
	}G_STMT_END
#define g_return_if_fail(expr)	 \
	G_STMT_START{ if G_LIKELY(expr) { } else { g_return_if_fail_warning \
	(G_LOG_DOMAIN, __PRETTY_FUNCTION__, #expr); return; }; }G_STMT_END
#define g_cond_broadcast(cond)	 \
	G_THREAD_CF (cond_broadcast, (void)0, (cond))
#define g_cond_timed_wait(cond,mutex,abs_time)	 \
	G_THREAD_CF (cond_timed_wait, TRUE, (cond, mutex, abs_time))
#define g_cond_wait(cond,mutex)	 \
	G_THREAD_CF (cond_wait, (void)0, (cond, mutex))
#define g_private_get(private_key)	 \
	G_THREAD_CF (private_get, ((gpointer)private_key), (private_key))
#define g_private_set(private_key,value)	 \
	G_THREAD_CF (private_set, (void) (private_key = (GPrivate*) (value)), \
	(private_key, value))
#define G_GNUC_PRINTF(format_idx,arg_idx)	 \
	__attribute__((__format__ (__printf__, format_idx, arg_idx)))
#define G_GNUC_SCANF(format_idx,arg_idx)	 \
	__attribute__((__format__ (__scanf__, format_idx, arg_idx)))
#define G_STATIC_RW_LOCK_INIT	 \
	{ G_STATIC_MUTEX_INIT, NULL, NULL, 0, FALSE, 0, 0 }
#if defined __ia64__
#define G_STATIC_MUTEX_INIT	 \
	{ NULL, { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} } }
#endif
#if defined __powerpc64__
#define G_STATIC_MUTEX_INIT	 \
	{ NULL, { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} } }
#endif
#if defined __x86_64__
#define G_STATIC_MUTEX_INIT	 \
	{ NULL, { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} } }
#endif
#if defined __s390x__
#define G_STATIC_MUTEX_INIT	 \
	{ NULL, { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} } }
#endif
#if defined __i386__
#define G_STATIC_MUTEX_INIT	 \
	{ NULL, { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} } }
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define G_STATIC_MUTEX_INIT	 \
	{ NULL, { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} } }
#endif
#if defined __s390__ && !defined __s390x__
#define G_STATIC_MUTEX_INIT	 \
	{ NULL, { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} } }
#endif
#define G_STRINGIFY_ARG(contents)	#contents
#define G_DIR_SEPARATOR	'/'
#define G_SEARCHPATH_SEPARATOR	':'
#define g_chunk_new(type,chunk)	( (type *) g_mem_chunk_alloc (chunk) )
#define g_chunk_new0(type,chunk)	( (type *) g_mem_chunk_alloc0 (chunk) )
#define MIN(a,b)	(((a) < (b)) ? (a) : (b))
#define ABS(a)	(((a) < 0) ? -(a) : (a))
#define MAX(a,b)	(((a) > (b)) ? (a) : (b))
#define G_NODE_IS_LEAF(node)	(((GNode*) (node))->children == NULL)
#define g_array_index(a,t,i)	(((t*) (void *) (a)->data) [(i)])
#define g_ptr_array_index(array,index_)	((array)->pdata)[index_]
#define G_IS_DIR_SEPARATOR(c)	((c) == G_DIR_SEPARATOR)
#define G_STRFUNC	((const char*) (__PRETTY_FUNCTION__))
#define G_LOG_DOMAIN	((gchar*) 0)
#define G_HOOK(hook)	((GHook*) (hook))
#if defined __ia64__
#define GPOINTER_TO_INT(p)	((gint) (glong) (p))
#endif
#if defined __powerpc64__
#define GPOINTER_TO_INT(p)	((gint) (glong) (p))
#endif
#if defined __x86_64__
#define GPOINTER_TO_INT(p)	((gint) (glong) (p))
#endif
#if defined __s390x__
#define GPOINTER_TO_INT(p)	((gint) (glong) (p))
#endif
#if defined __i386__
#define GPOINTER_TO_INT(p)	((gint) (p))
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define GPOINTER_TO_INT(p)	((gint) (p))
#endif
#if defined __s390__ && !defined __s390x__
#define GPOINTER_TO_INT(p)	((gint) (p))
#endif
#define GINT_TO_BE(val)	((gint) GINT32_TO_BE (val))
#define GINT_TO_LE(val)	((gint) GINT32_TO_LE (val))
#define GINT16_TO_LE(val)	((gint16) (val))
#define G_MAXINT16	((gint16) 0x7fff)
#define G_MININT16	((gint16) 0x8000)
#define GINT16_TO_BE(val)	((gint16) GUINT16_SWAP_LE_BE (val))
#define GINT32_TO_LE(val)	((gint32) (val))
#define G_MAXINT32	((gint32) 0x7fffffff)
#define G_MININT32	((gint32) 0x80000000)
#define GINT32_TO_BE(val)	((gint32) GUINT32_SWAP_LE_BE (val))
#define GINT64_TO_LE(val)	((gint64) (val))
#define GINT64_TO_BE(val)	((gint64) GUINT64_SWAP_LE_BE (val))
#define G_MAXINT8	((gint8) 0x7f)
#define G_MININT8	((gint8) 0x80)
#if defined __i386__
#define GLONG_TO_BE(val)	((glong) GINT32_TO_BE (val))
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define GLONG_TO_BE(val)	((glong) GINT32_TO_BE (val))
#endif
#if defined __s390__ && !defined __s390x__
#define GLONG_TO_BE(val)	((glong) GINT32_TO_BE (val))
#endif
#if defined __i386__
#define GLONG_TO_LE(val)	((glong) GINT32_TO_LE (val))
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define GLONG_TO_LE(val)	((glong) GINT32_TO_LE (val))
#endif
#if defined __s390__ && !defined __s390x__
#define GLONG_TO_LE(val)	((glong) GINT32_TO_LE (val))
#endif
#if defined __ia64__
#define GLONG_TO_BE(val)	((glong) GINT64_TO_BE (val))
#endif
#if defined __powerpc64__
#define GLONG_TO_BE(val)	((glong) GINT64_TO_BE (val))
#endif
#if defined __x86_64__
#define GLONG_TO_BE(val)	((glong) GINT64_TO_BE (val))
#endif
#if defined __s390x__
#define GLONG_TO_BE(val)	((glong) GINT64_TO_BE (val))
#endif
#if defined __ia64__
#define GLONG_TO_LE(val)	((glong) GINT64_TO_LE (val))
#endif
#if defined __powerpc64__
#define GLONG_TO_LE(val)	((glong) GINT64_TO_LE (val))
#endif
#if defined __x86_64__
#define GLONG_TO_LE(val)	((glong) GINT64_TO_LE (val))
#endif
#if defined __s390x__
#define GLONG_TO_LE(val)	((glong) GINT64_TO_LE (val))
#endif
#if defined __ia64__
#define GINT_TO_POINTER(i)	((gpointer) (glong) (i))
#endif
#if defined __powerpc64__
#define GINT_TO_POINTER(i)	((gpointer) (glong) (i))
#endif
#if defined __x86_64__
#define GINT_TO_POINTER(i)	((gpointer) (glong) (i))
#endif
#if defined __s390x__
#define GINT_TO_POINTER(i)	((gpointer) (glong) (i))
#endif
#define GSIZE_TO_POINTER(s)	((gpointer) (gsize) (s))
#if defined __ia64__
#define GUINT_TO_POINTER(u)	((gpointer) (gulong) (u))
#endif
#if defined __powerpc64__
#define GUINT_TO_POINTER(u)	((gpointer) (gulong) (u))
#endif
#if defined __x86_64__
#define GUINT_TO_POINTER(u)	((gpointer) (gulong) (u))
#endif
#if defined __s390x__
#define GUINT_TO_POINTER(u)	((gpointer) (gulong) (u))
#endif
#if defined __i386__
#define GINT_TO_POINTER(i)	((gpointer) (i))
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define GINT_TO_POINTER(i)	((gpointer) (i))
#endif
#if defined __s390__ && !defined __s390x__
#define GINT_TO_POINTER(i)	((gpointer) (i))
#endif
#if defined __i386__
#define GUINT_TO_POINTER(u)	((gpointer) (u))
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define GUINT_TO_POINTER(u)	((gpointer) (u))
#endif
#if defined __s390__ && !defined __s390x__
#define GUINT_TO_POINTER(u)	((gpointer) (u))
#endif
#define GPOINTER_TO_SIZE(p)	((gsize) (p))
#if defined __ia64__
#define GPOINTER_TO_UINT(p)	((guint) (gulong) (p))
#endif
#if defined __powerpc64__
#define GPOINTER_TO_UINT(p)	((guint) (gulong) (p))
#endif
#if defined __x86_64__
#define GPOINTER_TO_UINT(p)	((guint) (gulong) (p))
#endif
#if defined __s390x__
#define GPOINTER_TO_UINT(p)	((guint) (gulong) (p))
#endif
#if defined __i386__
#define GPOINTER_TO_UINT(p)	((guint) (p))
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define GPOINTER_TO_UINT(p)	((guint) (p))
#endif
#if defined __s390__ && !defined __s390x__
#define GPOINTER_TO_UINT(p)	((guint) (p))
#endif
#define GUINT_TO_BE(val)	((guint) GUINT32_TO_BE (val))
#define GUINT_TO_LE(val)	((guint) GUINT32_TO_LE (val))
#define GUINT16_SWAP_LE_PDP(val)	((guint16) (val))
#define GUINT16_TO_LE(val)	((guint16) (val))
#define G_MAXUINT16	((guint16) 0xffff)
#define GUINT32_TO_LE(val)	((guint32) (val))
#define G_MAXUINT32	((guint32) 0xffffffff)
#define GUINT64_TO_LE(val)	((guint64) (val))
#define G_MAXUINT8	((guint8) 0xff)
#if defined __i386__
#define GULONG_TO_BE(val)	((gulong) GUINT32_TO_BE (val))
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define GULONG_TO_BE(val)	((gulong) GUINT32_TO_BE (val))
#endif
#if defined __s390__ && !defined __s390x__
#define GULONG_TO_BE(val)	((gulong) GUINT32_TO_BE (val))
#endif
#if defined __i386__
#define GULONG_TO_LE(val)	((gulong) GUINT32_TO_LE (val))
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define GULONG_TO_LE(val)	((gulong) GUINT32_TO_LE (val))
#endif
#if defined __s390__ && !defined __s390x__
#define GULONG_TO_LE(val)	((gulong) GUINT32_TO_LE (val))
#endif
#if defined __ia64__
#define GULONG_TO_BE(val)	((gulong) GUINT64_TO_BE (val))
#endif
#if defined __powerpc64__
#define GULONG_TO_BE(val)	((gulong) GUINT64_TO_BE (val))
#endif
#if defined __x86_64__
#define GULONG_TO_BE(val)	((gulong) GUINT64_TO_BE (val))
#endif
#if defined __s390x__
#define GULONG_TO_BE(val)	((gulong) GUINT64_TO_BE (val))
#endif
#if defined __ia64__
#define GULONG_TO_LE(val)	((gulong) GUINT64_TO_LE (val))
#endif
#if defined __powerpc64__
#define GULONG_TO_LE(val)	((gulong) GUINT64_TO_LE (val))
#endif
#if defined __x86_64__
#define GULONG_TO_LE(val)	((gulong) GUINT64_TO_LE (val))
#endif
#if defined __s390x__
#define GULONG_TO_LE(val)	((gulong) GUINT64_TO_LE (val))
#endif
#define g_random_boolean()	((g_random_int () & (1 << 15)) != 0)
#define g_rand_boolean(rand_)	((g_rand_int (rand_) & (1 << 15)) != 0)
#define g_list_next(list)	((list) ? (((GList *)(list))->next) : NULL)
#define g_list_previous(list)	((list) ? (((GList *)(list))->prev) : NULL)
#define g_slist_next(slist)	((slist) ? (((GSList *)(slist))->next) : NULL)
#define g_atomic_int_get(atomic)	(*(atomic))
#define g_atomic_pointer_get(atomic)	(*(atomic))
#define G_LOG_2_BASE_10	(0.30102999566398119521)
#define G_ALLOCATOR_LIST	(1)
#define G_IEEE754_DOUBLE_BIAS	(1023)
#define G_IEEE754_FLOAT_BIAS	(127)
#define G_ALLOCATOR_SLIST	(2)
#define G_ASCII_DTOSTR_BUF_SIZE	(29 + 10)
#define G_ALLOCATOR_NODE	(3)
#define G_HOOK_FLAG_USER_SHIFT	(4)
#define G_LOG_LEVEL_USER_SHIFT	(8)
#define g_ATEXIT(proc)	(atexit (proc))
#define g_utf8_next_char(p)	(char *)((p) + g_utf8_skip[*(const guchar *)(p)])
#define G_LIKELY(expr)	(expr)
#define G_UNLIKELY(expr)	(expr)
#define GINT16_FROM_BE(val)	(GINT16_TO_BE (val))
#define GINT16_FROM_LE(val)	(GINT16_TO_LE (val))
#define GINT32_FROM_BE(val)	(GINT32_TO_BE (val))
#define GINT32_FROM_LE(val)	(GINT32_TO_LE (val))
#define GINT64_FROM_BE(val)	(GINT64_TO_BE (val))
#define GINT64_FROM_LE(val)	(GINT64_TO_LE (val))
#define GINT_FROM_BE(val)	(GINT_TO_BE (val))
#define GINT_FROM_LE(val)	(GINT_TO_LE (val))
#define GLONG_FROM_BE(val)	(GLONG_TO_BE (val))
#define GLONG_FROM_LE(val)	(GLONG_TO_LE (val))
#define g_ntohs(val)	(GUINT16_FROM_BE (val))
#define GUINT16_SWAP_BE_PDP(val)	(GUINT16_SWAP_LE_BE (val))
#define GUINT16_TO_BE(val)	(GUINT16_SWAP_LE_BE (val))
#define GUINT16_SWAP_LE_BE(val)	(GUINT16_SWAP_LE_BE_CONSTANT (val))
#define GUINT16_FROM_BE(val)	(GUINT16_TO_BE (val))
#define g_htons(val)	(GUINT16_TO_BE (val))
#define GUINT16_FROM_LE(val)	(GUINT16_TO_LE (val))
#define g_ntohl(val)	(GUINT32_FROM_BE (val))
#define GUINT32_TO_BE(val)	(GUINT32_SWAP_LE_BE (val))
#define GUINT32_SWAP_LE_BE(val)	(GUINT32_SWAP_LE_BE_CONSTANT (val))
#define GUINT32_FROM_BE(val)	(GUINT32_TO_BE (val))
#define g_htonl(val)	(GUINT32_TO_BE (val))
#define GUINT32_FROM_LE(val)	(GUINT32_TO_LE (val))
#define GUINT64_TO_BE(val)	(GUINT64_SWAP_LE_BE (val))
#define GUINT64_SWAP_LE_BE(val)	(GUINT64_SWAP_LE_BE_CONSTANT (val))
#define GUINT64_FROM_BE(val)	(GUINT64_TO_BE (val))
#define GUINT64_FROM_LE(val)	(GUINT64_TO_LE (val))
#define GUINT_FROM_BE(val)	(GUINT_TO_BE (val))
#define GUINT_FROM_LE(val)	(GUINT_TO_LE (val))
#define GULONG_FROM_BE(val)	(GULONG_TO_BE (val))
#define GULONG_FROM_LE(val)	(GULONG_TO_LE (val))
#define g_atomic_int_inc(atomic)	(g_atomic_int_add ((atomic), 1))
#if defined __ia64__
#define G_GINT64_CONSTANT(val)	(G_GNUC_EXTENSION (val ##L))
#endif
#if defined __powerpc64__
#define G_GINT64_CONSTANT(val)	(G_GNUC_EXTENSION (val ##L))
#endif
#if defined __x86_64__
#define G_GINT64_CONSTANT(val)	(G_GNUC_EXTENSION (val ##L))
#endif
#if defined __s390x__
#define G_GINT64_CONSTANT(val)	(G_GNUC_EXTENSION (val ##L))
#endif
#if defined __i386__
#define G_GINT64_CONSTANT(val)	(G_GNUC_EXTENSION (val ##LL))
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define G_GINT64_CONSTANT(val)	(G_GNUC_EXTENSION (val ##LL))
#endif
#if defined __s390__ && !defined __s390x__
#define G_GINT64_CONSTANT(val)	(G_GNUC_EXTENSION (val ##LL))
#endif
#define G_HOOK_FLAGS(hook)	(G_HOOK (hook)->flags)
#define G_LOG_FATAL_MASK	(G_LOG_FLAG_RECURSION | G_LOG_LEVEL_ERROR)
#define G_OPTION_ERROR	(g_option_error_quark ())
#define g_thread_supported()	(g_threads_got_initialized)
#define G_N_ELEMENTS(arr)	(sizeof (arr) / sizeof ((arr)[0]))
#define G_STMT_START	(void) __extension__ (
#define G_STMT_END	)
#define G_PRIORITY_HIGH	-100
#define G_DIR_SEPARATOR_S	"/"
#define G_HAVE_GROWING_STACK	0
#define G_PRIORITY_DEFAULT	0
#define G_LN2	0.69314718055994530941723212145817656807550013436026
#define G_PI_4	0.78539816339744830961566084581987572104929234984378
#define G_CSET_DIGITS	"0123456789"
#define G_DATE_BAD_DAY	0U
#define G_DATE_BAD_JULIAN	0U
#define G_DATE_BAD_YEAR	0U
#define G_MUTEX_DEBUG_MAGIC	0xf8e18ad7
#define G_ALLOC_ONLY	1
#define G_CAN_INLINE	1
#define G_HAVE_GINT64	1
#define G_HAVE_GNUC_VARARGS	1
#define G_HAVE_GNUC_VISIBILITY	1
#define G_HAVE_INLINE	1
#define G_HAVE_ISO_VARARGS	1
#define G_HAVE___INLINE	1
#define G_HAVE___INLINE__	1
#if defined __ia64__
#define G_VA_COPY_AS_ARRAY	1
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define G_VA_COPY_AS_ARRAY	1
#endif
#if defined __powerpc64__
#define G_VA_COPY_AS_ARRAY	1
#endif
#if defined __s390__ && !defined __s390x__
#define G_VA_COPY_AS_ARRAY	1
#endif
#if defined __x86_64__
#define G_VA_COPY_AS_ARRAY	1
#endif
#if defined __s390x__
#define G_VA_COPY_AS_ARRAY	1
#endif
#define G_SQRT2	1.4142135623730950488016887242096980785696718753769
#define G_PI_2	1.5707963267948966192313216916397514420985846996876
#define G_PRIORITY_HIGH_IDLE	100
#define G_USEC_PER_SEC	1000000
#define G_LITTLE_ENDIAN	1234
#define GLIB_MAJOR_VERSION	2
#define G_ALLOC_AND_FREE	2
#define G_LN10	2.3025850929940456840179914546843642076011014886288
#define G_E	2.7182818284590452353602874713526624977572470937000
#define G_PRIORITY_DEFAULT_IDLE	200
#if defined __i386__
#define GLIB_LSB_PADDING_SIZE	24
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define GLIB_LSB_PADDING_SIZE	24
#endif
#if defined __s390__ && !defined __s390x__
#define GLIB_LSB_PADDING_SIZE	24
#endif
#define G_PI	3.1415926535897932384626433832795028841971693993751
#define G_PRIORITY_LOW	300
#define G_PDP_ENDIAN	3412
#if defined __i386__
#define GLIB_LSB_DATA_SIZE	4
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define GLIB_LSB_DATA_SIZE	4
#endif
#if defined __s390__ && !defined __s390x__
#define GLIB_LSB_DATA_SIZE	4
#endif
#if defined __i386__
#define GLIB_SIZEOF_LONG	4
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define GLIB_SIZEOF_LONG	4
#endif
#if defined __s390__ && !defined __s390x__
#define GLIB_SIZEOF_LONG	4
#endif
#if defined __i386__
#define GLIB_SIZEOF_SIZE_T	4
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define GLIB_SIZEOF_SIZE_T	4
#endif
#if defined __s390__ && !defined __s390x__
#define GLIB_SIZEOF_SIZE_T	4
#endif
#if defined __i386__
#define GLIB_SIZEOF_VOID_P	4
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define GLIB_SIZEOF_VOID_P	4
#endif
#if defined __s390__ && !defined __s390x__
#define GLIB_SIZEOF_VOID_P	4
#endif
#if defined __ia64__
#define GLIB_LSB_PADDING_SIZE	40
#endif
#if defined __powerpc64__
#define GLIB_LSB_PADDING_SIZE	40
#endif
#if defined __x86_64__
#define GLIB_LSB_PADDING_SIZE	40
#endif
#if defined __s390x__
#define GLIB_LSB_PADDING_SIZE	40
#endif
#define G_BIG_ENDIAN	4321
#if defined __ia64__
#define GLIB_LSB_DATA_SIZE	8
#endif
#if defined __powerpc64__
#define GLIB_LSB_DATA_SIZE	8
#endif
#if defined __x86_64__
#define GLIB_LSB_DATA_SIZE	8
#endif
#if defined __s390x__
#define GLIB_LSB_DATA_SIZE	8
#endif
#if defined __ia64__
#define GLIB_SIZEOF_LONG	8
#endif
#if defined __powerpc64__
#define GLIB_SIZEOF_LONG	8
#endif
#if defined __x86_64__
#define GLIB_SIZEOF_LONG	8
#endif
#if defined __s390x__
#define GLIB_SIZEOF_LONG	8
#endif
#if defined __ia64__
#define GLIB_SIZEOF_SIZE_T	8
#endif
#if defined __powerpc64__
#define GLIB_SIZEOF_SIZE_T	8
#endif
#if defined __x86_64__
#define GLIB_SIZEOF_SIZE_T	8
#endif
#if defined __s390x__
#define GLIB_SIZEOF_SIZE_T	8
#endif
#if defined __ia64__
#define GLIB_SIZEOF_VOID_P	8
#endif
#if defined __powerpc64__
#define GLIB_SIZEOF_VOID_P	8
#endif
#if defined __x86_64__
#define GLIB_SIZEOF_VOID_P	8
#endif
#if defined __s390x__
#define GLIB_SIZEOF_VOID_P	8
#endif
#define G_SEARCHPATH_SEPARATOR_S	":"
#define GLIB_SYSDEF_POLLIN	=1
#define GLIB_SYSDEF_POLLHUP	=16
#define GLIB_SYSDEF_POLLPRI	=2
#define GLIB_SYSDEF_POLLNVAL	=32
#define GLIB_SYSDEF_POLLOUT	=4
#define GLIB_SYSDEF_POLLERR	=8
#define G_CSET_A_2_Z	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define G_CSET_a_2_z	"abcdefghijklmnopqrstuvwxyz"
#define g_alloca(size)	alloca (size)
#define G_CONST_RETURN	const
#define G_MAXDOUBLE	DBL_MAX
#define G_MINDOUBLE	DBL_MIN
#define GLIB_VAR	extern
#define G_LOCK_EXTERN(name)	extern GStaticMutex G_LOCK_NAME (name)
#define G_INLINE_FUNC	extern inline
#define G_MAXFLOAT	FLT_MAX
#define G_MINFLOAT	FLT_MIN
#define G_MEM_ALIGN	GLIB_SIZEOF_LONG
#define g_array_append_val(a,v)	g_array_append_vals (a, &(v), 1)
#define g_array_insert_val(a,i,v)	g_array_insert_vals (a, i, &(v), 1)
#define g_array_prepend_val(a,v)	g_array_prepend_vals (a, &(v), 1)
#define ATEXIT(proc)	g_ATEXIT(proc)
#if defined __powerpc__ && !defined __powerpc64__
#define G_BYTE_ORDER	G_BIG_ENDIAN
#endif
#if defined __powerpc64__
#define G_BYTE_ORDER	G_BIG_ENDIAN
#endif
#if defined __s390__ && !defined __s390x__
#define G_BYTE_ORDER	G_BIG_ENDIAN
#endif
#if defined __s390x__
#define G_BYTE_ORDER	G_BIG_ENDIAN
#endif
#define G_CONVERT_ERROR	g_convert_error_quark()
#define g_date_day	g_date_get_day
#define g_date_days_in_month	g_date_get_days_in_month
#define g_date_day_of_year	g_date_get_day_of_year
#define g_date_julian	g_date_get_julian
#define g_date_monday_weeks_in_year	g_date_get_monday_weeks_in_year
#define g_date_monday_week_of_year	g_date_get_monday_week_of_year
#define g_date_month	g_date_get_month
#define g_date_sunday_weeks_in_year	g_date_get_sunday_weeks_in_year
#define g_date_sunday_week_of_year	g_date_get_sunday_week_of_year
#define g_date_weekday	g_date_get_weekday
#define g_date_year	g_date_get_year
#define G_FILE_ERROR	g_file_error_quark ()
#define G_MAXINT64	G_GINT64_CONSTANT(0x7fffffffffffffff)
#define G_MININT64	G_GINT64_CONSTANT(0x8000000000000000)
#define G_MAXUINT64	G_GINT64_CONSTANT(0xffffffffffffffffU)
#define G_IO_CHANNEL_ERROR	g_io_channel_error_quark()
#define G_KEY_FILE_ERROR	g_key_file_error_quark()
#if defined __i386__
#define G_BYTE_ORDER	G_LITTLE_ENDIAN
#endif
#if defined __ia64__
#define G_BYTE_ORDER	G_LITTLE_ENDIAN
#endif
#if defined __x86_64__
#define G_BYTE_ORDER	G_LITTLE_ENDIAN
#endif
#define g_debug(...)	g_log (G_LOG_DOMAIN, G_LOG_LEVEL_DEBUG, __VA_ARGS__)
#define g_error(...)	g_log (G_LOG_DOMAIN, G_LOG_LEVEL_ERROR, __VA_ARGS__)
#define G_MARKUP_ERROR	g_markup_error_quark ()
#if defined __i386__
#define G_MAXSIZE	G_MAXUINT
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define G_MAXSIZE	G_MAXUINT
#endif
#if defined __s390__ && !defined __s390x__
#define G_MAXSIZE	G_MAXUINT
#endif
#if defined __ia64__
#define G_MAXSIZE	G_MAXULONG
#endif
#if defined __powerpc64__
#define G_MAXSIZE	G_MAXULONG
#endif
#if defined __x86_64__
#define G_MAXSIZE	G_MAXULONG
#endif
#if defined __s390x__
#define G_MAXSIZE	G_MAXULONG
#endif
#define G_SHELL_ERROR	g_shell_error_quark ()
#define G_SPAWN_ERROR	g_spawn_error_quark ()
#define G_LOCK(name)	g_static_mutex_lock (&G_LOCK_NAME (name))
#define G_TRYLOCK(name)	g_static_mutex_trylock (&G_LOCK_NAME (name))
#define G_UNLOCK(name)	g_static_mutex_unlock (&G_LOCK_NAME (name))
#if defined __ia64__
#define G_BREAKPOINT()	G_STMT_START{ raise (SIGTRAP); }G_STMT_END
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define G_BREAKPOINT()	G_STMT_START{ raise (SIGTRAP); }G_STMT_END
#endif
#if defined __powerpc64__
#define G_BREAKPOINT()	G_STMT_START{ raise (SIGTRAP); }G_STMT_END
#endif
#if defined __s390__ && !defined __s390x__
#define G_BREAKPOINT()	G_STMT_START{ raise (SIGTRAP); }G_STMT_END
#endif
#if defined __s390x__
#define G_BREAKPOINT()	G_STMT_START{ raise (SIGTRAP); }G_STMT_END
#endif
#if defined __i386__
#define G_BREAKPOINT()	G_STMT_START{ __asm__ __volatile__ ("int $03"); }G_STMT_END
#endif
#if defined __x86_64__
#define G_BREAKPOINT()	G_STMT_START{ __asm__ __volatile__ ("int $03"); }G_STMT_END
#endif
#define g_strstrip(string)	g_strchomp (g_strchug (string))
#define G_STRINGIFY(macro_or_string)	G_STRINGIFY_ARG (macro_or_string)
#define g_cond_free(cond)	G_THREAD_CF (cond_free, (void)0, (cond))
#define g_cond_signal(cond)	G_THREAD_CF (cond_signal, (void)0, (cond))
#define g_mutex_free(mutex)	G_THREAD_CF (mutex_free, (void)0, (mutex))
#define g_mutex_lock(mutex)	G_THREAD_CF (mutex_lock, (void)0, (mutex))
#define g_mutex_trylock(mutex)	G_THREAD_CF (mutex_trylock, TRUE, (mutex))
#define g_mutex_unlock(mutex)	G_THREAD_CF (mutex_unlock, (void)0, (mutex))
#define g_thread_yield()	G_THREAD_CF (thread_yield, (void)0, ())
#define G_THREAD_ERROR	g_thread_error_quark ()
#define g_cond_new()	G_THREAD_UF (cond_new, ())
#define g_mutex_new()	G_THREAD_UF (mutex_new, ())
#define g_private_new(destructor)	G_THREAD_UF (private_new, (destructor))
#define G_LOCK_NAME(name)	g__ ## name ## _lock
#define G_GINT16_MODIFIER	"h"
#define G_GINT16_FORMAT	"hi"
#define G_GUINT16_FORMAT	"hu"
#define G_GINT32_FORMAT	"i"
#if defined __i386__
#define G_GSSIZE_FORMAT	"i"
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define G_GSSIZE_FORMAT	"i"
#endif
#if defined __s390__ && !defined __s390x__
#define G_GSSIZE_FORMAT	"i"
#endif
#define G_MAXINT	INT_MAX
#define G_MININT	INT_MIN
#if defined __ia64__
#define G_GINT64_MODIFIER	"l"
#endif
#if defined __powerpc64__
#define G_GINT64_MODIFIER	"l"
#endif
#if defined __x86_64__
#define G_GINT64_MODIFIER	"l"
#endif
#if defined __s390x__
#define G_GINT64_MODIFIER	"l"
#endif
#if defined __ia64__
#define G_GSIZE_MODIFIER	"l"
#endif
#if defined __powerpc64__
#define G_GSIZE_MODIFIER	"l"
#endif
#if defined __x86_64__
#define G_GSIZE_MODIFIER	"l"
#endif
#if defined __s390x__
#define G_GSIZE_MODIFIER	"l"
#endif
#if defined __ia64__
#define G_GINT64_FORMAT	"li"
#endif
#if defined __powerpc64__
#define G_GINT64_FORMAT	"li"
#endif
#if defined __x86_64__
#define G_GINT64_FORMAT	"li"
#endif
#if defined __s390x__
#define G_GINT64_FORMAT	"li"
#endif
#if defined __ia64__
#define G_GSSIZE_FORMAT	"li"
#endif
#if defined __powerpc64__
#define G_GSSIZE_FORMAT	"li"
#endif
#if defined __x86_64__
#define G_GSSIZE_FORMAT	"li"
#endif
#if defined __s390x__
#define G_GSSIZE_FORMAT	"li"
#endif
#if defined __i386__
#define G_GINT64_MODIFIER	"ll"
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define G_GINT64_MODIFIER	"ll"
#endif
#if defined __s390__ && !defined __s390x__
#define G_GINT64_MODIFIER	"ll"
#endif
#if defined __i386__
#define G_GINT64_FORMAT	"lli"
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define G_GINT64_FORMAT	"lli"
#endif
#if defined __s390__ && !defined __s390x__
#define G_GINT64_FORMAT	"lli"
#endif
#if defined __i386__
#define G_GUINT64_FORMAT	"llu"
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define G_GUINT64_FORMAT	"llu"
#endif
#if defined __s390__ && !defined __s390x__
#define G_GUINT64_FORMAT	"llu"
#endif
#define G_MAXLONG	LONG_MAX
#define G_MINLONG	LONG_MIN
#if defined __ia64__
#define G_GSIZE_FORMAT	"lu"
#endif
#if defined __powerpc64__
#define G_GSIZE_FORMAT	"lu"
#endif
#if defined __x86_64__
#define G_GSIZE_FORMAT	"lu"
#endif
#if defined __s390x__
#define G_GSIZE_FORMAT	"lu"
#endif
#if defined __ia64__
#define G_GUINT64_FORMAT	"lu"
#endif
#if defined __powerpc64__
#define G_GUINT64_FORMAT	"lu"
#endif
#if defined __x86_64__
#define G_GUINT64_FORMAT	"lu"
#endif
#if defined __s390x__
#define G_GUINT64_FORMAT	"lu"
#endif
#define G_MAXSHORT	SHRT_MAX
#define G_MINSHORT	SHRT_MIN
#define G_MODULE_SUFFIX	"so"
#define G_LOCK_DEFINE_STATIC(name)	static G_LOCK_DEFINE (name)
#if defined __i386__
#define G_GSIZE_FORMAT	"u"
#endif
#if defined __powerpc__ && !defined __powerpc64__
#define G_GSIZE_FORMAT	"u"
#endif
#if defined __s390__ && !defined __s390x__
#define G_GSIZE_FORMAT	"u"
#endif
#define G_GUINT32_FORMAT	"u"
#define G_MAXUINT	UINT_MAX
#define G_MAXULONG	ULONG_MAX
#define G_MAXUSHORT	USHRT_MAX
#define G_VA_COPY	va_copy
#define G_STR_DELIMITERS	"_-|> <."
#define G_GNUC_INTERNAL	__attribute__((visibility("hidden")))
#define G_GNUC_CONST	__attribute__((__const__))
#define G_GNUC_DEPRECATED	__attribute__((__deprecated__))
#define G_GNUC_FORMAT(arg_idx)	__attribute__((__format_arg__ (arg_idx)))
#define G_GNUC_MALLOC	__attribute__((__malloc__))
#define G_GNUC_NORETURN	__attribute__((__noreturn__))
#define G_GNUC_NO_INSTRUMENT	__attribute__((__no_instrument_function__))
#define G_GNUC_PURE	__attribute__((__pure__))
#define G_GNUC_UNUSED	__attribute__((__unused__))
#define alloca(size)	__builtin_alloca (size)
#define G_GNUC_EXTENSION	__extension__
#define G_STRLOC	__FILE__ ":" G_STRINGIFY (__LINE__)
#define G_STATIC_PRIVATE_INIT	{ 0 }
#define G_ONCE_INIT	{ G_ONCE_STATUS_NOTCALLED, NULL }
#define G_STATIC_REC_MUTEX_INIT	{ G_STATIC_MUTEX_INIT }
#if __LSB_VERSION__ < 40
#define GLIB_MINOR_VERSION	6
#endif				/* __LSB_VERSION__ < 4.0 */

#if __LSB_VERSION__ < 41
#define GLIB_MICRO_VERSION	6
#endif				/* __LSB_VERSION__ < 4.1 */

#if __LSB_VERSION__ >= 40
#ifdef __cplusplus
# define G_BEGIN_DECLS  extern "C" {
#else
# define G_BEGIN_DECLS
#endif
#ifdef __cplusplus
# define G_END_DECLS  }
#else
# define G_END_DECLS
#endif
#if __LSB_VERSION__ < 41
#define GLIB_MINOR_VERSION	8
#endif				/* __LSB_VERSION__ < 4.1 */

#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 41
#define g_atomic_int_set(atomic, newval)	((void) (*(atomic) = (newval)))
#define g_atomic_pointer_set(atomic, newval)	((void) (*(atomic) = (newval)))
#define GLIB_MINOR_VERSION	12
#define GLIB_MICRO_VERSION	3
#endif				/* __LSB_VERSION__ >= 4.1 */




/* Arch Specific Header Section for glib-2.0/glib.h*/
#if defined __i386__
/* IA32 */
    typedef int gssize;

#endif
#if defined __ia64__
/* IA64 */
    typedef long int gssize;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef long int gssize;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef int gssize;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef long int gssize;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef int gssize;

#endif
#if defined __s390x__
/* S390X */
    typedef long int gssize;

#endif
#if defined __i386__
/* IA32 */
    typedef long long int gint64;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef long int gint64;

#endif
#if defined __ia64__
/* IA64 */
    typedef long int gint64;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef long long int gint64;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef long int gint64;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef long long int gint64;

#endif
#if defined __s390x__
/* S390X */
    typedef long int gint64;

#endif
#if defined __i386__
/* IA32 */
    typedef long long unsigned int guint64;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned long int guint64;

#endif
#if defined __ia64__
/* IA64 */
    typedef unsigned long int guint64;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef long long unsigned int guint64;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned long int guint64;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef long long unsigned int guint64;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned long int guint64;

#endif

/* Default Header Section for glib-2.0/glib.h*/
#if __LSB_VERSION__ >= 41
#define __G_BOOKMARK_FILE_H__
#define __G_SLICE_H__
#define g_slice_new(type)	((type*) g_slice_alloc (sizeof (type)))
#define g_slice_new0(type)	((type*) g_slice_alloc0 (sizeof (type)))
#define g_slice_dup(type,mem)	(1 ? (type*) g_slice_copy (sizeof (type), (mem)) : ((void) ((type*) 0 == (mem)), (type*) 0))
#define G_BOOKMARK_FILE_ERROR	(g_bookmark_file_error_quark ())
#define g_slice_free(type,mem)	do { if (1) g_slice_free1 (sizeof (type), (mem)); else (void) ((type*) 0 == (mem)); } while (0)
#define g_slice_free_chain(type,mem_chain,next)	do { if (1) g_slice_free_chain_with_offset (sizeof (type), (mem_chain), G_STRUCT_OFFSET (type, next)); else (void) ((type*) 0 == (mem_chain)); } while (0)
#endif				/* __LSB_VERSION__ >= 4.1 */



    typedef short unsigned int guint16;

    typedef int gint;

    typedef gint gboolean;

    typedef unsigned int guint;

    typedef void *gpointer;

    typedef gpointer(*GThreadFunc) (gpointer);

    typedef enum {
	G_THREAD_PRIORITY_LOW = 0,
	G_THREAD_PRIORITY_NORMAL = 1,
	G_THREAD_PRIORITY_HIGH = 2,
	G_THREAD_PRIORITY_URGENT = 3
    } GThreadPriority;

    typedef struct _GThread GThread;

    typedef unsigned int guint32;

    typedef guint32 GQuark;

    typedef char gchar;

    typedef struct _GError GError;

    typedef void (*GPrintFunc) (const gchar *);

    typedef struct _GMemChunk GMemChunk;

    typedef long unsigned int gulong;

    typedef struct _GList GList;

    typedef struct _GMainLoop GMainLoop;

    typedef struct _GHook GHook;

    typedef void (*GDestroyNotify) (gpointer);

    typedef struct _GHookList GHookList;

    typedef void (*GHookFinalizeFunc) (GHookList *, GHook *);

    typedef struct _GQueue GQueue;

    typedef struct _GSList GSList;

#if defined __i386__
/* IA32 */
    typedef unsigned int gsize;

#endif
#if defined __ia64__
/* IA64 */
    typedef unsigned long int gsize;

#endif
#if defined __x86_64__
/* x86-64 */
    typedef unsigned long int gsize;

#endif
#if defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
    typedef unsigned int gsize;

#endif
#if defined __powerpc64__
/* PPC64 */
    typedef unsigned long int gsize;

#endif
#if defined __s390__ && !defined __s390x__
/* S390 */
    typedef unsigned int gsize;

#endif
#if defined __s390x__
/* S390X */
    typedef unsigned long int gsize;

#endif
    typedef struct _GString GString;

    typedef struct _GPtrArray GPtrArray;

    typedef struct _GRand GRand;

    typedef struct _GDir GDir;

    typedef struct _GRelation GRelation;

    typedef struct _GOptionContext GOptionContext;

    typedef struct _GKeyFile GKeyFile;

    typedef struct _GPatternSpec GPatternSpec;

    typedef guint32 gunichar;

    typedef gchar *(*GCompletionFunc) (gpointer);

    typedef gint(*GCompletionStrncmpFunc) (const gchar *, const gchar *,
					   gsize);

    typedef struct _GCompletion GCompletion;

    typedef struct _GTimer GTimer;

    typedef struct _GHashTable GHashTable;

    typedef const void *gconstpointer;

    typedef guint(*GHashFunc) (gconstpointer);

    typedef gboolean(*GEqualFunc) (gconstpointer, gconstpointer);

    typedef struct _GStaticMutex GStaticMutex;

    typedef union _GSystemThread GSystemThread;

    typedef struct _GStaticRecMutex GStaticRecMutex;

    typedef struct _GMarkupParseContext GMarkupParseContext;

    typedef struct _GData GData;

    typedef enum {
	G_IO_STATUS_ERROR = 0,
	G_IO_STATUS_NORMAL = 1,
	G_IO_STATUS_EOF = 2,
	G_IO_STATUS_AGAIN = 3
    } GIOStatus;

    typedef struct _GIOChannel GIOChannel;

    typedef enum {
	G_SEEK_CUR = 0,
	G_SEEK_SET = 1,
	G_SEEK_END = 2
    } GSeekType;

    typedef struct _GSource GSource;

    typedef gboolean(*GSourceFunc) (gpointer);

    typedef struct _GSourceCallbackFuncs GSourceCallbackFuncs;

    typedef void (*GSourceDummyMarshal) (void);

    typedef struct _GSourceFuncs GSourceFuncs;

    typedef struct _GMainContext GMainContext;

    typedef enum {
	G_IO_IN = 1,
	G_IO_OUT = 4,
	G_IO_PRI = 2,
	G_IO_ERR = 8,
	G_IO_HUP = 16,
	G_IO_NVAL = 32
    } GIOCondition;

    typedef enum {
	G_IO_FLAG_APPEND = 1,
	G_IO_FLAG_NONBLOCK = 2,
	G_IO_FLAG_IS_READABLE = 4,
	G_IO_FLAG_IS_WRITEABLE = 8,
	G_IO_FLAG_IS_SEEKABLE = 16,
	G_IO_FLAG_MASK = 31,
	G_IO_FLAG_GET_MASK = 31,
	G_IO_FLAG_SET_MASK = 3
    } GIOFlags;

    typedef struct _GIOFuncs GIOFuncs;

    typedef struct _GIConv *GIConv;

    typedef struct _GOptionGroup GOptionGroup;

    typedef enum {
	G_SPAWN_LEAVE_DESCRIPTORS_OPEN = 1,
	G_SPAWN_DO_NOT_REAP_CHILD = 2,
	G_SPAWN_SEARCH_PATH = 4,
	G_SPAWN_STDOUT_TO_DEV_NULL = 8,
	G_SPAWN_STDERR_TO_DEV_NULL = 16,
	G_SPAWN_CHILD_INHERITS_STDIN = 32,
	G_SPAWN_FILE_AND_ARGV_ZERO = 64
    } GSpawnFlags;

    typedef void (*GSpawnChildSetupFunc) (gpointer);

    typedef int GPid;

    typedef void (*GFunc) (gpointer, gpointer);

    typedef struct _GThreadPool GThreadPool;

    typedef struct _GDate GDate;

    typedef enum {
	G_DATE_BAD_MONTH = 0,
	G_DATE_JANUARY = 1,
	G_DATE_FEBRUARY = 2,
	G_DATE_MARCH = 3,
	G_DATE_APRIL = 4,
	G_DATE_MAY = 5,
	G_DATE_JUNE = 6,
	G_DATE_JULY = 7,
	G_DATE_AUGUST = 8,
	G_DATE_SEPTEMBER = 9,
	G_DATE_OCTOBER = 10,
	G_DATE_NOVEMBER = 11,
	G_DATE_DECEMBER = 12
    } GDateMonth;

    typedef struct _GAsyncQueue GAsyncQueue;

    typedef short unsigned int gushort;

    typedef struct _GPollFD GPollFD;

    typedef double gdouble;

    typedef struct _GTree GTree;

    typedef gint(*GCompareDataFunc) (gconstpointer, gconstpointer,
				     gpointer);

    typedef unsigned char guint8;

    typedef guint16 GDateYear;

    typedef struct _GCache GCache;

    typedef void (*GHFunc) (gpointer, gpointer, gpointer);

    typedef struct _GScannerConfig GScannerConfig;

    typedef enum {
	G_TOKEN_EOF = 0,
	G_TOKEN_LEFT_PAREN = 40,
	G_TOKEN_RIGHT_PAREN = 41,
	G_TOKEN_LEFT_CURLY = 123,
	G_TOKEN_RIGHT_CURLY = 125,
	G_TOKEN_LEFT_BRACE = 91,
	G_TOKEN_RIGHT_BRACE = 93,
	G_TOKEN_EQUAL_SIGN = 61,
	G_TOKEN_COMMA = 44,
	G_TOKEN_NONE = 256,
	G_TOKEN_ERROR = 257,
	G_TOKEN_CHAR = 258,
	G_TOKEN_BINARY = 259,
	G_TOKEN_OCTAL = 260,
	G_TOKEN_INT = 261,
	G_TOKEN_HEX = 262,
	G_TOKEN_FLOAT = 263,
	G_TOKEN_STRING = 264,
	G_TOKEN_SYMBOL = 265,
	G_TOKEN_IDENTIFIER = 266,
	G_TOKEN_IDENTIFIER_NULL = 267,
	G_TOKEN_COMMENT_SINGLE = 268,
	G_TOKEN_COMMENT_MULTI = 269,
	G_TOKEN_LAST = 270
    } GTokenType;

    typedef unsigned char guchar;

    typedef union _GTokenValue GTokenValue;

    typedef struct _GScanner GScanner;

    typedef void (*GScannerMsgFunc) (GScanner *, gchar *, gboolean);

    typedef struct _GByteArray GByteArray;

    typedef enum {
	G_KEY_FILE_NONE = 0,
	G_KEY_FILE_KEEP_COMMENTS = 1,
	G_KEY_FILE_KEEP_TRANSLATIONS = 2
    } GKeyFileFlags;

    typedef struct _GTrashStack GTrashStack;

    typedef guint16 gunichar2;

    typedef long int glong;

    typedef struct _GArray GArray;

    typedef struct _GNode GNode;

    typedef gboolean(*GHRFunc) (gpointer, gpointer, gpointer);

    typedef gint(*GCompareFunc) (gconstpointer, gconstpointer);

    typedef int gint32;

    typedef gint32 GTime;

    typedef gint(*GPollFunc) (GPollFD *, guint, gint);

    typedef guint8 GDateDay;

    typedef enum {
	G_UNICODE_BREAK_MANDATORY = 0,
	G_UNICODE_BREAK_CARRIAGE_RETURN = 1,
	G_UNICODE_BREAK_LINE_FEED = 2,
	G_UNICODE_BREAK_COMBINING_MARK = 3,
	G_UNICODE_BREAK_SURROGATE = 4,
	G_UNICODE_BREAK_ZERO_WIDTH_SPACE = 5,
	G_UNICODE_BREAK_INSEPARABLE = 6,
	G_UNICODE_BREAK_NON_BREAKING_GLUE = 7,
	G_UNICODE_BREAK_CONTINGENT = 8,
	G_UNICODE_BREAK_SPACE = 9,
	G_UNICODE_BREAK_AFTER = 10,
	G_UNICODE_BREAK_BEFORE = 11,
	G_UNICODE_BREAK_BEFORE_AND_AFTER = 12,
	G_UNICODE_BREAK_HYPHEN = 13,
	G_UNICODE_BREAK_NON_STARTER = 14,
	G_UNICODE_BREAK_OPEN_PUNCTUATION = 15,
	G_UNICODE_BREAK_CLOSE_PUNCTUATION = 16,
	G_UNICODE_BREAK_QUOTATION = 17,
	G_UNICODE_BREAK_EXCLAMATION = 18,
	G_UNICODE_BREAK_IDEOGRAPHIC = 19,
	G_UNICODE_BREAK_NUMERIC = 20,
	G_UNICODE_BREAK_INFIX_SEPARATOR = 21,
	G_UNICODE_BREAK_SYMBOL = 22,
	G_UNICODE_BREAK_ALPHABETIC = 23,
	G_UNICODE_BREAK_PREFIX = 24,
	G_UNICODE_BREAK_POSTFIX = 25,
	G_UNICODE_BREAK_COMPLEX_CONTEXT = 26,
	G_UNICODE_BREAK_AMBIGUOUS = 27,
	G_UNICODE_BREAK_UNKNOWN = 28,
	G_UNICODE_BREAK_NEXT_LINE = 29,
	G_UNICODE_BREAK_WORD_JOINER = 30
    } GUnicodeBreakType;

    typedef struct _GStringChunk GStringChunk;

    typedef struct _GCond GCond;

    typedef struct _GStaticRWLock GStaticRWLock;

    typedef void (*GChildWatchFunc) (GPid, gint, gpointer);

    typedef struct _GTimeVal GTimeVal;

    typedef enum {
	G_LOG_FLAG_RECURSION = 1,
	G_LOG_FLAG_FATAL = 2,
	G_LOG_LEVEL_ERROR = 4,
	G_LOG_LEVEL_CRITICAL = 8,
	G_LOG_LEVEL_WARNING = 16,
	G_LOG_LEVEL_MESSAGE = 32,
	G_LOG_LEVEL_INFO = 64,
	G_LOG_LEVEL_DEBUG = 128,
	G_LOG_LEVEL_MASK = -4
    } GLogLevelFlags;

    typedef enum {
	G_DATE_BAD_WEEKDAY = 0,
	G_DATE_MONDAY = 1,
	G_DATE_TUESDAY = 2,
	G_DATE_WEDNESDAY = 3,
	G_DATE_THURSDAY = 4,
	G_DATE_FRIDAY = 5,
	G_DATE_SATURDAY = 6,
	G_DATE_SUNDAY = 7
    } GDateWeekday;

    typedef enum {
	G_IN_ORDER = 0,
	G_PRE_ORDER = 1,
	G_POST_ORDER = 2,
	G_LEVEL_ORDER = 3
    } GTraverseType;

    typedef enum {
	G_TRAVERSE_LEAVES = 1,
	G_TRAVERSE_NON_LEAVES = 2,
	G_TRAVERSE_ALL = 3,
	G_TRAVERSE_MASK = 3,
	G_TRAVERSE_LEAFS = 1,
	G_TRAVERSE_NON_LEAFS = 2
    } GTraverseFlags;

    typedef struct _GMarkupParser GMarkupParser;

    typedef enum {
	G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG = 1
    } GMarkupParseFlags;

    typedef gboolean(*GHookCheckMarshaller) (GHook *, gpointer);

    typedef gboolean(*GNodeTraverseFunc) (GNode *, gpointer);

    typedef enum {
	G_NORMALIZE_DEFAULT = 0,
	G_NORMALIZE_NFD = 0,
	G_NORMALIZE_DEFAULT_COMPOSE = 1,
	G_NORMALIZE_NFC = 1,
	G_NORMALIZE_ALL = 2,
	G_NORMALIZE_NFKD = 2,
	G_NORMALIZE_ALL_COMPOSE = 3,
	G_NORMALIZE_NFKC = 3
    } GNormalizeMode;

    typedef struct _GMutex GMutex;

    typedef struct _GStaticPrivate GStaticPrivate;

    typedef enum {
	G_FILE_ERROR_EXIST = 0,
	G_FILE_ERROR_ISDIR = 1,
	G_FILE_ERROR_ACCES = 2,
	G_FILE_ERROR_NAMETOOLONG = 3,
	G_FILE_ERROR_NOENT = 4,
	G_FILE_ERROR_NOTDIR = 5,
	G_FILE_ERROR_NXIO = 6,
	G_FILE_ERROR_NODEV = 7,
	G_FILE_ERROR_ROFS = 8,
	G_FILE_ERROR_TXTBSY = 9,
	G_FILE_ERROR_FAULT = 10,
	G_FILE_ERROR_LOOP = 11,
	G_FILE_ERROR_NOSPC = 12,
	G_FILE_ERROR_NOMEM = 13,
	G_FILE_ERROR_MFILE = 14,
	G_FILE_ERROR_NFILE = 15,
	G_FILE_ERROR_BADF = 16,
	G_FILE_ERROR_INVAL = 17,
	G_FILE_ERROR_PIPE = 18,
	G_FILE_ERROR_AGAIN = 19,
	G_FILE_ERROR_INTR = 20,
	G_FILE_ERROR_IO = 21,
	G_FILE_ERROR_PERM = 22,
	G_FILE_ERROR_NOSYS = 23,
	G_FILE_ERROR_FAILED = 24
    } GFileError;

    typedef void (*GDataForeachFunc) (GQuark, gpointer, gpointer);

    typedef struct _GMemVTable GMemVTable;

    typedef enum {
	G_OPTION_ARG_NONE = 0,
	G_OPTION_ARG_STRING = 1,
	G_OPTION_ARG_INT = 2,
	G_OPTION_ARG_CALLBACK = 3,
	G_OPTION_ARG_FILENAME = 4,
	G_OPTION_ARG_STRING_ARRAY = 5,
	G_OPTION_ARG_FILENAME_ARRAY = 6
    } GOptionArg;

    typedef struct _GOptionEntry GOptionEntry;

    typedef enum {
	G_UNICODE_CONTROL = 0,
	G_UNICODE_FORMAT = 1,
	G_UNICODE_UNASSIGNED = 2,
	G_UNICODE_PRIVATE_USE = 3,
	G_UNICODE_SURROGATE = 4,
	G_UNICODE_LOWERCASE_LETTER = 5,
	G_UNICODE_MODIFIER_LETTER = 6,
	G_UNICODE_OTHER_LETTER = 7,
	G_UNICODE_TITLECASE_LETTER = 8,
	G_UNICODE_UPPERCASE_LETTER = 9,
	G_UNICODE_COMBINING_MARK = 10,
	G_UNICODE_ENCLOSING_MARK = 11,
	G_UNICODE_NON_SPACING_MARK = 12,
	G_UNICODE_DECIMAL_NUMBER = 13,
	G_UNICODE_LETTER_NUMBER = 14,
	G_UNICODE_OTHER_NUMBER = 15,
	G_UNICODE_CONNECT_PUNCTUATION = 16,
	G_UNICODE_DASH_PUNCTUATION = 17,
	G_UNICODE_CLOSE_PUNCTUATION = 18,
	G_UNICODE_FINAL_PUNCTUATION = 19,
	G_UNICODE_INITIAL_PUNCTUATION = 20,
	G_UNICODE_OTHER_PUNCTUATION = 21,
	G_UNICODE_OPEN_PUNCTUATION = 22,
	G_UNICODE_CURRENCY_SYMBOL = 23,
	G_UNICODE_MODIFIER_SYMBOL = 24,
	G_UNICODE_MATH_SYMBOL = 25,
	G_UNICODE_OTHER_SYMBOL = 26,
	G_UNICODE_LINE_SEPARATOR = 27,
	G_UNICODE_PARAGRAPH_SEPARATOR = 28,
	G_UNICODE_SPACE_SEPARATOR = 29
    } GUnicodeType;

    typedef void (*GLogFunc) (const gchar *, GLogLevelFlags, const gchar *,
			      gpointer);

    typedef struct _GAllocator GAllocator;

    typedef const gchar *(*GTranslateFunc) (const gchar *, gpointer);

    typedef gboolean(*GOptionParseFunc) (GOptionContext *, GOptionGroup *,
					 gpointer, GError * *);

    typedef void (*GVoidFunc) (void);

    typedef gboolean(*GHookFindFunc) (GHook *, gpointer);

    typedef struct _GTuples GTuples;

    typedef gpointer(*GCopyFunc) (gconstpointer, gpointer);

    typedef void (*GOptionErrorFunc) (GOptionContext *, GOptionGroup *,
				      gpointer, GError * *);

    typedef gpointer(*GCacheNewFunc) (gpointer);

    typedef void (*GCacheDestroyFunc) (gpointer);

    typedef gpointer(*GCacheDupFunc) (gpointer);

    typedef enum {
	G_FILE_TEST_IS_REGULAR = 1,
	G_FILE_TEST_IS_SYMLINK = 2,
	G_FILE_TEST_IS_DIR = 4,
	G_FILE_TEST_IS_EXECUTABLE = 8,
	G_FILE_TEST_EXISTS = 16
    } GFileTest;

    typedef enum {
	G_ONCE_STATUS_NOTCALLED = 0,
	G_ONCE_STATUS_PROGRESS = 1,
	G_ONCE_STATUS_READY = 2
    } GOnceStatus;

    typedef struct _GOnce GOnce;

    typedef gboolean(*GTraverseFunc) (gpointer, gpointer, gpointer);

    typedef gint(*GHookCompareFunc) (GHook *, GHook *);

    typedef void (*GNodeForeachFunc) (GNode *, gpointer);

    typedef struct _GDebugKey GDebugKey;

    typedef struct _GPrivate GPrivate;

    typedef struct _GThreadFunctions GThreadFunctions;

    typedef void (*GHookMarshaller) (GHook *, gpointer);

    typedef enum {
	G_IO_CHANNEL_ERROR_FBIG = 0,
	G_IO_CHANNEL_ERROR_INVAL = 1,
	G_IO_CHANNEL_ERROR_IO = 2,
	G_IO_CHANNEL_ERROR_ISDIR = 3,
	G_IO_CHANNEL_ERROR_NOSPC = 4,
	G_IO_CHANNEL_ERROR_NXIO = 5,
	G_IO_CHANNEL_ERROR_OVERFLOW = 6,
	G_IO_CHANNEL_ERROR_PIPE = 7,
	G_IO_CHANNEL_ERROR_FAILED = 8
    } GIOChannelError;

    typedef gboolean(*GIOFunc) (GIOChannel *, GIOCondition, gpointer);

    typedef void (*GFreeFunc) (gpointer);

    typedef gboolean(*GHookCheckFunc) (gpointer);

    typedef void (*GHookFunc) (gpointer);

    typedef short int gint16;

    typedef enum {
	G_DATE_DAY = 0,
	G_DATE_MONTH = 1,
	G_DATE_YEAR = 2
    } GDateDMY;

    typedef signed char gint8;

    typedef enum {
	G_MARKUP_ERROR_BAD_UTF8 = 0,
	G_MARKUP_ERROR_EMPTY = 1,
	G_MARKUP_ERROR_PARSE = 2,
	G_MARKUP_ERROR_UNKNOWN_ELEMENT = 3,
	G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE = 4,
	G_MARKUP_ERROR_INVALID_CONTENT = 5
    } GMarkupError;

    typedef enum {
	G_IO_ERROR_NONE = 0,
	G_IO_ERROR_AGAIN = 1,
	G_IO_ERROR_INVAL = 2,
	G_IO_ERROR_UNKNOWN = 3
    } GIOError;

    typedef gboolean(*GOptionArgFunc) (const gchar *, const gchar *,
				       gpointer, GError * *);

    typedef enum {
	G_OPTION_FLAG_HIDDEN = 1 << 0,
	G_OPTION_FLAG_IN_MAIN = 1 << 1,
	G_OPTION_FLAG_REVERSE = 1 << 2
    } GOptionFlags;

    typedef enum {
	G_CONVERT_ERROR_NO_CONVERSION,
	G_CONVERT_ERROR_ILLEGAL_SEQUENCE,
	G_CONVERT_ERROR_FAILED,
	G_CONVERT_ERROR_PARTIAL_INPUT,
	G_CONVERT_ERROR_BAD_URI,
	G_CONVERT_ERROR_NOT_ABSOLUTE_PATH
    } GConvertError;

    typedef enum {
	G_ERR_UNKNOWN,
	G_ERR_UNEXP_EOF,
	G_ERR_UNEXP_EOF_IN_STRING,
	G_ERR_UNEXP_EOF_IN_COMMENT,
	G_ERR_NON_DIGIT_IN_CONST,
	G_ERR_DIGIT_RADIX,
	G_ERR_FLOAT_RADIX,
	G_ERR_FLOAT_MALFORMED
    } GErrorType;

    typedef enum {
	G_KEY_FILE_ERROR_UNKNOWN_ENCODING,
	G_KEY_FILE_ERROR_PARSE,
	G_KEY_FILE_ERROR_NOT_FOUND,
	G_KEY_FILE_ERROR_KEY_NOT_FOUND,
	G_KEY_FILE_ERROR_GROUP_NOT_FOUND,
	G_KEY_FILE_ERROR_INVALID_VALUE
    } GKeyFileError;

    typedef enum {
	G_SPAWN_ERROR_FORK,
	G_SPAWN_ERROR_READ,
	G_SPAWN_ERROR_CHDIR,
	G_SPAWN_ERROR_ACCES,
	G_SPAWN_ERROR_PERM,
	G_SPAWN_ERROR_2BIG,
	G_SPAWN_ERROR_NOEXEC,
	G_SPAWN_ERROR_NAMETOOLONG,
	G_SPAWN_ERROR_NOENT,
	G_SPAWN_ERROR_NOMEM,
	G_SPAWN_ERROR_NOTDIR,
	G_SPAWN_ERROR_LOOP,
	G_SPAWN_ERROR_TXTBUSY,
	G_SPAWN_ERROR_IO,
	G_SPAWN_ERROR_NFILE,
	G_SPAWN_ERROR_MFILE,
	G_SPAWN_ERROR_INVAL,
	G_SPAWN_ERROR_ISDIR,
	G_SPAWN_ERROR_LIBBAD,
	G_SPAWN_ERROR_FAILED
    } GSpawnError;

    typedef enum {
	G_HOOK_FLAG_ACTIVE = 1 << 0,
	G_HOOK_FLAG_IN_CALL = 1 << 1,
	G_HOOK_FLAG_MASK = 0x0f
    } GHookFlagMask;

    typedef enum {
	G_THREAD_ERROR_AGAIN
    } GThreadError;

    typedef enum {
	G_OPTION_ERROR_UNKNOWN_OPTION,
	G_OPTION_ERROR_BAD_VALUE,
	G_OPTION_ERROR_FAILED
    } GOptionError;

    typedef enum {
	G_ASCII_ALNUM = 1 << 0,
	G_ASCII_ALPHA = 1 << 1,
	G_ASCII_CNTRL = 1 << 2,
	G_ASCII_DIGIT = 1 << 3,
	G_ASCII_GRAPH = 1 << 4,
	G_ASCII_LOWER = 1 << 5,
	G_ASCII_PRINT = 1 << 6,
	G_ASCII_PUNCT = 1 << 7,
	G_ASCII_SPACE = 1 << 8,
	G_ASCII_UPPER = 1 << 9,
	G_ASCII_XDIGIT = 1 << 10
    } GAsciiType;

    typedef enum {
	G_SHELL_ERROR_BAD_QUOTING,
	G_SHELL_ERROR_EMPTY_STRING,
	G_SHELL_ERROR_FAILED
    } GShellError;

#if __LSB_VERSION__ >= 40
    typedef struct _GMappedFile GMappedFile;

#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 41
    typedef enum {
	G_BOOKMARK_FILE_ERROR_INVALID_URI,
	G_BOOKMARK_FILE_ERROR_INVALID_VALUE,
	G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED,
	G_BOOKMARK_FILE_ERROR_URI_NOT_FOUND,
	G_BOOKMARK_FILE_ERROR_READ,
	G_BOOKMARK_FILE_ERROR_UNKNOWN_ENCODING,
	G_BOOKMARK_FILE_ERROR_WRITE,
	G_BOOKMARK_FILE_ERROR_FILE_NOT_FOUND
    } GBookmarkFileError;

    typedef struct _GBookmarkFile GBookmarkFile;

#endif				/* __LSB_VERSION__ >= 4.1 */

    struct _GThread {
	GThreadFunc func;
	gpointer data;
	gboolean joinable;
	GThreadPriority priority;
    };

    struct _GError {
	GQuark domain;
	gint code;
	gchar *message;
    };

    struct _GList {
	gpointer data;
	GList *next;
	GList *prev;
    };

    struct _GHook {
	gpointer data;
	GHook *next;
	GHook *prev;
	guint ref_count;
	gulong hook_id;
	guint flags;
	gpointer func;
	GDestroyNotify destroy;
    };

    struct _GHookList {
	gulong seq_id;
	guint hook_size:16;
	guint is_setup:1;
	GHook *hooks;
#if __LSB_VERSION__ < 40
	GMemChunk *hook_memchunk;
#endif				/* __LSB_VERSION__ < 40 */
#if __LSB_VERSION__ >= 40
	gpointer dummy3;
#endif				/* __LSB_VERSION__ >= 40 */
	GHookFinalizeFunc finalize_hook;
	gpointer dummy[2];
    };

    struct _GQueue {
	GList *head;
	GList *tail;
	guint length;
    };

    struct _GSList {
	gpointer data;
	GSList *next;
    };

    struct _GString {
	gchar *str;
	gsize len;
	gsize allocated_len;
    };

    struct _GPtrArray {
	gpointer *pdata;
	guint len;
    };

    struct _GCompletion {
	GList *items;
	GCompletionFunc func;
	gchar *prefix;
	GList *cache;
	GCompletionStrncmpFunc strncmp_func;
    };

    struct _GStaticMutex {
	struct _GMutex *runtime_mutex;
	union {
	    char pad[GLIB_LSB_PADDING_SIZE];
	    double dummy_double;
	    void *dummy_pointer;
	    long int dummy_long;
	} static_mutex;
    };

    union _GSystemThread {
	char data[GLIB_LSB_DATA_SIZE];
	double dummy_double;
	void *dummy_pointer;
	long int dummy_long;
    };

    struct _GStaticRecMutex {
	GStaticMutex mutex;
	guint depth;
	GSystemThread owner;
    };

    struct _GIOChannel {
	guint ref_count;
	GIOFuncs *funcs;
	gchar *encoding;
	GIConv read_cd;
	GIConv write_cd;
	gchar *line_term;
	guint line_term_len;
	gsize buf_size;
	GString *read_buf;
	GString *encoded_read_buf;
	GString *write_buf;
	gchar partial_write_buf[6];
	guint use_buffer:1;
	guint do_encode:1;
	guint close_on_unref:1;
	guint is_readable:1;
	guint is_writeable:1;
	guint is_seekable:1;
	gpointer reserved1;
	gpointer reserved2;
    };

    struct _GSource {
	gpointer callback_data;
	GSourceCallbackFuncs *callback_funcs;
	GSourceFuncs *source_funcs;
	guint ref_count;
	GMainContext *context;
	gint priority;
	guint flags;
	guint source_id;
	GSList *poll_fds;
	GSource *prev;
	GSource *next;
	gpointer reserved1;
	gpointer reserved2;
    };

    struct _GSourceCallbackFuncs {
	void (*ref) (gpointer);
	void (*unref) (gpointer);
	void (*get) (gpointer, GSource *, GSourceFunc *, gpointer *);
    };

    struct _GSourceFuncs {
	gboolean(*prepare) (GSource *, gint *);
	gboolean(*check) (GSource *);
	gboolean(*dispatch) (GSource *, GSourceFunc, gpointer);
	void (*finalize) (GSource *);
	GSourceFunc closure_callback;
	GSourceDummyMarshal closure_marshal;
    };

    struct _GIOFuncs {
	GIOStatus(*io_read) (GIOChannel *, gchar *, gsize, gsize *,
			     GError * *);
	GIOStatus(*io_write) (GIOChannel *, const gchar *, gsize, gsize *,
			      GError * *);
	GIOStatus(*io_seek) (GIOChannel *, gint64, GSeekType, GError * *);
	GIOStatus(*io_close) (GIOChannel *, GError * *);
	GSource *(*io_create_watch) (GIOChannel *, GIOCondition);
	void (*io_free) (GIOChannel *);
	 GIOStatus(*io_set_flags) (GIOChannel *, GIOFlags, GError * *);
	 GIOFlags(*io_get_flags) (GIOChannel *);
    };

    struct _GThreadPool {
	GFunc func;
	gpointer user_data;
	gboolean exclusive;
    };

    struct _GDate {
	guint julian_days:32;
	guint julian:1;
	guint dmy:1;
	guint day:6;
	guint month:4;
	guint year:16;
    };

    struct _GPollFD {
	gint fd;
	gushort events;
	gushort revents;
    };

    struct _GScannerConfig {
	gchar *cset_skip_characters;
	gchar *cset_identifier_first;
	gchar *cset_identifier_nth;
	gchar *cpair_comment_single;
	guint case_sensitive:1;
	guint skip_comment_multi:1;
	guint skip_comment_single:1;
	guint scan_comment_multi:1;
	guint scan_identifier:1;
	guint scan_identifier_1char:1;
	guint scan_identifier_NULL:1;
	guint scan_symbols:1;
	guint scan_binary:1;
	guint scan_octal:1;
	guint scan_float:1;
	guint scan_hex:1;
	guint scan_hex_dollar:1;
	guint scan_string_sq:1;
	guint scan_string_dq:1;
	guint numbers_2_int:1;
	guint int_2_float:1;
	guint identifier_2_string:1;
	guint char_2_token:1;
	guint symbol_2_token:1;
	guint scope_0_fallback:1;
	guint store_int64:1;
	guint padding_dummy;
    };

    union _GTokenValue {
	gpointer v_symbol;
	gchar *v_identifier;
	gulong v_binary;
	gulong v_octal;
	gulong v_int;
	guint64 v_int64;
	gdouble v_float;
	gulong v_hex;
	gchar *v_string;
	gchar *v_comment;
	guchar v_char;
	guint v_error;
    };

    struct _GScanner {
	gpointer user_data;
	guint max_parse_errors;
	guint parse_errors;
	const gchar *input_name;
	GData *qdata;
	GScannerConfig *config;
	GTokenType token;
	GTokenValue value;
	guint line;
	guint position;
	GTokenType next_token;
	GTokenValue next_value;
	guint next_line;
	guint next_position;
	GHashTable *symbol_table;
	gint input_fd;
	const gchar *text;
	const gchar *text_end;
	gchar *buffer;
	guint scope_id;
	GScannerMsgFunc msg_handler;
    };

    struct _GByteArray {
	guint8 *data;
	guint len;
    };

    struct _GTrashStack {
	GTrashStack *next;
    };

    struct _GArray {
	gchar *data;
	guint len;
    };

    struct _GNode {
	gpointer data;
	GNode *next;
	GNode *prev;
	GNode *parent;
	GNode *children;
    };

    struct _GStaticRWLock {
	GStaticMutex mutex;
	GCond *read_cond;
	GCond *write_cond;
	guint read_counter;
	gboolean have_writer;
	guint want_to_read;
	guint want_to_write;
    };

    struct _GTimeVal {
	glong tv_sec;
	glong tv_usec;
    };

    struct _GMarkupParser {
	void (*start_element) (GMarkupParseContext *, const gchar *,
			       const gchar * *, const gchar * *, gpointer,
			       GError * *);
	void (*end_element) (GMarkupParseContext *, const gchar *,
			     gpointer, GError * *);
	void (*text) (GMarkupParseContext *, const gchar *, gsize,
		      gpointer, GError * *);
	void (*passthrough) (GMarkupParseContext *, const gchar *, gsize,
			     gpointer, GError * *);
	void (*error) (GMarkupParseContext *, GError *, gpointer);
    };

    struct _GStaticPrivate {
	guint index;
    };

    struct _GMemVTable {
	gpointer(*malloc) (gsize);
	gpointer(*realloc) (gpointer, gsize);
	void (*free) (gpointer);
	 gpointer(*calloc) (gsize, gsize);
	 gpointer(*try_malloc) (gsize);
	 gpointer(*try_realloc) (gpointer, gsize);
    };

    struct _GOptionEntry {
	const gchar *long_name;
	gchar short_name;
	gint flags;
	GOptionArg arg;
	gpointer arg_data;
	const gchar *description;
	const gchar *arg_description;
    };

    struct _GTuples {
	guint len;
    };

    struct _GOnce {
	volatile GOnceStatus status;
	volatile gpointer retval;
    };

    struct _GDebugKey {
	gchar *key;
	guint value;
    };

    struct _GThreadFunctions {
	GMutex *(*mutex_new) (void);
	void (*mutex_lock) (GMutex *);
	 gboolean(*mutex_trylock) (GMutex *);
	void (*mutex_unlock) (GMutex *);
	void (*mutex_free) (GMutex *);
	GCond *(*cond_new) (void);
	void (*cond_signal) (GCond *);
	void (*cond_broadcast) (GCond *);
	void (*cond_wait) (GCond *, GMutex *);
	 gboolean(*cond_timed_wait) (GCond *, GMutex *, GTimeVal *);
	void (*cond_free) (GCond *);
	GPrivate *(*private_new) (GDestroyNotify);
	 gpointer(*private_get) (GPrivate *);
	void (*private_set) (GPrivate *, gpointer);
	void (*thread_create) (GThreadFunc, gpointer, gulong, gboolean,
			       gboolean, GThreadPriority, gpointer,
			       GError * *);
	void (*thread_yield) (void);
	void (*thread_join) (gpointer);
	void (*thread_exit) (void);
	void (*thread_set_priority) (gpointer, GThreadPriority);
	void (*thread_self) (gpointer);
	 gboolean(*thread_equal) (gpointer, gpointer);
    };


/* Function prototypes */

    extern void g_allocator_free(GAllocator * allocator);
    extern GAllocator *g_allocator_new(const gchar * name,
				       guint n_preallocs);
    extern GArray *g_array_append_vals(GArray * array, gconstpointer data,
				       guint len);
    extern gchar *g_array_free(GArray * array, gboolean free_segment);
    extern GArray *g_array_insert_vals(GArray * array, guint index_,
				       gconstpointer data, guint len);
    extern GArray *g_array_new(gboolean zero_terminated, gboolean clear_,
			       guint element_size);
    extern GArray *g_array_prepend_vals(GArray * array, gconstpointer data,
					guint len);
    extern GArray *g_array_remove_index(GArray * array, guint index_);
    extern GArray *g_array_remove_index_fast(GArray * array, guint index_);
    extern GArray *g_array_remove_range(GArray * array, guint index_,
					guint length);
    extern GArray *g_array_set_size(GArray * array, guint length);
    extern GArray *g_array_sized_new(gboolean zero_terminated,
				     gboolean clear_, guint element_size,
				     guint reserved_size);
    extern void g_array_sort(GArray * array, GCompareFunc compare_func);
    extern void g_array_sort_with_data(GArray * array,
				       GCompareDataFunc compare_func,
				       gpointer user_data);
    extern gint g_ascii_digit_value(gchar c);
    extern gchar *g_ascii_dtostr(gchar * buffer, gint buf_len, gdouble d);
    extern gchar *g_ascii_formatd(gchar * buffer, gint buf_len,
				  const gchar * format, gdouble d);
    extern gint g_ascii_strcasecmp(const gchar * s1, const gchar * s2);
    extern gchar *g_ascii_strdown(const gchar * str, gssize len);
    extern gint g_ascii_strncasecmp(const gchar * s1, const gchar * s2,
				    gsize n);
    extern gdouble g_ascii_strtod(const gchar * nptr, gchar * *endptr);
    extern guint64 g_ascii_strtoull(const gchar * nptr, gchar * *endptr,
				    guint base);
    extern gchar *g_ascii_strup(const gchar * str, gssize len);
    extern const guint16 *const g_ascii_table;
    extern gchar g_ascii_tolower(gchar c);
    extern gchar g_ascii_toupper(gchar c);
    extern gint g_ascii_xdigit_value(gchar c);
    extern void g_assert_warning(const char *log_domain, const char *file,
				 const int line,
				 const char *pretty_function,
				 const char *expression);
    extern gint g_async_queue_length(GAsyncQueue * queue);
    extern gint g_async_queue_length_unlocked(GAsyncQueue * queue);
    extern void g_async_queue_lock(GAsyncQueue * queue);
    extern GAsyncQueue *g_async_queue_new(void);
    extern gpointer g_async_queue_pop(GAsyncQueue * queue);
    extern gpointer g_async_queue_pop_unlocked(GAsyncQueue * queue);
    extern void g_async_queue_push(GAsyncQueue * queue, gpointer data);
    extern void g_async_queue_push_unlocked(GAsyncQueue * queue,
					    gpointer data);
    extern GAsyncQueue *g_async_queue_ref(GAsyncQueue * queue);
    extern gpointer g_async_queue_timed_pop(GAsyncQueue * queue,
					    GTimeVal * end_time);
    extern gpointer g_async_queue_timed_pop_unlocked(GAsyncQueue * queue,
						     GTimeVal * end_time);
    extern gpointer g_async_queue_try_pop(GAsyncQueue * queue);
    extern gpointer g_async_queue_try_pop_unlocked(GAsyncQueue * queue);
    extern void g_async_queue_unlock(GAsyncQueue * queue);
    extern void g_async_queue_unref(GAsyncQueue * queue);
    extern void g_atexit(GVoidFunc func);
    extern void g_atomic_int_add(gint * volatile atomic, gint val);
    extern gboolean g_atomic_int_compare_and_exchange(gint *
						      volatile atomic,
						      gint oldval,
						      gint newval);
    extern gint g_atomic_int_exchange_and_add(gint * volatile atomic,
					      gint val);
    extern gboolean g_atomic_pointer_compare_and_exchange(gpointer *
							  volatile atomic,
							  gpointer oldval,
							  gpointer newval);
    extern gint g_bit_nth_lsf(gulong mask, gint nth_bit);
    extern gint g_bit_nth_msf(gulong mask, gint nth_bit);
    extern guint g_bit_storage(gulong number);
    /* g_blow_chunks has been deprecated since Glib 2.10 and should not be used in newly-written code. Use the slice allocator instead. */
    extern void g_blow_chunks(void)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern gchar *g_build_filename(const gchar * first_element, ...);
    extern gchar *g_build_path(const gchar * separator,
			       const gchar * first_element, ...);
    extern GByteArray *g_byte_array_append(GByteArray * array,
					   const guint8 * data, guint len);
    extern guint8 *g_byte_array_free(GByteArray * array,
				     gboolean free_segment);
    extern GByteArray *g_byte_array_new(void);
    extern GByteArray *g_byte_array_prepend(GByteArray * array,
					    const guint8 * data,
					    guint len);
    extern GByteArray *g_byte_array_remove_index(GByteArray * array,
						 guint index_);
    extern GByteArray *g_byte_array_remove_index_fast(GByteArray * array,
						      guint index_);
    extern GByteArray *g_byte_array_remove_range(GByteArray * array,
						 guint index_,
						 guint length);
    extern GByteArray *g_byte_array_set_size(GByteArray * array,
					     guint length);
    extern GByteArray *g_byte_array_sized_new(guint reserved_size);
    extern void g_byte_array_sort(GByteArray * array,
				  GCompareFunc compare_func);
    extern void g_byte_array_sort_with_data(GByteArray * array,
					    GCompareDataFunc compare_func,
					    gpointer user_data);
    extern void g_cache_destroy(GCache * cache);
    extern gpointer g_cache_insert(GCache * cache, gpointer key);
    extern void g_cache_key_foreach(GCache * cache, GHFunc func,
				    gpointer user_data);
    extern GCache *g_cache_new(GCacheNewFunc value_new_func,
			       GCacheDestroyFunc value_destroy_func,
			       GCacheDupFunc key_dup_func,
			       GCacheDestroyFunc key_destroy_func,
			       GHashFunc hash_key_func,
			       GHashFunc hash_value_func,
			       GEqualFunc key_equal_func);
    extern void g_cache_remove(GCache * cache, gconstpointer value);
    /* g_cache_value_foreach is deprecated and should not be used in newly-written code.The reason is that it passes pointers to internal data structures to func; use g_cache_key_foreach instead. */
    extern void g_cache_value_foreach(GCache * cache, GHFunc func,
				      gpointer user_data)
#if __LSB_VERSION__ >= 32
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 32 */
    ;
    extern guint g_child_watch_add(GPid pid, GChildWatchFunc function,
				   gpointer data);
    extern guint g_child_watch_add_full(gint priority, GPid pid,
					GChildWatchFunc function,
					gpointer data,
					GDestroyNotify notify);
    extern GSourceFuncs g_child_watch_funcs;
    extern GSource *g_child_watch_source_new(GPid pid);
    extern void g_clear_error(GError * *err);
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern void g_completion_add_items(GCompletion * cmp, GList * items)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern void g_completion_clear_items(GCompletion * cmp)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern GList *g_completion_complete(GCompletion * cmp,
					const gchar * prefix,
					gchar * *new_prefix)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern GList *g_completion_complete_utf8(GCompletion * cmp,
					     const gchar * prefix,
					     gchar * *new_prefix)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern void g_completion_free(GCompletion * cmp)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern GCompletion *g_completion_new(GCompletionFunc func)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern void g_completion_remove_items(GCompletion * cmp, GList * items)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern void g_completion_set_compare(GCompletion * cmp,
					 GCompletionStrncmpFunc
					 strncmp_func)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern gchar *g_convert(const gchar * str, gssize len,
			    const gchar * to_codeset,
			    const gchar * from_codeset, gsize * bytes_read,
			    gsize * bytes_written, GError * *error);
    extern GQuark g_convert_error_quark(void);
    extern gchar *g_convert_with_fallback(const gchar * str, gssize len,
					  const gchar * to_codeset,
					  const gchar * from_codeset,
					  gchar * fallback,
					  gsize * bytes_read,
					  gsize * bytes_written,
					  GError * *error);
    extern gchar *g_convert_with_iconv(const gchar * str, gssize len,
				       GIConv converter,
				       gsize * bytes_read,
				       gsize * bytes_written,
				       GError * *error);
    extern void g_datalist_clear(GData * *datalist);
    extern void g_datalist_foreach(GData * *datalist,
				   GDataForeachFunc func,
				   gpointer user_data);
    extern gpointer g_datalist_id_get_data(GData * *datalist,
					   GQuark key_id);
    extern gpointer g_datalist_id_remove_no_notify(GData * *datalist,
						   GQuark key_id);
    extern void g_datalist_id_set_data_full(GData * *datalist,
					    GQuark key_id, gpointer data,
					    GDestroyNotify destroy_func);
    extern void g_datalist_init(GData * *datalist);
    extern void g_dataset_destroy(gconstpointer dataset_location);
    extern void g_dataset_foreach(gconstpointer dataset_location,
				  GDataForeachFunc func,
				  gpointer user_data);
    extern gpointer g_dataset_id_get_data(gconstpointer dataset_location,
					  GQuark key_id);
    extern gpointer g_dataset_id_remove_no_notify(gconstpointer
						  dataset_location,
						  GQuark key_id);
    extern void g_dataset_id_set_data_full(gconstpointer dataset_location,
					   GQuark key_id, gpointer data,
					   GDestroyNotify destroy_func);
    extern void g_date_add_days(GDate * date, guint n_days);
    extern void g_date_add_months(GDate * date, guint n_months);
    extern void g_date_add_years(GDate * date, guint n_years);
    extern void g_date_clamp(GDate * date, const GDate * min_date,
			     const GDate * max_date);
    extern void g_date_clear(GDate * date, guint n_dates);
    extern gint g_date_compare(const GDate * lhs, const GDate * rhs);
    extern gint g_date_days_between(const GDate * date1,
				    const GDate * date2);
    extern void g_date_free(GDate * date);
    extern GDateDay g_date_get_day(const GDate * date);
    extern guint g_date_get_day_of_year(const GDate * date);
    extern guint8 g_date_get_days_in_month(GDateMonth month,
					   GDateYear year);
    extern guint g_date_get_iso8601_week_of_year(const GDate * date);
    extern guint32 g_date_get_julian(const GDate * date);
    extern guint g_date_get_monday_week_of_year(const GDate * date);
    extern guint8 g_date_get_monday_weeks_in_year(GDateYear year);
    extern GDateMonth g_date_get_month(const GDate * date);
    extern guint g_date_get_sunday_week_of_year(const GDate * date);
    extern guint8 g_date_get_sunday_weeks_in_year(GDateYear year);
    extern GDateWeekday g_date_get_weekday(const GDate * date);
    extern GDateYear g_date_get_year(const GDate * date);
    extern gboolean g_date_is_first_of_month(const GDate * date);
    extern gboolean g_date_is_last_of_month(const GDate * date);
    extern gboolean g_date_is_leap_year(GDateYear year);
    extern GDate *g_date_new(void);
    extern GDate *g_date_new_dmy(GDateDay day, GDateMonth month,
				 GDateYear year);
    extern GDate *g_date_new_julian(guint32 julian_day);
    extern void g_date_order(GDate * date1, GDate * date2);
    extern void g_date_set_day(GDate * date, GDateDay day);
    extern void g_date_set_dmy(GDate * date, GDateDay day,
			       GDateMonth month, GDateYear y);
    extern void g_date_set_julian(GDate * date, guint32 julian_date);
    extern void g_date_set_month(GDate * date, GDateMonth month);
    extern void g_date_set_parse(GDate * date, const gchar * str);
    /* g_date_set_time has been deprecated since Glib 2.10 and should not be used in newly-written code. Use g_date_set_time_t() instead. */
    extern void g_date_set_time(GDate * date, GTime time_)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern void g_date_set_year(GDate * date, GDateYear year);
    extern gsize g_date_strftime(gchar * s, gsize slen,
				 const gchar * format, const GDate * date);
    extern void g_date_subtract_days(GDate * date, guint n_days);
    extern void g_date_subtract_months(GDate * date, guint n_months);
    extern void g_date_subtract_years(GDate * date, guint n_years);
    extern void g_date_to_struct_tm(const GDate * date, struct tm *tm);
    extern gboolean g_date_valid(const GDate * date);
    extern gboolean g_date_valid_day(GDateDay day);
    extern gboolean g_date_valid_dmy(GDateDay day, GDateMonth month,
				     GDateYear year);
    extern gboolean g_date_valid_julian(guint32 julian_date);
    extern gboolean g_date_valid_month(GDateMonth month);
    extern gboolean g_date_valid_weekday(GDateWeekday weekday);
    extern gboolean g_date_valid_year(GDateYear year);
    extern void g_dir_close(GDir * dir);
    extern GDir *g_dir_open(const gchar * path, guint flags,
			    GError * *error);
    extern const gchar *g_dir_read_name(GDir * dir);
    extern void g_dir_rewind(GDir * dir);
    extern gboolean g_direct_equal(gconstpointer v1, gconstpointer v2);
    extern guint g_direct_hash(gconstpointer v);
    extern GError *g_error_copy(const GError * error);
    extern void g_error_free(GError * error);
    extern gboolean g_error_matches(const GError * error, GQuark domain,
				    gint code);
    extern GError *g_error_new(GQuark domain, gint code,
			       const gchar * format, ...);
    extern GError *g_error_new_literal(GQuark domain, gint code,
				       const gchar * message);
    extern GFileError g_file_error_from_errno(gint err_no);
    extern GQuark g_file_error_quark(void);
    extern gboolean g_file_get_contents(const gchar * filename,
					gchar * *contents, gsize * length,
					GError * *error);
    extern gint g_file_open_tmp(const gchar * tmpl, gchar * *name_used,
				GError * *error);
    extern gchar *g_file_read_link(const gchar * filename,
				   GError * *error);
    extern gboolean g_file_test(const gchar * filename, GFileTest test);
    extern gchar *g_filename_display_basename(const gchar * filename);
    extern gchar *g_filename_display_name(const gchar * filename);
    extern gchar *g_filename_from_uri(const gchar * uri, gchar * *hostname,
				      GError * *error);
    extern gchar *g_filename_from_utf8(const gchar * utf8string,
				       gssize len, gsize * bytes_read,
				       gsize * bytes_written,
				       GError * *error);
    extern gchar *g_filename_to_uri(const gchar * filename,
				    const gchar * hostname,
				    GError * *error);
    extern gchar *g_filename_to_utf8(const gchar * opsysstring, gssize len,
				     gsize * bytes_read,
				     gsize * bytes_written,
				     GError * *error);
    extern gchar *g_find_program_in_path(const gchar * program);
    extern void g_free(gpointer mem);
    extern const gchar *g_get_application_name(void);
    extern gboolean g_get_charset(const char **charset);
    extern gchar *g_get_current_dir(void);
    extern void g_get_current_time(GTimeVal * result);
    extern gboolean g_get_filename_charsets(const gchar * **charsets);
    extern const gchar *g_get_home_dir(void);
    extern const gchar *const *g_get_language_names(void);
    extern gchar *g_get_prgname(void);
    extern const gchar *g_get_real_name(void);
    extern const gchar *const *g_get_system_config_dirs(void);
    extern const gchar *const *g_get_system_data_dirs(void);
    extern const gchar *g_get_tmp_dir(void);
    extern const gchar *g_get_user_cache_dir(void);
    extern const gchar *g_get_user_config_dir(void);
    extern const gchar *g_get_user_data_dir(void);
    extern const gchar *g_get_user_name(void);
    extern const gchar *g_getenv(const gchar * variable);
    extern void g_hash_table_destroy(GHashTable * hash_table);
    extern gpointer g_hash_table_find(GHashTable * hash_table,
				      GHRFunc predicate,
				      gpointer user_data);
    extern void g_hash_table_foreach(GHashTable * hash_table, GHFunc func,
				     gpointer user_data);
    extern guint g_hash_table_foreach_remove(GHashTable * hash_table,
					     GHRFunc func,
					     gpointer user_data);
    extern guint g_hash_table_foreach_steal(GHashTable * hash_table,
					    GHRFunc func,
					    gpointer user_data);
    extern void g_hash_table_insert(GHashTable * hash_table, gpointer key,
				    gpointer value);
    extern gpointer g_hash_table_lookup(GHashTable * hash_table,
					gconstpointer key);
    extern gboolean g_hash_table_lookup_extended(GHashTable * hash_table,
						 gconstpointer lookup_key,
						 gpointer * orig_key,
						 gpointer * value);
    extern GHashTable *g_hash_table_new(GHashFunc hash_func,
					GEqualFunc key_equal_func);
    extern GHashTable *g_hash_table_new_full(GHashFunc hash_func,
					     GEqualFunc key_equal_func,
					     GDestroyNotify
					     key_destroy_func,
					     GDestroyNotify
					     value_destroy_func);
    extern gboolean g_hash_table_remove(GHashTable * hash_table,
					gconstpointer key);
    extern void g_hash_table_replace(GHashTable * hash_table, gpointer key,
				     gpointer value);
    extern guint g_hash_table_size(GHashTable * hash_table);
    extern gboolean g_hash_table_steal(GHashTable * hash_table,
				       gconstpointer key);
    extern GHook *g_hook_alloc(GHookList * hook_list);
    extern gint g_hook_compare_ids(GHook * new_hook, GHook * sibling);
    extern gboolean g_hook_destroy(GHookList * hook_list, gulong hook_id);
    extern void g_hook_destroy_link(GHookList * hook_list, GHook * hook);
    extern GHook *g_hook_find(GHookList * hook_list, gboolean need_valids,
			      GHookFindFunc func, gpointer data);
    extern GHook *g_hook_find_data(GHookList * hook_list,
				   gboolean need_valids, gpointer data);
    extern GHook *g_hook_find_func(GHookList * hook_list,
				   gboolean need_valids, gpointer func);
    extern GHook *g_hook_find_func_data(GHookList * hook_list,
					gboolean need_valids,
					gpointer func, gpointer data);
    extern GHook *g_hook_first_valid(GHookList * hook_list,
				     gboolean may_be_in_call);
    extern void g_hook_free(GHookList * hook_list, GHook * hook);
    extern GHook *g_hook_get(GHookList * hook_list, gulong hook_id);
    extern void g_hook_insert_before(GHookList * hook_list,
				     GHook * sibling, GHook * hook);
    extern void g_hook_insert_sorted(GHookList * hook_list, GHook * hook,
				     GHookCompareFunc func);
    extern void g_hook_list_clear(GHookList * hook_list);
    extern void g_hook_list_init(GHookList * hook_list, guint hook_size);
    extern void g_hook_list_invoke(GHookList * hook_list,
				   gboolean may_recurse);
    extern void g_hook_list_invoke_check(GHookList * hook_list,
					 gboolean may_recurse);
    extern void g_hook_list_marshal(GHookList * hook_list,
				    gboolean may_recurse,
				    GHookMarshaller marshaller,
				    gpointer marshal_data);
    extern void g_hook_list_marshal_check(GHookList * hook_list,
					  gboolean may_recurse,
					  GHookCheckMarshaller marshaller,
					  gpointer marshal_data);
    extern GHook *g_hook_next_valid(GHookList * hook_list, GHook * hook,
				    gboolean may_be_in_call);
    extern void g_hook_prepend(GHookList * hook_list, GHook * hook);
    extern GHook *g_hook_ref(GHookList * hook_list, GHook * hook);
    extern void g_hook_unref(GHookList * hook_list, GHook * hook);
    extern size_t g_iconv(GIConv converter, gchar * *inbuf,
			  gsize * inbytes_left, gchar * *outbuf,
			  gsize * outbytes_left);
    extern gint g_iconv_close(GIConv converter);
    extern GIConv g_iconv_open(const gchar * to_codeset,
			       const gchar * from_codeset);
    extern guint g_idle_add(GSourceFunc function, gpointer data);
    extern guint g_idle_add_full(gint priority, GSourceFunc function,
				 gpointer data, GDestroyNotify notify);
    extern GSourceFuncs g_idle_funcs;
    extern gboolean g_idle_remove_by_data(gpointer data);
    extern GSource *g_idle_source_new(void);
    extern gboolean g_int_equal(gconstpointer v1, gconstpointer v2);
    extern guint g_int_hash(gconstpointer v);
    extern guint g_io_add_watch(GIOChannel * channel,
				GIOCondition condition, GIOFunc func,
				gpointer user_data);
    extern guint g_io_add_watch_full(GIOChannel * channel, gint priority,
				     GIOCondition condition, GIOFunc func,
				     gpointer user_data,
				     GDestroyNotify notify);
    extern GIOChannelError g_io_channel_error_from_errno(gint en);
    extern GQuark g_io_channel_error_quark(void);
    extern GIOStatus g_io_channel_flush(GIOChannel * channel,
					GError * *error);
    extern GIOCondition g_io_channel_get_buffer_condition(GIOChannel *
							  channel);
    extern gsize g_io_channel_get_buffer_size(GIOChannel * channel);
    extern gboolean g_io_channel_get_buffered(GIOChannel * channel);
    extern gboolean g_io_channel_get_close_on_unref(GIOChannel * channel);
    extern const gchar *g_io_channel_get_encoding(GIOChannel * channel);
    extern GIOFlags g_io_channel_get_flags(GIOChannel * channel);
    extern const gchar *g_io_channel_get_line_term(GIOChannel * channel,
						   gint * length);
    extern void g_io_channel_init(GIOChannel * channel);
    extern GIOChannel *g_io_channel_new_file(const gchar * filename,
					     const gchar * mode,
					     GError * *error);
    extern GIOStatus g_io_channel_read_chars(GIOChannel * channel,
					     gchar * buf, gsize count,
					     gsize * bytes_read,
					     GError * *error);
    extern GIOStatus g_io_channel_read_line(GIOChannel * channel,
					    gchar * *str_return,
					    gsize * length,
					    gsize * terminator_pos,
					    GError * *error);
    extern GIOStatus g_io_channel_read_line_string(GIOChannel * channel,
						   GString * buffer,
						   gsize * terminator_pos,
						   GError * *error);
    extern GIOStatus g_io_channel_read_to_end(GIOChannel * channel,
					      gchar * *str_return,
					      gsize * length,
					      GError * *error);
    extern GIOStatus g_io_channel_read_unichar(GIOChannel * channel,
					       gunichar * thechar,
					       GError * *error);
    extern GIOChannel *g_io_channel_ref(GIOChannel * channel);
    extern GIOStatus g_io_channel_seek_position(GIOChannel * channel,
						gint64 offset,
						GSeekType type,
						GError * *error);
    extern void g_io_channel_set_buffer_size(GIOChannel * channel,
					     gsize size);
    extern void g_io_channel_set_buffered(GIOChannel * channel,
					  gboolean buffered);
    extern void g_io_channel_set_close_on_unref(GIOChannel * channel,
						gboolean do_close);
    extern GIOStatus g_io_channel_set_encoding(GIOChannel * channel,
					       const gchar * encoding,
					       GError * *error);
    extern GIOStatus g_io_channel_set_flags(GIOChannel * channel,
					    GIOFlags flags,
					    GError * *error);
    extern void g_io_channel_set_line_term(GIOChannel * channel,
					   const gchar * line_term,
					   gint length);
    extern GIOStatus g_io_channel_shutdown(GIOChannel * channel,
					   gboolean flush, GError * *err);
    extern gint g_io_channel_unix_get_fd(GIOChannel * channel);
    extern GIOChannel *g_io_channel_unix_new(gint fd);
    extern void g_io_channel_unref(GIOChannel * channel);
    extern GIOStatus g_io_channel_write_chars(GIOChannel * channel,
					      const gchar * buf,
					      gssize count,
					      gsize * bytes_written,
					      GError * *error);
    extern GIOStatus g_io_channel_write_unichar(GIOChannel * channel,
						gunichar thechar,
						GError * *error);
    extern GSource *g_io_create_watch(GIOChannel * channel,
				      GIOCondition condition);
    extern GSourceFuncs g_io_watch_funcs;
    extern GQuark g_key_file_error_quark(void);
    extern void g_key_file_free(GKeyFile * key_file);
    extern gboolean g_key_file_get_boolean(GKeyFile * key_file,
					   const gchar * group_name,
					   const gchar * key,
					   GError * *error);
    extern gboolean *g_key_file_get_boolean_list(GKeyFile * key_file,
						 const gchar * group_name,
						 const gchar * key,
						 gsize * length,
						 GError * *error);
    extern gchar *g_key_file_get_comment(GKeyFile * key_file,
					 const gchar * group_name,
					 const gchar * key,
					 GError * *error);
    extern gchar **g_key_file_get_groups(GKeyFile * key_file,
					 gsize * length);
    extern gint g_key_file_get_integer(GKeyFile * key_file,
				       const gchar * group_name,
				       const gchar * key, GError * *error);
    extern gint *g_key_file_get_integer_list(GKeyFile * key_file,
					     const gchar * group_name,
					     const gchar * key,
					     gsize * length,
					     GError * *error);
    extern gchar **g_key_file_get_keys(GKeyFile * key_file,
				       const gchar * group_name,
				       gsize * length, GError * *error);
    extern gchar *g_key_file_get_locale_string(GKeyFile * key_file,
					       const gchar * group_name,
					       const gchar * key,
					       const gchar * locale,
					       GError * *error);
    extern gchar **g_key_file_get_locale_string_list(GKeyFile * key_file,
						     const gchar *
						     group_name,
						     const gchar * key,
						     const gchar * locale,
						     gsize * length,
						     GError * *error);
    extern gchar *g_key_file_get_start_group(GKeyFile * key_file);
    extern gchar *g_key_file_get_string(GKeyFile * key_file,
					const gchar * group_name,
					const gchar * key,
					GError * *error);
    extern gchar **g_key_file_get_string_list(GKeyFile * key_file,
					      const gchar * group_name,
					      const gchar * key,
					      gsize * length,
					      GError * *error);
    extern gchar *g_key_file_get_value(GKeyFile * key_file,
				       const gchar * group_name,
				       const gchar * key, GError * *error);
    extern gboolean g_key_file_has_group(GKeyFile * key_file,
					 const gchar * group_name);
    extern gboolean g_key_file_has_key(GKeyFile * key_file,
				       const gchar * group_name,
				       const gchar * key, GError * *error);
    extern gboolean g_key_file_load_from_data(GKeyFile * key_file,
					      const gchar * data,
					      gsize length,
					      GKeyFileFlags flags,
					      GError * *error);
    extern gboolean g_key_file_load_from_data_dirs(GKeyFile * key_file,
						   const gchar * file,
						   gchar * *full_path,
						   GKeyFileFlags flags,
						   GError * *error);
    extern gboolean g_key_file_load_from_file(GKeyFile * key_file,
					      const gchar * file,
					      GKeyFileFlags flags,
					      GError * *error);
    extern GKeyFile *g_key_file_new(void);
    extern void g_key_file_remove_comment(GKeyFile * key_file,
					  const gchar * group_name,
					  const gchar * key,
					  GError * *error);
    extern void g_key_file_remove_group(GKeyFile * key_file,
					const gchar * group_name,
					GError * *error);
    extern void g_key_file_remove_key(GKeyFile * key_file,
				      const gchar * group_name,
				      const gchar * key, GError * *error);
    extern void g_key_file_set_boolean(GKeyFile * key_file,
				       const gchar * group_name,
				       const gchar * key, gboolean value);
    extern void g_key_file_set_boolean_list(GKeyFile * key_file,
					    const gchar * group_name,
					    const gchar * key,
					    gboolean * list, gsize length);
    extern void g_key_file_set_comment(GKeyFile * key_file,
				       const gchar * group_name,
				       const gchar * key,
				       const gchar * comment,
				       GError * *error);
    extern void g_key_file_set_integer(GKeyFile * key_file,
				       const gchar * group_name,
				       const gchar * key, gint value);
    extern void g_key_file_set_integer_list(GKeyFile * key_file,
					    const gchar * group_name,
					    const gchar * key, gint * list,
					    gsize length);
    extern void g_key_file_set_list_separator(GKeyFile * key_file,
					      gchar separator);
    extern void g_key_file_set_locale_string(GKeyFile * key_file,
					     const gchar * group_name,
					     const gchar * key,
					     const gchar * locale,
					     const gchar * string);
    extern void g_key_file_set_locale_string_list(GKeyFile * key_file,
						  const gchar * group_name,
						  const gchar * key,
						  const gchar * locale,
						  const gchar *
						  const *list,
						  gsize length);
    extern void g_key_file_set_string(GKeyFile * key_file,
				      const gchar * group_name,
				      const gchar * key,
				      const gchar * string);
    extern void g_key_file_set_string_list(GKeyFile * key_file,
					   const gchar * group_name,
					   const gchar * key,
					   const gchar * const *list,
					   gsize length);
    extern void g_key_file_set_value(GKeyFile * key_file,
				     const gchar * group_name,
				     const gchar * key,
				     const gchar * value);
    extern gchar *g_key_file_to_data(GKeyFile * key_file, gsize * length,
				     GError * *error);
    extern GList *g_list_alloc(void);
    extern GList *g_list_append(GList * list, gpointer data);
    extern GList *g_list_concat(GList * list1, GList * list2);
    extern GList *g_list_copy(GList * list);
    extern GList *g_list_delete_link(GList * list, GList * link_);
    extern GList *g_list_find(GList * list, gconstpointer data);
    extern GList *g_list_find_custom(GList * list, gconstpointer data,
				     GCompareFunc func);
    extern GList *g_list_first(GList * list);
    extern void g_list_foreach(GList * list, GFunc func,
			       gpointer user_data);
    extern void g_list_free(GList * list);
    extern void g_list_free_1(GList * list);
    extern gint g_list_index(GList * list, gconstpointer data);
    extern GList *g_list_insert(GList * list, gpointer data,
				gint position);
    extern GList *g_list_insert_before(GList * list, GList * sibling,
				       gpointer data);
    extern GList *g_list_insert_sorted(GList * list, gpointer data,
				       GCompareFunc func);
    extern GList *g_list_last(GList * list);
    extern guint g_list_length(GList * list);
    extern GList *g_list_nth(GList * list, guint n);
    extern gpointer g_list_nth_data(GList * list, guint n);
    extern GList *g_list_nth_prev(GList * list, guint n);
    /* g_list_pop_allocator has been deprecated since Glib 2.10 and should not be used in newly-written code. It does nothing, since GList has been converted to the slice allocator. */
    extern void g_list_pop_allocator(void)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern gint g_list_position(GList * list, GList * llink);
    extern GList *g_list_prepend(GList * list, gpointer data);
    /* g_list_push_allocator has been deprecated since Glib 2.10 and should not be used in newly-written code. It does nothing, since GList has been converted to the slice allocator. */
    extern void g_list_push_allocator(GAllocator * allocator)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern GList *g_list_remove(GList * list, gconstpointer data);
    extern GList *g_list_remove_all(GList * list, gconstpointer data);
    extern GList *g_list_remove_link(GList * list, GList * llink);
    extern GList *g_list_reverse(GList * list);
    extern GList *g_list_sort(GList * list, GCompareFunc compare_func);
    extern GList *g_list_sort_with_data(GList * list,
					GCompareDataFunc compare_func,
					gpointer user_data);
    extern gchar *g_locale_from_utf8(const gchar * utf8string, gssize len,
				     gsize * bytes_read,
				     gsize * bytes_written,
				     GError * *error);
    extern gchar *g_locale_to_utf8(const gchar * opsysstring, gssize len,
				   gsize * bytes_read,
				   gsize * bytes_written, GError * *error);
    extern void g_log(const gchar * log_domain, GLogLevelFlags log_level,
		      const gchar * format, ...);
    extern void g_log_default_handler(const gchar * log_domain,
				      GLogLevelFlags log_level,
				      const gchar * message,
				      gpointer unused_data);
    extern void g_log_remove_handler(const gchar * log_domain,
				     guint handler_id);
    extern GLogLevelFlags g_log_set_always_fatal(GLogLevelFlags
						 fatal_mask);
    extern GLogFunc g_log_set_default_handler(GLogFunc log_func,
					      gpointer user_data);
    extern GLogLevelFlags g_log_set_fatal_mask(const gchar * log_domain,
					       GLogLevelFlags fatal_mask);
    extern guint g_log_set_handler(const gchar * log_domain,
				   GLogLevelFlags log_levels,
				   GLogFunc log_func, gpointer user_data);
    extern void g_logv(const gchar * log_domain, GLogLevelFlags log_level,
		       const gchar * format, va_list args);
    extern gboolean g_main_context_acquire(GMainContext * context);
    extern void g_main_context_add_poll(GMainContext * context,
					GPollFD * fd, gint priority);
    extern gint g_main_context_check(GMainContext * context,
				     gint max_priority, GPollFD * fds,
				     gint n_fds);
    extern GMainContext *g_main_context_default(void);
    extern void g_main_context_dispatch(GMainContext * context);
    extern GSource
	*g_main_context_find_source_by_funcs_user_data(GMainContext *
						       context,
						       GSourceFuncs *
						       funcs,
						       gpointer user_data);
    extern GSource *g_main_context_find_source_by_id(GMainContext *
						     context,
						     guint source_id);
    extern GSource *g_main_context_find_source_by_user_data(GMainContext *
							    context,
							    gpointer
							    user_data);
    extern GPollFunc g_main_context_get_poll_func(GMainContext * context);
    extern gboolean g_main_context_iteration(GMainContext * context,
					     gboolean may_block);
    extern GMainContext *g_main_context_new(void);
    extern gboolean g_main_context_pending(GMainContext * context);
    extern gboolean g_main_context_prepare(GMainContext * context,
					   gint * priority);
    extern gint g_main_context_query(GMainContext * context,
				     gint max_priority, gint * timeout_,
				     GPollFD * fds, gint n_fds);
    extern GMainContext *g_main_context_ref(GMainContext * context);
    extern void g_main_context_release(GMainContext * context);
    extern void g_main_context_remove_poll(GMainContext * context,
					   GPollFD * fd);
    extern void g_main_context_set_poll_func(GMainContext * context,
					     GPollFunc func);
    extern void g_main_context_unref(GMainContext * context);
    extern gboolean g_main_context_wait(GMainContext * context,
					GCond * cond, GMutex * mutex);
    extern void g_main_context_wakeup(GMainContext * context);
    extern int g_main_depth(void);
    extern GMainContext *g_main_loop_get_context(GMainLoop * loop);
    extern gboolean g_main_loop_is_running(GMainLoop * loop);
    extern GMainLoop *g_main_loop_new(GMainContext * context,
				      gboolean is_running);
    extern void g_main_loop_quit(GMainLoop * loop);
    extern GMainLoop *g_main_loop_ref(GMainLoop * loop);
    extern void g_main_loop_run(GMainLoop * loop);
    extern void g_main_loop_unref(GMainLoop * loop);
    extern gpointer g_malloc(gulong n_bytes);
    extern gpointer g_malloc0(gulong n_bytes);
    extern GQuark g_markup_error_quark(void);
    extern gchar *g_markup_escape_text(const gchar * text, gssize length);
    extern gboolean g_markup_parse_context_end_parse(GMarkupParseContext *
						     context,
						     GError * *error);
    extern void g_markup_parse_context_free(GMarkupParseContext * context);
    extern const gchar
	*g_markup_parse_context_get_element(GMarkupParseContext * context);
    extern void g_markup_parse_context_get_position(GMarkupParseContext *
						    context,
						    gint * line_number,
						    gint * char_number);
    extern GMarkupParseContext *g_markup_parse_context_new(const
							   GMarkupParser *
							   parser,
							   GMarkupParseFlags
							   flags,
							   gpointer
							   user_data,
							   GDestroyNotify
							   user_data_dnotify);
    extern gboolean g_markup_parse_context_parse(GMarkupParseContext *
						 context,
						 const gchar * text,
						 gssize text_len,
						 GError * *error);
    extern char *g_markup_printf_escaped(const char *format, ...);
    extern char *g_markup_vprintf_escaped(const char *format,
					  va_list args);
    /* g_mem_chunk_alloc has been deprecated since Glib 2.10 and should not be used in newly-written code. Use g_slice_alloc() instead. */
    extern gpointer g_mem_chunk_alloc(GMemChunk * mem_chunk)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* g_mem_chunk_alloc0 has been deprecated since Glib 2.10 and should not be used in newly-written code. Use g_slice_alloc0() instead. */
    extern gpointer g_mem_chunk_alloc0(GMemChunk * mem_chunk)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* g_mem_chunk_clean has been deprecated since Glib 2.10 and should not be used in newly-written code. Use the slice allocator instead. */
    extern void g_mem_chunk_clean(GMemChunk * mem_chunk)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* g_mem_chunk_destroy has been deprecated since Glib 2.10 and should not be used in newly-written code. Use the slice allocator instead. */
    extern void g_mem_chunk_destroy(GMemChunk * mem_chunk)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* g_mem_chunk_free has been deprecated since Glib 2.10 and should not be used in newly-written code. Use g_slice_free1() instead. */
    extern void g_mem_chunk_free(GMemChunk * mem_chunk, gpointer mem)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* g_mem_chunk_info has been deprecated since Glib 2.10 and should not be used in newly-written code. Use the slice allocator instead. */
    extern void g_mem_chunk_info(void)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* g_mem_chunk_new has been deprecated since Glib 2.10 and should not be used in newly-written code. Use the slice allocator instead. */
    extern GMemChunk *g_mem_chunk_new(const gchar * name, gint atom_size,
				      gulong area_size, gint type)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* g_mem_chunk_print has been deprecated since Glib 2.10 and should not be used in newly-written code. Use the slice allocator instead. */
    extern void g_mem_chunk_print(GMemChunk * mem_chunk)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* g_mem_chunk_reset has been deprecated since Glib 2.10 and should not be used in newly-written code. Use the slice allocator instead. */
    extern void g_mem_chunk_reset(GMemChunk * mem_chunk)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern gboolean g_mem_is_system_malloc(void);
    extern void g_mem_profile(void);
    extern void g_mem_set_vtable(GMemVTable * vtable);
    extern gpointer g_memdup(gconstpointer mem, guint byte_size);
    extern gint g_mkstemp(gchar * tmpl);
    extern gint g_node_child_index(GNode * node, gpointer data);
    extern gint g_node_child_position(GNode * node, GNode * child);
    extern void g_node_children_foreach(GNode * node, GTraverseFlags flags,
					GNodeForeachFunc func,
					gpointer data);
    extern GNode *g_node_copy(GNode * node);
    extern GNode *g_node_copy_deep(GNode * node, GCopyFunc copy_func,
				   gpointer data);
    extern guint g_node_depth(GNode * node);
    extern void g_node_destroy(GNode * root);
    extern GNode *g_node_find(GNode * root, GTraverseType order,
			      GTraverseFlags flags, gpointer data);
    extern GNode *g_node_find_child(GNode * node, GTraverseFlags flags,
				    gpointer data);
    extern GNode *g_node_first_sibling(GNode * node);
    extern GNode *g_node_get_root(GNode * node);
    extern GNode *g_node_insert(GNode * parent, gint position,
				GNode * node);
    extern GNode *g_node_insert_after(GNode * parent, GNode * sibling,
				      GNode * node);
    extern GNode *g_node_insert_before(GNode * parent, GNode * sibling,
				       GNode * node);
    extern gboolean g_node_is_ancestor(GNode * node, GNode * descendant);
    extern GNode *g_node_last_child(GNode * node);
    extern GNode *g_node_last_sibling(GNode * node);
    extern guint g_node_max_height(GNode * root);
    extern guint g_node_n_children(GNode * node);
    extern guint g_node_n_nodes(GNode * root, GTraverseFlags flags);
    extern GNode *g_node_new(gpointer data);
    extern GNode *g_node_nth_child(GNode * node, guint n);
    /* g_node_pop_allocator has been deprecated since Glib 2.10 and should not be used in newly-written code. It does nothing, since GNode has been converted to the slice allocator. */
    extern void g_node_pop_allocator(void)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern GNode *g_node_prepend(GNode * parent, GNode * node);
    /* g_node_push_allocator has been deprecated since Glib 2.10 and should not be used in newly-written code. It does nothing, since GNode has been converted to the slice allocator. */
    extern void g_node_push_allocator(GAllocator * dummy)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern void g_node_reverse_children(GNode * node);
    extern void g_node_traverse(GNode * root, GTraverseType order,
				GTraverseFlags flags, gint max_depth,
				GNodeTraverseFunc func, gpointer data);
    extern void g_node_unlink(GNode * node);
    extern void g_nullify_pointer(gpointer * nullify_location);
    extern void g_on_error_query(const gchar * prg_name);
    extern void g_on_error_stack_trace(const gchar * prg_name);
    extern gpointer g_once_impl(GOnce * once, GThreadFunc func,
				gpointer arg);
    extern void g_option_context_add_group(GOptionContext * context,
					   GOptionGroup * group);
    extern void g_option_context_add_main_entries(GOptionContext * context,
						  const GOptionEntry *
						  entries,
						  const gchar *
						  translation_domain);
    extern void g_option_context_free(GOptionContext * context);
    extern gboolean g_option_context_get_help_enabled(GOptionContext *
						      context);
    extern gboolean
	g_option_context_get_ignore_unknown_options(GOptionContext *
						    context);
    extern GOptionGroup *g_option_context_get_main_group(GOptionContext *
							 context);
    extern GOptionContext *g_option_context_new(const gchar *
						parameter_string);
    extern gboolean g_option_context_parse(GOptionContext * context,
					   gint * argc, gchar * **argv,
					   GError * *error);
    extern void g_option_context_set_help_enabled(GOptionContext * context,
						  gboolean help_enabled);
    extern void g_option_context_set_ignore_unknown_options(GOptionContext
							    * context,
							    gboolean
							    ignore_unknown);
    extern void g_option_context_set_main_group(GOptionContext * context,
						GOptionGroup * group);
    extern GQuark g_option_error_quark(void);
    extern void g_option_group_add_entries(GOptionGroup * group,
					   const GOptionEntry * entries);
    extern void g_option_group_free(GOptionGroup * group);
    extern GOptionGroup *g_option_group_new(const gchar * name,
					    const gchar * description,
					    const gchar * help_description,
					    gpointer user_data,
					    GDestroyNotify destroy);
    extern void g_option_group_set_error_hook(GOptionGroup * group,
					      GOptionErrorFunc error_func);
    extern void g_option_group_set_parse_hooks(GOptionGroup * group,
					       GOptionParseFunc
					       pre_parse_func,
					       GOptionParseFunc
					       post_parse_func);
    extern void g_option_group_set_translate_func(GOptionGroup * group,
						  GTranslateFunc func,
						  gpointer data,
						  GDestroyNotify
						  destroy_notify);
    extern void g_option_group_set_translation_domain(GOptionGroup * group,
						      const gchar *
						      domain);
    extern guint g_parse_debug_string(const gchar * string,
				      const GDebugKey * keys, guint nkeys);
    extern gchar *g_path_get_basename(const gchar * file_name);
    extern gchar *g_path_get_dirname(const gchar * file_name);
    extern gboolean g_path_is_absolute(const gchar * file_name);
    extern const gchar *g_path_skip_root(const gchar * file_name);
    extern gboolean g_pattern_match(GPatternSpec * pspec,
				    guint string_length,
				    const gchar * string,
				    const gchar * string_reversed);
    extern gboolean g_pattern_match_simple(const gchar * pattern,
					   const gchar * string);
    extern gboolean g_pattern_match_string(GPatternSpec * pspec,
					   const gchar * string);
    extern gboolean g_pattern_spec_equal(GPatternSpec * pspec1,
					 GPatternSpec * pspec2);
    extern void g_pattern_spec_free(GPatternSpec * pspec);
    extern GPatternSpec *g_pattern_spec_new(const gchar * pattern);
    extern void g_print(const gchar * format, ...);
    extern void g_printerr(const gchar * format, ...);
    extern gsize g_printf_string_upper_bound(const gchar * format,
					     va_list args);
    extern void g_propagate_error(GError * *dest, GError * src);
    extern void g_ptr_array_add(GPtrArray * array, gpointer data);
    extern void g_ptr_array_foreach(GPtrArray * array, GFunc func,
				    gpointer user_data);
    extern gpointer *g_ptr_array_free(GPtrArray * array,
				      gboolean free_seg);
    extern GPtrArray *g_ptr_array_new(void);
    extern gboolean g_ptr_array_remove(GPtrArray * array, gpointer data);
    extern gboolean g_ptr_array_remove_fast(GPtrArray * array,
					    gpointer data);
    extern gpointer g_ptr_array_remove_index(GPtrArray * array,
					     guint index_);
    extern gpointer g_ptr_array_remove_index_fast(GPtrArray * array,
						  guint index_);
    extern void g_ptr_array_remove_range(GPtrArray * array, guint index_,
					 guint length);
    extern void g_ptr_array_set_size(GPtrArray * array, gint length);
    extern GPtrArray *g_ptr_array_sized_new(guint reserved_size);
    extern void g_ptr_array_sort(GPtrArray * array,
				 GCompareFunc compare_func);
    extern void g_ptr_array_sort_with_data(GPtrArray * array,
					   GCompareDataFunc compare_func,
					   gpointer user_data);
    extern void g_qsort_with_data(gconstpointer pbase, gint total_elems,
				  gsize size,
				  GCompareDataFunc compare_func,
				  gpointer user_data);
    extern GQuark g_quark_from_static_string(const gchar * string);
    extern GQuark g_quark_from_string(const gchar * string);
    extern const gchar *g_quark_to_string(GQuark quark);
    extern GQuark g_quark_try_string(const gchar * string);
    extern GQueue *g_queue_copy(GQueue * queue);
    extern void g_queue_delete_link(GQueue * queue, GList * link_);
    extern GList *g_queue_find(GQueue * queue, gconstpointer data);
    extern GList *g_queue_find_custom(GQueue * queue, gconstpointer data,
				      GCompareFunc func);
    extern void g_queue_foreach(GQueue * queue, GFunc func,
				gpointer user_data);
    extern void g_queue_free(GQueue * queue);
    extern guint g_queue_get_length(GQueue * queue);
    extern gint g_queue_index(GQueue * queue, gconstpointer data);
    extern void g_queue_insert_after(GQueue * queue, GList * sibling,
				     gpointer data);
    extern void g_queue_insert_before(GQueue * queue, GList * sibling,
				      gpointer data);
    extern void g_queue_insert_sorted(GQueue * queue, gpointer data,
				      GCompareDataFunc func,
				      gpointer user_data);
    extern gboolean g_queue_is_empty(GQueue * queue);
    extern gint g_queue_link_index(GQueue * queue, GList * link_);
    extern GQueue *g_queue_new(void);
    extern gpointer g_queue_peek_head(GQueue * queue);
    extern GList *g_queue_peek_head_link(GQueue * queue);
    extern gpointer g_queue_peek_nth(GQueue * queue, guint n);
    extern GList *g_queue_peek_nth_link(GQueue * queue, guint n);
    extern gpointer g_queue_peek_tail(GQueue * queue);
    extern GList *g_queue_peek_tail_link(GQueue * queue);
    extern gpointer g_queue_pop_head(GQueue * queue);
    extern GList *g_queue_pop_head_link(GQueue * queue);
    extern gpointer g_queue_pop_nth(GQueue * queue, guint n);
    extern GList *g_queue_pop_nth_link(GQueue * queue, guint n);
    extern gpointer g_queue_pop_tail(GQueue * queue);
    extern GList *g_queue_pop_tail_link(GQueue * queue);
    extern void g_queue_push_head(GQueue * queue, gpointer data);
    extern void g_queue_push_head_link(GQueue * queue, GList * link_);
    extern void g_queue_push_nth(GQueue * queue, gpointer data, gint n);
    extern void g_queue_push_nth_link(GQueue * queue, gint n,
				      GList * link_);
    extern void g_queue_push_tail(GQueue * queue, gpointer data);
    extern void g_queue_push_tail_link(GQueue * queue, GList * link_);
    extern void g_queue_remove(GQueue * queue, gconstpointer data);
    extern void g_queue_remove_all(GQueue * queue, gconstpointer data);
    extern void g_queue_reverse(GQueue * queue);
    extern void g_queue_sort(GQueue * queue, GCompareDataFunc compare_func,
			     gpointer user_data);
    extern void g_queue_unlink(GQueue * queue, GList * link_);
    extern GRand *g_rand_copy(GRand * rand_);
    extern gdouble g_rand_double(GRand * rand_);
    extern gdouble g_rand_double_range(GRand * rand_, gdouble begin,
				       gdouble end);
    extern void g_rand_free(GRand * rand_);
    extern guint32 g_rand_int(GRand * rand_);
    extern gint32 g_rand_int_range(GRand * rand_, gint32 begin,
				   gint32 end);
    extern GRand *g_rand_new(void);
    extern GRand *g_rand_new_with_seed(guint32 seed);
    extern GRand *g_rand_new_with_seed_array(const guint32 * seed,
					     guint seed_length);
    extern void g_rand_set_seed(GRand * rand_, guint32 seed);
    extern void g_rand_set_seed_array(GRand * rand_, const guint32 * seed,
				      guint seed_length);
    extern gdouble g_random_double(void);
    extern gdouble g_random_double_range(gdouble begin, gdouble end);
    extern guint32 g_random_int(void);
    extern gint32 g_random_int_range(gint32 begin, gint32 end);
    extern void g_random_set_seed(guint32 seed);
    extern gpointer g_realloc(gpointer mem, gulong n_bytes);
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern gint g_relation_count(GRelation * relation, gconstpointer key,
				 gint field)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern gint g_relation_delete(GRelation * relation, gconstpointer key,
				  gint field)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern void g_relation_destroy(GRelation * relation)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern gboolean g_relation_exists(GRelation * relation, ...)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern void g_relation_index(GRelation * relation, gint field,
				 GHashFunc hash_func,
				 GEqualFunc key_equal_func)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern void g_relation_insert(GRelation * relation, ...)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern GRelation *g_relation_new(gint fields)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern void g_relation_print(GRelation * relation)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern GTuples *g_relation_select(GRelation * relation,
				      gconstpointer key, gint field)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern void g_return_if_fail_warning(const char *log_domain,
					 const char *pretty_function,
					 const char *expression);
    extern guint g_scanner_cur_line(GScanner * scanner);
    extern guint g_scanner_cur_position(GScanner * scanner);
    extern GTokenType g_scanner_cur_token(GScanner * scanner);
    extern GTokenValue g_scanner_cur_value(GScanner * scanner);
    extern void g_scanner_destroy(GScanner * scanner);
    extern gboolean g_scanner_eof(GScanner * scanner);
    extern void g_scanner_error(GScanner * scanner, const gchar * format,
				...);
    extern GTokenType g_scanner_get_next_token(GScanner * scanner);
    extern void g_scanner_input_file(GScanner * scanner, gint input_fd);
    extern void g_scanner_input_text(GScanner * scanner,
				     const gchar * text, guint text_len);
    extern gpointer g_scanner_lookup_symbol(GScanner * scanner,
					    const gchar * symbol);
    extern GScanner *g_scanner_new(const GScannerConfig * config_templ);
    extern GTokenType g_scanner_peek_next_token(GScanner * scanner);
    extern void g_scanner_scope_add_symbol(GScanner * scanner,
					   guint scope_id,
					   const gchar * symbol,
					   gpointer value);
    extern void g_scanner_scope_foreach_symbol(GScanner * scanner,
					       guint scope_id, GHFunc func,
					       gpointer user_data);
    extern gpointer g_scanner_scope_lookup_symbol(GScanner * scanner,
						  guint scope_id,
						  const gchar * symbol);
    extern void g_scanner_scope_remove_symbol(GScanner * scanner,
					      guint scope_id,
					      const gchar * symbol);
    extern guint g_scanner_set_scope(GScanner * scanner, guint scope_id);
    extern void g_scanner_sync_file_offset(GScanner * scanner);
    extern void g_scanner_unexp_token(GScanner * scanner,
				      GTokenType expected_token,
				      const gchar * identifier_spec,
				      const gchar * symbol_spec,
				      const gchar * symbol_name,
				      const gchar * message,
				      gint is_error);
    extern void g_scanner_warn(GScanner * scanner, const gchar * format,
			       ...);
    extern void g_set_application_name(const gchar * application_name);
    extern void g_set_error(GError * *err, GQuark domain, gint code,
			    const gchar * format, ...);
    extern void g_set_prgname(const gchar * prgname);
    extern GPrintFunc g_set_print_handler(GPrintFunc func);
    extern GPrintFunc g_set_printerr_handler(GPrintFunc func);
    extern gboolean g_setenv(const gchar * variable, const gchar * value,
			     gboolean overwrite);
    extern GQuark g_shell_error_quark(void);
    extern gboolean g_shell_parse_argv(const gchar * command_line,
				       gint * argcp, gchar * **argvp,
				       GError * *error);
    extern gchar *g_shell_quote(const gchar * unquoted_string);
    extern gchar *g_shell_unquote(const gchar * quoted_string,
				  GError * *error);
    extern GSList *g_slist_alloc(void);
    extern GSList *g_slist_append(GSList * list, gpointer data);
    extern GSList *g_slist_concat(GSList * list1, GSList * list2);
    extern GSList *g_slist_copy(GSList * list);
    extern GSList *g_slist_delete_link(GSList * list, GSList * link_);
    extern GSList *g_slist_find(GSList * list, gconstpointer data);
    extern GSList *g_slist_find_custom(GSList * list, gconstpointer data,
				       GCompareFunc func);
    extern void g_slist_foreach(GSList * list, GFunc func,
				gpointer user_data);
    extern void g_slist_free(GSList * list);
    extern void g_slist_free_1(GSList * list);
    extern gint g_slist_index(GSList * list, gconstpointer data);
    extern GSList *g_slist_insert(GSList * list, gpointer data,
				  gint position);
    extern GSList *g_slist_insert_before(GSList * slist, GSList * sibling,
					 gpointer data);
    extern GSList *g_slist_insert_sorted(GSList * list, gpointer data,
					 GCompareFunc func);
    extern GSList *g_slist_last(GSList * list);
    extern guint g_slist_length(GSList * list);
    extern GSList *g_slist_nth(GSList * list, guint n);
    extern gpointer g_slist_nth_data(GSList * list, guint n);
    /* g_slist_pop_allocator has been deprecated since Glib 2.10 and should not be used in newly-written code. It does nothing, since GSList has been converted to the slice allocator. */
    extern void g_slist_pop_allocator(void)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern gint g_slist_position(GSList * list, GSList * llink);
    extern GSList *g_slist_prepend(GSList * list, gpointer data);
    /* g_slist_push_allocator has been deprecated since Glib 2.10 and should not be used in newly-written code. It does nothing, since GSList has been converted to the slice allocator. */
    extern void g_slist_push_allocator(GAllocator * dummy)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern GSList *g_slist_remove(GSList * list, gconstpointer data);
    extern GSList *g_slist_remove_all(GSList * list, gconstpointer data);
    extern GSList *g_slist_remove_link(GSList * list, GSList * link_);
    extern GSList *g_slist_reverse(GSList * list);
    extern GSList *g_slist_sort(GSList * list, GCompareFunc compare_func);
    extern GSList *g_slist_sort_with_data(GSList * list,
					  GCompareDataFunc compare_func,
					  gpointer user_data);
    extern void g_source_add_poll(GSource * source, GPollFD * fd);
    extern guint g_source_attach(GSource * source, GMainContext * context);
    extern void g_source_destroy(GSource * source);
    extern gboolean g_source_get_can_recurse(GSource * source);
    extern GMainContext *g_source_get_context(GSource * source);
    extern void g_source_get_current_time(GSource * source,
					  GTimeVal * timeval);
    extern guint g_source_get_id(GSource * source);
    extern gint g_source_get_priority(GSource * source);
    extern GSource *g_source_new(GSourceFuncs * source_funcs,
				 guint struct_size);
    extern GSource *g_source_ref(GSource * source);
    extern gboolean g_source_remove(guint tag);
    extern gboolean g_source_remove_by_funcs_user_data(GSourceFuncs *
						       funcs,
						       gpointer user_data);
    extern gboolean g_source_remove_by_user_data(gpointer user_data);
    extern void g_source_remove_poll(GSource * source, GPollFD * fd);
    extern void g_source_set_callback(GSource * source, GSourceFunc func,
				      gpointer data,
				      GDestroyNotify notify);
    extern void g_source_set_callback_indirect(GSource * source,
					       gpointer callback_data,
					       GSourceCallbackFuncs *
					       callback_funcs);
    extern void g_source_set_can_recurse(GSource * source,
					 gboolean can_recurse);
    extern void g_source_set_priority(GSource * source, gint priority);
    extern void g_source_unref(GSource * source);
    extern guint g_spaced_primes_closest(guint num);
    extern gboolean g_spawn_async(const gchar * working_directory,
				  gchar * *argv, gchar * *envp,
				  GSpawnFlags flags,
				  GSpawnChildSetupFunc child_setup,
				  gpointer user_data, GPid * child_pid,
				  GError * *error);
    extern gboolean g_spawn_async_with_pipes(const gchar *
					     working_directory,
					     gchar * *argv, gchar * *envp,
					     GSpawnFlags flags,
					     GSpawnChildSetupFunc
					     child_setup,
					     gpointer user_data,
					     GPid * child_pid,
					     gint * standard_input,
					     gint * standard_output,
					     gint * standard_error,
					     GError * *error);
    extern void g_spawn_close_pid(GPid pid);
    extern gboolean g_spawn_command_line_async(const gchar * command_line,
					       GError * *error);
    extern gboolean g_spawn_command_line_sync(const gchar * command_line,
					      gchar * *standard_output,
					      gchar * *standard_error,
					      gint * exit_status,
					      GError * *error);
    extern GQuark g_spawn_error_quark(void);
    extern gboolean g_spawn_sync(const gchar * working_directory,
				 gchar * *argv, gchar * *envp,
				 GSpawnFlags flags,
				 GSpawnChildSetupFunc child_setup,
				 gpointer user_data,
				 gchar * *standard_output,
				 gchar * *standard_error,
				 gint * exit_status, GError * *error);
    extern void g_static_mutex_free(GStaticMutex * mutex);
    extern GMutex *g_static_mutex_get_mutex_impl(GMutex * *mutex);
    extern void g_static_mutex_init(GStaticMutex * mutex);
    extern void g_static_private_free(GStaticPrivate * private_key);
    extern gpointer g_static_private_get(GStaticPrivate * private_key);
    extern void g_static_private_init(GStaticPrivate * private_key);
    extern void g_static_private_set(GStaticPrivate * private_key,
				     gpointer data, GDestroyNotify notify);
    extern void g_static_rec_mutex_free(GStaticRecMutex * mutex);
    extern void g_static_rec_mutex_init(GStaticRecMutex * mutex);
    extern void g_static_rec_mutex_lock(GStaticRecMutex * mutex);
    extern void g_static_rec_mutex_lock_full(GStaticRecMutex * mutex,
					     guint depth);
    extern gboolean g_static_rec_mutex_trylock(GStaticRecMutex * mutex);
    extern void g_static_rec_mutex_unlock(GStaticRecMutex * mutex);
    extern guint g_static_rec_mutex_unlock_full(GStaticRecMutex * mutex);
    extern void g_static_rw_lock_free(GStaticRWLock * lock);
    extern void g_static_rw_lock_init(GStaticRWLock * lock);
    extern void g_static_rw_lock_reader_lock(GStaticRWLock * lock);
    extern gboolean g_static_rw_lock_reader_trylock(GStaticRWLock * lock);
    extern void g_static_rw_lock_reader_unlock(GStaticRWLock * lock);
    extern void g_static_rw_lock_writer_lock(GStaticRWLock * lock);
    extern gboolean g_static_rw_lock_writer_trylock(GStaticRWLock * lock);
    extern void g_static_rw_lock_writer_unlock(GStaticRWLock * lock);
    extern gchar *g_stpcpy(gchar * dest, const gchar * src);
    extern gboolean g_str_equal(gconstpointer v1, gconstpointer v2);
    extern gboolean g_str_has_prefix(const gchar * str,
				     const gchar * prefix);
    extern gboolean g_str_has_suffix(const gchar * str,
				     const gchar * suffix);
    extern guint g_str_hash(gconstpointer v);
    extern gchar *g_strcanon(gchar * string, const gchar * valid_chars,
			     gchar substitutor);
    extern gchar *g_strchomp(gchar * string);
    extern gchar *g_strchug(gchar * string);
    extern gchar *g_strcompress(const gchar * source);
    extern gchar *g_strconcat(const gchar * string1, ...);
    extern gchar *g_strdelimit(gchar * string, const gchar * delimiters,
			       gchar new_delimiter);
    extern gchar *g_strdup(const gchar * str);
    extern gchar *g_strdup_printf(const gchar * format, ...);
    extern gchar *g_strdup_vprintf(const gchar * format, va_list args);
    extern gchar **g_strdupv(gchar * *str_array);
    extern const gchar *g_strerror(gint errnum);
    extern gchar *g_strescape(const gchar * source,
			      const gchar * exceptions);
    extern void g_strfreev(gchar * *str_array);
    extern GString *g_string_append(GString * string, const gchar * val);
    extern GString *g_string_append_c(GString * string, gchar c);
    extern GString *g_string_append_len(GString * string,
					const gchar * val, gssize len);
    extern void g_string_append_printf(GString * string,
				       const gchar * format, ...);
    extern GString *g_string_append_unichar(GString * string, gunichar wc);
    extern GString *g_string_ascii_down(GString * string);
    extern GString *g_string_ascii_up(GString * string);
    extern GString *g_string_assign(GString * string, const gchar * rval);
    extern void g_string_chunk_free(GStringChunk * chunk);
    extern gchar *g_string_chunk_insert(GStringChunk * chunk,
					const gchar * string);
    extern gchar *g_string_chunk_insert_const(GStringChunk * chunk,
					      const gchar * string);
    extern gchar *g_string_chunk_insert_len(GStringChunk * chunk,
					    const gchar * string,
					    gssize len);
    extern GStringChunk *g_string_chunk_new(gsize size);
    extern gboolean g_string_equal(const GString * v, const GString * v2);
    extern GString *g_string_erase(GString * string, gssize pos,
				   gssize len);
    extern gchar *g_string_free(GString * string, gboolean free_segment);
    extern guint g_string_hash(const GString * str);
    extern GString *g_string_insert(GString * string, gssize pos,
				    const gchar * val);
    extern GString *g_string_insert_c(GString * string, gssize pos,
				      gchar c);
    extern GString *g_string_insert_len(GString * string, gssize pos,
					const gchar * val, gssize len);
    extern GString *g_string_insert_unichar(GString * string, gssize pos,
					    gunichar wc);
    extern GString *g_string_new(const gchar * init);
    extern GString *g_string_new_len(const gchar * init, gssize len);
    extern GString *g_string_prepend(GString * string, const gchar * val);
    extern GString *g_string_prepend_c(GString * string, gchar c);
    extern GString *g_string_prepend_len(GString * string,
					 const gchar * val, gssize len);
    extern GString *g_string_prepend_unichar(GString * string,
					     gunichar wc);
    extern void g_string_printf(GString * string, const gchar * format,
				...);
    extern GString *g_string_set_size(GString * string, gsize len);
    extern GString *g_string_sized_new(gsize dfl_size);
    extern GString *g_string_truncate(GString * string, gsize len);
    extern const gchar *g_strip_context(const gchar * msgid,
					const gchar * msgval);
    extern gchar *g_strjoin(const gchar * separator, ...);
    extern gchar *g_strjoinv(const gchar * separator, gchar * *str_array);
    extern gsize g_strlcat(gchar * dest, const gchar * src,
			   gsize dest_size);
    extern gsize g_strlcpy(gchar * dest, const gchar * src,
			   gsize dest_size);
    extern gchar *g_strndup(const gchar * str, gsize n);
    extern gchar *g_strnfill(gsize length, gchar fill_char);
    extern gchar *g_strreverse(gchar * string);
    extern gchar *g_strrstr(const gchar * haystack, const gchar * needle);
    extern gchar *g_strrstr_len(const gchar * haystack,
				gssize haystack_len, const gchar * needle);
    extern const gchar *g_strsignal(gint signum);
    extern gchar **g_strsplit(const gchar * string,
			      const gchar * delimiter, gint max_tokens);
    extern gchar **g_strsplit_set(const gchar * string,
				  const gchar * delimiters,
				  gint max_tokens);
    extern gchar *g_strstr_len(const gchar * haystack, gssize haystack_len,
			       const gchar * needle);
    extern gdouble g_strtod(const gchar * nptr, gchar * *endptr);
    extern guint g_strv_length(gchar * *str_array);
    extern GThread *g_thread_create_full(GThreadFunc func, gpointer data,
					 gulong stack_size,
					 gboolean joinable, gboolean bound,
					 GThreadPriority priority,
					 GError * *error);
    extern GQuark g_thread_error_quark(void);
    extern void g_thread_exit(gpointer retval);
    extern GThreadFunctions g_thread_functions_for_glib_use;
    extern void g_thread_init(GThreadFunctions * vtable);
    extern void g_thread_init_with_errorcheck_mutexes(GThreadFunctions *
						      vtable);
    extern gpointer g_thread_join(GThread * thread);
    extern void g_thread_pool_free(GThreadPool * pool, gboolean immediate,
				   gboolean wait_);
    extern gint g_thread_pool_get_max_threads(GThreadPool * pool);
    extern gint g_thread_pool_get_max_unused_threads(void);
    extern guint g_thread_pool_get_num_threads(GThreadPool * pool);
    extern guint g_thread_pool_get_num_unused_threads(void);
    extern GThreadPool *g_thread_pool_new(GFunc func, gpointer user_data,
					  gint max_threads,
					  gboolean exclusive,
					  GError * *error);
    extern void g_thread_pool_push(GThreadPool * pool, gpointer data,
				   GError * *error);
    extern void g_thread_pool_set_max_threads(GThreadPool * pool,
					      gint max_threads,
					      GError * *error);
    extern void g_thread_pool_set_max_unused_threads(gint max_threads);
    extern void g_thread_pool_stop_unused_threads(void);
    extern guint g_thread_pool_unprocessed(GThreadPool * pool);
    extern GThread *g_thread_self(void);
    extern void g_thread_set_priority(GThread * thread,
				      GThreadPriority priority);
    extern gboolean g_thread_use_default_impl;
    extern gboolean g_threads_got_initialized;
    extern void g_time_val_add(GTimeVal * time_, glong microseconds);
    extern guint g_timeout_add(guint32 interval, GSourceFunc function,
			       gpointer data);
    extern guint g_timeout_add_full(gint priority, guint interval,
				    GSourceFunc function, gpointer data,
				    GDestroyNotify notify);
    extern GSourceFuncs g_timeout_funcs;
    extern GSource *g_timeout_source_new(guint interval);
    extern void g_timer_continue(GTimer * timer);
    extern void g_timer_destroy(GTimer * timer);
    extern gdouble g_timer_elapsed(GTimer * timer, gulong * microseconds);
    extern GTimer *g_timer_new(void);
    extern void g_timer_reset(GTimer * timer);
    extern void g_timer_start(GTimer * timer);
    extern void g_timer_stop(GTimer * timer);
    extern guint g_trash_stack_height(GTrashStack * *stack_p);
    extern gpointer g_trash_stack_peek(GTrashStack * *stack_p);
    extern gpointer g_trash_stack_pop(GTrashStack * *stack_p);
    extern void g_trash_stack_push(GTrashStack * *stack_p,
				   gpointer data_p);
    extern void g_tree_destroy(GTree * tree);
    extern void g_tree_foreach(GTree * tree, GTraverseFunc func,
			       gpointer user_data);
    extern gint g_tree_height(GTree * tree);
    extern void g_tree_insert(GTree * tree, gpointer key, gpointer value);
    extern gpointer g_tree_lookup(GTree * tree, gconstpointer key);
    extern gboolean g_tree_lookup_extended(GTree * tree,
					   gconstpointer lookup_key,
					   gpointer * orig_key,
					   gpointer * value);
    extern GTree *g_tree_new(GCompareFunc key_compare_func);
    extern GTree *g_tree_new_full(GCompareDataFunc key_compare_func,
				  gpointer key_compare_data,
				  GDestroyNotify key_destroy_func,
				  GDestroyNotify value_destroy_func);
    extern GTree *g_tree_new_with_data(GCompareDataFunc key_compare_func,
				       gpointer key_compare_data);
    extern gint g_tree_nnodes(GTree * tree);
    extern gboolean g_tree_remove(GTree * tree, gconstpointer key);
    extern void g_tree_replace(GTree * tree, gpointer key, gpointer value);
    extern gpointer g_tree_search(GTree * tree, GCompareFunc search_func,
				  gconstpointer user_data);
    extern gboolean g_tree_steal(GTree * tree, gconstpointer key);
    extern gpointer g_try_malloc(gulong n_bytes);
    extern gpointer g_try_realloc(gpointer mem, gulong n_bytes);
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern void g_tuples_destroy(GTuples * tuples)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    /* This interface is deprecated in modern Glib and should not be used in newly-written code. */
    extern gpointer g_tuples_index(GTuples * tuples, gint index_,
				   gint field)
#if __LSB_VERSION__ >= 41
     LSB_DECL_DEPRECATED
#endif				/* __LSB_VERSION__ >= 41 */
    ;
    extern gunichar2 *g_ucs4_to_utf16(const gunichar * str, glong len,
				      glong * items_read,
				      glong * items_written,
				      GError * *error);
    extern gchar *g_ucs4_to_utf8(const gunichar * str, glong len,
				 glong * items_read, glong * items_written,
				 GError * *error);
    extern GUnicodeBreakType g_unichar_break_type(gunichar c);
    extern gint g_unichar_digit_value(gunichar c);
    extern gboolean g_unichar_get_mirror_char(gunichar ch,
					      gunichar * mirrored_ch);
    extern gboolean g_unichar_isalnum(gunichar c);
    extern gboolean g_unichar_isalpha(gunichar c);
    extern gboolean g_unichar_iscntrl(gunichar c);
    extern gboolean g_unichar_isdefined(gunichar c);
    extern gboolean g_unichar_isdigit(gunichar c);
    extern gboolean g_unichar_isgraph(gunichar c);
    extern gboolean g_unichar_islower(gunichar c);
    extern gboolean g_unichar_isprint(gunichar c);
    extern gboolean g_unichar_ispunct(gunichar c);
    extern gboolean g_unichar_isspace(gunichar c);
    extern gboolean g_unichar_istitle(gunichar c);
    extern gboolean g_unichar_isupper(gunichar c);
    extern gboolean g_unichar_iswide(gunichar c);
    extern gboolean g_unichar_isxdigit(gunichar c);
    extern gint g_unichar_to_utf8(gunichar c, gchar * outbuf);
    extern gunichar g_unichar_tolower(gunichar c);
    extern gunichar g_unichar_totitle(gunichar c);
    extern gunichar g_unichar_toupper(gunichar c);
    extern GUnicodeType g_unichar_type(gunichar c);
    extern gboolean g_unichar_validate(gunichar ch);
    extern gint g_unichar_xdigit_value(gunichar c);
    extern gunichar *g_unicode_canonical_decomposition(gunichar ch,
						       gsize * result_len);
    extern void g_unicode_canonical_ordering(gunichar * string, gsize len);
    extern void g_unsetenv(const gchar * variable);
    extern gchar **g_uri_list_extract_uris(const gchar * uri_list);
    extern void g_usleep(gulong microseconds);
    extern gunichar *g_utf16_to_ucs4(const gunichar2 * str, glong len,
				     glong * items_read,
				     glong * items_written,
				     GError * *error);
    extern gchar *g_utf16_to_utf8(const gunichar2 * str, glong len,
				  glong * items_read,
				  glong * items_written, GError * *error);
    extern gchar *g_utf8_casefold(const gchar * str, gssize len);
    extern gint g_utf8_collate(const gchar * str1, const gchar * str2);
    extern gchar *g_utf8_collate_key(const gchar * str, gssize len);
    extern gchar *g_utf8_find_next_char(const gchar * p,
					const gchar * end);
    extern gchar *g_utf8_find_prev_char(const char *str, const char *p);
    extern gunichar g_utf8_get_char(const gchar * p);
    extern gunichar g_utf8_get_char_validated(const gchar * p,
					      gssize max_len);
    extern gchar *g_utf8_normalize(const gchar * str, gssize len,
				   GNormalizeMode mode);
    extern gchar *g_utf8_offset_to_pointer(const gchar * str,
					   glong offset);
    extern glong g_utf8_pointer_to_offset(const gchar * str,
					  const gchar * pos);
    extern gchar *g_utf8_prev_char(const gchar * p);
    extern const gchar *const g_utf8_skip;
    extern gchar *g_utf8_strchr(const char *p, gssize len, gunichar c);
    extern gchar *g_utf8_strdown(const gchar * str, gssize len);
    extern glong g_utf8_strlen(const gchar * p, gssize max);
    extern gchar *g_utf8_strncpy(gchar * dest, const gchar * src, gsize n);
    extern gchar *g_utf8_strrchr(const char *p, gssize len, gunichar c);
    extern gchar *g_utf8_strreverse(const gchar * str, gssize len);
    extern gchar *g_utf8_strup(const gchar * str, gssize len);
    extern gunichar *g_utf8_to_ucs4(const gchar * str, glong len,
				    glong * items_read,
				    glong * items_written,
				    GError * *error);
    extern gunichar *g_utf8_to_ucs4_fast(const gchar * str, glong len,
					 glong * items_written);
    extern gunichar2 *g_utf8_to_utf16(const gchar * str, glong len,
				      glong * items_read,
				      glong * items_written,
				      GError * *error);
    extern gboolean g_utf8_validate(const char *str, gssize max_len,
				    const gchar * *end);
    extern const guint glib_binary_age;
    extern const gchar *glib_check_version(guint required_major,
					   guint required_minor,
					   guint required_micro);
    extern const guint glib_interface_age;
    extern const guint glib_major_version;
    extern GMemVTable *glib_mem_profiler_table;
    extern const guint glib_micro_version;
    extern const guint glib_minor_version;
#if __LSB_VERSION__ >= 40
    extern gchar *g_build_filenamev(gchar * *args);
    extern gchar *g_build_pathv(const gchar * separator, gchar * *args);
    extern guint g_datalist_get_flags(GData * *datalist);
    extern void g_datalist_set_flags(GData * *datalist, guint flags);
    extern void g_datalist_unset_flags(GData * *datalist, guint flags);
    extern gboolean g_file_set_contents(const gchar * filename,
					const gchar * contents,
					gssize length, GError * *error);
    extern const gchar *g_get_host_name(void);
    extern gchar **g_listenv(void);
    extern void g_mapped_file_free(GMappedFile * file);
    extern gchar *g_mapped_file_get_contents(GMappedFile * file);
    extern gsize g_mapped_file_get_length(GMappedFile * file);
    extern GMappedFile *g_mapped_file_new(const gchar * filename,
					  gboolean writable,
					  GError * *error);
    extern int g_mkdir_with_parents(const gchar * pathname, int mode);
    extern gchar *g_utf8_collate_key_for_filename(const gchar * str,
						  gssize len);
#endif				/* __LSB_VERSION__ >= 4.0 */

#if __LSB_VERSION__ >= 41
    extern gint64 g_ascii_strtoll(const gchar * nptr, gchar * *endptr,
				  guint base);
    extern void g_async_queue_push_sorted(GAsyncQueue * queue,
					  gpointer data,
					  GCompareDataFunc func,
					  gpointer user_data);
    extern void g_async_queue_push_sorted_unlocked(GAsyncQueue * queue,
						   gpointer data,
						   GCompareDataFunc func,
						   gpointer user_data);
    extern void g_async_queue_sort(GAsyncQueue * queue,
				   GCompareDataFunc func,
				   gpointer user_data);
    extern void g_async_queue_sort_unlocked(GAsyncQueue * queue,
					    GCompareDataFunc func,
					    gpointer user_data);
    extern guchar *g_base64_decode(const char *text, gsize * out_len);
    extern gsize g_base64_decode_step(const char *in, gsize len,
				      guchar * out, gint * state,
				      guint * save);
    extern gchar *g_base64_encode(const unsigned char *data, gsize len);
    extern gsize g_base64_encode_close(gboolean break_lines, gchar * out,
				       gint * state, gint * save);
    extern gsize g_base64_encode_step(const unsigned char *in, gsize len,
				      gboolean break_lines, gchar * out,
				      gint * state, gint * save);
    extern void g_bookmark_file_add_application(GBookmarkFile * bookmark,
						const char *uri,
						const char *name,
						const char *exec);
    extern void g_bookmark_file_add_group(GBookmarkFile * bookmark,
					  const char *uri,
					  const char *group);
    extern GQuark g_bookmark_file_error_quark(void);
    extern void g_bookmark_file_free(GBookmarkFile * bookmark);
    extern time_t g_bookmark_file_get_added(GBookmarkFile * bookmark,
					    const char *uri,
					    GError * *error);
    extern gboolean g_bookmark_file_get_app_info(GBookmarkFile * bookmark,
						 const char *uri,
						 const char *name,
						 gchar * *exec,
						 guint * count,
						 time_t * stamp,
						 GError * *error);
    extern gchar **g_bookmark_file_get_applications(GBookmarkFile *
						    bookmark,
						    const char *uri,
						    gsize * length,
						    GError * *error);
    extern gchar *g_bookmark_file_get_description(GBookmarkFile * bookmark,
						  const char *uri,
						  GError * *error);
    extern gchar **g_bookmark_file_get_groups(GBookmarkFile * bookmark,
					      const char *uri,
					      gsize * length,
					      GError * *error);
    extern gboolean g_bookmark_file_get_icon(GBookmarkFile * bookmark,
					     const char *uri,
					     gchar * *href,
					     gchar * *mime_type,
					     GError * *error);
    extern gboolean g_bookmark_file_get_is_private(GBookmarkFile *
						   bookmark,
						   const char *uri,
						   GError * *error);
    extern gchar *g_bookmark_file_get_mime_type(GBookmarkFile * bookmark,
						const char *uri,
						GError * *error);
    extern time_t g_bookmark_file_get_modified(GBookmarkFile * bookmark,
					       const char *uri,
					       GError * *error);
    extern gint g_bookmark_file_get_size(GBookmarkFile * bookmark);
    extern gchar *g_bookmark_file_get_title(GBookmarkFile * bookmark,
					    const char *uri,
					    GError * *error);
    extern gchar **g_bookmark_file_get_uris(GBookmarkFile * bookmark,
					    gsize * length);
    extern time_t g_bookmark_file_get_visited(GBookmarkFile * bookmark,
					      const char *uri,
					      GError * *error);
    extern gboolean g_bookmark_file_has_application(GBookmarkFile *
						    bookmark,
						    const char *uri,
						    const char *name,
						    GError * *error);
    extern gboolean g_bookmark_file_has_group(GBookmarkFile * bookmark,
					      const char *uri,
					      const char *group,
					      GError * *error);
    extern gboolean g_bookmark_file_has_item(GBookmarkFile * bookmark,
					     const char *uri);
    extern gboolean g_bookmark_file_load_from_data(GBookmarkFile *
						   bookmark,
						   const char *data,
						   gsize length,
						   GError * *error);
    extern gboolean g_bookmark_file_load_from_data_dirs(GBookmarkFile *
							bookmark,
							const char *file,
							gchar * *full_path,
							GError * *error);
    extern gboolean g_bookmark_file_load_from_file(GBookmarkFile *
						   bookmark,
						   const char *filename,
						   GError * *error);
    extern gboolean g_bookmark_file_move_item(GBookmarkFile * bookmark,
					      const char *old_uri,
					      const char *new_uri,
					      GError * *error);
    extern GBookmarkFile *g_bookmark_file_new(void);
    extern gboolean g_bookmark_file_remove_application(GBookmarkFile *
						       bookmark,
						       const char *uri,
						       const char *name,
						       GError * *error);
    extern gboolean g_bookmark_file_remove_group(GBookmarkFile * bookmark,
						 const char *uri,
						 const char *group,
						 GError * *error);
    extern gboolean g_bookmark_file_remove_item(GBookmarkFile * bookmark,
						const char *uri,
						GError * *error);
    extern void g_bookmark_file_set_added(GBookmarkFile * bookmark,
					  const char *uri, time_t added);
    extern gboolean g_bookmark_file_set_app_info(GBookmarkFile * bookmark,
						 const char *uri,
						 const char *name,
						 const char *exec,
						 gint count, time_t stamp,
						 GError * *error);
    extern void g_bookmark_file_set_description(GBookmarkFile * bookmark,
						const char *uri,
						const char *description);
    extern void g_bookmark_file_set_groups(GBookmarkFile * bookmark,
					   const char *uri,
					   const char **groups,
					   gsize length);
    extern void g_bookmark_file_set_icon(GBookmarkFile * bookmark,
					 const char *uri, const char *href,
					 const char *mime_type);
    extern void g_bookmark_file_set_is_private(GBookmarkFile * bookmark,
					       const char *uri,
					       gboolean is_private);
    extern void g_bookmark_file_set_mime_type(GBookmarkFile * bookmark,
					      const char *uri,
					      const char *mime_type);
    extern void g_bookmark_file_set_modified(GBookmarkFile * bookmark,
					     const char *uri,
					     time_t modified);
    extern void g_bookmark_file_set_title(GBookmarkFile * bookmark,
					  const char *uri,
					  const char *title);
    extern void g_bookmark_file_set_visited(GBookmarkFile * bookmark,
					    const char *uri,
					    time_t visited);
    extern gchar *g_bookmark_file_to_data(GBookmarkFile * bookmark,
					  gsize * length, GError * *error);
    extern gboolean g_bookmark_file_to_file(GBookmarkFile * bookmark,
					    const char *filename,
					    GError * *error);
    extern void g_date_set_time_t(GDate * date, time_t timet);
    extern void g_date_set_time_val(GDate * date, GTimeVal * timeval);
    extern GHashTable *g_hash_table_ref(GHashTable * hash_table);
    extern void g_hash_table_remove_all(GHashTable * hash_table);
    extern void g_hash_table_steal_all(GHashTable * hash_table);
    extern void g_hash_table_unref(GHashTable * hash_table);
    extern const gchar *g_intern_static_string(const gchar * string);
    extern const gchar *g_intern_string(const gchar * string);
    extern gdouble g_key_file_get_double(GKeyFile * key_file,
					 const gchar * group_name,
					 const gchar * key,
					 GError * *error);
    extern gdouble *g_key_file_get_double_list(GKeyFile * key_file,
					       const gchar * group_name,
					       const gchar * key,
					       gsize * length,
					       GError * *error);
    extern void g_key_file_set_double(GKeyFile * key_file,
				      const gchar * group_name,
				      const gchar * key, gdouble value);
    extern void g_key_file_set_double_list(GKeyFile * key_file,
					   const gchar * group_name,
					   const gchar * key,
					   gdouble * list, gsize length);
    extern GList *g_list_insert_sorted_with_data(GList * list,
						 gpointer data,
						 GCompareDataFunc func,
						 gpointer user_data);
    extern gboolean g_main_context_is_owner(GMainContext * context);
    extern GSource *g_main_current_source(void);
    extern gboolean g_mem_gc_friendly;
    extern const gchar *g_option_context_get_description(GOptionContext *
							 context);
    extern const gchar *g_option_context_get_summary(GOptionContext *
						     context);
    extern void g_option_context_set_description(GOptionContext * context,
						 const gchar *
						 description);
    extern void g_option_context_set_summary(GOptionContext * context,
					     const gchar * summary);
    extern void g_option_context_set_translate_func(GOptionContext *
						    context,
						    GTranslateFunc func,
						    gpointer data,
						    GDestroyNotify
						    destroy_notify);
    extern void g_option_context_set_translation_domain(GOptionContext *
							context,
							const gchar *
							domain);
    extern gpointer g_slice_alloc(gsize block_size);
    extern gpointer g_slice_alloc0(gsize block_size);
    extern void g_slice_free1(gsize block_size, gpointer mem_block);
    extern void g_slice_free_chain_with_offset(gsize block_size,
					       gpointer mem_chain,
					       gsize next_offset);
    extern GSList *g_slist_insert_sorted_with_data(GSList * list,
						   gpointer data,
						   GCompareDataFunc func,
						   gpointer user_data);
    extern gboolean g_source_is_destroyed(GSource * source);
    extern void g_source_set_funcs(GSource * source, GSourceFuncs * funcs);
    extern void g_thread_foreach(GFunc thread_func, gpointer user_data);
    extern guint g_thread_pool_get_max_idle_time(void);
    extern void g_thread_pool_set_max_idle_time(guint interval);
    extern void g_thread_pool_set_sort_function(GThreadPool * pool,
						GCompareDataFunc func,
						gpointer user_data);
    extern gboolean g_time_val_from_iso8601(const gchar * iso_date,
					    GTimeVal * time);
    extern gchar *g_time_val_to_iso8601(GTimeVal * time);
    extern gboolean g_unichar_iswide_cjk(gunichar c);
#endif				/* __LSB_VERSION__ >= 4.1 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
