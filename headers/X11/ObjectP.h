#if (__LSB_VERSION__ >= 12 )
#ifndef _X11_OBJECTP_H_
#define _X11_OBJECTP_H_

#include <X11/Xresource.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>

#ifdef __cplusplus
extern "C" {
#endif


#define _Xt_ObjectP_h_	1
#define XtInheritAllocate	((XtAllocateProc) _XtInherit)
#define XtInheritDeallocate	((XtDeallocateProc) _XtInherit)
#define XtObjectExtensionVersion	1L


    typedef struct _ObjectPart ObjectPart;

    typedef struct _ObjectRec ObjectRec;

    typedef struct _ObjectClassPart ObjectClassPart;

    typedef struct {
	XtPointer next_extension;
	XrmQuark record_type;
	long int version;
	Cardinal record_size;
	XtAllocateProc allocate;
	XtDeallocateProc deallocate;
    } ObjectClassExtensionRec;

    typedef ObjectClassExtensionRec *ObjectClassExtension;

    struct _ObjectPart {
	Widget self;
	WidgetClass widget_class;
	Widget parent;
	XrmName xrm_name;
	Boolean being_destroyed;
	XtCallbackList destroy_callbacks;
	XtPointer constraints;
    };

    struct _ObjectRec {
	ObjectPart object;
    };

    struct _ObjectClassPart {
	WidgetClass superclass;
	String class_name;
	Cardinal widget_size;
	XtProc class_initialize;
	XtWidgetClassProc class_part_initialize;
	XtEnum class_inited;
	XtInitProc initialize;
	XtArgsProc initialize_hook;
	XtProc obj1;
	XtPointer obj2;
	Cardinal obj3;
	XtResourceList resources;
	Cardinal num_resources;
	XrmClass xrm_class;
	Boolean obj4;
	XtEnum obj5;
	Boolean obj6;
	Boolean obj7;
	XtWidgetProc destroy;
	XtProc obj8;
	XtProc obj9;
	XtSetValuesFunc set_values;
	XtArgsFunc set_values_hook;
	XtProc obj10;
	XtArgsProc get_values_hook;
	XtProc obj11;
	XtVersionType version;
	XtPointer callback_private;
	String obj12;
	XtProc obj13;
	XtProc obj14;
	XtPointer extension;
    };


/* Object Instance Data Structures*/


/* Object Class Data Structures*/



    typedef struct _ObjectClassRec ObjectClassRec;

    struct _ObjectClassRec {
	ObjectClassPart object_class;
    };


/* Function prototypes */

    extern ObjectClassRec objectClassRec;
#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
