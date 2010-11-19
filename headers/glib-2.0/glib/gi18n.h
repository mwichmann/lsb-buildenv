#if (__LSB_VERSION__ >= 31 )
#ifndef _GLIB_2_0_GLIB_GI18N_H_
#define _GLIB_2_0_GLIB_GI18N_H_


#ifdef __cplusplus
extern "C" {
#endif


#define __G_I18N_H__
#define NC_(Context,String)	(String)
#define N_(String)	(String)
#define _(String)	gettext (String)
#define Q_(String)	g_strip_context ((String), gettext (String))


#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
