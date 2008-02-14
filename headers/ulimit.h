#ifndef _ULIMIT_H_
#define _ULIMIT_H_


#ifdef __cplusplus
extern "C" {
#endif


#define UL_GETFSIZE	1
#define UL_SETFSIZE	2



    extern long int ulimit(int, ...);
#ifdef __cplusplus
}
#endif
#endif
