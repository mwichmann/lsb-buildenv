#if (__LSB_VERSION__ >= 11 )
#ifndef _SYS_IO_H_
#define _SYS_IO_H_


#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

#if __LSB_VERSION__ >= 50
#if defined __i386__
/* IA32 */
    extern int ioperm(unsigned long int from, unsigned long int num,
		      int turn_on);
#endif
#if defined __ia64__
/* IA64 */
    extern int ioperm(unsigned long int from, unsigned long int num,
		      int turn_on);
#endif
#if defined __x86_64__
/* x86-64 */
    extern int ioperm(unsigned long int from, unsigned long int num,
		      int turn_on);
#endif
#endif				/* __LSB_VERSION__ >= 5.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
