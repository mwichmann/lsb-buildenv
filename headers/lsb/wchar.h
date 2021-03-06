#if (__LSB_VERSION__ >= 10 )
#ifndef _LSB_WCHAR_H_
#define _LSB_WCHAR_H_


#ifdef __cplusplus
extern "C" {
#endif


/* 
   Special header to avoid header inclusion loops.
   DO NOT include this header directly.
*/
    typedef unsigned int wint_t;

#if __LSB_VERSION__ >= 12
    typedef struct {
	int count;
	wint_t value;
    } __mbstate_t;

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 12
    typedef __mbstate_t mbstate_t;

#endif				/* __LSB_VERSION__ >= 1.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
