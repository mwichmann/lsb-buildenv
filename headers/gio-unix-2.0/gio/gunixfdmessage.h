#if (__LSB_VERSION__ >= 50 )
#ifndef _GIO_UNIX_2_0_GIO_GUNIXFDMESSAGE_H_
#define _GIO_UNIX_2_0_GIO_GUNIXFDMESSAGE_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <gio-unix-2.0/gio/gunixfdlist.h>
#include <glib-2.0/gio/gsocketcontrolmessage.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gio.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_UNIX_FD_MESSAGE_CLASS(class)	(G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_UNIX_FD_MESSAGE, GUnixFDMessageClass))
#define G_IS_UNIX_FD_MESSAGE_CLASS(class)	(G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_UNIX_FD_MESSAGE))
#define G_UNIX_FD_MESSAGE(inst)	(G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_UNIX_FD_MESSAGE, GUnixFDMessage))
#define G_IS_UNIX_FD_MESSAGE(inst)	(G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_UNIX_FD_MESSAGE))
#define G_UNIX_FD_MESSAGE_GET_CLASS(inst)	(G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_UNIX_FD_MESSAGE, GUnixFDMessageClass))
#define G_TYPE_UNIX_FD_MESSAGE	(g_unix_fd_message_get_type ())


    typedef struct _GUnixFDMessagePrivate GUnixFDMessagePrivate;

    typedef struct _GUnixFDMessageClass GUnixFDMessageClass;

    typedef struct _GUnixFDMessage GUnixFDMessage;

    struct _GUnixFDMessageClass {
	GSocketControlMessageClass parent_class;
	void (*_g_reserved1) (void);
	void (*_g_reserved2) (void);
    };

    struct _GUnixFDMessage {
	GSocketControlMessage parent_instance;
	GUnixFDMessagePrivate *priv;
    };


/* Function prototypes */

    extern gboolean g_unix_fd_message_append_fd(GUnixFDMessage * message,
						gint fd, GError * *error);
    extern GUnixFDList *g_unix_fd_message_get_fd_list(GUnixFDMessage *
						      message);
    extern GType g_unix_fd_message_get_type(void);
    extern GSocketControlMessage *g_unix_fd_message_new(void);
    extern GSocketControlMessage
	*g_unix_fd_message_new_with_fd_list(GUnixFDList * fd_list);
    extern gint *g_unix_fd_message_steal_fds(GUnixFDMessage * message,
					     gint * length);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
