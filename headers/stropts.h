#if (__LSB_VERSION__ >= 13 && __LSB_VERSION__ < 20)
#ifndef _STROPTS_H_
#define _STROPTS_H_


#ifdef __cplusplus
extern "C" {
#endif

#error "This header not permitted by the LSB"



/* The streams interfaces are excluded from the LSB.
This empty file is needed to make the compilation environment happy.*/

/* Function prototypes */

#if __LSB_VERSION__ >= 10
#if __LSB_VERSION__ < 12
    extern fdetach(void);
    extern getmsg(void);
    extern putmsg(void);
#endif				/* __LSB_VERSION__ < 1.2 */

#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
