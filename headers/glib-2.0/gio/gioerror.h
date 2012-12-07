#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GIOERROR_H_
#define _GLIB_2_0_GIO_GIOERROR_H_

#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gioenums.h>

#ifdef __cplusplus
extern "C" {
#endif


#define G_IO_ERROR	g_io_error_quark()



/* Function prototypes */

    extern GIOErrorEnum g_io_error_from_errno(gint err_no);
    extern GQuark g_io_error_quark(void);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
