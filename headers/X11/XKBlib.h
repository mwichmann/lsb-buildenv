#ifndef _X11_XKBLIB_H_
#define _X11_XKBLIB_H_

#include <X11/X.h>
#include <X11/Xlib.h>

#ifdef __cplusplus
extern "C"
{
#endif





  extern int XkbAllocClientMap (, unsigned int, unsigned int);
  extern int XkbAllocCompatMap (, unsigned int, unsigned int);
  extern int XkbAllocControls (, unsigned int);
  extern int XkbAllocIndicatorMaps ();
  extern XkbAllocKeyboard (void);
  extern int XkbAllocNames (, unsigned int, int, int);
  extern int XkbAllocServerMap (, unsigned int, unsigned int);
  extern int XkbBell (Display *, Window, int, Atom);
  extern int XkbBellEvent (Display *, Window, int, Atom);
  extern int XkbComputeEffectiveMap (,, unsigned char *);
  extern int XkbCopyKeyType (,);
  extern int XkbCopyKeyTypes (,, int);
  extern int XkbForceBell (Display *, int);
  extern void XkbFreeClientMap (, unsigned int, int);
  extern void XkbFreeCompatMap (, unsigned int, int);
  extern void XkbFreeComponentList ();
  extern void XkbFreeControls (, unsigned int, int);
  extern void XkbFreeIndicatorMaps ();
  extern void XkbFreeKeyboard (, unsigned int, int);
  extern void XkbFreeNames (, unsigned int, int);
  extern void XkbFreeServerMap (, unsigned int, int);
  extern int XkbGetAutoRepeatRate (Display *, unsigned int, unsigned int *,
				   unsigned int *);
  extern int XkbGetCompatMap (Display *, unsigned int,);
  extern int XkbGetControls (Display *, unsigned long,);
  extern int XkbGetIndicatorMap (Display *, unsigned long,);
  extern int XkbGetIndicatorState (Display *, unsigned int, unsigned int *);
  extern XkbGetMap (Display *, unsigned int, unsigned int);
  extern int XkbGetMapChanges (Display *,,);
  extern int XkbGetNamedIndicator (Display *, Atom, int *, int *,, int *);
  extern int XkbGetNames (Display *, unsigned int,);
  extern int XkbGetState (Display *, unsigned int,);
  extern int XkbGetUpdatedMap (Display *, unsigned int,);
  extern int XkbGetVirtualMods (Display *, unsigned int,);
  extern unsigned int XkbGetXlibControls (Display *);
  extern int XkbIgnoreExtension (int);
  extern int XkbInitCanonicalKeyTypes (, unsigned int, int);
  extern int XkbKeyTypesForCoreSymbols (, int, KeySym *, unsigned int, int *,
					KeySym *);
  extern KeySym XkbKeycodeToKeysym (Display *, unsigned int, int, int);
  extern unsigned int XkbKeysymToModifiers (Display *, KeySym);
  extern int XkbLatchGroup (Display *, unsigned int, unsigned int);
  extern int XkbLatchModifiers (Display *, unsigned int, unsigned int,
				unsigned int);
  extern int XkbLibraryVersion (int *, int *);
  extern XkbListComponents (Display *, unsigned int,, int *);
  extern int XkbLockGroup (Display *, unsigned int, unsigned int);
  extern int XkbLockModifiers (Display *, unsigned int, unsigned int,
			       unsigned int);
  extern int XkbLookupKeyBinding (Display *, KeySym, unsigned int, char *,
				  int, int *);
  extern int XkbLookupKeySym (Display *, KeyCode, unsigned int,
			      unsigned int *, KeySym *);
  extern void XkbNoteControlsChanges (, XkbControlsNotifyEvent *,
				      unsigned int);
  extern void XkbNoteMapChanges (, XkbMapNotifyEvent *, unsigned int);
  extern void XkbNoteNameChanges (, XkbNamesNotifyEvent *, unsigned int);
  extern Display *XkbOpenDisplay (char *, int *, int *, int *, int *, int *);
  extern int XkbQueryExtension (Display *, int *, int *, int *, int *, int *);
  extern int XkbRefreshKeyboardMapping (XkbMapNotifyEvent *);
  extern *XkbResizeKeyActions (, int, int);
  extern KeySym *XkbResizeKeySyms (, int, int);
  extern int XkbResizeKeyType (, int, int, int, int);
  extern int XkbSelectEventDetails (Display *, unsigned int, unsigned int,
				    unsigned long, unsigned long);
  extern int XkbSelectEvents (Display *, unsigned int, unsigned int,
			      unsigned int);
  extern void XkbSetAtomFuncs (XkbInternAtomFunc, XkbGetAtomNameFunc);
  extern int XkbSetAutoRepeatRate (Display *, unsigned int, unsigned int,
				   unsigned int);
  extern int XkbSetAutoResetControls (Display *, unsigned int, unsigned int *,
				      unsigned int *);
  extern int XkbSetCompatMap (Display *, unsigned int,, int);
  extern int XkbSetControls (Display *, unsigned long,);
  extern int XkbSetDebuggingFlags (Display *, unsigned int, unsigned int,
				   char *, unsigned int, unsigned int,
				   unsigned int *, unsigned int *);
  extern int XkbSetDetectableAutoRepeat (Display *, int, int *);
  extern int XkbSetIgnoreLockMods (Display *, unsigned int, unsigned int,
				   unsigned int, unsigned int, unsigned int);
  extern int XkbSetIndicatorMap (Display *, unsigned long,);
  extern int XkbSetMap (Display *, unsigned int,);
  extern int XkbSetNamedIndicator (Display *, Atom, int, int, int,);
  extern int XkbSetNames (Display *, unsigned int, unsigned int,
			  unsigned int,);
  extern int XkbSetServerInternalMods (Display *, unsigned int, unsigned int,
				       unsigned int, unsigned int,
				       unsigned int);
  extern unsigned int XkbSetXlibControls (Display *, unsigned int,
					  unsigned int);
  extern char XkbToControl (char);
  extern int XkbUseExtension (Display *, int *, int *);
  extern int XkbVirtualModsToReal (, unsigned int, unsigned int *);
#ifdef __cplusplus
}
#endif
#endif
