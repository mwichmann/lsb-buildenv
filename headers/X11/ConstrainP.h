#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_CONSTRAINP_H_
#define _X11_CONSTRAINP_H_

#include <X11/Xresource.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>
#include <X11/CompositeP.h>
#include <X11/CoreP.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XtConstraintExtensionVersion	1L


    typedef struct _ConstraintClassRec *ConstraintClassRec;

    typedef struct _ConstraintClassPart ConstraintClassPart;

    struct _ConstraintClassPart {
	XtResourceList resources;
	Cardinal num_resources;
	Cardinal constraint_size;
	XtInitProc initialize;
	XtWidgetProc destroy;
	XtSetValuesFunc set_values;
	XtPointer extension;
    };

    struct _ConstraintClassRec {
	CoreClassPart core_class;
	CompositeClassPart composite_class;
	ConstraintClassPart constraint_class;
    };


/* Function prototypes */

    extern ConstraintClassRec constraintClassRec;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
