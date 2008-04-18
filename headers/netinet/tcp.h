#if (__LSB_VERSION__ >= 11 )
#ifndef _NETINET_TCP_H_
#define _NETINET_TCP_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define SOL_TCP	6
#endif				// __LSB_VERSION__ >= 1.1

#if __LSB_VERSION__ >= 12
#define TCP_NODELAY	1
#endif				// __LSB_VERSION__ >= 1.2



#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
