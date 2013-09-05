#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_CONSTRAINP_H_
#define _X11_CONSTRAINP_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xresource.h>
#include <X11/IntrinsicP.h>
#include <X11/CompositeP.h>
#include <X11/TranslateI.h>
#include <X11/CoreP.h>
#include <X11/ShellP.h>
#include <X11/RectObjP.h>
#include <lsb/Composite.h>
#include <lsb/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XtConstraintExtensionVersion	1L


    typedef struct _ConstraintPart ConstraintPart;

    typedef struct _ConstraintClassRec *ConstraintClassRec;

    typedef struct _ConstraintClassPart ConstraintClassPart;

    typedef struct _ConstraintRec ConstraintRec;

    typedef struct _ConstraintRec *ConstraintWidget;

    typedef struct {
	XtPointer next_extension;
	XrmQuark record_type;
	long int version;
	Cardinal record_size;
	XtArgsProc get_values_hook;
    } ConstraintClassExtensionRec;

    typedef ConstraintClassExtensionRec *ConstraintClassExtension;

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

    struct _ConstraintPart {
	XtPointer mumble;	/* No new fields, keep C compiler happy */
    };

    struct _ConstraintRec {
	CorePart core;
	CompositePart composite;
	ConstraintPart constraint;
    };


/* Function prototypes */

    extern ConstraintClassRec constraintClassRec;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
