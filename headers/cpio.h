#if (__LSB_VERSION__ >= 10 )
#ifndef _CPIO_H_
#define _CPIO_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define C_IXOTH	000001
#define C_IWOTH	000002
#define C_IROTH	000004
#define C_IXGRP	000010
#define C_IWGRP	000020
#define C_IRGRP	000040
#define C_IXUSR	000100
#define C_IWUSR	000200
#define C_IRUSR	000400
#define C_ISVTX	001000
#define C_ISGID	002000
#define C_ISUID	004000
#define C_ISFIFO	010000
#define C_ISREG	0100000
#define C_ISCTG	0110000
#define C_ISLNK	0120000
#define C_ISSOCK	0140000
#define C_ISCHR	020000
#define C_ISDIR	040000
#define C_ISBLK	060000
#define MAGIC	"070707"
#endif				/* __LSB_VERSION__ >= 1.1 */



#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
