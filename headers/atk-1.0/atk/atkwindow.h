#if (__LSB_VERSION__ >= 50 )
#ifndef _ATK_1_0_ATK_ATKWINDOW_H_
#define _ATK_1_0_ATK_ATKWINDOW_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>

#ifdef __cplusplus
extern "C" {
#endif


#define ATK_TYPE_WINDOW	(atk_window_get_type ())
#define ATK_WINDOW_GET_IFACE(obj)	(G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_WINDOW, AtkWindowIface))
#define ATK_WINDOW(obj)	G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_WINDOW, AtkWindow)
#define ATK_IS_WINDOW(obj)	G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_WINDOW)


    typedef struct _AtkWindow AtkWindow;

    typedef struct _AtkWindowIface AtkWindowIface;

    struct _AtkWindowIface {
	GTypeInterface parent;
	gpointer _padding_dummy[16];
    };


/* Function prototypes */

    extern GType atk_window_get_type(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
