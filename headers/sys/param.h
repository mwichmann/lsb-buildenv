#ifndef _SYS_PARAM_H_
#define _SYS_PARAM_H_


#ifdef __cplusplus
extern "C"
{
#endif


#define NOFILE	256
#if defined(__s390__)
#define MAXPATHLEN	4095
#endif
#define MAXPATHLEN	4096



#ifdef __cplusplus
}
#endif
#endif
