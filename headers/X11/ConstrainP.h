#ifndef _X11_CONSTRAINP_H_
#define _X11_CONSTRAINP_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include <X11/Intrinsic.h>
#include <X11/CompositeP.h>

#define XtConstraintExtensionVersion	1L


  typedef struct _ConstraintPart ConstraintPart;

  typedef struct _ConstraintClassPart ConstraintClassPart;

  typedef struct _ConstraintClassRec
  {
    CoreClassPart core_class;
    CompositeClassPart composite_class;
    ConstraintClassPart constraint_class;
  }
  ConstraintClassRec;


  extern ConstraintClassRec constraintClassRec;
#ifdef __cplusplus
}
#endif
#endif
