#if (__LSB_VERSION__ >= 12 )
#ifndef _SYS_FILE_H_
#define _SYS_FILE_H_


#ifdef __cplusplus
extern "C" {
#endif


#define LOCK_SH	1
#define LOCK_EX	2
#define LOCK_NB	4
#define LOCK_UN	8



/* Function prototypes */

    extern int flock(int, int);
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
