#ifndef _X11_XKBLIB_H_
#define _X11_XKBLIB_H_

#include <X11/X.h>
#include <X11/Xlib.h>




int XkbAllocClientMap (, unsigned int, unsigned int);
int XkbAllocCompatMap (, unsigned int, unsigned int);
int XkbAllocControls (, unsigned int);
int XkbAllocIndicatorMaps ();
XkbAllocKeyboard (void);
int XkbAllocNames (, unsigned int, int, int);
int XkbAllocServerMap (, unsigned int, unsigned int);
int XkbBell (Display *, Window, int, Atom);
int XkbBellEvent (Display *, Window, int, Atom);
int XkbComputeEffectiveMap (,, unsigned char *);
int XkbCopyKeyType (,);
int XkbCopyKeyTypes (,, int);
int XkbForceBell (Display *, int);
void XkbFreeClientMap (, unsigned int, int);
void XkbFreeCompatMap (, unsigned int, int);
void XkbFreeComponentList ();
void XkbFreeControls (, unsigned int, int);
void XkbFreeIndicatorMaps ();
void XkbFreeKeyboard (, unsigned int, int);
void XkbFreeNames (, unsigned int, int);
void XkbFreeServerMap (, unsigned int, int);
int XkbGetAutoRepeatRate (Display *, unsigned int, unsigned int *,
			  unsigned int *);
int XkbGetCompatMap (Display *, unsigned int,);
int XkbGetControls (Display *, unsigned long,);
int XkbGetIndicatorMap (Display *, unsigned long,);
int XkbGetIndicatorState (Display *, unsigned int, unsigned int *);
XkbGetMap (Display *, unsigned int, unsigned int);
int XkbGetMapChanges (Display *,,);
int XkbGetNamedIndicator (Display *, Atom, int *, int *,, int *);
int XkbGetNames (Display *, unsigned int,);
int XkbGetState (Display *, unsigned int,);
int XkbGetUpdatedMap (Display *, unsigned int,);
int XkbGetVirtualMods (Display *, unsigned int,);
unsigned int XkbGetXlibControls (Display *);
int XkbIgnoreExtension (int);
int XkbInitCanonicalKeyTypes (, unsigned int, int);
int XkbKeyTypesForCoreSymbols (, int, KeySym *, unsigned int, int *,
			       KeySym *);
KeySym XkbKeycodeToKeysym (Display *, unsigned int, int, int);
unsigned int XkbKeysymToModifiers (Display *, KeySym);
int XkbLatchGroup (Display *, unsigned int, unsigned int);
int XkbLatchModifiers (Display *, unsigned int, unsigned int, unsigned int);
int XkbLibraryVersion (int *, int *);
XkbListComponents (Display *, unsigned int,, int *);
int XkbLockGroup (Display *, unsigned int, unsigned int);
int XkbLockModifiers (Display *, unsigned int, unsigned int, unsigned int);
int XkbLookupKeyBinding (Display *, KeySym, unsigned int, char *, int, int *);
int XkbLookupKeySym (Display *, KeyCode, unsigned int, unsigned int *,
		     KeySym *);
void XkbNoteControlsChanges (, XkbControlsNotifyEvent *, unsigned int);
void XkbNoteMapChanges (, XkbMapNotifyEvent *, unsigned int);
void XkbNoteNameChanges (, XkbNamesNotifyEvent *, unsigned int);
Display *XkbOpenDisplay (char *, int *, int *, int *, int *, int *);
int XkbQueryExtension (Display *, int *, int *, int *, int *, int *);
int XkbRefreshKeyboardMapping (XkbMapNotifyEvent *);
*XkbResizeKeyActions (, int, int);
KeySym *XkbResizeKeySyms (, int, int);
int XkbResizeKeyType (, int, int, int, int);
int XkbSelectEventDetails (Display *, unsigned int, unsigned int,
			   unsigned long, unsigned long);
int XkbSelectEvents (Display *, unsigned int, unsigned int, unsigned int);
void XkbSetAtomFuncs (XkbInternAtomFunc, XkbGetAtomNameFunc);
int XkbSetAutoRepeatRate (Display *, unsigned int, unsigned int,
			  unsigned int);
int XkbSetAutoResetControls (Display *, unsigned int, unsigned int *,
			     unsigned int *);
int XkbSetCompatMap (Display *, unsigned int,, int);
int XkbSetControls (Display *, unsigned long,);
int XkbSetDebuggingFlags (Display *, unsigned int, unsigned int, char *,
			  unsigned int, unsigned int, unsigned int *,
			  unsigned int *);
int XkbSetDetectableAutoRepeat (Display *, int, int *);
int XkbSetIgnoreLockMods (Display *, unsigned int, unsigned int, unsigned int,
			  unsigned int, unsigned int);
int XkbSetIndicatorMap (Display *, unsigned long,);
int XkbSetMap (Display *, unsigned int,);
int XkbSetNamedIndicator (Display *, Atom, int, int, int,);
int XkbSetNames (Display *, unsigned int, unsigned int, unsigned int,);
int XkbSetServerInternalMods (Display *, unsigned int, unsigned int,
			      unsigned int, unsigned int, unsigned int);
unsigned int XkbSetXlibControls (Display *, unsigned int, unsigned int);
char XkbToControl (char);
int XkbUseExtension (Display *, int *, int *);
int XkbVirtualModsToReal (, unsigned int, unsigned int *);
#endif
