#ifndef _X11_INTRINSIC_H_
#define _X11_INTRINSIC_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>


void XtAddActions (XtActionList, Cardinal);
void XtAddCallback (Widget, char *, XtCallbackProc, XtPointer);
void XtAddCallbacks (Widget, char *, XtCallbackList);
void XtAddConverter (char *, char *, XtConverter, XtConvertArgList, Cardinal);
void XtAddEventHandler (Widget, EventMask, int, XtEventHandler, XtPointer);
void XtAddExposureToRegion (XEvent *, Region);
void XtAddGrab (Widget, int, int);
XtInputId XtAddInput (int, XtPointer, XtInputCallbackProc, XtPointer);
void XtAddRawEventHandler (Widget, EventMask, int, XtEventHandler, XtPointer);
XtIntervalId XtAddTimeOut (unsigned long, XtTimerCallbackProc, XtPointer);
XtWorkProcId XtAddWorkProc (XtWorkProc, XtPointer);
GC XtAllocateGC (Widget, Cardinal, XtGCMask, XGCValues *, XtGCMask, XtGCMask);
XtActionHookId XtAppAddActionHook (XtAppContext, XtActionHookProc, XtPointer);
void XtAppAddActions (XtAppContext, XtActionList, Cardinal);
XtBlockHookId XtAppAddBlockHook (XtAppContext, XtBlockHookProc, XtPointer);
void XtAppAddConverter (XtAppContext, char *, char *, XtConverter,
			XtConvertArgList, Cardinal);
XtInputId XtAppAddInput (XtAppContext, int, XtPointer, XtInputCallbackProc,
			 XtPointer);
XtSignalId XtAppAddSignal (XtAppContext, XtSignalCallbackProc, XtPointer);
XtIntervalId XtAppAddTimeOut (XtAppContext, unsigned long,
			      XtTimerCallbackProc, XtPointer);
XtWorkProcId XtAppAddWorkProc (XtAppContext, XtWorkProc, XtPointer);
Widget XtAppCreateShell (char *, char *, WidgetClass, Display *, ArgList,
			 Cardinal);
void XtAppError (XtAppContext, char *);
void XtAppErrorMsg (XtAppContext, char *, char *, char *, char *, String *,
		    Cardinal *);
XrmDatabase *XtAppGetErrorDatabase (XtAppContext);
void XtAppGetErrorDatabaseText (XtAppContext, char *, char *, char *, char *,
				String, int, XrmDatabase);
Boolean XtAppGetExitFlag (XtAppContext);
unsigned long XtAppGetSelectionTimeout (XtAppContext);
Widget XtAppInitialize (XtAppContext *, char *, XrmOptionDescList, Cardinal,
			int *, String *, String *, ArgList, Cardinal);
void XtAppLock (XtAppContext);
void XtAppMainLoop (XtAppContext);
void XtAppNextEvent (XtAppContext, XEvent *);
Boolean XtAppPeekEvent (XtAppContext, XEvent *);
XtInputMask XtAppPending (XtAppContext);
void XtAppProcessEvent (XtAppContext, XtInputMask);
void XtAppReleaseCacheRefs (XtAppContext, XtCacheRef *);
XtErrorHandler XtAppSetErrorHandler (XtAppContext, XtErrorHandler);
XtErrorMsgHandler XtAppSetErrorMsgHandler (XtAppContext, XtErrorMsgHandler);
void XtAppSetExitFlag (XtAppContext);
void XtAppSetFallbackResources (XtAppContext, String *);
void XtAppSetSelectionTimeout (XtAppContext, unsigned long);
void XtAppSetTypeConverter (XtAppContext, char *, char *, XtTypeConverter,
			    XtConvertArgList, Cardinal, XtCacheType,
			    XtDestructor);
XtErrorHandler XtAppSetWarningHandler (XtAppContext, XtErrorHandler);
XtErrorMsgHandler XtAppSetWarningMsgHandler (XtAppContext, XtErrorMsgHandler);
void XtAppUnlock (XtAppContext);
void XtAppWarning (XtAppContext, char *);
void XtAppWarningMsg (XtAppContext, char *, char *, char *, char *, String *,
		      Cardinal *);
void XtAugmentTranslations (Widget, XtTranslations);
EventMask XtBuildEventMask (Widget);
extern String XtCXtToolkitError;
Boolean XtCallAcceptFocus (Widget, Time *);
void XtCallActionProc (Widget, char *, XEvent *, String *, Cardinal);
void XtCallCallbackList (Widget, XtCallbackList, XtPointer);
void XtCallCallbacks (Widget, char *, XtPointer);
Boolean XtCallConverter (Display *, XtTypeConverter, XrmValuePtr, Cardinal,
			 XrmValuePtr, XrmValue *, XtCacheRef *);
void XtCallbackExclusive (Widget, XtPointer, XtPointer);
void XtCallbackNone (Widget, XtPointer, XtPointer);
void XtCallbackNonexclusive (Widget, XtPointer, XtPointer);
void XtCallbackPopdown (Widget, XtPointer, XtPointer);
void XtCallbackReleaseCacheRef (Widget, XtPointer, XtPointer);
void XtCallbackReleaseCacheRefList (Widget, XtPointer, XtPointer);
char *XtCalloc (Cardinal, Cardinal);
void XtCancelSelectionRequest (Widget, Atom);
WidgetClass XtClass (Widget);
void XtCloseDisplay (Display *);
void XtConvert (Widget, char *, XrmValue *, char *, XrmValue *);
Boolean XtConvertAndStore (Widget, char *, XrmValue *, char *, XrmValue *);
void XtConvertCase (Display *, KeySym, KeySym *, KeySym *);
XtAppContext XtCreateApplicationContext (void);
Widget XtCreateApplicationShell (char *, WidgetClass, ArgList, Cardinal);
Widget XtCreateManagedWidget (char *, WidgetClass, Widget, ArgList, Cardinal);
Widget XtCreatePopupShell (char *, WidgetClass, Widget, ArgList, Cardinal);
void XtCreateSelectionRequest (Widget, Atom);
Widget XtCreateWidget (char *, WidgetClass, Widget, ArgList, Cardinal);
Boolean XtCvtColorToPixel (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			   XrmValuePtr, XtPointer *);
Boolean XtCvtIntToBool (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			XrmValuePtr, XtPointer *);
Boolean XtCvtIntToBoolean (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			   XrmValuePtr, XtPointer *);
Boolean XtCvtIntToColor (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			 XrmValuePtr, XtPointer *);
Boolean XtCvtIntToFloat (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			 XrmValuePtr, XtPointer *);
Boolean XtCvtIntToFont (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			XrmValuePtr, XtPointer *);
Boolean XtCvtIntToPixel (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			 XrmValuePtr, XtPointer *);
Boolean XtCvtIntToPixmap (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			  XrmValuePtr, XtPointer *);
Boolean XtCvtIntToShort (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			 XrmValuePtr, XtPointer *);
Boolean XtCvtIntToUnsignedChar (Display *, XrmValuePtr, Cardinal *,
				XrmValuePtr, XrmValuePtr, XtPointer *);
Boolean XtCvtStringToAcceleratorTable (Display *, XrmValuePtr, Cardinal *,
				       XrmValuePtr, XrmValuePtr, XtPointer *);
Boolean XtCvtStringToAtom (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			   XrmValuePtr, XtPointer *);
Boolean XtCvtStringToBool (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			   XrmValuePtr, XtPointer *);
Boolean XtCvtStringToBoolean (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			      XrmValuePtr, XtPointer *);
Boolean XtCvtStringToCommandArgArray (Display *, XrmValuePtr, Cardinal *,
				      XrmValuePtr, XrmValuePtr, XtPointer *);
Boolean XtCvtStringToCursor (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			     XrmValuePtr, XtPointer *);
Boolean XtCvtStringToDimension (Display *, XrmValuePtr, Cardinal *,
				XrmValuePtr, XrmValuePtr, XtPointer *);
Boolean XtCvtStringToDirectoryString (Display *, XrmValuePtr, Cardinal *,
				      XrmValuePtr, XrmValuePtr, XtPointer *);
Boolean XtCvtStringToDisplay (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			      XrmValuePtr, XtPointer *);
Boolean XtCvtStringToFile (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			   XrmValuePtr, XtPointer *);
Boolean XtCvtStringToFloat (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			    XrmValuePtr, XtPointer *);
Boolean XtCvtStringToFont (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			   XrmValuePtr, XtPointer *);
Boolean XtCvtStringToFontSet (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			      XrmValuePtr, XtPointer *);
Boolean XtCvtStringToFontStruct (Display *, XrmValuePtr, Cardinal *,
				 XrmValuePtr, XrmValuePtr, XtPointer *);
Boolean XtCvtStringToGravity (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			      XrmValuePtr, XtPointer *);
Boolean XtCvtStringToInitialState (Display *, XrmValuePtr, Cardinal *,
				   XrmValuePtr, XrmValuePtr, XtPointer *);
Boolean XtCvtStringToInt (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			  XrmValuePtr, XtPointer *);
Boolean XtCvtStringToPixel (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			    XrmValuePtr, XtPointer *);
Boolean XtCvtStringToRestartStyle (Display *, XrmValuePtr, Cardinal *,
				   XrmValuePtr, XrmValuePtr, XtPointer *);
Boolean XtCvtStringToShort (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			    XrmValuePtr, XtPointer *);
Boolean XtCvtStringToTranslationTable (Display *, XrmValuePtr, Cardinal *,
				       XrmValuePtr, XrmValuePtr, XtPointer *);
Boolean XtCvtStringToUnsignedChar (Display *, XrmValuePtr, Cardinal *,
				   XrmValuePtr, XrmValuePtr, XtPointer *);
Boolean XtCvtStringToVisual (Display *, XrmValuePtr, Cardinal *, XrmValuePtr,
			     XrmValuePtr, XtPointer *);
XrmDatabase XtDatabase (Display *);
void XtDestroyApplicationContext (XtAppContext);
void XtDestroyGC (GC);
void XtDestroyWidget (Widget);
void XtDirectConvert (XtConverter, XrmValuePtr, Cardinal, XrmValuePtr,
		      XrmValue *);
void XtDisownSelection (Widget, Atom, Time);
Boolean XtDispatchEvent (XEvent *);
Boolean XtDispatchEventToWidget (Widget, XEvent *);
Display *XtDisplay (Widget);
void XtDisplayInitialize (XtAppContext, Display *, char *, char *,
			  XrmOptionDescRec *, Cardinal, int *, char **);
Display *XtDisplayOfObject (Widget);
void XtDisplayStringConversionWarning (Display *, char *, char *);
XtAppContext XtDisplayToApplicationContext (Display *);
void XtError (char *);
void XtErrorMsg (char *, char *, char *, char *, String *, Cardinal *);
String XtFindFile (char *, Substitution, Cardinal, XtFilePredicate);
void XtFree (char *);
KeySym XtGetActionKeysym (XEvent *, Modifiers *);
void XtGetActionList (WidgetClass, XtActionList *, Cardinal *);
void XtGetApplicationNameAndClass (Display *, String *, String *);
void XtGetApplicationResources (Widget, XtPointer, XtResourceList, Cardinal,
				ArgList, Cardinal);
XtPointer XtGetClassExtension (WidgetClass, Cardinal, XrmQuark, long,
			       Cardinal);
void XtGetConstraintResourceList (WidgetClass, XtResourceList *, Cardinal *);
void XtGetDisplays (XtAppContext, Display * **, Cardinal *);
XrmDatabase *XtGetErrorDatabase (void);
void XtGetErrorDatabaseText (char *, char *, char *, char *, String, int);
GC XtGetGC (Widget, XtGCMask, XGCValues *);
Widget XtGetKeyboardFocusWidget (Widget);
KeySym *XtGetKeysymTable (Display *, KeyCode *, int *);
int XtGetMultiClickTime (Display *);
void XtGetResourceList (WidgetClass, XtResourceList *, Cardinal *);
void XtGetSelectionParameters (Widget, Atom, XtRequestId, Atom *, XtPointer *,
			       unsigned long *, int *);
XSelectionRequestEvent *XtGetSelectionRequest (Widget, Atom, XtRequestId);
unsigned long XtGetSelectionTimeout (void);
void XtGetSelectionValue (Widget, Atom, Atom, XtSelectionCallbackProc,
			  XtPointer, Time);
void XtGetSelectionValueIncremental (Widget, Atom, Atom,
				     XtSelectionCallbackProc, XtPointer,
				     Time);
void XtGetSelectionValues (Widget, Atom, Atom *, int, XtSelectionCallbackProc,
			   XtPointer *, Time);
void XtGetSelectionValuesIncremental (Widget, Atom, Atom *, int,
				      XtSelectionCallbackProc, XtPointer *,
				      Time);
void XtGetSubresources (Widget, XtPointer, char *, char *, XtResourceList,
			Cardinal, ArgList, Cardinal);
void XtGetSubvalues (XtPointer, XtResourceList, Cardinal, ArgList, Cardinal);
void XtGetValues (Widget, ArgList, Cardinal);
void XtGrabButton (Widget, int, Modifiers, int, unsigned int, int, int,
		   Window, Cursor);
void XtGrabKey (Widget, unsigned int, Modifiers, int, int, int);
int XtGrabKeyboard (Widget, int, int, int, Time);
int XtGrabPointer (Widget, int, unsigned int, int, int, Window, Cursor, Time);
XtCallbackStatus XtHasCallbacks (Widget, char *);
Widget XtHooksOfDisplay (Display *);
Widget XtInitialize (char *, char *, XrmOptionDescRec *, Cardinal, int *,
		     char **);
void XtInitializeWidgetClass (WidgetClass);
void XtInsertEventHandler (Widget, EventMask, int, XtEventHandler, XtPointer,
			   XtListPosition);
void XtInsertEventTypeHandler (Widget, int, XtPointer, XtEventHandler,
			       XtPointer, XtListPosition);
void XtInsertRawEventHandler (Widget, EventMask, int, XtEventHandler,
			      XtPointer, XtListPosition);
void XtInstallAccelerators (Widget, Widget);
void XtInstallAllAccelerators (Widget, Widget);
Boolean XtIsManaged (Widget);
Boolean XtIsObject (Widget);
Boolean XtIsRealized (Widget);
Boolean XtIsSensitive (Widget);
Boolean XtIsSubclass (Widget, WidgetClass);
void XtKeysymToKeycodeList (Display *, KeySym, KeyCode * *, Cardinal *);
XEvent *XtLastEventProcessed (Display *);
Time XtLastTimestampProcessed (Display *);
void XtMainLoop (void);
XtGeometryResult XtMakeGeometryRequest (Widget, XtWidgetGeometry *,
					XtWidgetGeometry *);
XtGeometryResult XtMakeResizeRequest (Widget, unsigned int, unsigned int,
				      Dimension *, Dimension *);
char *XtMalloc (Cardinal);
void XtMenuPopupAction (Widget, XEvent *, String *, Cardinal *);
ArgList XtMergeArgLists (ArgList, Cardinal, ArgList, Cardinal);
String XtName (Widget);
Widget XtNameToWidget (Widget, char *);
void XtNextEvent (XEvent *);
void XtNoticeSignal (XtSignalId);
Widget XtOpenApplication (XtAppContext *, char *, XrmOptionDescList, Cardinal,
			  int *, String *, String *, WidgetClass, ArgList,
			  Cardinal);
Display *XtOpenDisplay (XtAppContext, char *, char *, char *,
			XrmOptionDescRec *, Cardinal, int *, char **);
void XtOverrideTranslations (Widget, XtTranslations);
Boolean XtOwnSelection (Widget, Atom, Time, XtConvertSelectionProc,
			XtLoseSelectionProc, XtSelectionDoneProc);
Boolean XtOwnSelectionIncremental (Widget, Atom, Time,
				   XtConvertSelectionIncrProc,
				   XtLoseSelectionIncrProc,
				   XtSelectionDoneIncrProc,
				   XtCancelConvertSelectionProc, XtPointer);
Widget XtParent (Widget);
XtAccelerators XtParseAcceleratorTable (char *);
XtTranslations XtParseTranslationTable (char *);
Boolean XtPeekEvent (XEvent *);
Boolean XtPending (void);
void XtPopdown (Widget);
void XtPopup (Widget, XtGrabKind);
void XtPopupSpringLoaded (Widget);
void XtProcessEvent (XtInputMask);
XtGeometryResult XtQueryGeometry (Widget, XtWidgetGeometry *,
				  XtWidgetGeometry *);
void XtRealizeWidget (Widget);
char *XtRealloc (char *, Cardinal);
void XtRegisterCaseConverter (Display *, XtCaseProc, KeySym, KeySym);
void XtRegisterDrawable (Display *, Drawable, Widget);
void XtRegisterExtensionSelector (Display *, int, int, XtExtensionSelectProc,
				  XtPointer);
void XtRegisterGrabAction (XtActionProc, int, unsigned int, int, int);
void XtReleaseGC (Widget, GC);
void XtReleasePropertyAtom (Widget, Atom);
void XtRemoveActionHook (XtActionHookId);
void XtRemoveAllCallbacks (Widget, char *);
void XtRemoveBlockHook (XtBlockHookId);
void XtRemoveCallback (Widget, char *, XtCallbackProc, XtPointer);
void XtRemoveCallbacks (Widget, char *, XtCallbackList);
void XtRemoveEventHandler (Widget, EventMask, int, XtEventHandler, XtPointer);
void XtRemoveEventTypeHandler (Widget, int, XtPointer, XtEventHandler,
			       XtPointer);
void XtRemoveGrab (Widget);
void XtRemoveInput (XtInputId);
void XtRemoveRawEventHandler (Widget, EventMask, int, XtEventHandler,
			      XtPointer);
void XtRemoveSignal (XtSignalId);
void XtRemoveTimeOut (XtIntervalId);
void XtRemoveWorkProc (XtWorkProcId);
Atom XtReservePropertyAtom (Widget);
String XtResolvePathname (Display *, char *, char *, char *, char *,
			  Substitution, Cardinal, XtFilePredicate);
Screen *XtScreen (Widget);
XrmDatabase XtScreenDatabase (Screen *);
Screen *XtScreenOfObject (Widget);
void XtSendSelectionRequest (Widget, Atom, Time);
XtCheckpointToken XtSessionGetToken (Widget);
void XtSessionReturnToken (XtCheckpointToken);
void XtSetErrorHandler (XtErrorHandler);
void XtSetErrorMsgHandler (XtErrorMsgHandler);
XtEventDispatchProc XtSetEventDispatcher (Display *, int,
					  XtEventDispatchProc);
void XtSetKeyTranslator (Display *, XtKeyProc);
void XtSetKeyboardFocus (Widget, Widget);
XtLanguageProc XtSetLanguageProc (XtAppContext, XtLanguageProc, XtPointer);
void XtSetMappedWhenManaged (Widget, int);
void XtSetMultiClickTime (Display *, int);
void XtSetSelectionParameters (Widget, Atom, Atom, XtPointer, unsigned long,
			       int);
void XtSetSelectionTimeout (unsigned long);
void XtSetSensitive (Widget, int);
void XtSetSubvalues (XtPointer, XtResourceList, Cardinal, ArgList, Cardinal);
void XtSetTypeConverter (char *, char *, XtTypeConverter, XtConvertArgList,
			 Cardinal, XtCacheType, XtDestructor);
void XtSetValues (Widget, ArgList, Cardinal);
void XtSetWMColormapWindows (Widget, Widget *, Cardinal);
void XtSetWarningHandler (XtErrorHandler);
void XtSetWarningMsgHandler (XtErrorMsgHandler);
void XtStringConversionWarning (char *, char *);
WidgetClass XtSuperclass (Widget);
void XtToolkitInitialize (void);
Boolean XtToolkitThreadInitialize (void);
void XtTranslateCoords (Widget, int, int, Position *, Position *);
void XtTranslateKey (Display *, unsigned int, Modifiers, Modifiers *,
		     KeySym *);
void XtTranslateKeycode (Display *, unsigned int, Modifiers, Modifiers *,
			 KeySym *);
void XtUngrabButton (Widget, unsigned int, Modifiers);
void XtUngrabKey (Widget, unsigned int, Modifiers);
void XtUngrabKeyboard (Widget, Time);
void XtUngrabPointer (Widget, Time);
void XtUninstallTranslations (Widget);
void XtUnrealizeWidget (Widget);
void XtUnregisterDrawable (Display *, Drawable);
Widget XtVaAppCreateShell (char *, char *, WidgetClass, Display *, ...);
Widget XtVaAppInitialize (XtAppContext *, char *, XrmOptionDescList, Cardinal,
			  int *, String *, String *, ...);
XtVarArgsList XtVaCreateArgsList (XtPointer, ...);
Widget XtVaCreateManagedWidget (char *, WidgetClass, Widget, ...);
Widget XtVaCreatePopupShell (char *, WidgetClass, Widget, ...);
Widget XtVaCreateWidget (char *, WidgetClass, Widget, ...);
void XtVaGetApplicationResources (Widget, XtPointer, XtResourceList, Cardinal,
				  ...);
void XtVaGetSubresources (Widget, XtPointer, char *, char *, XtResourceList,
			  Cardinal, ...);
void XtVaGetSubvalues (XtPointer, XtResourceList, Cardinal, ...);
void XtVaGetValues (Widget, ...);
Widget XtVaOpenApplication (XtAppContext *, char *, XrmOptionDescList,
			    Cardinal, int *, String *, String *, WidgetClass,
			    ...);
void XtVaSetSubvalues (XtPointer, XtResourceList, Cardinal, ...);
void XtVaSetValues (Widget, ...);
void XtWarning (char *);
void XtWarningMsg (char *, char *, char *, char *, String *, Cardinal *);
XtAppContext XtWidgetToApplicationContext (Widget);
Window XtWindow (Widget);
Window XtWindowOfObject (Widget);
Widget XtWindowToWidget (Display *, Window);
Boolean _XtIsSubclassOf (Widget, WidgetClass, WidgetClass, unsigned int);
#endif
