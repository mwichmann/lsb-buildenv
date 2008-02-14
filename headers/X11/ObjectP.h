#ifndef _X11_OBJECTP_H_
#define _X11_OBJECTP_H_

#include <X11/Intrinsic.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XtInheritAllocate	((XtAllocateProc) _XtInherit)
#define XtInheritDeallocate	((XtDeallocateProc) _XtInherit)
#define XtObjectExtensionVersion	1L



/* Object Instance Data Structures*/
    typedef struct _ObjectPart ObjectPart;


    struct _ObjectPart {
	Widget self;		/* pointer to widget itself */
	WidgetClass widget_class;	/* pointer to Widget's ClassRec */
	Widget parent;		/* parent widget */
	XrmName xrm_name;	/* widget resource name quarkified */
	Boolean being_destroyed;	/* marked for destroy */
	XtCallbackList destroy_callbacks;	/* who to call when widget destroyed */
	XtPointer constraints;	/* constraint record */
    };


    typedef struct _ObjectRec ObjectRec;


    struct _ObjectRec {
	ObjectPart object;
    };


/* Object Class Data Structures*/
    typedef struct _ObjectClassPart ObjectClassPart;


    struct _ObjectClassPart {
	WidgetClass superclass;	/* pointer to superclass ClassRec */
	String class_name;	/* widget resource class name */
	Cardinal widget_size;	/* size in bytes of widget record */
	XtProc class_initialize;	/* class initialization proc */
	XtWidgetClassProc class_part_initialize;	/* dynamic initialization */
	XtEnum class_inited;	/* has class been initialized? */
	XtInitProc initialize;	/* initialize subclass fields */
	XtArgsProc initialize_hook;	/* notify that initialize called */
	XtProc obj1;
	XtProc obj2;
	XtProc obj3;
	XtResourceList resources;	/* resources for subclass fields */
	Cardinal num_resources;	/* number of entries in resources */
	XrmClass xrm_class;	/* resource class quarkified */
	Boolean obj4;
	XtEnum obj5;
	Boolean obj6;
	Boolean obj7;
	XtWidgetProc destroy;	/* free data for subclass pointers */
	XtProc obj8;
	XtProc obj9;
	XtSetValuesFunc set_values;	/* set subclass resource values */
	XtArgsFunc set_values_hook;	/* notify that set_values called */
	XtProc obj10;
	XtArgsProc get_values_hook;	/* notify that get_values called */
	XtProc obj11;
	XtVersionType version;	/* version of intrinsics used */
	XtPointer callback_private;	/* list of callback offsets */
	String obj12;
	XtProc obj13;
	XtProc obj14;
	XtPointer extension;	/* pointer to extension record */
    };


    struct {
	XtPointer next_extension;	/* 1st 4 required for all extension records */
	XrmQuark record_type;	/* NULLQUARK; when on ObjectClassPart */
	long int version;	/* must be XtObjectExtensionVersion */
	Cardinal record_size;	/* sizeof(ObjectClassExtensionRec) */
	XtAllocateProc allocate;
	XtDeallocateProc deallocate;
    };


    typedef struct {
	XtPointer next_extension;	/* 1st 4 required for all extension records */
	XrmQuark record_type;	/* NULLQUARK; when on ObjectClassPart */
	long int version;	/* must be XtObjectExtensionVersion */
	Cardinal record_size;	/* sizeof(ObjectClassExtensionRec) */
	XtAllocateProc allocate;
	XtDeallocateProc deallocate;
    } ObjectClassExtensionRec;

    typedef struct {
	XtPointer next_extension;	/* 1st 4 required for all extension records */
	XrmQuark record_type;	/* NULLQUARK; when on ObjectClassPart */
	long int version;	/* must be XtObjectExtensionVersion */
	Cardinal record_size;	/* sizeof(ObjectClassExtensionRec) */
	XtAllocateProc allocate;
	XtDeallocateProc deallocate;
    } *ObjectClassExtension;


    typedef struct _ObjectClassRec ObjectClassRec;


    struct _ObjectClassRec {
	ObjectClassPart object_class;
    };


    extern ObjectClassRec objectClassRec;
#ifdef __cplusplus
}
#endif
#endif
