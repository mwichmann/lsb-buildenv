#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_OBJECTP_H_
#define _X11_OBJECTP_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define XtInheritAllocate	((XtAllocateProc) _XtInherit)
#define XtInheritDeallocate	((XtDeallocateProc) _XtInherit)
#define XtObjectExtensionVersion	1L
#endif				/* __LSB_VERSION__ >= 1.2 */




/* Object Instance Data Structures*/


/* Object Class Data Structures*/



#if __LSB_VERSION__ >= 12
    typedef struct _ObjectClassRec ObjectClassRec;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12


#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern ObjectClassRec objectClassRec;
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
