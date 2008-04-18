#if (__LSB_VERSION__ >= 32 )
#ifndef _FREETYPE_FTMODERR_H_
#define _FREETYPE_FTMODERR_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 32
#define FT_MODERR_START_LIST	enum {
#define FT_MODERRDEF(e,v,s)	FT_Mod_Err_ ## e = 0,
#define FT_MODERR_END_LIST	FT_Mod_Err_Max };
#endif				// __LSB_VERSION__ >= 3.2



#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
