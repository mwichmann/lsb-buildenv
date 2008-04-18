#if (__LSB_VERSION__ >= 12 )
#ifndef _SYS_FILE_H_
#define _SYS_FILE_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define LOCK_SH	1
#define LOCK_EX	2
#define LOCK_NB	4
#define LOCK_UN	8
#endif				// __LSB_VERSION__ >= 1.2




// Function prototypes

#if __LSB_VERSION__ >= 10
    extern int flock(int, int);
#endif				// __LSB_VERSION__ >= 1.0

#ifdef __cplusplus
}
#endif
#endif				// protection
#endif				// LSB version
