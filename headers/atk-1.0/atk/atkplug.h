#if (__LSB_VERSION__ >= 50 )
#ifndef _ATK_1_0_ATK_ATKPLUG_H_
#define _ATK_1_0_ATK_ATKPLUG_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <atk-1.0/atk/atk.h>

#ifdef __cplusplus
extern "C" {
#endif


#define ATK_TYPE_PLUG	(atk_plug_get_type ())
#define ATK_PLUG_CLASS(klass)	(G_TYPE_CHECK_CLASS_CAST ((klass), ATK_TYPE_PLUG, AtkPlugClass))
#define ATK_IS_PLUG_CLASS(klass)	(G_TYPE_CHECK_CLASS_TYPE ((klass), ATK_TYPE_PLUG))
#define ATK_PLUG(obj)	(G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_PLUG, AtkPlug))
#define ATK_IS_PLUG(obj)	(G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_PLUG))
#define ATK_PLUG_GET_CLASS(obj)	(G_TYPE_INSTANCE_GET_CLASS ((obj), ATK_TYPE_PLUG, AtkPlugClass))


    typedef struct _AtkPlug AtkPlug;

    typedef struct _AtkPlugClass AtkPlugClass;

    struct _AtkPlug {
	AtkObject parent;
    };

    struct _AtkPlugClass {
	AtkObjectClass parent_class;
	gchar *(*get_object_id) (AtkPlug * plug);
    };


/* Function prototypes */

    extern gchar *atk_plug_get_id(AtkPlug * plug);
    extern GType atk_plug_get_type(void);
    extern AtkObject *atk_plug_new(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
