#if (__LSB_VERSION__ >= 31 )
#ifndef _GLIB_2_0_GLIB_GSTDIO_H_
#define _GLIB_2_0_GLIB_GSTDIO_H_

#include <glib-2.0/glib.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 31
#define g_fopen	fopen
#define g_freopen	freopen
#define g_lstat	lstat
#define g_mkdir	mkdir
#define g_open	open
#define g_remove	remove
#define g_rename	rename
#define g_stat	stat
#if __LSB_VERSION__ < 40
#define g_rmdir	rmdir
#define g_unlink	unlink
#endif				/* __LSB_VERSION__ < 4.0 */

#endif				/* __LSB_VERSION__ >= 3.1 */

#if __LSB_VERSION__ >= 40
#define g_chmod	chmod
#define g_creat	creat
#endif				/* __LSB_VERSION__ >= 4.0 */




/* Function prototypes */

#if __LSB_VERSION__ >= 40
    extern int g_access(const gchar *, int);
    extern int g_chdir(const gchar *);
    extern int g_rmdir(const gchar *);
    extern int g_unlink(const gchar *);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
