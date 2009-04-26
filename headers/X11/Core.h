#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_CORE_H_
#define _X11_CORE_H_

#include <X11/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif


#define _XtCore_h	1


    typedef struct _WidgetClassRec *CoreWidgetClass;

    typedef struct _WidgetClassRec *CoreWidget;


/* Function prototypes */

    extern WidgetClass coreWidgetClass;
    extern WidgetClass widgetClass;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
