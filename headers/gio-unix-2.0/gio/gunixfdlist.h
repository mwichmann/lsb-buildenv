#if (__LSB_VERSION__ >= 50 )
#ifndef _GIO_UNIX_2_0_GIO_GUNIXFDLIST_H_
#define _GIO_UNIX_2_0_GIO_GUNIXFDLIST_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gio.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_UNIX_FD_LIST_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_UNIX_FD_LIST, GUnixFDListClass))
#define G_IS_UNIX_FD_LIST_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_UNIX_FD_LIST))
#define G_UNIX_FD_LIST(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_UNIX_FD_LIST, GUnixFDList))
#define G_IS_UNIX_FD_LIST(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_UNIX_FD_LIST))
#define G_UNIX_FD_LIST_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_UNIX_FD_LIST, GUnixFDListClass))
#define G_TYPE_UNIX_FD_LIST	(g_unix_fd_list_get_type ())


    typedef struct _GUnixFDListPrivate GUnixFDListPrivate;

    typedef struct _GUnixFDListClass GUnixFDListClass;

    struct _GUnixFDListClass {
	GObjectClass parent_class;
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
	void (*_g_reserved3) (void);
	void (*_g_reserved4) (void);
	void (*_g_reserved5) (void);
    };

    struct _GUnixFDList {
	GObject parent_instance;
	GUnixFDListPrivate *priv;
    };


/* Function prototypes */

    extern gint g_unix_fd_list_append(GUnixFDList * list, gint fd,
				      GError * *error);
    extern gint g_unix_fd_list_get(GUnixFDList * list, gint index_,
				   GError * *error);
    extern gint g_unix_fd_list_get_length(GUnixFDList * list);
    extern GType g_unix_fd_list_get_type(void);
    extern GUnixFDList *g_unix_fd_list_new(void);
    extern GUnixFDList *g_unix_fd_list_new_from_array(const int *fds,
						      gint n_fds);
    extern const int *g_unix_fd_list_peek_fds(GUnixFDList * list,
					      gint * length);
    extern gint *g_unix_fd_list_steal_fds(GUnixFDList * list,
					  gint * length);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
