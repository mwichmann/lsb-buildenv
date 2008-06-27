#if (__LSB_VERSION__ >= 10 )
#ifndef _ASSERT_H_
#define _ASSERT_H_


#ifdef __cplusplus
extern "C" {
#endif



/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern void __assert_fail(const char *, const char *, unsigned int,
			      const char *);
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
