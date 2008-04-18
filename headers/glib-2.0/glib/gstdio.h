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
#define g_rmdir	rmdir
#define g_stat	stat
#define g_unlink	unlink
#endif				// __LSB_VERSION__ >= 3.1



#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
