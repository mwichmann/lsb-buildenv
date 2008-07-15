#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_OBJECTP_H_
#define _X11_OBJECTP_H_


#ifdef __cplusplus
extern "C" {
#endif


#define XtInheritAllocate	((XtAllocateProc) _XtInherit)
#define XtInheritDeallocate	((XtDeallocateProc) _XtInherit)
#define XtObjectExtensionVersion	1L



/* Object Instance Data Structures*/


/* Object Class Data Structures*/



    typedef struct _ObjectClassRec ObjectClassRec;




/* Function prototypes */

    extern ObjectClassRec objectClassRec;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
