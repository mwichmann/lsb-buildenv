#if (__LSB_VERSION__ >= 31 )
#ifndef _GLIB_2_0_GLIB_GSTDIO_H_
#define _GLIB_2_0_GLIB_GSTDIO_H_


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



#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
