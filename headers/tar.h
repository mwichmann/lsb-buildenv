#if (__LSB_VERSION__ >= 10 )
#ifndef _TAR_H_
#define _TAR_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define REGTYPE	'0'
#define LNKTYPE	'1'
#define SYMTYPE	'2'
#define CHRTYPE	'3'
#define BLKTYPE	'4'
#define DIRTYPE	'5'
#define FIFOTYPE	'6'
#define CONTTYPE	'7'
#define AREGTYPE	'\0'
#define TOEXEC	00001
#define TOWRITE	00002
#define TOREAD	00004
#define TGEXEC	00010
#define TGWRITE	00020
#define TGREAD	00040
#define TUEXEC	00100
#define TUWRITE	00200
#define TUREAD	00400
#define TSVTX	01000
#define TSGID	02000
#define TSUID	04000
#define TVERSLEN	2
#define TMAGLEN	6
#endif				// __LSB_VERSION__ >= 1.1

#if __LSB_VERSION__ >= 12
#define TVERSION	"00"
#define TMAGIC	"ustar"
#endif				// __LSB_VERSION__ >= 1.2



#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
