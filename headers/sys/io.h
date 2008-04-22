#if (__LSB_VERSION__ >= 11 )
#ifndef _SYS_IO_H_
#define _SYS_IO_H_


#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

#if __LSB_VERSION__ >= 10
#if __LSB_VERSION__ < 20
#if defined __i386__
/* IA32 */
    extern int ioperm(unsigned long int, unsigned long int, int);
#endif
#if defined __i386__
/* IA32 */
    extern int iopl(int);
#endif
#endif				/* __LSB_VERSION__ < 2.0 */

#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
