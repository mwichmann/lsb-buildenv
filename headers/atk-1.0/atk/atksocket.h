#if (__LSB_VERSION__ >= 50 )
#ifndef _ATK_1_0_ATK_ATKSOCKET_H_
#define _ATK_1_0_ATK_ATKSOCKET_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <atk-1.0/atk/atk.h>

#ifdef __cplusplus
extern "C" {
#endif


#define ATK_TYPE_SOCKET	(atk_socket_get_type ())
#define ATK_SOCKET_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_SOCKET, AtkSocketClass))
#define ATK_IS_SOCKET_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_SOCKET))
#define ATK_SOCKET(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_SOCKET, AtkSocket))
#define ATK_IS_SOCKET(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_SOCKET))
#define ATK_SOCKET_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_SOCKET, AtkSocketClass))


    typedef struct _AtkSocket AtkSocket;

    typedef struct _AtkSocketClass AtkSocketClass;

    struct _AtkSocket {
	AtkObject parent;
	gchar *embedded_plug_id;
    };

    struct _AtkSocketClass {
	AtkObjectClass parent_class;
	void (*embed) (AtkSocket * obj, gchar * plug_id);
    };


/* Function prototypes */

    extern void atk_socket_embed(AtkSocket * obj, gchar * plug_id);
    extern GType atk_socket_get_type(void);
    extern gboolean atk_socket_is_occupied(AtkSocket * obj);
    extern AtkObject *atk_socket_new(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
