#if (__LSB_VERSION__ >= 11 )
#ifndef _X11_EXTENSIONS_XKBSTR_H_
#define _X11_EXTENSIONS_XKBSTR_H_

#include <X11/Xlib.h>
#include <X11/X.h>

#ifdef __cplusplus
extern "C" {
#endif


#define _XKBSTR_H_
#define XkbSMKeyActionsPtr(m,k)	(&(m)->acts[(m)->key_acts[k]])
#define XkbCMKeySymsPtr(m,k)	(&(m)->syms[XkbCMKeySymsOffset(m,k)])
#define XkbCMKeyType(m,k,g)	(&(m)->types[XkbCMKeyTypeIndex(m,k,g)])
#define XkbIM_IsAuto(i)	((((i)->flags&XkbIM_NoAutomatic)==0)&& (((i)->which_groups&&(i)->groups)|| ((i)->which_mods&&(i)->mods.mask)|| ((i)->ctrls)))
#define XkbActionCtrls(a)	((((unsigned int)(a)->ctrls3)<<24)| (((unsigned int)(a)->ctrls2)<<16)| (((unsigned int)(a)->ctrls1)<<8)| ((unsigned int)((a)->ctrls0)))
#define XkbSARedirectVMods(a)	((((unsigned int)(a)->vmods1)<<8)| ((unsigned int)(a)->vmods0))
#define XkbSARedirectVModsMask(a)	((((unsigned int)(a)->vmods_mask1)<<8)| ((unsigned int)(a)->vmods_mask0))
#define XkbActionSetCtrls(a,c)	(((a)->ctrls3=(((c)>>24)&0xff)), ((a)->ctrls2=(((c)>>16)&0xff)), ((a)->ctrls1=(((c)>>8)&0xff)), ((a)->ctrls0=((c)&0xff)))
#define XkbSetModActionVMods(a,v)	(((a)->vmods1=(((v)>>8)&0xff)),(a)->vmods2=((v)&0xff))
#define XkbSARedirectSetVMods(a,m)	(((a)->vmods_mask1=(((m)>>8)&0xff)), ((a)->vmods_mask0=((m)&0xff)))
#define XkbSARedirectSetVModsMask(a,m)	(((a)->vmods_mask1=(((m)>>8)&0xff)), ((a)->vmods_mask0=((m)&0xff)))
#define XkbXI_DevHasBtnActs(d)	(((d)->num_btns>0)&&((d)->btn_acts!=NULL))
#define XkbXI_DevHasLeds(d)	(((d)->num_leds>0)&&((d)->leds!=NULL))
#define XkbOutOfRangeGroupNumber(g)	(((g)&0x30)>>4)
#define XkbSetNumGroups(g,n)	(((g)&0xf0)|((n)&0x0f))
#define XkbIntTo2Chars(i,h,l)	(((h)=((i>>8)&0xff)),((l)=((i)&0xff)))
#define XkbIM_InUse(i)	(((i)->flags)||((i)->which_groups)|| ((i)->which_mods)||((i)->ctrls))
#define XkbKeycodeInRange(d,k)	(((k)>=(d)->min_key_code)&& ((k)<=(d)->max_key_code))
#define XkbSetGroupInfo(g,w,n)	(((w)&0xc0)|(((n)&3)<<4)|((g)&0x0f))
#define XkbSASetGroup(a,g)	((a)->group_XXX=(g))
#define XkbSASetScreen(a,s)	((a)->screenXXX= ((s)&0xff))
#define XkbSASetPtrDfltValue(a,c)	((a)->valueXXX= ((c)&0xff))
#define XkbAX_NeedOption(c,w)	((c)->ax_options&(w))
#define XkbAX_AnyFeedback(c)	((c)->enabled_ctrls&XkbAccessXFeedbackMask)
#define XkbNumKeys(d)	((d)->max_key_code-(d)->min_key_code+1)
#define XkbKeyHasActions(d,k)	((d)->server->key_acts[k]!=0)
#define XkbNumGroups(g)	((g)&0x0f)
#define XkbOutOfRangeGroupAction(g)	((g)&0xc0)
#define XkbOutOfRangeGroupInfo(g)	((g)&0xf0)
#define XkbCMKeyGroupInfo(m,k)	((m)->key_sym_map[k].group_info)
#define XkbCMKeyTypeIndex(m,k,g)	((m)->key_sym_map[k].kt_index[g&0x3])
#define XkbCMKeySymsOffset(m,k)	((m)->key_sym_map[k].offset)
#define XkbCMKeyGroupsWidth(m,k)	((m)->key_sym_map[k].width)
#define XkbStateGroup(s)	((s)->base_group+(s)->latched_group+XkbGroupLock(s))
#define XkbStateMods(s)	((s)->base_mods|(s)->latched_mods|XkbModLocks(s))
#define XkbGroupLock(s)	((s)->locked_group)
#define XkbModLocks(s)	((s)->locked_mods)
#define XkbModActionVMods(a)	((short)(((a)->vmods1<<8)|((a)->vmods2)))
#define Xkb2CharsToInt(h,l)	((short)(((h)<<8)|(l)))
#define XkbCharToInt(v)	((v)&0x80?(int)((v)|(~0xff)):(int)((v)&0x7f))
#define XkbPtrActionX(a)	(Xkb2CharsToInt((a)->high_XXX,(a)->low_XXX))
#define XkbPtrActionY(a)	(Xkb2CharsToInt((a)->high_YYY,(a)->low_YYY))
#define XkbAX_NeedFeedback(c,w)	(XkbAX_AnyFeedback(c)&&XkbAX_NeedOption(c,w))
#define XkbSAGroup(a)	(XkbCharToInt((a)->group_XXX))
#define XkbSAScreen(a)	(XkbCharToInt((a)->screenXXX))
#define XkbSAPtrDfltValue(a)	(XkbCharToInt((a)->valueXXX))
#define XkbKeyGroupInfo(d,k)	(XkbCMKeyGroupInfo((d)->map,(k)))
#define XkbKeyGroupsWidth(d,k)	(XkbCMKeyGroupsWidth((d)->map,k))
#define XkbCMKeyNumSyms(m,k)	(XkbCMKeyGroupsWidth(m,k)*XkbCMKeyNumGroups(m,k))
#define XkbKeyGroupWidth(d,k,g)	(XkbCMKeyGroupWidth((d)->map,k,g))
#define XkbKeyNumGroups(d,k)	(XkbCMKeyNumGroups((d)->map,(k)))
#define XkbKeyNumSyms(d,k)	(XkbCMKeyNumSyms((d)->map,(k)))
#define XkbKeySymsPtr(d,k)	(XkbCMKeySymsPtr((d)->map,(k)))
#define XkbKeyKeyType(d,k,g)	(XkbCMKeyType((d)->map,k,g))
#define XkbCMKeyGroupWidth(m,k,g)	(XkbCMKeyType(m,k,g)->num_levels)
#define XkbKeyKeyTypeIndex(d,k,g)	(XkbCMKeyTypeIndex((d)->map,k,g))
#define XkbSetPtrActionX(a,x)	(XkbIntTo2Chars(x,(a)->high_XXX,(a)->low_XXX))
#define XkbSetPtrActionY(a,y)	(XkbIntTo2Chars(y,(a)->high_YYY,(a)->low_YYY))
#define XkbKeyActionEntry(d,k,sl,g)	(XkbKeyHasActions(d,k)? XkbKeyAction(d,k,((XkbKeyGroupsWidth(d,k)*(g))+(sl))):NULL)
#define XkbKeyAction(d,k,n)	(XkbKeyHasActions(d,k)?&XkbKeyActionsPtr(d,k)[n]:NULL)
#define XkbKeyNumActions(d,k)	(XkbKeyHasActions(d,k)?XkbKeyNumSyms(d,k):1)
#define XkbKeySymEntry(d,k,sl,g)	(XkbKeySym(d,k,((XkbKeyGroupsWidth(d,k)*(g))+(sl))))
#define XkbKeySym(d,k,n)	(XkbKeySymsPtr(d,k)[n])
#define XkbCMKeyNumGroups(m,k)	(XkbNumGroups((m)->key_sym_map[k].group_info))
#define XkbKeyActionsPtr(d,k)	(XkbSMKeyActionsPtr((d)->server,k))
#define XkbXI_LegalDevBtn(d,b)	(XkbXI_DevHasBtnActs(d)&&((b)<(d)->num_btns))
#define XkbAnyActionDataSize	7
#define XkbGrabStateFromRec(s)	XkbBuildCoreState((s)->grab_mods,(s)->group)
#define XkbStateFieldFromRec(s)	XkbBuildCoreState((s)->lookup_mods,(s)->group)


    typedef struct _XkbStateRec XkbStateRec;

    typedef struct _XkbStateRec *XkbStatePtr;

    typedef struct _XkbMods *XkbModsPtr;

    typedef struct _XkbMods XkbModsRec;

    typedef struct _XkbKTMapEntry XkbKTMapEntryRec;

    typedef struct _XkbKTMapEntry *XkbKTMapEntryPtr;

    typedef struct _XkbKeyType XkbKeyTypeRec;

    typedef struct _XkbKeyType *XkbKeyTypePtr;

    typedef struct _XkbBehavior XkbBehavior;

    typedef struct _XkbAnyAction XkbAnyAction;

    typedef struct _XkbModAction XkbModAction;

    typedef struct _XkbGroupAction XkbGroupAction;

    typedef struct _XkbISOAction XkbISOAction;

    typedef struct _XkbPtrAction XkbPtrAction;

    typedef struct _XkbPtrBtnAction XkbPtrBtnAction;

    typedef struct _XkbPtrDfltAction XkbPtrDfltAction;

    typedef struct _XkbSwitchScreenAction XkbSwitchScreenAction;

    typedef struct _XkbCtrlsAction XkbCtrlsAction;

    typedef struct _XkbMessageAction XkbMessageAction;

    typedef struct _XkbRedirectKeyAction XkbRedirectKeyAction;

    typedef struct _XkbDeviceBtnAction XkbDeviceBtnAction;

    typedef struct _XkbDeviceValuatorAction XkbDeviceValuatorAction;

    typedef union _XkbAction XkbAction;

    typedef struct _XkbControls XkbControlsRec;

    typedef struct _XkbControls *XkbControlsPtr;

    typedef struct _XkbServerMapRec XkbServerMapRec;

    typedef struct _XkbServerMapRec *XkbServerMapPtr;

    typedef struct _XkbSymMapRec XkbSymMapRec;

    typedef struct _XkbSymMapRec *XkbSymMapPtr;

    typedef struct _XkbClientMapRec XkbClientMapRec;

    typedef struct _XkbClientMapRec *XkbClientMapPtr;

    typedef struct _XkbSymInterpretRec XkbSymInterpretRec;

    typedef struct _XkbSymInterpretRec *XkbSymInterpretPtr;

    typedef struct _XkbCompatMapRec XkbCompatMapRec;

    typedef struct _XkbCompatMapRec *XkbCompatMapPtr;

    typedef struct _XkbIndicatorMapRec *XkbIndicatorMapPtr;

    typedef struct _XkbIndicatorMapRec XkbIndicatorMapRec;

    typedef struct _XkbIndicatorRec XkbIndicatorRec;

    typedef struct _XkbIndicatorRec *XkbIndicatorPtr;

    typedef struct _XkbKeyNameRec XkbKeyNameRec;

    typedef struct _XkbKeyNameRec *XkbKeyNamePtr;

    typedef struct _XkbKeyAliasRec XkbKeyAliasRec;

    typedef struct _XkbKeyAliasRec *XkbKeyAliasPtr;

    typedef struct _XkbNamesRec XkbNamesRec;

    typedef struct _XkbNamesRec *XkbNamesPtr;

    typedef struct _XkbGeometry *XkbGeometryPtr;

    typedef struct _XkbDesc XkbDescRec;

    typedef struct _XkbDesc *XkbDescPtr;

    typedef struct _XkbMapChanges *XkbMapChangesPtr;

    typedef struct _XkbMapChanges XkbMapChangesRec;

    typedef struct _XkbControlsChanges *XkbControlsChangesPtr;

    typedef struct _XkbControlsChanges XkbControlsChangesRec;

    typedef struct _XkbIndicatorChanges *XkbIndicatorChangesPtr;

    typedef struct _XkbIndicatorChanges XkbIndicatorChangesRec;

    typedef struct _XkbNameChanges XkbNameChangesRec;

    typedef struct _XkbNameChanges *XkbNameChangesPtr;

    typedef struct _XkbCompatChanges XkbCompatChangesRec;

    typedef struct _XkbCompatChanges *XkbCompatChangesPtr;

    typedef struct _XkbChanges XkbChangesRec;

    typedef struct _XkbChanges *XkbChangesPtr;

    typedef struct _XkbComponentNames XkbComponentNamesRec;

    typedef struct _XkbComponentNames *XkbComponentNamesPtr;

    typedef struct _XkbComponentName XkbComponentNameRec;

    typedef struct _XkbComponentName *XkbComponentNamePtr;

    typedef struct _XkbComponentList XkbComponentListRec;

    typedef struct _XkbComponentList *XkbComponentListPtr;

    typedef struct _XkbDeviceLedInfo XkbDeviceLedInfoRec;

    typedef struct _XkbDeviceLedInfo *XkbDeviceLedInfoPtr;

    typedef struct _XkbDeviceInfo XkbDeviceInfoRec;

    typedef struct _XkbDeviceInfo *XkbDeviceInfoPtr;

    typedef struct _XkbDeviceLedChanges XkbDeviceLedChangesRec;

    typedef struct _XkbDeviceLedChanges *XkbDeviceLedChangesPtr;

    typedef struct _XkbDeviceChanges XkbDeviceChangesRec;

    typedef struct _XkbDeviceChanges *XkbDeviceChangesPtr;

    struct _XkbStateRec {
	unsigned char group;
	unsigned char locked_group;
	unsigned short base_group;
	unsigned short latched_group;
	unsigned char mods;
	unsigned char base_mods;
	unsigned char latched_mods;
	unsigned char locked_mods;
	unsigned char compat_state;
	unsigned char grab_mods;
	unsigned char compat_grab_mods;
	unsigned char lookup_mods;
	unsigned char compat_lookup_mods;
	unsigned short ptr_buttons;
    };

    struct _XkbMods {
	unsigned char mask;
	unsigned char real_mods;
	unsigned short vmods;
    };

    struct _XkbKTMapEntry {
	int active;
	unsigned char level;
	XkbModsRec mods;
    };

    struct _XkbKeyType {
	XkbModsRec mods;
	unsigned char num_levels;
	unsigned char map_count;
	XkbKTMapEntryPtr map;
	XkbModsPtr preserve;
	Atom name;
	Atom *level_names;
    };

    struct _XkbBehavior {
	unsigned char type;
	unsigned char data;
    };

    struct _XkbAnyAction {
	unsigned char type;
	unsigned char data[8];
    };

    struct _XkbModAction {
	unsigned char type;
	unsigned char flags;
	unsigned char mask;
	unsigned char real_mods;
	unsigned char vmods1;
	unsigned char vmods2;
    };

    struct _XkbGroupAction {
	unsigned char type;
	unsigned char flags;
	char group_XXX;
    };

    struct _XkbISOAction {
	unsigned char type;
	unsigned char flags;
	unsigned char mask;
	unsigned char real_mods;
	char group_XXX;
	unsigned char affect;
	unsigned char vmods1;
	unsigned char vmods2;
    };

    struct _XkbPtrAction {
	unsigned char type;
	unsigned char flags;
	unsigned char high_XXX;
	unsigned char low_XXX;
	unsigned char high_YYY;
	unsigned char low_YYY;
    };

    struct _XkbPtrBtnAction {
	unsigned char type;
	unsigned char flags;
	unsigned char count;
	unsigned char button;
    };

    struct _XkbPtrDfltAction {
	unsigned char type;
	unsigned char flags;
	unsigned char affect;
	char valueXXX;
    };

    struct _XkbSwitchScreenAction {
	unsigned char type;
	unsigned char flags;
	char screenXXX;
    };

    struct _XkbCtrlsAction {
	unsigned char type;
	unsigned char flags;
	unsigned char ctrls3;
	unsigned char ctrls2;
	unsigned char ctrls1;
	unsigned char ctrls0;
    };

    struct _XkbMessageAction {
	unsigned char type;
	unsigned char flags;
	unsigned char message[6];
    };

    struct _XkbRedirectKeyAction {
	unsigned char type;
	unsigned char new_key;
	unsigned char mods_mask;
	unsigned char mods;
	unsigned char vmods_mask0;
	unsigned char vmods_mask1;
	unsigned char vmods0;
	unsigned char vmods1;
    };

    struct _XkbDeviceBtnAction {
	unsigned char type;
	unsigned char flags;
	unsigned char count;
	unsigned char button;
	unsigned char device;
    };

    struct _XkbDeviceValuatorAction {
	unsigned char type;
	unsigned char device;
	unsigned char v1_what;
	unsigned char v1_ndx;
	unsigned char v1_value;
	unsigned char v2_what;
	unsigned char v2_ndx;
	unsigned char v2_value;
    };

    union _XkbAction {
	XkbAnyAction any;
	XkbModAction mods;
	XkbGroupAction group;
	XkbISOAction iso;
	XkbPtrAction ptr;
	XkbPtrBtnAction btn;
	XkbPtrDfltAction dflt;
	XkbSwitchScreenAction screen;
	XkbCtrlsAction ctrls;
	XkbMessageAction msg;
	XkbRedirectKeyAction redirect;
	XkbDeviceBtnAction devbtn;
	XkbDeviceValuatorAction devval;
	unsigned char type;
    };

    struct _XkbControls {
	unsigned char mk_dflt_btn;
	unsigned char num_groups;
	unsigned char groups_wrap;
	XkbModsRec internal;
	XkbModsRec ignore_lock;
	unsigned int enabled_ctrls;
	unsigned short repeat_delay;
	unsigned short repeat_interval;
	unsigned short slow_keys_delay;
	unsigned short debounce_delay;
	unsigned short mk_delay;
	unsigned short mk_interval;
	unsigned short mk_time_to_max;
	unsigned short mk_max_speed;
	short mk_curve;
	unsigned short ax_options;
	unsigned short ax_timeout;
	unsigned short axt_opts_mask;
	unsigned short axt_opts_values;
	unsigned int axt_ctrls_mask;
	unsigned int axt_ctrls_values;
	unsigned char per_key_repeat[32];
    };

    struct _XkbServerMapRec {
	unsigned short num_acts;
	unsigned short size_acts;
	XkbAction *acts;
	XkbBehavior *behaviors;
	unsigned short *key_acts;
#if defined(__cplusplus) || defined(c_plusplus)
	unsigned char *c_explicit;
#else
	unsigned char *explicit;
#endif
	unsigned char vmods[16];
	unsigned short *vmodmap;
    };

    struct _XkbSymMapRec {
	unsigned char kt_index[4];
	unsigned char group_info;
	unsigned char width;
	unsigned short offset;
    };

    struct _XkbClientMapRec {
	unsigned char size_types;
	unsigned char num_types;
	XkbKeyTypePtr types;
	unsigned short size_syms;
	unsigned short num_syms;
	KeySym *syms;
	XkbSymMapPtr key_sym_map;
	unsigned char *modmap;
    };

    struct _XkbSymInterpretRec {
	KeySym sym;
	unsigned char flags;
	unsigned char match;
	unsigned char mods;
	unsigned char virtual_mod;
	XkbAnyAction act;
    };

    struct _XkbCompatMapRec {
	XkbSymInterpretPtr sym_interpret;
	XkbModsRec groups[4];
	unsigned short num_si;
	unsigned short size_si;
    };

    struct _XkbIndicatorMapRec {
	unsigned char flags;
	unsigned char which_groups;
	unsigned char groups;
	unsigned char which_mods;
	XkbModsRec mods;
	unsigned int ctrls;
    };

    struct _XkbIndicatorRec {
	unsigned long int phys_indicators;
	XkbIndicatorMapRec maps[32];
    };

    struct _XkbKeyNameRec {
	char name[4];
    };

    struct _XkbKeyAliasRec {
	char real[4];
	char alias[4];
    };

    struct _XkbNamesRec {
	Atom keycodes;
	Atom geometry;
	Atom symbols;
	Atom types;
	Atom compat;
	Atom vmods[16];
	Atom indicators[32];
	Atom groups[4];
	XkbKeyNamePtr keys;
	XkbKeyAliasPtr key_aliases;
	Atom *radio_groups;
	Atom phys_symbols;
	unsigned char num_keys;
	unsigned char num_key_aliases;
	unsigned short num_rg;
    };

    struct _XkbDesc {
	struct _XDisplay *dpy;
	unsigned short flags;
	unsigned short device_spec;
	KeyCode min_key_code;
	KeyCode max_key_code;
	XkbControlsPtr ctrls;
	XkbServerMapPtr server;
	XkbClientMapPtr map;
	XkbIndicatorPtr indicators;
	XkbNamesPtr names;
	XkbCompatMapPtr compat;
	XkbGeometryPtr geom;
    };

    struct _XkbMapChanges {
	unsigned short changed;
	KeyCode min_key_code;
	KeyCode max_key_code;
	unsigned char first_type;
	unsigned char num_types;
	KeyCode first_key_sym;
	unsigned char num_key_syms;
	KeyCode first_key_act;
	unsigned char num_key_acts;
	KeyCode first_key_behavior;
	unsigned char num_key_behaviors;
	KeyCode first_key_explicit;
	unsigned char num_key_explicit;
	KeyCode first_modmap_key;
	unsigned char num_modmap_keys;
	KeyCode first_vmodmap_key;
	unsigned char num_vmodmap_keys;
	unsigned char pad;
	unsigned short vmods;
    };

    struct _XkbControlsChanges {
	unsigned int changed_ctrls;
	unsigned int enabled_ctrls_changes;
	int num_groups_changed;
    };

    struct _XkbIndicatorChanges {
	unsigned int state_changes;
	unsigned int map_changes;
    };

    struct _XkbNameChanges {
	unsigned int changed;
	unsigned char first_type;
	unsigned char num_types;
	unsigned char first_lvl;
	unsigned char num_lvls;
	unsigned char num_aliases;
	unsigned char num_rg;
	unsigned char first_key;
	unsigned char num_keys;
	unsigned short changed_vmods;
	unsigned long int changed_indicators;
	unsigned char changed_groups;
    };

    struct _XkbCompatChanges {
	unsigned char changed_groups;
	unsigned short first_si;
	unsigned short num_si;
    };

    struct _XkbChanges {
	unsigned short device_spec;
	unsigned short state_changes;
	XkbMapChangesRec map;
	XkbControlsChangesRec ctrls;
	XkbIndicatorChangesRec indicators;
	XkbNameChangesRec names;
	XkbCompatChangesRec compat;
    };

    struct _XkbComponentNames {
	char *keymap;
	char *keycodes;
	char *types;
	char *compat;
	char *symbols;
	char *geometry;
    };

    struct _XkbComponentName {
	unsigned short flags;
	char *name;
    };

    struct _XkbComponentList {
	int num_keymaps;
	int num_keycodes;
	int num_types;
	int num_compat;
	int num_symbols;
	int num_geometry;
	XkbComponentNamePtr keymaps;
	XkbComponentNamePtr keycodes;
	XkbComponentNamePtr types;
	XkbComponentNamePtr compat;
	XkbComponentNamePtr symbols;
	XkbComponentNamePtr geometry;
    };

    struct _XkbDeviceLedInfo {
	unsigned short led_class;
	unsigned short led_id;
	unsigned int phys_indicators;
	unsigned int maps_present;
	unsigned int names_present;
	unsigned int state;
	Atom names[32];
	XkbIndicatorMapRec maps[32];
    };

    struct _XkbDeviceInfo {
	char *name;
	Atom type;
	unsigned short device_spec;
	int has_own_state;
	unsigned short supported;
	unsigned short unsupported;
	unsigned short num_btns;
	XkbAction *btn_acts;
	unsigned short sz_leds;
	unsigned short num_leds;
	unsigned short dflt_kbd_fb;
	unsigned short dflt_led_fb;
	XkbDeviceLedInfoPtr leds;
    };

    struct _XkbDeviceLedChanges {
	unsigned short led_class;
	unsigned short led_id;
	unsigned int defined;
	struct _XkbDeviceLedChanges *next;
    };

    struct _XkbDeviceChanges {
	unsigned int changed;
	unsigned short first_btn;
	unsigned short num_btns;
	XkbDeviceLedChangesRec leds;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
