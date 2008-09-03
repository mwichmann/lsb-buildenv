#if (__LSB_VERSION__ >= 11 )
#ifndef _X11_INTRINSIC_H_
#define _X11_INTRINSIC_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#include <X11/Xresource.h>

#ifdef __cplusplus
extern "C" {
#endif


#define externalref	extern
#define XtOffset(p_type,field)	((Cardinal) (((char *) (&(((p_type)NULL)->field))) - ((char *) NULL)))
#define XtNumber(arr)	((Cardinal) (sizeof(arr) / sizeof(arr[0])))
#define XtAllEvents	((EventMask) -1L)
#define XtUnspecifiedPixmap	((Pixmap)2)
#define XtNew(type)	((type *) XtMalloc((unsigned) sizeof(type)))
#define XtSetArg(arg,n,d)	((void)( (arg).name = (n), (arg).value = (XtArgVal)(d) ))
#define XtUnspecifiedWindow	((Window)2)
#define XtUnspecifiedWindowGroup	((Window)3)
#define XtUnspecifiedShellInt	(-1)
#define XtCWQueryOnly	(1 << 7)
#define XtInputReadMask	(1L<<0)
#define XtInputWriteMask	(1L<<1)
#define XtInputExceptMask	(1L<<2)
#define XT_CONVERT_FAIL	(Atom)0x80000001
#define XtIMAll	(XtIMXEvent | XtIMTimer | XtIMAlternateInput | XtIMSignal)
#define XtIsRectObj(object)	(_XtCheckSubclassFlag(object, (XtEnum)0x02))
#define XtIsWidget(object)	(_XtCheckSubclassFlag(object, (XtEnum)0x04))
#define XtIsComposite(widget)	(_XtCheckSubclassFlag(widget, (XtEnum)0x08))
#define XtIsConstraint(widget)	(_XtCheckSubclassFlag(widget, (XtEnum)0x10))
#define XtIsShell(widget)	(_XtCheckSubclassFlag(widget, (XtEnum)0x20))
#define XtIsWMShell(widget)	(_XtCheckSubclassFlag(widget, (XtEnum)0x40))
#define XtInputNoneMask	0L
#define XtCacheNone	0x001
#define XtCacheAll	0x002
#define XtCacheByDisplay	0x003
#define XtCacheRefCount	0x100
#define XtIMXEvent	1
#define _XtIntrinsic_h	1
#define XtIMTimer	2
#define XtIMAlternateInput	4
#define XtSMDontChange	5
#define XtSpecificationRelease	6
#define XtIMSignal	8
#define _XtString	char*
#define _XtBoolean	int
#define _XtPosition	int
#define XtOffsetOf(s_type,field)	offsetof(s_type,field)
#define _XtDimension	unsigned int
#define _XtKeyCode	unsigned int
#define _XtXtEnum	unsigned int
#define XtCurrentDirectory	"XtCurrentDirectory"
#define XtCvtPixelToColor	"XtCvtIntToColor"
#define XtCvtIntToDimension	"XtCvtIntToShort"
#define XtCvtIntToPosition	"XtCvtIntToShort"
#define XtCvtStringToPosition	"XtCvtStringToShort"
#define XtDefaultBackground	"XtDefaultBackground"
#define XtDefaultFont	"XtDefaultFont"
#define XtDefaultFontSet	"XtDefaultFontSet"
#define XtDefaultForeground	"XtDefaultForeground"
#define XtVaNestedList	"XtVaNestedList"
#define XtVaTypedArg	"XtVaTypedArg"


    typedef long unsigned int Pixel;

#if __LSB_VERSION__ >= 12
    typedef unsigned int Cardinal;

    typedef void *XtPointer;

    typedef struct _WidgetRec *Widget;

    typedef char *String;

    typedef unsigned int XtGeometryMask;

    typedef short int Position;

    typedef short unsigned int Dimension;

    typedef struct {
	XtGeometryMask request_mode;
	Position x;
	Position y;
	Dimension width;
	Dimension height;
	Dimension border_width;
	Widget sibling;
	int stack_mode;
    } XtWidgetGeometry;

    typedef unsigned int Modifiers;

    typedef void *XtCacheRef;

    typedef struct _XtResource *XtResourceList;

    typedef struct _XtAppStruct *XtAppContext;

    typedef void (*XtActionProc) (Widget, XEvent *, String *, Cardinal *);

    typedef struct _XtActionsRec *XtActionList;

    typedef char Boolean;

    typedef int XtCacheType;

    typedef long unsigned int XtGCMask;

    typedef unsigned char XtEnum;

    typedef long unsigned int XtSignalId;

    typedef long unsigned int XtWorkProcId;

    typedef long unsigned int XtInputId;

    typedef long unsigned int XtIntervalId;

    typedef struct _WidgetClassRec *WidgetClass;

    typedef Widget *WidgetList;

    typedef struct _TranslationData *XtAccelerators;

    typedef struct _TranslationData *XtTranslations;

    typedef enum {
	XtGeometryYes = 0,
	XtGeometryNo = 1,
	XtGeometryAlmost = 2,
	XtGeometryDone = 3
    } XtGeometryResult;

    typedef enum {
	XtAddress = 0,
	XtBaseOffset = 1,
	XtImmediate = 2,
	XtResourceString = 3,
	XtResourceQuark = 4,
	XtWidgetBaseOffset = 5,
	XtProcedureArg = 6
    } XtAddressMode;

    typedef struct {
	XtAddressMode address_mode;
	XtPointer address_id;
	Cardinal size;
    } XtConvertArgRec;

    typedef XtConvertArgRec *XtConvertArgList;

    typedef long int XtArgVal;

    typedef struct {
	String name;
	XtArgVal value;
    } Arg;

    typedef Arg *ArgList;

    typedef void (*XtSignalCallbackProc) (XtPointer, XtSignalId *);

    typedef enum {
	XtCallbackNoList = 0,
	XtCallbackHasNone = 1,
	XtCallbackHasSome = 2
    } XtCallbackStatus;

    typedef void (*XtInputCallbackProc) (XtPointer, int *, XtInputId *);

    typedef void (*XtTimerCallbackProc) (XtPointer, XtIntervalId *);

    typedef long unsigned int XtInputMask;

    typedef enum {
	XtListHead = 0,
	XtListTail = 1
    } XtListPosition;

    typedef void (*XtCallbackProc) (Widget, XtPointer, XtPointer);

    typedef struct _XtCallbackRec *XtCallbackList;

    typedef long unsigned int EventMask;

#include <X11/TranslateI.h>
    typedef void *XtVarArgsList;

    typedef void (*XtEventHandler) (Widget, XtPointer, XEvent *,
				    Boolean *);

    typedef void (*XtCaseProc) (Display *, KeySym, KeySym *, KeySym *);

    typedef void (*XtKeyProc) (Display *, KeyCode, Modifiers, Modifiers *,
			       KeySym *);

    typedef void (*XtBlockHookProc) (XtPointer);

    typedef long unsigned int XtBlockHookId;

    typedef void (*XtActionHookProc) (Widget, XtPointer, String, XEvent *,
				      String *, Cardinal *);

    typedef void *XtActionHookId;

    typedef void (*XtDestructor) (XtAppContext, XrmValue *, XtPointer,
				  XrmValue *, Cardinal *);

    typedef Boolean(*XtTypeConverter) (Display *, XrmValue *, Cardinal *,
				       XrmValue *, XrmValue *,
				       XtPointer *);

    typedef void (*XtConverter) (XrmValue *, Cardinal *, XrmValue *,
				 XrmValue *);

    typedef void *XtRequestId;

    typedef Boolean(*XtFilePredicate) (String);

    typedef struct {
	char match;
	String substitution;
    } SubstitutionRec;

    typedef SubstitutionRec *Substitution;

    typedef void (*XtSelectionCallbackProc) (Widget, XtPointer, Atom *,
					     Atom *, XtPointer,
					     long unsigned int *, int *);

    typedef Boolean(*XtWorkProc) (XtPointer);

    typedef void (*XtSelectionDoneProc) (Widget, Atom *, Atom *);

    typedef void (*XtLoseSelectionProc) (Widget, Atom *);

    typedef void (*XtErrorHandler) (String);

    typedef Boolean(*XtConvertSelectionProc) (Widget, Atom *, Atom *,
					      Atom *, XtPointer *,
					      long unsigned int *, int *);

    typedef void (*XtErrorMsgHandler) (String, String, String, String,
				       String *, Cardinal *);

    typedef String(*XtLanguageProc) (Display *, String, XtPointer);

    typedef enum {
	XtGrabNone = 0,
	XtGrabNonexclusive = 1,
	XtGrabExclusive = 2
    } XtGrabKind;

    typedef struct _XtCheckpointTokenRec *XtCheckpointToken;

    typedef void (*XtExtensionSelectProc) (Widget, int *, XtPointer *, int,
					   XtPointer);

    typedef Boolean(*XtEventDispatchProc) (XEvent *);

    typedef void (*XtCancelConvertSelectionProc) (Widget, Atom *, Atom *,
						  XtRequestId *,
						  XtPointer);

    typedef Boolean(*XtConvertSelectionIncrProc) (Widget, Atom *, Atom *,
						  Atom *, XtPointer *,
						  long unsigned int *,
						  int *,
						  long unsigned int *,
						  XtPointer,
						  XtRequestId *);

    typedef void (*XtSelectionDoneIncrProc) (Widget, Atom *, Atom *,
					     XtRequestId *, XtPointer);

    typedef void (*XtLoseSelectionIncrProc) (Widget, Atom *, XtPointer);

    typedef long unsigned int XtValueMask;

    typedef struct _XtEventRec *XtEventTable;

#include <X11/EventI.h>
    typedef XtActionProc *XtBoundActions;

    typedef struct _XtResource XtResource;

    typedef struct _XtCallbackRec XtCallbackRec;

    typedef struct _XtCheckpointTokenRec XtCheckpointTokenRec;

    typedef struct {
	Widget shell_widget;
	Widget enable_widget;
    } XtPopdownIDRec;

    typedef XtPopdownIDRec *XtPopdownID;

    typedef struct {
	String type;
	Widget widget;
	ArgList args;
	Cardinal num_args;
    } XtCreateHookDataRec;

    typedef XtCreateHookDataRec *XtCreateHookData;

    typedef struct {
	String type;
	Widget widget;
	XtPointer event_data;
	Cardinal num_event_data;
    } XtChangeHookDataRec;

    typedef XtChangeHookDataRec *XtChangeHookData;

    typedef struct {
	Widget old;
	Widget req;
	ArgList args;
	Cardinal num_args;
    } XtChangeHookSetValuesDataRec;

    typedef XtChangeHookSetValuesDataRec *XtChangeHookSetValuesData;

    typedef struct {
	String type;
	Widget widget;
	XtWidgetGeometry *request;
	XtWidgetGeometry *reply;
	XtGeometryResult result;
    } XtGeometryHookDataRec;

    typedef XtGeometryHookDataRec *XtGeometryHookData;

    typedef struct {
	String type;
	Widget widget;
    } XtDestroyHookDataRec;

    typedef XtDestroyHookDataRec *XtDestroyHookData;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _WidgetRec;

    struct _XtResource {
	String resource_name;
	String resource_class;
	String resource_type;
	Cardinal resource_size;
	Cardinal resource_offset;
	String default_type;
	XtPointer default_addr;
    };

    struct _XtAppStruct;

    struct _XtActionsRec {
	String string;
	XtActionProc proc;
    };

    struct _WidgetClassRec;

    struct _XtCallbackRec {
	XtCallbackProc callback;
	XtPointer closure;
    };

    struct _XtCheckpointTokenRec {
	int save_type;
	int interact_style;
	Boolean shutdown;
	Boolean fast;
	Boolean cancel_shutdown;
	int phase;
	int interact_dialog_type;
	Boolean request_cancel;
	Boolean request_next_phase;
	Boolean save_success;
	int type;
	Widget widget;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

    extern void XtAddActions(XtActionList, Cardinal);
    extern void XtAddCallback(Widget, const char *, XtCallbackProc,
			      XtPointer);
    extern void XtAddCallbacks(Widget, const char *, XtCallbackList);
    extern void XtAddConverter(const char *, const char *, XtConverter,
			       XtConvertArgList, Cardinal);
    extern void XtAddEventHandler(Widget, EventMask, Boolean,
				  XtEventHandler, XtPointer);
    extern void XtAddExposureToRegion(XEvent *, Region);
    extern void XtAddGrab(Widget, Boolean, Boolean);
    extern XtInputId XtAddInput(int, XtPointer, XtInputCallbackProc,
				XtPointer);
    extern void XtAddRawEventHandler(Widget, EventMask, Boolean,
				     XtEventHandler, XtPointer);
    extern XtSignalId XtAddSignal(XtSignalCallbackProc, XtPointer);
    extern XtIntervalId XtAddTimeOut(long unsigned int,
				     XtTimerCallbackProc, XtPointer);
    extern XtWorkProcId XtAddWorkProc(XtWorkProc, XtPointer);
    extern GC XtAllocateGC(Widget, Cardinal, XtGCMask, XGCValues *,
			   XtGCMask, XtGCMask);
    extern XtActionHookId XtAppAddActionHook(XtAppContext,
					     XtActionHookProc, XtPointer);
    extern void XtAppAddActions(XtAppContext, XtActionList, Cardinal);
    extern XtBlockHookId XtAppAddBlockHook(XtAppContext, XtBlockHookProc,
					   XtPointer);
    extern void XtAppAddConverter(XtAppContext, const char *, const char *,
				  XtConverter, XtConvertArgList, Cardinal);
    extern XtInputId XtAppAddInput(XtAppContext, int, XtPointer,
				   XtInputCallbackProc, XtPointer);
    extern XtSignalId XtAppAddSignal(XtAppContext, XtSignalCallbackProc,
				     XtPointer);
    extern XtIntervalId XtAppAddTimeOut(XtAppContext, long unsigned int,
					XtTimerCallbackProc, XtPointer);
    extern XtWorkProcId XtAppAddWorkProc(XtAppContext, XtWorkProc,
					 XtPointer);
    extern Widget XtAppCreateShell(const char *, const char *, WidgetClass,
				   Display *, ArgList, Cardinal);
    extern void XtAppError(XtAppContext, const char *);
    extern void XtAppErrorMsg(XtAppContext, const char *, const char *,
			      const char *, const char *, String *,
			      Cardinal *);
    extern XrmDatabase *XtAppGetErrorDatabase(XtAppContext);
    extern void XtAppGetErrorDatabaseText(XtAppContext, const char *,
					  const char *, const char *,
					  const char *, String, int,
					  XrmDatabase);
    extern Boolean XtAppGetExitFlag(XtAppContext);
    extern long unsigned int XtAppGetSelectionTimeout(XtAppContext);
    extern Widget XtAppInitialize(XtAppContext *, const char *,
				  XrmOptionDescList, Cardinal, int *,
				  String *, String *, ArgList, Cardinal);
    extern void XtAppLock(XtAppContext);
    extern void XtAppMainLoop(XtAppContext);
    extern void XtAppNextEvent(XtAppContext, XEvent *);
    extern Boolean XtAppPeekEvent(XtAppContext, XEvent *);
    extern XtInputMask XtAppPending(XtAppContext);
    extern void XtAppProcessEvent(XtAppContext, XtInputMask);
    extern void XtAppReleaseCacheRefs(XtAppContext, XtCacheRef *);
    extern XtErrorHandler XtAppSetErrorHandler(XtAppContext,
					       XtErrorHandler);
    extern XtErrorMsgHandler XtAppSetErrorMsgHandler(XtAppContext,
						     XtErrorMsgHandler);
    extern void XtAppSetExitFlag(XtAppContext);
    extern void XtAppSetFallbackResources(XtAppContext, String *);
    extern void XtAppSetSelectionTimeout(XtAppContext, long unsigned int);
    extern void XtAppSetTypeConverter(XtAppContext, const char *,
				      const char *, XtTypeConverter,
				      XtConvertArgList, Cardinal,
				      XtCacheType, XtDestructor);
    extern XtErrorHandler XtAppSetWarningHandler(XtAppContext,
						 XtErrorHandler);
    extern XtErrorMsgHandler XtAppSetWarningMsgHandler(XtAppContext,
						       XtErrorMsgHandler);
    extern void XtAppUnlock(XtAppContext);
    extern void XtAppWarning(XtAppContext, const char *);
    extern void XtAppWarningMsg(XtAppContext, const char *, const char *,
				const char *, const char *, String *,
				Cardinal *);
    extern void XtAugmentTranslations(Widget, XtTranslations);
    extern EventMask XtBuildEventMask(Widget);
    extern String XtCXtToolkitError;
    extern Boolean XtCallAcceptFocus(Widget, Time *);
    extern void XtCallActionProc(Widget, const char *, XEvent *, String *,
				 Cardinal);
    extern void XtCallCallbackList(Widget, XtCallbackList, XtPointer);
    extern void XtCallCallbacks(Widget, const char *, XtPointer);
    extern Boolean XtCallConverter(Display *, XtTypeConverter, XrmValuePtr,
				   Cardinal, XrmValuePtr, XrmValue *,
				   XtCacheRef *);
    extern void XtCallbackExclusive(Widget, XtPointer, XtPointer);
    extern void XtCallbackNone(Widget, XtPointer, XtPointer);
    extern void XtCallbackNonexclusive(Widget, XtPointer, XtPointer);
    extern void XtCallbackPopdown(Widget, XtPointer, XtPointer);
    extern void XtCallbackReleaseCacheRef(Widget, XtPointer, XtPointer);
    extern void XtCallbackReleaseCacheRefList(Widget, XtPointer,
					      XtPointer);
    extern char *XtCalloc(Cardinal, Cardinal);
    extern void XtCancelSelectionRequest(Widget, Atom);
    extern WidgetClass XtClass(Widget);
    extern void XtCloseDisplay(Display *);
    extern void XtConvert(Widget, const char *, XrmValue *, const char *,
			  XrmValue *);
    extern Boolean XtConvertAndStore(Widget, const char *, XrmValue *,
				     const char *, XrmValue *);
    extern void XtConvertCase(Display *, KeySym, KeySym *, KeySym *);
    extern XtAppContext XtCreateApplicationContext(void);
    extern Widget XtCreateApplicationShell(const char *, WidgetClass,
					   ArgList, Cardinal);
    extern Widget XtCreateManagedWidget(const char *, WidgetClass, Widget,
					ArgList, Cardinal);
    extern Widget XtCreatePopupShell(const char *, WidgetClass, Widget,
				     ArgList, Cardinal);
    extern void XtCreateSelectionRequest(Widget, Atom);
    extern Widget XtCreateWidget(const char *, WidgetClass, Widget,
				 ArgList, Cardinal);
    extern Boolean XtCvtColorToPixel(Display *, XrmValuePtr, Cardinal *,
				     XrmValuePtr, XrmValuePtr,
				     XtPointer *);
    extern Boolean XtCvtIntToBool(Display *, XrmValuePtr, Cardinal *,
				  XrmValuePtr, XrmValuePtr, XtPointer *);
    extern Boolean XtCvtIntToBoolean(Display *, XrmValuePtr, Cardinal *,
				     XrmValuePtr, XrmValuePtr,
				     XtPointer *);
    extern Boolean XtCvtIntToColor(Display *, XrmValuePtr, Cardinal *,
				   XrmValuePtr, XrmValuePtr, XtPointer *);
    extern Boolean XtCvtIntToFloat(Display *, XrmValuePtr, Cardinal *,
				   XrmValuePtr, XrmValuePtr, XtPointer *);
    extern Boolean XtCvtIntToFont(Display *, XrmValuePtr, Cardinal *,
				  XrmValuePtr, XrmValuePtr, XtPointer *);
    extern Boolean XtCvtIntToPixel(Display *, XrmValuePtr, Cardinal *,
				   XrmValuePtr, XrmValuePtr, XtPointer *);
    extern Boolean XtCvtIntToPixmap(Display *, XrmValuePtr, Cardinal *,
				    XrmValuePtr, XrmValuePtr, XtPointer *);
    extern Boolean XtCvtIntToShort(Display *, XrmValuePtr, Cardinal *,
				   XrmValuePtr, XrmValuePtr, XtPointer *);
    extern Boolean XtCvtIntToUnsignedChar(Display *, XrmValuePtr,
					  Cardinal *, XrmValuePtr,
					  XrmValuePtr, XtPointer *);
    extern Boolean XtCvtStringToAcceleratorTable(Display *, XrmValuePtr,
						 Cardinal *, XrmValuePtr,
						 XrmValuePtr, XtPointer *);
    extern Boolean XtCvtStringToAtom(Display *, XrmValuePtr, Cardinal *,
				     XrmValuePtr, XrmValuePtr,
				     XtPointer *);
    extern Boolean XtCvtStringToBool(Display *, XrmValuePtr, Cardinal *,
				     XrmValuePtr, XrmValuePtr,
				     XtPointer *);
    extern Boolean XtCvtStringToBoolean(Display *, XrmValuePtr, Cardinal *,
					XrmValuePtr, XrmValuePtr,
					XtPointer *);
    extern Boolean XtCvtStringToCommandArgArray(Display *, XrmValuePtr,
						Cardinal *, XrmValuePtr,
						XrmValuePtr, XtPointer *);
    extern Boolean XtCvtStringToCursor(Display *, XrmValuePtr, Cardinal *,
				       XrmValuePtr, XrmValuePtr,
				       XtPointer *);
    extern Boolean XtCvtStringToDimension(Display *, XrmValuePtr,
					  Cardinal *, XrmValuePtr,
					  XrmValuePtr, XtPointer *);
    extern Boolean XtCvtStringToDirectoryString(Display *, XrmValuePtr,
						Cardinal *, XrmValuePtr,
						XrmValuePtr, XtPointer *);
    extern Boolean XtCvtStringToDisplay(Display *, XrmValuePtr, Cardinal *,
					XrmValuePtr, XrmValuePtr,
					XtPointer *);
    extern Boolean XtCvtStringToFile(Display *, XrmValuePtr, Cardinal *,
				     XrmValuePtr, XrmValuePtr,
				     XtPointer *);
    extern Boolean XtCvtStringToFloat(Display *, XrmValuePtr, Cardinal *,
				      XrmValuePtr, XrmValuePtr,
				      XtPointer *);
    extern Boolean XtCvtStringToFont(Display *, XrmValuePtr, Cardinal *,
				     XrmValuePtr, XrmValuePtr,
				     XtPointer *);
    extern Boolean XtCvtStringToFontSet(Display *, XrmValuePtr, Cardinal *,
					XrmValuePtr, XrmValuePtr,
					XtPointer *);
    extern Boolean XtCvtStringToFontStruct(Display *, XrmValuePtr,
					   Cardinal *, XrmValuePtr,
					   XrmValuePtr, XtPointer *);
    extern Boolean XtCvtStringToGravity(Display *, XrmValuePtr, Cardinal *,
					XrmValuePtr, XrmValuePtr,
					XtPointer *);
    extern Boolean XtCvtStringToInitialState(Display *, XrmValuePtr,
					     Cardinal *, XrmValuePtr,
					     XrmValuePtr, XtPointer *);
    extern Boolean XtCvtStringToInt(Display *, XrmValuePtr, Cardinal *,
				    XrmValuePtr, XrmValuePtr, XtPointer *);
    extern Boolean XtCvtStringToPixel(Display *, XrmValuePtr, Cardinal *,
				      XrmValuePtr, XrmValuePtr,
				      XtPointer *);
    extern Boolean XtCvtStringToRestartStyle(Display *, XrmValuePtr,
					     Cardinal *, XrmValuePtr,
					     XrmValuePtr, XtPointer *);
    extern Boolean XtCvtStringToShort(Display *, XrmValuePtr, Cardinal *,
				      XrmValuePtr, XrmValuePtr,
				      XtPointer *);
    extern Boolean XtCvtStringToTranslationTable(Display *, XrmValuePtr,
						 Cardinal *, XrmValuePtr,
						 XrmValuePtr, XtPointer *);
    extern Boolean XtCvtStringToUnsignedChar(Display *, XrmValuePtr,
					     Cardinal *, XrmValuePtr,
					     XrmValuePtr, XtPointer *);
    extern Boolean XtCvtStringToVisual(Display *, XrmValuePtr, Cardinal *,
				       XrmValuePtr, XrmValuePtr,
				       XtPointer *);
    extern XrmDatabase XtDatabase(Display *);
    extern void XtDestroyApplicationContext(XtAppContext);
    extern void XtDestroyGC(GC);
    extern void XtDestroyWidget(Widget);
    extern void XtDirectConvert(XtConverter, XrmValuePtr, Cardinal,
				XrmValuePtr, XrmValue *);
    extern void XtDisownSelection(Widget, Atom, Time);
    extern Boolean XtDispatchEvent(XEvent *);
    extern Boolean XtDispatchEventToWidget(Widget, XEvent *);
    extern Display *XtDisplay(Widget);
    extern void XtDisplayInitialize(XtAppContext, Display *, const char *,
				    const char *, XrmOptionDescRec *,
				    Cardinal, int *, char **);
    extern Display *XtDisplayOfObject(Widget);
    extern void XtDisplayStringConversionWarning(Display *, const char *,
						 const char *);
    extern XtAppContext XtDisplayToApplicationContext(Display *);
    extern void XtError(const char *);
    extern void XtErrorMsg(const char *, const char *, const char *,
			   const char *, String *, Cardinal *);
    extern String XtFindFile(const char *, Substitution, Cardinal,
			     XtFilePredicate);
    extern void XtFree(char *);
    extern KeySym XtGetActionKeysym(XEvent *, Modifiers *);
    extern void XtGetActionList(WidgetClass, XtActionList *, Cardinal *);
    extern void XtGetApplicationNameAndClass(Display *, String *,
					     String *);
    extern void XtGetApplicationResources(Widget, XtPointer,
					  XtResourceList, Cardinal,
					  ArgList, Cardinal);
    extern XtPointer XtGetClassExtension(WidgetClass, Cardinal, XrmQuark,
					 long int, Cardinal);
    extern void XtGetConstraintResourceList(WidgetClass, XtResourceList *,
					    Cardinal *);
    extern void XtGetDisplays(XtAppContext, Display * **, Cardinal *);
    extern XrmDatabase *XtGetErrorDatabase(void);
    extern void XtGetErrorDatabaseText(const char *, const char *,
				       const char *, const char *, String,
				       int);
    extern GC XtGetGC(Widget, XtGCMask, XGCValues *);
    extern Widget XtGetKeyboardFocusWidget(Widget);
    extern KeySym *XtGetKeysymTable(Display *, KeyCode *, int *);
    extern int XtGetMultiClickTime(Display *);
    extern void XtGetResourceList(WidgetClass, XtResourceList *,
				  Cardinal *);
    extern void XtGetSelectionParameters(Widget, Atom, XtRequestId, Atom *,
					 XtPointer *, long unsigned int *,
					 int *);
    extern XSelectionRequestEvent *XtGetSelectionRequest(Widget, Atom,
							 XtRequestId);
    extern long unsigned int XtGetSelectionTimeout(void);
    extern void XtGetSelectionValue(Widget, Atom, Atom,
				    XtSelectionCallbackProc, XtPointer,
				    Time);
    extern void XtGetSelectionValueIncremental(Widget, Atom, Atom,
					       XtSelectionCallbackProc,
					       XtPointer, Time);
    extern void XtGetSelectionValues(Widget, Atom, Atom *, int,
				     XtSelectionCallbackProc, XtPointer *,
				     Time);
    extern void XtGetSelectionValuesIncremental(Widget, Atom, Atom *, int,
						XtSelectionCallbackProc,
						XtPointer *, Time);
    extern void XtGetSubresources(Widget, XtPointer, const char *,
				  const char *, XtResourceList, Cardinal,
				  ArgList, Cardinal);
    extern void XtGetSubvalues(XtPointer, XtResourceList, Cardinal,
			       ArgList, Cardinal);
    extern void XtGetValues(Widget, ArgList, Cardinal);
    extern void XtGrabButton(Widget, int, Modifiers, Boolean, unsigned int,
			     int, int, Window, Cursor);
    extern void XtGrabKey(Widget, KeyCode, Modifiers, Boolean, int, int);
    extern int XtGrabKeyboard(Widget, Boolean, int, int, Time);
    extern int XtGrabPointer(Widget, Boolean, unsigned int, int, int,
			     Window, Cursor, Time);
    extern XtCallbackStatus XtHasCallbacks(Widget, const char *);
    extern Widget XtHooksOfDisplay(Display *);
    extern Widget XtInitialize(const char *, const char *,
			       XrmOptionDescRec *, Cardinal, int *,
			       char **);
    extern void XtInitializeWidgetClass(WidgetClass);
    extern void XtInsertEventHandler(Widget, EventMask, Boolean,
				     XtEventHandler, XtPointer,
				     XtListPosition);
    extern void XtInsertEventTypeHandler(Widget, int, XtPointer,
					 XtEventHandler, XtPointer,
					 XtListPosition);
    extern void XtInsertRawEventHandler(Widget, EventMask, Boolean,
					XtEventHandler, XtPointer,
					XtListPosition);
    extern void XtInstallAccelerators(Widget, Widget);
    extern void XtInstallAllAccelerators(Widget, Widget);
    extern Boolean XtIsApplicationShell(Widget);
    extern Boolean XtIsManaged(Widget);
    extern Boolean XtIsObject(Widget);
    extern Boolean XtIsOverrideShell(Widget);
    extern Boolean XtIsRealized(Widget);
    extern Boolean XtIsSensitive(Widget);
    extern Boolean XtIsSessionShell(Widget);
    extern Boolean XtIsSubclass(Widget, WidgetClass);
    extern Boolean XtIsTransientShell(Widget);
    extern Boolean XtIsVendorShell(Widget);
    extern void XtKeysymToKeycodeList(Display *, KeySym, KeyCode * *,
				      Cardinal *);
    extern XEvent *XtLastEventProcessed(Display *);
    extern Time XtLastTimestampProcessed(Display *);
    extern void XtMainLoop(void);
    extern XtGeometryResult XtMakeGeometryRequest(Widget,
						  XtWidgetGeometry *,
						  XtWidgetGeometry *);
    extern XtGeometryResult XtMakeResizeRequest(Widget, Dimension,
						Dimension, Dimension *,
						Dimension *);
    extern char *XtMalloc(Cardinal);
    extern void XtMapWidget(Widget);
    extern void XtMenuPopupAction(Widget, XEvent *, String *, Cardinal *);
    extern ArgList XtMergeArgLists(ArgList, Cardinal, ArgList, Cardinal);
    extern String XtName(Widget);
    extern Widget XtNameToWidget(Widget, const char *);
    extern String XtNewString(String);
    extern void XtNextEvent(XEvent *);
    extern void XtNoticeSignal(XtSignalId);
    extern Widget XtOpenApplication(XtAppContext *, const char *,
				    XrmOptionDescList, Cardinal, int *,
				    String *, String *, WidgetClass,
				    ArgList, Cardinal);
    extern Display *XtOpenDisplay(XtAppContext, const char *, const char *,
				  const char *, XrmOptionDescRec *,
				  Cardinal, int *, char **);
    extern void XtOverrideTranslations(Widget, XtTranslations);
    extern Boolean XtOwnSelection(Widget, Atom, Time,
				  XtConvertSelectionProc,
				  XtLoseSelectionProc,
				  XtSelectionDoneProc);
    extern Boolean XtOwnSelectionIncremental(Widget, Atom, Time,
					     XtConvertSelectionIncrProc,
					     XtLoseSelectionIncrProc,
					     XtSelectionDoneIncrProc,
					     XtCancelConvertSelectionProc,
					     XtPointer);
    extern Widget XtParent(Widget);
    extern XtAccelerators XtParseAcceleratorTable(const char *);
    extern XtTranslations XtParseTranslationTable(const char *);
    extern Boolean XtPeekEvent(XEvent *);
    extern Boolean XtPending(void);
    extern void XtPopdown(Widget);
    extern void XtPopup(Widget, XtGrabKind);
    extern void XtPopupSpringLoaded(Widget);
    extern void XtProcessEvent(XtInputMask);
    extern XtGeometryResult XtQueryGeometry(Widget, XtWidgetGeometry *,
					    XtWidgetGeometry *);
    extern void XtRealizeWidget(Widget);
    extern char *XtRealloc(char *, Cardinal);
    extern void XtRegisterCaseConverter(Display *, XtCaseProc, KeySym,
					KeySym);
    extern void XtRegisterDrawable(Display *, Drawable, Widget);
    extern void XtRegisterExtensionSelector(Display *, int, int,
					    XtExtensionSelectProc,
					    XtPointer);
    extern void XtRegisterGrabAction(XtActionProc, Boolean, unsigned int,
				     int, int);
    extern void XtReleaseGC(Widget, GC);
    extern void XtReleasePropertyAtom(Widget, Atom);
    extern void XtRemoveActionHook(XtActionHookId);
    extern void XtRemoveAllCallbacks(Widget, const char *);
    extern void XtRemoveBlockHook(XtBlockHookId);
    extern void XtRemoveCallback(Widget, const char *, XtCallbackProc,
				 XtPointer);
    extern void XtRemoveCallbacks(Widget, const char *, XtCallbackList);
    extern void XtRemoveEventHandler(Widget, EventMask, Boolean,
				     XtEventHandler, XtPointer);
    extern void XtRemoveEventTypeHandler(Widget, int, XtPointer,
					 XtEventHandler, XtPointer);
    extern void XtRemoveGrab(Widget);
    extern void XtRemoveInput(XtInputId);
    extern void XtRemoveRawEventHandler(Widget, EventMask, Boolean,
					XtEventHandler, XtPointer);
    extern void XtRemoveSignal(XtSignalId);
    extern void XtRemoveTimeOut(XtIntervalId);
    extern void XtRemoveWorkProc(XtWorkProcId);
    extern Atom XtReservePropertyAtom(Widget);
    extern String XtResolvePathname(Display *, const char *, const char *,
				    const char *, const char *,
				    Substitution, Cardinal,
				    XtFilePredicate);
    extern Screen *XtScreen(Widget);
    extern XrmDatabase XtScreenDatabase(Screen *);
    extern Screen *XtScreenOfObject(Widget);
    extern void XtSendSelectionRequest(Widget, Atom, Time);
    extern XtCheckpointToken XtSessionGetToken(Widget);
    extern void XtSessionReturnToken(XtCheckpointToken);
    extern void XtSetErrorHandler(XtErrorHandler);
    extern void XtSetErrorMsgHandler(XtErrorMsgHandler);
    extern XtEventDispatchProc XtSetEventDispatcher(Display *, int,
						    XtEventDispatchProc);
    extern void XtSetKeyTranslator(Display *, XtKeyProc);
    extern void XtSetKeyboardFocus(Widget, Widget);
    extern XtLanguageProc XtSetLanguageProc(XtAppContext, XtLanguageProc,
					    XtPointer);
    extern void XtSetMappedWhenManaged(Widget, Boolean);
    extern void XtSetMultiClickTime(Display *, int);
    extern void XtSetSelectionParameters(Widget, Atom, Atom, XtPointer,
					 long unsigned int, int);
    extern void XtSetSelectionTimeout(long unsigned int);
    extern void XtSetSensitive(Widget, Boolean);
    extern void XtSetSubvalues(XtPointer, XtResourceList, Cardinal,
			       ArgList, Cardinal);
    extern void XtSetTypeConverter(const char *, const char *,
				   XtTypeConverter, XtConvertArgList,
				   Cardinal, XtCacheType, XtDestructor);
    extern void XtSetValues(Widget, ArgList, Cardinal);
    extern void XtSetWMColormapWindows(Widget, Widget *, Cardinal);
    extern void XtSetWarningHandler(XtErrorHandler);
    extern void XtSetWarningMsgHandler(XtErrorMsgHandler);
    extern void XtStringConversionWarning(const char *, const char *);
    extern WidgetClass XtSuperclass(Widget);
    extern void XtToolkitInitialize(void);
    extern Boolean XtToolkitThreadInitialize(void);
    extern void XtTranslateCoords(Widget, Position, Position, Position *,
				  Position *);
    extern void XtTranslateKey(Display *, KeyCode, Modifiers, Modifiers *,
			       KeySym *);
    extern void XtTranslateKeycode(Display *, KeyCode, Modifiers,
				   Modifiers *, KeySym *);
    extern void XtUngrabButton(Widget, unsigned int, Modifiers);
    extern void XtUngrabKey(Widget, KeyCode, Modifiers);
    extern void XtUngrabKeyboard(Widget, Time);
    extern void XtUngrabPointer(Widget, Time);
    extern void XtUninstallTranslations(Widget);
    extern void XtUnmapWidget(Widget);
    extern void XtUnrealizeWidget(Widget);
    extern void XtUnregisterDrawable(Display *, Drawable);
    extern Widget XtVaAppCreateShell(const char *, const char *,
				     WidgetClass, Display *, ...);
    extern Widget XtVaAppInitialize(XtAppContext *, const char *,
				    XrmOptionDescList, Cardinal, int *,
				    String *, String *, ...);
    extern XtVarArgsList XtVaCreateArgsList(XtPointer, ...);
    extern Widget XtVaCreateManagedWidget(const char *, WidgetClass,
					  Widget, ...);
    extern Widget XtVaCreatePopupShell(const char *, WidgetClass, Widget,
				       ...);
    extern Widget XtVaCreateWidget(const char *, WidgetClass, Widget, ...);
    extern void XtVaGetApplicationResources(Widget, XtPointer,
					    XtResourceList, Cardinal, ...);
    extern void XtVaGetSubresources(Widget, XtPointer, const char *,
				    const char *, XtResourceList, Cardinal,
				    ...);
    extern void XtVaGetSubvalues(XtPointer, XtResourceList, Cardinal, ...);
    extern void XtVaGetValues(Widget, ...);
    extern Widget XtVaOpenApplication(XtAppContext *, const char *,
				      XrmOptionDescList, Cardinal, int *,
				      String *, String *, WidgetClass,
				      ...);
    extern void XtVaSetSubvalues(XtPointer, XtResourceList, Cardinal, ...);
    extern void XtVaSetValues(Widget, ...);
    extern void XtWarning(const char *);
    extern void XtWarningMsg(const char *, const char *, const char *,
			     const char *, String *, Cardinal *);
    extern XtAppContext XtWidgetToApplicationContext(Widget);
    extern Window XtWindow(Widget);
    extern Window XtWindowOfObject(Widget);
    extern Widget XtWindowToWidget(Display *, Window);
    extern Boolean _XtIsSubclassOf(Widget, WidgetClass, WidgetClass,
				   XtEnum);
#if __LSB_VERSION__ >= 12
    extern Boolean _XtCheckSubclassFlag(Widget, XtEnum);
#endif				/* __LSB_VERSION__ >= 1.2 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
