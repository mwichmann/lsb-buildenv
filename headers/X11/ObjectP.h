#ifndef _X11_OBJECTP_H_
#define _X11_OBJECTP_H_

#include <X11/Intrinsic.h>

#define XtInheritAllocate	((XtAllocateProc) _XtInherit)
#define XtInheritDeallocate	((XtDeallocateProc) _XtInherit)
#define XtObjectExtensionVersion	1L



/* Object Instance Data Structures*/


struct _ObjectPart
{
  Widget self;			/* pointer to widget itself */
  WidgetClass widget_class;	/* pointer to Widget's ClassRec */
  Widget parent;		/* parent widget */
  XrmName xrm_name;		/* widget resource name quarkified */
  Boolean being_destroyed;	/* marked for destroy */
  XtCallbackList destroy_callbacks;	/* who to call when widget destroyed */
  XtPointer constraints;	/* constraint record */
}
 ;

typedef struct _ObjectRec ObjectRec;

typedef struct _ObjectPart
{
  Widget self;			/* pointer to widget itself */
  WidgetClass widget_class;	/* pointer to Widget's ClassRec */
  Widget parent;		/* parent widget */
  XrmName xrm_name;		/* widget resource name quarkified */
  Boolean being_destroyed;	/* marked for destroy */
  XtCallbackList destroy_callbacks;	/* who to call when widget destroyed */
  XtPointer constraints;	/* constraint record */
}
ObjectPart;





/* Object Class Data Structures*/


struct _ObjectClassPart
{
  WidgetClass superclass;	/* pointer to superclass ClassRec */
  String class_name;		/* widget resource class name */
  Cardinal widget_size;		/* size in bytes of widget record */
  XtProc class_initialize;	/* class initialization proc */
  XtWidgetClassProc class_part_initialize;	/* dynamic initialization */
  XtEnum class_inited;		/* has class been initialized? */
  XtInitProc initialize;	/* initialize subclass fields */
  XtArgsProc initialize_hook;	/* notify that initialize called */
  XtProc obj1;
  XtProc obj2;
  XtProc obj3;
  XtResourceList resources;	/* resources for subclass fields */
  Cardinal num_resources;	/* number of entries in resources */
  XrmClass xrm_class;		/* resource class quarkified */
  Boolean obj4;
  XtEnum obj5;
  Boolean obj6;
  Boolean obj7;
  XtWidgetProc destroy;		/* free data for subclass pointers */
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
  XtPointer extension;		/* pointer to extension record */
}
 ;

typedef struct _ObjectClassPart
{
  WidgetClass superclass;	/* pointer to superclass ClassRec */
  String class_name;		/* widget resource class name */
  Cardinal widget_size;		/* size in bytes of widget record */
  XtProc class_initialize;	/* class initialization proc */
  XtWidgetClassProc class_part_initialize;	/* dynamic initialization */
  XtEnum class_inited;		/* has class been initialized? */
  XtInitProc initialize;	/* initialize subclass fields */
  XtArgsProc initialize_hook;	/* notify that initialize called */
  XtProc obj1;
  XtProc obj2;
  XtProc obj3;
  XtResourceList resources;	/* resources for subclass fields */
  Cardinal num_resources;	/* number of entries in resources */
  XrmClass xrm_class;		/* resource class quarkified */
  Boolean obj4;
  XtEnum obj5;
  Boolean obj6;
  Boolean obj7;
  XtWidgetProc destroy;		/* free data for subclass pointers */
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
  XtPointer extension;		/* pointer to extension record */
}
ObjectClassPart;




struct ObjectClassExtensionRec Struct
{
  XtPointer next_extension;	/* 1st 4 required for all extension records */
  XrmQuark record_type;		/* NULLQUARK; when on ObjectClassPart */
  long version;			/* must be XtObjectExtensionVersion */
  Cardinal record_size;		/* sizeof(ObjectClassExtensionRec) */
  XtAllocateProc allocate;
  XtDeallocateProc deallocate;
}
 ;

typedef struct ObjectClassExtensionRec Struct
{
  XtPointer next_extension;	/* 1st 4 required for all extension records */
  XrmQuark record_type;		/* NULLQUARK; when on ObjectClassPart */
  long version;			/* must be XtObjectExtensionVersion */
  Cardinal record_size;		/* sizeof(ObjectClassExtensionRec) */
  XtAllocateProc allocate;
  XtDeallocateProc deallocate;
}
ObjectClassExtensionRec;

struct ObjectClassExtensionRec Struct
{
  XtPointer next_extension;	/* 1st 4 required for all extension records */
  XrmQuark record_type;		/* NULLQUARK; when on ObjectClassPart */
  long version;			/* must be XtObjectExtensionVersion */
  Cardinal record_size;		/* sizeof(ObjectClassExtensionRec) */
  XtAllocateProc allocate;
  XtDeallocateProc deallocate;
}
 *;

typedef struct ObjectClassExtensionRec Struct
{
  XtPointer next_extension;	/* 1st 4 required for all extension records */
  XrmQuark record_type;		/* NULLQUARK; when on ObjectClassPart */
  long version;			/* must be XtObjectExtensionVersion */
  Cardinal record_size;		/* sizeof(ObjectClassExtensionRec) */
  XtAllocateProc allocate;
  XtDeallocateProc deallocate;
}
 *ObjectClassExtension;




struct _ObjectClassRec
{
  ObjectClassPart object_class;
}
 ;

typedef struct _ObjectClassRec
{
  ObjectClassPart object_class;
}
ObjectClassRec;


extern ObjectClassRec objectClassRec;
#endif
