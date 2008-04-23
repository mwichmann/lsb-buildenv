#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTERRDEF_H_
#define _FREETYPE_FTERRDEF_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
#define FT_ERRORDEF_(e,v,s)	 \
	FT_ERRORDEF( FT_ERR_CAT( FT_ERR_PREFIX, e ), v + FT_ERR_BASE, s )
#define FT_NOERRORDEF_(e,v,s)	 \
	FT_ERRORDEF( FT_ERR_CAT( FT_ERR_PREFIX, e ), v, s )
#define FT_ERR_BASE	0
#define FT_ERRORDEF(e,v,s)	e = v,
#define FT_ERROR_START_LIST	enum {
#define FT_ERR_PREFIX	FT_Err_
#define FT_ERROR_END_LIST	FT_ERR_CAT( FT_ERR_PREFIX, Max ) };
#define FT_ERR_CAT(x,y)	FT_ERR_XCAT( x, y )
#define FT_ERR_XCAT(x,y)	x ## y
#endif				/* __LSB_VERSION__ >= 3.2 */



#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
