#ifndef _X11_CONSTRAINP_H_
#define _X11_CONSTRAINP_H_

#include <X11/Intrinsic.h>
#include <X11/CompositeP.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XtConstraintExtensionVersion	1L


    typedef struct _ConstraintPart ConstraintPart;

    typedef struct _ConstraintClassPart ConstraintClassPart;

    typedef struct _ConstraintClassRec ConstraintClassRec;






    struct _ConstraintClassRec {
	CoreClassPart core_class;
	CompositeClassPart composite_class;
	ConstraintClassPart constraint_class;
    };


    extern ConstraintClassRec constraintClassRec;
#ifdef __cplusplus
}
#endif
#endif
