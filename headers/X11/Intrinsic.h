#ifndef _X11_INTRINSIC_H_
#define _X11_INTRINSIC_H_

#include <X11/X.h>
#include <X11/Xutil.h>
#include <X11/Xlib.h>

#ifdef __cplusplus
extern "C"
{
#endif





  extern void XtAddActions (XtActionList, Cardinal);
  extern void XtAddCallback (Widget, char *, XtCallbackProc, XtPointer);
  extern void XtAddCallbacks (Widget, char *, XtCallbackList);
  extern void XtAddConverter (char *, char *, XtConverter, XtConvertArgList,
			      Cardinal);
  extern void XtAddEventHandler (Widget, EventMask, int, XtEventHandler,
				 XtPointer);
  extern void XtAddExposureToRegion (XEvent *, Region);
  extern void XtAddGrab (Widget, int, int);
  extern XtInputId XtAddInput (int, XtPointer, XtInputCallbackProc,
			       XtPointer);
  extern void XtAddRawEventHandler (Widget, EventMask, int, XtEventHandler,
				    XtPointer);
  extern XtIntervalId XtAddTimeOut (unsigned long, XtTimerCallbackProc,
				    XtPointer);
  extern XtWorkProcId XtAddWorkProc (XtWorkProc, XtPointer);
  extern GC XtAllocateGC (Widget, Cardinal, XtGCMask, XGCValues *, XtGCMask,
			  XtGCMask);
  extern XtActionHookId XtAppAddActionHook (XtAppContext, XtActionHookProc,
					    XtPointer);
  extern void XtAppAddActions (XtAppContext, XtActionList, Cardinal);
  extern XtBlockHookId XtAppAddBlockHook (XtAppContext, XtBlockHookProc,
					  XtPointer);
  extern void XtAppAddConverter (XtAppContext, char *, char *, XtConverter,
				 XtConvertArgList, Cardinal);
  extern XtInputId XtAppAddInput (XtAppContext, int, XtPointer,
				  XtInputCallbackProc, XtPointer);
  extern XtSignalId XtAppAddSignal (XtAppContext, XtSignalCallbackProc,
				    XtPointer);
  extern XtIntervalId XtAppAddTimeOut (XtAppContext, unsigned long,
				       XtTimerCallbackProc, XtPointer);
  extern XtWorkProcId XtAppAddWorkProc (XtAppContext, XtWorkProc, XtPointer);
  extern Widget XtAppCreateShell (char *, char *, WidgetClass, Display *,
				  ArgList, Cardinal);
  extern void XtAppError (XtAppContext, char *);
  extern void XtAppErrorMsg (XtAppContext, char *, char *, char *, char *,
			     String *, Cardinal *);
  extern XrmDatabase *XtAppGetErrorDatabase (XtAppContext);
  extern void XtAppGetErrorDatabaseText (XtAppContext, char *, char *, char *,
					 char *, String, int, XrmDatabase);
  extern Boolean XtAppGetExitFlag (XtAppContext);
  extern unsigned long XtAppGetSelectionTimeout (XtAppContext);
  extern Widget XtAppInitialize (XtAppContext *, char *, XrmOptionDescList,
				 Cardinal, int *, String *, String *, ArgList,
				 Cardinal);
  extern void XtAppLock (XtAppContext);
  extern void XtAppMainLoop (XtAppContext);
  extern void XtAppNextEvent (XtAppContext, XEvent *);
  extern Boolean XtAppPeekEvent (XtAppContext, XEvent *);
  extern XtInputMask XtAppPending (XtAppContext);
  extern void XtAppProcessEvent (XtAppContext, XtInputMask);
  extern void XtAppReleaseCacheRefs (XtAppContext, XtCacheRef *);
  extern XtErrorHandler XtAppSetErrorHandler (XtAppContext, XtErrorHandler);
  extern XtErrorMsgHandler XtAppSetErrorMsgHandler (XtAppContext,
						    XtErrorMsgHandler);
  extern void XtAppSetExitFlag (XtAppContext);
  extern void XtAppSetFallbackResources (XtAppContext, String *);
  extern void XtAppSetSelectionTimeout (XtAppContext, unsigned long);
  extern void XtAppSetTypeConverter (XtAppContext, char *, char *,
				     XtTypeConverter, XtConvertArgList,
				     Cardinal, XtCacheType, XtDestructor);
  extern XtErrorHandler XtAppSetWarningHandler (XtAppContext, XtErrorHandler);
  extern XtErrorMsgHandler XtAppSetWarningMsgHandler (XtAppContext,
						      XtErrorMsgHandler);
  extern void XtAppUnlock (XtAppContext);
  extern void XtAppWarning (XtAppContext, char *);
  extern void XtAppWarningMsg (XtAppContext, char *, char *, char *, char *,
			       String *, Cardinal *);
  extern void XtAugmentTranslations (Widget, XtTranslations);
  extern EventMask XtBuildEventMask (Widget);
  extern String XtCXtToolkitError;
  extern Boolean XtCallAcceptFocus (Widget, Time *);
  extern void XtCallActionProc (Widget, char *, XEvent *, String *, Cardinal);
  extern void XtCallCallbackList (Widget, XtCallbackList, XtPointer);
  extern void XtCallCallbacks (Widget, char *, XtPointer);
  extern Boolean XtCallConverter (Display *, XtTypeConverter, XrmValuePtr,
				  Cardinal, XrmValuePtr, XrmValue *,
				  XtCacheRef *);
  extern void XtCallbackExclusive (Widget, XtPointer, XtPointer);
  extern void XtCallbackNone (Widget, XtPointer, XtPointer);
  extern void XtCallbackNonexclusive (Widget, XtPointer, XtPointer);
  extern void XtCallbackPopdown (Widget, XtPointer, XtPointer);
  extern void XtCallbackReleaseCacheRef (Widget, XtPointer, XtPointer);
  extern void XtCallbackReleaseCacheRefList (Widget, XtPointer, XtPointer);
  extern char *XtCalloc (Cardinal, Cardinal);
  extern void XtCancelSelectionRequest (Widget, Atom);
  extern WidgetClass XtClass (Widget);
  extern void XtCloseDisplay (Display *);
  extern void XtConvert (Widget, char *, XrmValue *, char *, XrmValue *);
  extern Boolean XtConvertAndStore (Widget, char *, XrmValue *, char *,
				    XrmValue *);
  extern void XtConvertCase (Display *, KeySym, KeySym *, KeySym *);
  extern XtAppContext XtCreateApplicationContext (void);
  extern Widget XtCreateApplicationShell (char *, WidgetClass, ArgList,
					  Cardinal);
  extern Widget XtCreateManagedWidget (char *, WidgetClass, Widget, ArgList,
				       Cardinal);
  extern Widget XtCreatePopupShell (char *, WidgetClass, Widget, ArgList,
				    Cardinal);
  extern void XtCreateSelectionRequest (Widget, Atom);
  extern Widget XtCreateWidget (char *, WidgetClass, Widget, ArgList,
				Cardinal);
  extern Boolean XtCvtColorToPixel (Display *, XrmValuePtr, Cardinal *,
				    XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtIntToBool (Display *, XrmValuePtr, Cardinal *,
				 XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtIntToBoolean (Display *, XrmValuePtr, Cardinal *,
				    XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtIntToColor (Display *, XrmValuePtr, Cardinal *,
				  XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtIntToFloat (Display *, XrmValuePtr, Cardinal *,
				  XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtIntToFont (Display *, XrmValuePtr, Cardinal *,
				 XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtIntToPixel (Display *, XrmValuePtr, Cardinal *,
				  XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtIntToPixmap (Display *, XrmValuePtr, Cardinal *,
				   XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtIntToShort (Display *, XrmValuePtr, Cardinal *,
				  XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtIntToUnsignedChar (Display *, XrmValuePtr, Cardinal *,
					 XrmValuePtr, XrmValuePtr,
					 XtPointer *);
  extern Boolean XtCvtStringToAcceleratorTable (Display *, XrmValuePtr,
						Cardinal *, XrmValuePtr,
						XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToAtom (Display *, XrmValuePtr, Cardinal *,
				    XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToBool (Display *, XrmValuePtr, Cardinal *,
				    XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToBoolean (Display *, XrmValuePtr, Cardinal *,
				       XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToCommandArgArray (Display *, XrmValuePtr,
					       Cardinal *, XrmValuePtr,
					       XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToCursor (Display *, XrmValuePtr, Cardinal *,
				      XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToDimension (Display *, XrmValuePtr, Cardinal *,
					 XrmValuePtr, XrmValuePtr,
					 XtPointer *);
  extern Boolean XtCvtStringToDirectoryString (Display *, XrmValuePtr,
					       Cardinal *, XrmValuePtr,
					       XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToDisplay (Display *, XrmValuePtr, Cardinal *,
				       XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToFile (Display *, XrmValuePtr, Cardinal *,
				    XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToFloat (Display *, XrmValuePtr, Cardinal *,
				     XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToFont (Display *, XrmValuePtr, Cardinal *,
				    XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToFontSet (Display *, XrmValuePtr, Cardinal *,
				       XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToFontStruct (Display *, XrmValuePtr, Cardinal *,
					  XrmValuePtr, XrmValuePtr,
					  XtPointer *);
  extern Boolean XtCvtStringToGravity (Display *, XrmValuePtr, Cardinal *,
				       XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToInitialState (Display *, XrmValuePtr,
					    Cardinal *, XrmValuePtr,
					    XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToInt (Display *, XrmValuePtr, Cardinal *,
				   XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToPixel (Display *, XrmValuePtr, Cardinal *,
				     XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToRestartStyle (Display *, XrmValuePtr,
					    Cardinal *, XrmValuePtr,
					    XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToShort (Display *, XrmValuePtr, Cardinal *,
				     XrmValuePtr, XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToTranslationTable (Display *, XrmValuePtr,
						Cardinal *, XrmValuePtr,
						XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToUnsignedChar (Display *, XrmValuePtr,
					    Cardinal *, XrmValuePtr,
					    XrmValuePtr, XtPointer *);
  extern Boolean XtCvtStringToVisual (Display *, XrmValuePtr, Cardinal *,
				      XrmValuePtr, XrmValuePtr, XtPointer *);
  extern XrmDatabase XtDatabase (Display *);
  extern void XtDestroyApplicationContext (XtAppContext);
  extern void XtDestroyGC (GC);
  extern void XtDestroyWidget (Widget);
  extern void XtDirectConvert (XtConverter, XrmValuePtr, Cardinal,
			       XrmValuePtr, XrmValue *);
  extern void XtDisownSelection (Widget, Atom, Time);
  extern Boolean XtDispatchEvent (XEvent *);
  extern Boolean XtDispatchEventToWidget (Widget, XEvent *);
  extern Display *XtDisplay (Widget);
  extern void XtDisplayInitialize (XtAppContext, Display *, char *, char *,
				   XrmOptionDescRec *, Cardinal, int *,
				   char **);
  extern Display *XtDisplayOfObject (Widget);
  extern void XtDisplayStringConversionWarning (Display *, char *, char *);
  extern XtAppContext XtDisplayToApplicationContext (Display *);
  extern void XtError (char *);
  extern void XtErrorMsg (char *, char *, char *, char *, String *,
			  Cardinal *);
  extern String XtFindFile (char *, Substitution, Cardinal, XtFilePredicate);
  extern void XtFree (char *);
  extern KeySym XtGetActionKeysym (XEvent *, Modifiers *);
  extern void XtGetActionList (WidgetClass, XtActionList *, Cardinal *);
  extern void XtGetApplicationNameAndClass (Display *, String *, String *);
  extern void XtGetApplicationResources (Widget, XtPointer, XtResourceList,
					 Cardinal, ArgList, Cardinal);
  extern XtPointer XtGetClassExtension (WidgetClass, Cardinal, XrmQuark, long,
					Cardinal);
  extern void XtGetConstraintResourceList (WidgetClass, XtResourceList *,
					   Cardinal *);
  extern void XtGetDisplays (XtAppContext, Display * **, Cardinal *);
  extern XrmDatabase *XtGetErrorDatabase (void);
  extern void XtGetErrorDatabaseText (char *, char *, char *, char *, String,
				      int);
  extern GC XtGetGC (Widget, XtGCMask, XGCValues *);
  extern Widget XtGetKeyboardFocusWidget (Widget);
  extern KeySym *XtGetKeysymTable (Display *, KeyCode *, int *);
  extern int XtGetMultiClickTime (Display *);
  extern void XtGetResourceList (WidgetClass, XtResourceList *, Cardinal *);
  extern void XtGetSelectionParameters (Widget, Atom, XtRequestId, Atom *,
					XtPointer *, unsigned long *, int *);
  extern XSelectionRequestEvent *XtGetSelectionRequest (Widget, Atom,
							XtRequestId);
  extern unsigned long XtGetSelectionTimeout (void);
  extern void XtGetSelectionValue (Widget, Atom, Atom,
				   XtSelectionCallbackProc, XtPointer, Time);
  extern void XtGetSelectionValueIncremental (Widget, Atom, Atom,
					      XtSelectionCallbackProc,
					      XtPointer, Time);
  extern void XtGetSelectionValues (Widget, Atom, Atom *, int,
				    XtSelectionCallbackProc, XtPointer *,
				    Time);
  extern void XtGetSelectionValuesIncremental (Widget, Atom, Atom *, int,
					       XtSelectionCallbackProc,
					       XtPointer *, Time);
  extern void XtGetSubresources (Widget, XtPointer, char *, char *,
				 XtResourceList, Cardinal, ArgList, Cardinal);
  extern void XtGetSubvalues (XtPointer, XtResourceList, Cardinal, ArgList,
			      Cardinal);
  extern void XtGetValues (Widget, ArgList, Cardinal);
  extern void XtGrabButton (Widget, int, Modifiers, int, unsigned int, int,
			    int, Window, Cursor);
  extern void XtGrabKey (Widget, unsigned int, Modifiers, int, int, int);
  extern int XtGrabKeyboard (Widget, int, int, int, Time);
  extern int XtGrabPointer (Widget, int, unsigned int, int, int, Window,
			    Cursor, Time);
  extern XtCallbackStatus XtHasCallbacks (Widget, char *);
  extern Widget XtHooksOfDisplay (Display *);
  extern Widget XtInitialize (char *, char *, XrmOptionDescRec *, Cardinal,
			      int *, char **);
  extern void XtInitializeWidgetClass (WidgetClass);
  extern void XtInsertEventHandler (Widget, EventMask, int, XtEventHandler,
				    XtPointer, XtListPosition);
  extern void XtInsertEventTypeHandler (Widget, int, XtPointer,
					XtEventHandler, XtPointer,
					XtListPosition);
  extern void XtInsertRawEventHandler (Widget, EventMask, int, XtEventHandler,
				       XtPointer, XtListPosition);
  extern void XtInstallAccelerators (Widget, Widget);
  extern void XtInstallAllAccelerators (Widget, Widget);
  extern Boolean XtIsApplicationShell (void);
  extern Boolean XtIsComposite (void);
  extern Boolean XtIsConstraint (void);
  extern Boolean XtIsManaged (Widget);
  extern Boolean XtIsObject (Widget);
  extern Boolean XtIsOverrideShell (void);
  extern Boolean XtIsRealized (Widget);
  extern Boolean XtIsRectObj (void);
  extern Boolean XtIsSensitive (Widget);
  extern Boolean XtIsSessionShell (void);
  extern Boolean XtIsShell (void);
  extern Boolean XtIsSubclass (Widget, WidgetClass);
  extern Boolean XtIsTopLevelShell (void);
  extern Boolean XtIsTransientShell (void);
  extern Boolean XtIsVendorShell (void);
  extern Boolean XtIsWMShell (void);
  extern Boolean XtIsWidget (void);
  extern void XtKeysymToKeycodeList (Display *, KeySym, KeyCode * *,
				     Cardinal *);
  extern XEvent *XtLastEventProcessed (Display *);
  extern Time XtLastTimestampProcessed (Display *);
  extern void XtMainLoop (void);
  extern XtGeometryResult XtMakeGeometryRequest (Widget, XtWidgetGeometry *,
						 XtWidgetGeometry *);
  extern XtGeometryResult XtMakeResizeRequest (Widget, unsigned int,
					       unsigned int, Dimension *,
					       Dimension *);
  extern char *XtMalloc (Cardinal);
  extern void XtMapWidget (void);
  extern void XtMenuPopupAction (Widget, XEvent *, String *, Cardinal *);
  extern ArgList XtMergeArgLists (ArgList, Cardinal, ArgList, Cardinal);
  extern String XtName (Widget);
  extern Widget XtNameToWidget (Widget, char *);
  extern String XtNewString (void);
  extern void XtNextEvent (XEvent *);
  extern void XtNoticeSignal (XtSignalId);
  extern Widget XtOpenApplication (XtAppContext *, char *, XrmOptionDescList,
				   Cardinal, int *, String *, String *,
				   WidgetClass, ArgList, Cardinal);
  extern Display *XtOpenDisplay (XtAppContext, char *, char *, char *,
				 XrmOptionDescRec *, Cardinal, int *,
				 char **);
  extern void XtOverrideTranslations (Widget, XtTranslations);
  extern Boolean XtOwnSelection (Widget, Atom, Time, XtConvertSelectionProc,
				 XtLoseSelectionProc, XtSelectionDoneProc);
  extern Boolean XtOwnSelectionIncremental (Widget, Atom, Time,
					    XtConvertSelectionIncrProc,
					    XtLoseSelectionIncrProc,
					    XtSelectionDoneIncrProc,
					    XtCancelConvertSelectionProc,
					    XtPointer);
  extern Widget XtParent (Widget);
  extern XtAccelerators XtParseAcceleratorTable (char *);
  extern XtTranslations XtParseTranslationTable (char *);
  extern Boolean XtPeekEvent (XEvent *);
  extern Boolean XtPending (void);
  extern void XtPopdown (Widget);
  extern void XtPopup (Widget, XtGrabKind);
  extern void XtPopupSpringLoaded (Widget);
  extern void XtProcessEvent (XtInputMask);
  extern XtGeometryResult XtQueryGeometry (Widget, XtWidgetGeometry *,
					   XtWidgetGeometry *);
  extern void XtRealizeWidget (Widget);
  extern char *XtRealloc (char *, Cardinal);
  extern void XtRegisterCaseConverter (Display *, XtCaseProc, KeySym, KeySym);
  extern void XtRegisterDrawable (Display *, Drawable, Widget);
  extern void XtRegisterExtensionSelector (Display *, int, int,
					   XtExtensionSelectProc, XtPointer);
  extern void XtRegisterGrabAction (XtActionProc, int, unsigned int, int,
				    int);
  extern void XtReleaseGC (Widget, GC);
  extern void XtReleasePropertyAtom (Widget, Atom);
  extern void XtRemoveActionHook (XtActionHookId);
  extern void XtRemoveAllCallbacks (Widget, char *);
  extern void XtRemoveBlockHook (XtBlockHookId);
  extern void XtRemoveCallback (Widget, char *, XtCallbackProc, XtPointer);
  extern void XtRemoveCallbacks (Widget, char *, XtCallbackList);
  extern void XtRemoveEventHandler (Widget, EventMask, int, XtEventHandler,
				    XtPointer);
  extern void XtRemoveEventTypeHandler (Widget, int, XtPointer,
					XtEventHandler, XtPointer);
  extern void XtRemoveGrab (Widget);
  extern void XtRemoveInput (XtInputId);
  extern void XtRemoveRawEventHandler (Widget, EventMask, int, XtEventHandler,
				       XtPointer);
  extern void XtRemoveSignal (XtSignalId);
  extern void XtRemoveTimeOut (XtIntervalId);
  extern void XtRemoveWorkProc (XtWorkProcId);
  extern Atom XtReservePropertyAtom (Widget);
  extern String XtResolvePathname (Display *, char *, char *, char *, char *,
				   Substitution, Cardinal, XtFilePredicate);
  extern Screen *XtScreen (Widget);
  extern XrmDatabase XtScreenDatabase (Screen *);
  extern Screen *XtScreenOfObject (Widget);
  extern void XtSendSelectionRequest (Widget, Atom, Time);
  extern XtCheckpointToken XtSessionGetToken (Widget);
  extern void XtSessionReturnToken (XtCheckpointToken);
  extern void XtSetErrorHandler (XtErrorHandler);
  extern void XtSetErrorMsgHandler (XtErrorMsgHandler);
  extern XtEventDispatchProc XtSetEventDispatcher (Display *, int,
						   XtEventDispatchProc);
  extern void XtSetKeyTranslator (Display *, XtKeyProc);
  extern void XtSetKeyboardFocus (Widget, Widget);
  extern XtLanguageProc XtSetLanguageProc (XtAppContext, XtLanguageProc,
					   XtPointer);
  extern void XtSetMappedWhenManaged (Widget, int);
  extern void XtSetMultiClickTime (Display *, int);
  extern void XtSetSelectionParameters (Widget, Atom, Atom, XtPointer,
					unsigned long, int);
  extern void XtSetSelectionTimeout (unsigned long);
  extern void XtSetSensitive (Widget, int);
  extern void XtSetSubvalues (XtPointer, XtResourceList, Cardinal, ArgList,
			      Cardinal);
  extern void XtSetTypeConverter (char *, char *, XtTypeConverter,
				  XtConvertArgList, Cardinal, XtCacheType,
				  XtDestructor);
  extern void XtSetValues (Widget, ArgList, Cardinal);
  extern void XtSetWMColormapWindows (Widget, Widget *, Cardinal);
  extern void XtSetWarningHandler (XtErrorHandler);
  extern void XtSetWarningMsgHandler (XtErrorMsgHandler);
  extern void XtStringConversionWarning (char *, char *);
  extern WidgetClass XtSuperclass (Widget);
  extern void XtToolkitInitialize (void);
  extern Boolean XtToolkitThreadInitialize (void);
  extern void XtTranslateCoords (Widget, int, int, Position *, Position *);
  extern void XtTranslateKey (Display *, unsigned int, Modifiers, Modifiers *,
			      KeySym *);
  extern void XtTranslateKeycode (Display *, unsigned int, Modifiers,
				  Modifiers *, KeySym *);
  extern void XtUngrabButton (Widget, unsigned int, Modifiers);
  extern void XtUngrabKey (Widget, unsigned int, Modifiers);
  extern void XtUngrabKeyboard (Widget, Time);
  extern void XtUngrabPointer (Widget, Time);
  extern void XtUninstallTranslations (Widget);
  extern void XtUnmapWidget (void);
  extern void XtUnrealizeWidget (Widget);
  extern void XtUnregisterDrawable (Display *, Drawable);
  extern Widget XtVaAppCreateShell (char *, char *, WidgetClass, Display *,
				    ...);
  extern Widget XtVaAppInitialize (XtAppContext *, char *, XrmOptionDescList,
				   Cardinal, int *, String *, String *, ...);
  extern XtVarArgsList XtVaCreateArgsList (XtPointer, ...);
  extern Widget XtVaCreateManagedWidget (char *, WidgetClass, Widget, ...);
  extern Widget XtVaCreatePopupShell (char *, WidgetClass, Widget, ...);
  extern Widget XtVaCreateWidget (char *, WidgetClass, Widget, ...);
  extern void XtVaGetApplicationResources (Widget, XtPointer, XtResourceList,
					   Cardinal, ...);
  extern void XtVaGetSubresources (Widget, XtPointer, char *, char *,
				   XtResourceList, Cardinal, ...);
  extern void XtVaGetSubvalues (XtPointer, XtResourceList, Cardinal, ...);
  extern void XtVaGetValues (Widget, ...);
  extern Widget XtVaOpenApplication (XtAppContext *, char *,
				     XrmOptionDescList, Cardinal, int *,
				     String *, String *, WidgetClass, ...);
  extern void XtVaSetSubvalues (XtPointer, XtResourceList, Cardinal, ...);
  extern void XtVaSetValues (Widget, ...);
  extern void XtWarning (char *);
  extern void XtWarningMsg (char *, char *, char *, char *, String *,
			    Cardinal *);
  extern XtAppContext XtWidgetToApplicationContext (Widget);
  extern Window XtWindow (Widget);
  extern Window XtWindowOfObject (Widget);
  extern Widget XtWindowToWidget (Display *, Window);
  extern Boolean _XtCheckSubclassFlag (Widget, unsigned int);
  extern Boolean _XtIsSubclassOf (Widget, WidgetClass, WidgetClass,
				  unsigned int);
#ifdef __cplusplus
}
#endif
#endif
