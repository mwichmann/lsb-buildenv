#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_OBJECT_H_
#define _X11_OBJECT_H_

#include <lsb/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif


#define _XtObject_h	1


    typedef struct _ObjectClassRec *ObjectClass;

    typedef struct _ObjectClassRec *Object;


/* Function prototypes */

    extern WidgetClass objectClass;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
