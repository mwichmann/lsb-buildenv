#if (__LSB_VERSION__ >= 10 )
#ifndef _LSB_PTHREAD_H_
#define _LSB_PTHREAD_H_


#ifdef __cplusplus
extern "C" {
#endif


/* 
   Special header to avoid header inclusion loops.
   DO NOT include this header directly.
*/
#if __LSB_VERSION__ >= 12
    typedef unsigned long int pthread_t;

#endif				/* __LSB_VERSION__ >= 1.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
