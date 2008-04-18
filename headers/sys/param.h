#if (__LSB_VERSION__ >= 11 )
#ifndef _SYS_PARAM_H_
#define _SYS_PARAM_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define NOFILE	256
#define MAXPATHLEN	4096
#endif				// __LSB_VERSION__ >= 1.1



#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
