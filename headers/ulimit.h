#if (__LSB_VERSION__ >= 10 )
#ifndef _ULIMIT_H_
#define _ULIMIT_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 11
#define UL_GETFSIZE	1
#define UL_SETFSIZE	2
#endif				// __LSB_VERSION__ >= 1.1




// Function prototypes

#if __LSB_VERSION__ >= 10
    extern long int ulimit(int, ...);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
