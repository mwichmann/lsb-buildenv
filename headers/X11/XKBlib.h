#if (__LSB_VERSION__ >= 11 )
#ifndef _X11_XKBLIB_H_
#define _X11_XKBLIB_H_

#include <X11/Xlib.h>
#include <X11/X.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
    typedef struct _XkbAnyEvent XkbAnyEvent;

    typedef struct _XkbNewKeyboardNotify XkbNewKeyboardNotifyEvent;

    typedef struct _XkbMapNotifyEvent XkbMapNotifyEvent;

    typedef struct _XkbStateNotifyEvent XkbStateNotifyEvent;

    typedef struct _XkbControlsNotify XkbControlsNotifyEvent;

    typedef struct _XkbIndicatorNotify XkbIndicatorNotifyEvent;

    typedef struct _XkbNamesNotify XkbNamesNotifyEvent;

    typedef struct _XkbCompatMapNotify XkbCompatMapNotifyEvent;

    typedef struct _XkbBellNotify XkbBellNotifyEvent;

    typedef struct _XkbActionMessage XkbActionMessageEvent;

    typedef struct _XkbAccessXNotify XkbAccessXNotifyEvent;

    typedef struct _XkbExtensionDeviceNotify XkbExtensionDeviceNotifyEvent;

    typedef union _XkbEvent XkbEvent;

    typedef struct _XkbKbdDpyState XkbKbdDpyStateRec;

    typedef struct _XkbKbdDpyState *XkbKbdDpyStatePtr;

    typedef Atom(*XkbInternAtomFunc) (Display *, const char *, int);

    typedef char *(*XkbGetAtomNameFunc) (Display *, Atom);

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _XkbAnyEvent {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Time time;
	int xkb_type;
	unsigned int device;
    };

    struct _XkbNewKeyboardNotify {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Time time;
	int xkb_type;
	int device;
	int old_device;
	int min_key_code;
	int max_key_code;
	int old_min_key_code;
	int old_max_key_code;
	unsigned int changed;
	char req_major;
	char req_minor;
    };

    struct _XkbMapNotifyEvent {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Time time;
	int xkb_type;
	int device;
	unsigned int changed;
	unsigned int flags;
	int first_type;
	int num_types;
	KeyCode min_key_code;
	KeyCode max_key_code;
	KeyCode first_key_sym;
	KeyCode first_key_act;
	KeyCode first_key_behavior;
	KeyCode first_key_explicit;
	KeyCode first_modmap_key;
	KeyCode first_vmodmap_key;
	int num_key_syms;
	int num_key_acts;
	int num_key_behaviors;
	int num_key_explicit;
	int num_modmap_keys;
	int num_vmodmap_keys;
	unsigned int vmods;
    };

    struct _XkbStateNotifyEvent {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Time time;
	int xkb_type;
	int device;
	unsigned int changed;
	int group;
	int base_group;
	int latched_group;
	int locked_group;
	unsigned int mods;
	unsigned int base_mods;
	unsigned int latched_mods;
	unsigned int locked_mods;
	int compat_state;
	unsigned char grab_mods;
	unsigned char compat_grab_mods;
	unsigned char lookup_mods;
	unsigned char compat_lookup_mods;
	int ptr_buttons;
	KeyCode keycode;
	char event_type;
	char req_major;
	char req_minor;
    };

    struct _XkbControlsNotify {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Time time;
	int xkb_type;
	int device;
	unsigned int changed_ctrls;
	unsigned int enabled_ctrls;
	unsigned int enabled_ctrl_changes;
	int num_groups;
	KeyCode keycode;
	char event_type;
	char req_major;
	char req_minor;
    };

    struct _XkbIndicatorNotify {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Time time;
	int xkb_type;
	int device;
	unsigned int changed;
	unsigned int state;
    };

    struct _XkbNamesNotify {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Time time;
	int xkb_type;
	int device;
	unsigned int changed;
	int first_type;
	int num_types;
	int first_lvl;
	int num_lvls;
	int num_aliases;
	int num_radio_groups;
	unsigned int changed_vmods;
	unsigned int changed_groups;
	unsigned int changed_indicators;
	int first_key;
	int num_keys;
    };

    struct _XkbCompatMapNotify {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Time time;
	int xkb_type;
	int device;
	unsigned int changed_groups;
	int first_si;
	int num_si;
	int num_total_si;
    };

    struct _XkbBellNotify {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Time time;
	int xkb_type;
	int device;
	int percent;
	int pitch;
	int duration;
	int bell_class;
	int bell_id;
	Atom name;
	Window window;
	int event_only;
    };

    struct _XkbActionMessage {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Time time;
	int xkb_type;
	int device;
	KeyCode keycode;
	int press;
	int key_event_follows;
	int group;
	unsigned int mods;
	char message;
    };

    struct _XkbAccessXNotify {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Time time;
	int xkb_type;
	int device;
	int detail;
	int keycode;
	int sk_delay;
	int debounce_delay;
    };

    struct _XkbExtensionDeviceNotify {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	Time time;
	int xkb_type;
	int device;
	unsigned int reason;
	unsigned int supported;
	unsigned int unsupported;
	int first_btn;
	int num_btns;
	unsigned int leds_defined;
	unsigned int led_state;
	int led_class;
	int led_id;
    };

    union _XkbEvent {
	int type;
	XkbAnyEvent any;
	XkbNewKeyboardNotifyEvent new_kbd;
	XkbMapNotifyEvent map;
	XkbStateNotifyEvent state;
	XkbControlsNotifyEvent ctrls;
	XkbIndicatorNotifyEvent indicators;
	XkbNamesNotifyEvent names;
	XkbCompatMapNotifyEvent compat;
	XkbBellNotifyEvent bell;
	XkbActionMessageEvent message;
	XkbAccessXNotifyEvent accessx;
	XkbExtensionDeviceNotifyEvent device;
	XEvent core;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

    extern int XkbAllocClientMap(, unsigned int, unsigned int);
    extern int XkbAllocCompatMap(, unsigned int, unsigned int);
    extern int XkbAllocControls(, unsigned int);
    extern int XkbAllocIndicatorMaps();
    extern XkbAllocKeyboard(void);
    extern int XkbAllocNames(, unsigned int, int, int);
    extern int XkbAllocServerMap(, unsigned int, unsigned int);
    extern int XkbApplyCompatMapToKey(, KeyCode,);
    extern int XkbBell(Display *, Window, int, Atom);
    extern int XkbBellEvent(Display *, Window, int, Atom);
    extern int XkbChangeEnabledControls(Display *, unsigned int,
					unsigned int, unsigned int);
    extern int XkbChangeMap(Display *,,);
    extern int XkbChangeNames(Display *,,);
    extern int XkbChangeTypesOfKey(, int, int, unsigned int, int *,);
    extern int XkbComputeEffectiveMap(,, unsigned char *);
    extern int XkbCopyKeyType(,);
    extern int XkbCopyKeyTypes(,, int);
    extern int XkbForceBell(Display *, int);
    extern void XkbFreeClientMap(, unsigned int, int);
    extern void XkbFreeCompatMap(, unsigned int, int);
    extern void XkbFreeComponentList();
    extern void XkbFreeControls(, unsigned int, int);
    extern void XkbFreeIndicatorMaps();
    extern void XkbFreeKeyboard(, unsigned int, int);
    extern void XkbFreeNames(, unsigned int, int);
    extern void XkbFreeServerMap(, unsigned int, int);
    extern int XkbGetAutoRepeatRate(Display *, unsigned int,
				    unsigned int *, unsigned int *);
    extern int XkbGetCompatMap(Display *, unsigned int,);
    extern int XkbGetControls(Display *, unsigned long int,);
    extern int XkbGetIndicatorMap(Display *, unsigned long int,);
    extern int XkbGetIndicatorState(Display *, unsigned int,
				    unsigned int *);
    extern int XkbGetKeyActions(Display *, unsigned int, unsigned int,);
    extern int XkbGetKeyBehaviors(Display *, unsigned int, unsigned int,);
    extern int XkbGetKeyExplicitComponents(Display *, unsigned int,
					   unsigned int,);
    extern int XkbGetKeyModifierMap(Display *, unsigned int,
				    unsigned int,);
    extern int XkbGetKeySyms(Display *, unsigned int, unsigned int,);
    extern int XkbGetKeyTypes(Display *, unsigned int, unsigned int,);
    extern XkbGetKeyboard(Display *, unsigned int, unsigned int);
    extern XkbGetKeyboardByName(Display *, unsigned int,, unsigned int,
				unsigned int, int);
    extern XkbGetMap(Display *, unsigned int, unsigned int);
    extern int XkbGetMapChanges(Display *,,);
    extern int XkbGetNamedIndicator(Display *, Atom, int *, int *,, int *);
    extern int XkbGetNames(Display *, unsigned int,);
    extern int XkbGetState(Display *, unsigned int,);
    extern int XkbGetUpdatedMap(Display *, unsigned int,);
    extern int XkbGetVirtualMods(Display *, unsigned int,);
    extern unsigned int XkbGetXlibControls(Display *);
    extern int XkbIgnoreExtension(int);
    extern int XkbInitCanonicalKeyTypes(, unsigned int, int);
    extern int XkbKeyTypesForCoreSymbols(, int, KeySym *, unsigned int,
					 int *, KeySym *);
    extern KeySym XkbKeycodeToKeysym(Display *, unsigned int, int, int);
    extern unsigned int XkbKeysymToModifiers(Display *, KeySym);
    extern int XkbLatchGroup(Display *, unsigned int, unsigned int);
    extern int XkbLatchModifiers(Display *, unsigned int, unsigned int,
				 unsigned int);
    extern int XkbLibraryVersion(int *, int *);
    extern XkbListComponents(Display *, unsigned int,, int *);
    extern int XkbLockGroup(Display *, unsigned int, unsigned int);
    extern int XkbLockModifiers(Display *, unsigned int, unsigned int,
				unsigned int);
    extern int XkbLookupKeyBinding(Display *, KeySym, unsigned int, char *,
				   int, int *);
    extern int XkbLookupKeySym(Display *, KeyCode, unsigned int,
			       unsigned int *, KeySym *);
    extern void XkbNoteControlsChanges(, XkbControlsNotifyEvent *,
				       unsigned int);
    extern void XkbNoteMapChanges(, XkbMapNotifyEvent *, unsigned int);
    extern void XkbNoteNameChanges(, XkbNamesNotifyEvent *, unsigned int);
    extern Display *XkbOpenDisplay(char *, int *, int *, int *, int *,
				   int *);
    extern int XkbQueryExtension(Display *, int *, int *, int *, int *,
				 int *);
    extern int XkbRefreshKeyboardMapping(XkbMapNotifyEvent *);
    extern *XkbResizeKeyActions(, int, int);
    extern KeySym *XkbResizeKeySyms(, int, int);
    extern int XkbResizeKeyType(, int, int, int, int);
    extern int XkbSelectEventDetails(Display *, unsigned int, unsigned int,
				     unsigned long int, unsigned long int);
    extern int XkbSelectEvents(Display *, unsigned int, unsigned int,
			       unsigned int);
    extern void XkbSetAtomFuncs(XkbInternAtomFunc, XkbGetAtomNameFunc);
    extern int XkbSetAutoRepeatRate(Display *, unsigned int, unsigned int,
				    unsigned int);
    extern int XkbSetAutoResetControls(Display *, unsigned int,
				       unsigned int *, unsigned int *);
    extern int XkbSetCompatMap(Display *, unsigned int,, int);
    extern int XkbSetControls(Display *, unsigned long int,);
    extern int XkbSetDebuggingFlags(Display *, unsigned int, unsigned int,
				    char *, unsigned int, unsigned int,
				    unsigned int *, unsigned int *);
    extern int XkbSetDetectableAutoRepeat(Display *, int, int *);
    extern int XkbSetIgnoreLockMods(Display *, unsigned int, unsigned int,
				    unsigned int, unsigned int,
				    unsigned int);
    extern int XkbSetIndicatorMap(Display *, unsigned long int,);
    extern int XkbSetMap(Display *, unsigned int,);
    extern int XkbSetNamedIndicator(Display *, Atom, int, int, int,);
    extern int XkbSetNames(Display *, unsigned int, unsigned int,
			   unsigned int,);
    extern int XkbSetServerInternalMods(Display *, unsigned int,
					unsigned int, unsigned int,
					unsigned int, unsigned int);
    extern unsigned int XkbSetXlibControls(Display *, unsigned int,
					   unsigned int);
    extern char XkbToControl(char);
    extern int XkbTranslateKeyCode(, KeyCode, unsigned int, unsigned int *,
				   KeySym *);
    extern int XkbTranslateKeySym(Display *, KeySym *, unsigned int,
				  char *, int, int *);
    extern int XkbUpdateMapFromCore(, KeyCode, int, int, KeySym *,);
    extern int XkbUseExtension(Display *, int *, int *);
    extern int XkbVirtualModsToReal(, unsigned int, unsigned int *);
#if __LSB_VERSION__ >= 40
    extern int XkbGetPerClientControls(Display *, unsigned int *);
    extern int XkbSetPerClientControls(Display *, unsigned int,
				       unsigned int *);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
