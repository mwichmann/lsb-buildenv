#if (__LSB_VERSION__ >= 40 )
#ifndef _X11_EXTENSIONS_XKBPROTO_H_
#define _X11_EXTENSIONS_XKBPROTO_H_

#include <X11/Xmd.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XkbPaddedSize(n)	((((unsigned int)(n)+3) >> 2) << 2)
#define XkbSetMapAllFlags	(0x3)
#define XkbSetMapResizeTypes	(1L<<0)
#define XkbSetMapRecomputeActions	(1L<<1)
#define sz_xkbSetControlsReq	100
#define sz_xkbGetCompatMapReq	12
#define sz_xkbGetGeometryReq	12
#define sz_xkbGetIndicatorMapReq	12
#define sz_xkbGetKbdByNameReq	12
#define sz_xkbGetNamesReq	12
#define sz_xkbIndicatorMapWireDesc	12
#define sz_xkbSetDeviceInfoReq	12
#define sz_xkbSetIndicatorMapReq	12
#define sz_xkbGetDeviceInfoReq	16
#define sz_xkbGetNamedIndicatorReq	16
#define sz_xkbLatchLockStateReq	16
#define sz_xkbSelectEventsReq	16
#define sz_xkbSetCompatMapReq	16
#define sz_xkbSymInterpretWireDesc	16
#define sz_xkbAnyDoodadWireDesc	20
#define sz_xkbDeviceLedsWireDesc	20
#define sz_xkbDoodadWireDesc	20
#define sz_xkbIndicatorDoodadWireDesc	20
#define sz_xkbLogoDoodadWireDesc	20
#define sz_xkbSectionWireDesc	20
#define sz_xkbShapeDoodadWireDesc	20
#define sz_xkbTextDoodadWireDesc	20
#define sz_xkbSetDebuggingFlagsReq	24
#define sz_xkbBellReq	28
#define sz_xkbGetMapReq	28
#define sz_xkbPerClientFlagsReq	28
#define sz_xkbSetGeometryReq	28
#define sz_xkbSetNamesReq	28
#define sz_xkbAccessXNotify	32
#define sz_xkbActionMessage	32
#define sz_xkbAnyEvent	32
#define sz_xkbBellNotify	32
#define sz_xkbCompatMapNotify	32
#define sz_xkbControlsNotify	32
#define sz_xkbEvent	32
#define sz_xkbExtensionDeviceNotify	32
#define sz_xkbGetCompatMapReply	32
#define sz_xkbGetDeviceInfoReply	32
#define sz_xkbGetGeometryReply	32
#define sz_xkbGetIndicatorMapReply	32
#define sz_xkbGetIndicatorStateReply	32
#define sz_xkbGetKbdByNameReply	32
#define sz_xkbGetNamedIndicatorReply	32
#define sz_xkbGetNamesReply	32
#define sz_xkbGetStateReply	32
#define sz_xkbIndicatorNotify	32
#define sz_xkbListComponentsReply	32
#define sz_xkbMapNotify	32
#define sz_xkbNamesNotify	32
#define sz_xkbNewKeyboardNotify	32
#define sz_xkbPerClientFlagsReply	32
#define sz_xkbSetDebuggingFlagsReply	32
#define sz_xkbSetNamedIndicatorReq	32
#define sz_xkbStateNotify	32
#define sz_xkbUseExtensionReply	32
#define sz_xkbSetMapReq	36
#define sz_xkbBehaviorWireDesc	4
#define sz_xkbKTSetMapEntryWireDesc	4
#define sz_xkbModsWireDesc	4
#define sz_xkbOutlineWireDesc	4
#define sz_xkbOverlayRowWireDesc	4
#define sz_xkbPointWireDesc	4
#define sz_xkbVModMapWireDesc	4
#define sz_xkbGetMapReply	40
#define sz_xkbActionWireDesc	8
#define sz_xkbGetControlsReq	8
#define sz_xkbGetIndicatorStateReq	8
#define sz_xkbGetStateReq	8
#define sz_xkbKTMapEntryWireDesc	8
#define sz_xkbKeyTypeWireDesc	8
#define sz_xkbKeyWireDesc	8
#define sz_xkbListComponentsReq	8
#define sz_xkbOverlayKeyWireDesc	8
#define sz_xkbOverlayWireDesc	8
#define sz_xkbRowWireDesc	8
#define sz_xkbShapeWireDesc	8
#define sz_xkbSymMapWireDesc	8
#define sz_xkbUseExtensionReq	8
#define sz_xkbGetControlsReply	92


    typedef struct _xkbUseExtension xkbUseExtensionReq;

    typedef struct _xkbUseExtensionReply xkbUseExtensionReply;

    typedef struct _xkbSelectEvents xkbSelectEventsReq;

    typedef struct _xkbBell xkbBellReq;

    typedef struct _xkbGetState xkbGetStateReq;

    typedef struct _xkbGetStateReply xkbGetStateReply;

    typedef struct _xkbLatchLockState xkbLatchLockStateReq;

    typedef struct _xkbGetControls xkbGetControlsReq;

    typedef struct _xkbGetControlsReply xkbGetControlsReply;

    typedef struct _xkbSetControls xkbSetControlsReq;

    typedef struct _xkbKTMapEntryWireDesc xkbKTMapEntryWireDesc;

    typedef struct _xkbKTSetMapEntryWireDesc xkbKTSetMapEntryWireDesc;

    typedef struct _xkbModsWireDesc xkbModsWireDesc;

    typedef struct _xkbKeyTypeWireDesc xkbKeyTypeWireDesc;

    typedef struct _xkbSymMapWireDesc xkbSymMapWireDesc;

    typedef struct _xkbVModMapWireDesc xkbVModMapWireDesc;

    typedef struct _xkbBehaviorWireDesc xkbBehaviorWireDesc;

    typedef struct _xkbActionWireDesc xkbActionWireDesc;

    typedef struct _xkbGetMap xkbGetMapReq;

    typedef struct _xkbGetMapReply xkbGetMapReply;

    typedef struct _xkbSetMap xkbSetMapReq;

    typedef struct _xkbSymInterpretWireDesc xkbSymInterpretWireDesc;

    typedef struct _xkbGetCompatMap xkbGetCompatMapReq;

    typedef struct _xkbGetCompatMapReply xkbGetCompatMapReply;

    typedef struct _xkbSetCompatMap xkbSetCompatMapReq;

    typedef struct _xkbGetIndicatorState xkbGetIndicatorStateReq;

    typedef struct _xkbGetIndicatorStateReply xkbGetIndicatorStateReply;

    typedef struct _xkbGetIndicatorMap xkbGetIndicatorMapReq;

    typedef struct _xkbGetIndicatorMapReply xkbGetIndicatorMapReply;

    typedef struct _xkbIndicatorMapWireDesc xkbIndicatorMapWireDesc;

    typedef struct _xkbSetIndicatorMap xkbSetIndicatorMapReq;

    typedef struct _xkbGetNamedIndicator xkbGetNamedIndicatorReq;

    typedef struct _xkbGetNamedIndicatorReply xkbGetNamedIndicatorReply;

    typedef struct _xkbSetNamedIndicator xkbSetNamedIndicatorReq;

    typedef struct _xkbGetNames xkbGetNamesReq;

    typedef struct _xkbGetNamesReply xkbGetNamesReply;

    typedef struct _xkbSetNames xkbSetNamesReq;

    typedef struct _xkbPointWireDesc xkbPointWireDesc;

    typedef struct _xkbOutlineWireDesc xkbOutlineWireDesc;

    typedef struct _xkbShapeWireDesc xkbShapeWireDesc;

    typedef struct _xkbSectionWireDesc xkbSectionWireDesc;

    typedef struct _xkbRowWireDesc xkbRowWireDesc;

    typedef struct _xkbKeyWireDesc xkbKeyWireDesc;

    typedef struct _xkbOverlayWireDesc xkbOverlayWireDesc;

    typedef struct _xkbOverlayRowWireDesc xkbOverlayRowWireDesc;

    typedef struct _xkbOverlayKeyWireDesc xkbOverlayKeyWireDesc;

    typedef struct _xkbShapeDoodadWireDesc xkbShapeDoodadWireDesc;

    typedef struct _xkbTextDoodadWireDesc xkbTextDoodadWireDesc;

    typedef struct _xkbIndicatorDoodadWireDesc xkbIndicatorDoodadWireDesc;

    typedef struct _xkbLogoDoodadWireDesc xkbLogoDoodadWireDesc;

    typedef struct _xkbAnyDoodadWireDesc xkbAnyDoodadWireDesc;

    typedef union _xkbDoodadWireDesc xkbDoodadWireDesc;

    typedef struct _xkbGetGeometry xkbGetGeometryReq;

    typedef struct _xkbGetGeometryReply xkbGetGeometryReply;

    typedef struct _xkbSetGeometry xkbSetGeometryReq;

    typedef struct _xkbPerClientFlags xkbPerClientFlagsReq;

    typedef struct _xkbPerClientFlagsReply xkbPerClientFlagsReply;

    typedef struct _xkbListComponents xkbListComponentsReq;

    typedef struct _xkbListComponentsReply xkbListComponentsReply;

    typedef struct _xkbGetKbdByName xkbGetKbdByNameReq;

    typedef struct _xkbGetKbdByNameReply xkbGetKbdByNameReply;

    typedef struct _xkbDeviceLedsWireDesc xkbDeviceLedsWireDesc;

    typedef struct _xkbGetDeviceInfo xkbGetDeviceInfoReq;

    typedef struct _xkbGetDeviceInfoReply xkbGetDeviceInfoReply;

    typedef struct _xkbSetDeviceInfo xkbSetDeviceInfoReq;

    typedef struct _xkbSetDebuggingFlags xkbSetDebuggingFlagsReq;

    typedef struct _xkbSetDebuggingFlagsReply xkbSetDebuggingFlagsReply;

    typedef struct _xkbAnyEvent xkbAnyEvent;

    typedef struct _xkbNewKeyboardNotify xkbNewKeyboardNotify;

    typedef struct _xkbMapNotify xkbMapNotify;

    typedef struct _xkbStateNotify xkbStateNotify;

    typedef struct _xkbControlsNotify xkbControlsNotify;

    typedef struct _xkbIndicatorNotify xkbIndicatorNotify;

    typedef struct _xkbNamesNotify xkbNamesNotify;

    typedef struct _xkbCompatMapNotify xkbCompatMapNotify;

    typedef struct _xkbBellNotify xkbBellNotify;

    typedef struct _xkbActionMessage xkbActionMessage;

    typedef struct _xkbAccessXNotify xkbAccessXNotify;

    typedef struct _xkbExtensionDeviceNotify xkbExtensionDeviceNotify;

    typedef struct _xkbEvent xkbEvent;

    struct _xkbUseExtension {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 wantedMajor;
	CARD16 wantedMinor;
    };

    struct _xkbUseExtensionReply {
	BYTE type;
	BOOL supported;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 serverMajor;
	CARD16 serverMinor;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    };

    struct _xkbSelectEvents {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 affectWhich;
	CARD16 clear;
	CARD16 selectAll;
	CARD16 affectMap;
	CARD16 map;
    };

    struct _xkbBell {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 bellClass;
	CARD16 bellID;
	INT8 percent;
	BOOL forceSound;
	BOOL eventOnly;
	CARD8 pad1;
	INT16 pitch;
	INT16 duration;
	CARD16 pad2;
	CARD32 name;
	CARD32 window;
    };

    struct _xkbGetState {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 pad;
    };

    struct _xkbGetStateReply {
	BYTE type;
	BYTE deviceID;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 mods;
	CARD8 baseMods;
	CARD8 latchedMods;
	CARD8 lockedMods;
	CARD8 group;
	CARD8 lockedGroup;
	INT16 baseGroup;
	INT16 latchedGroup;
	CARD8 compatState;
	CARD8 grabMods;
	CARD8 compatGrabMods;
	CARD8 lookupMods;
	CARD8 compatLookupMods;
	CARD8 pad1;
	CARD16 ptrBtnState;
	CARD16 pad2;
	CARD32 pad3;
    };

    struct _xkbLatchLockState {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD8 affectModLocks;
	CARD8 modLocks;
	BOOL lockGroup;
	CARD8 groupLock;
	CARD8 affectModLatches;
	CARD8 modLatches;
	CARD8 pad;
	BOOL latchGroup;
	INT16 groupLatch;
    };

    struct _xkbGetControls {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 pad;
    };

    struct _xkbGetControlsReply {
	BYTE type;
	CARD8 deviceID;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 mkDfltBtn;
	CARD8 numGroups;
	CARD8 groupsWrap;
	CARD8 internalMods;
	CARD8 ignoreLockMods;
	CARD8 internalRealMods;
	CARD8 ignoreLockRealMods;
	CARD8 pad1;
	CARD16 internalVMods;
	CARD16 ignoreLockVMods;
	CARD16 repeatDelay;
	CARD16 repeatInterval;
	CARD16 slowKeysDelay;
	CARD16 debounceDelay;
	CARD16 mkDelay;
	CARD16 mkInterval;
	CARD16 mkTimeToMax;
	CARD16 mkMaxSpeed;
	INT16 mkCurve;
	CARD16 axOptions;
	CARD16 axTimeout;
	CARD16 axtOptsMask;
	CARD16 axtOptsValues;
	CARD16 pad2;
	CARD32 axtCtrlsMask;
	CARD32 axtCtrlsValues;
	CARD32 enabledCtrls;
	BYTE perKeyRepeat[32];
    };

    struct _xkbSetControls {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD8 affectInternalMods;
	CARD8 internalMods;
	CARD8 affectIgnoreLockMods;
	CARD8 ignoreLockMods;
	CARD16 affectInternalVMods;
	CARD16 internalVMods;
	CARD16 affectIgnoreLockVMods;
	CARD16 ignoreLockVMods;
	CARD8 mkDfltBtn;
	CARD8 groupsWrap;
	CARD16 axOptions;
	CARD16 pad1;
	CARD32 affectEnabledCtrls;
	CARD32 enabledCtrls;
	CARD32 changeCtrls;
	CARD16 repeatDelay;
	CARD16 repeatInterval;
	CARD16 slowKeysDelay;
	CARD16 debounceDelay;
	CARD16 mkDelay;
	CARD16 mkInterval;
	CARD16 mkTimeToMax;
	CARD16 mkMaxSpeed;
	INT16 mkCurve;
	CARD16 axTimeout;
	CARD32 axtCtrlsMask;
	CARD32 axtCtrlsValues;
	CARD16 axtOptsMask;
	CARD16 axtOptsValues;
	BYTE perKeyRepeat[32];
    };

    struct _xkbKTMapEntryWireDesc {
	BOOL active;
	CARD8 mask;
	CARD8 level;
	CARD8 realMods;
	CARD16 virtualMods;
	CARD16 pad;
    };

    struct _xkbKTSetMapEntryWireDesc {
	CARD8 level;
	CARD8 realMods;
	CARD16 virtualMods;
    };

    struct _xkbModsWireDesc {
	CARD8 mask;
	CARD8 realMods;
	CARD16 virtualMods;
    };

    struct _xkbKeyTypeWireDesc {
	CARD8 mask;
	CARD8 realMods;
	CARD16 virtualMods;
	CARD8 numLevels;
	CARD8 nMapEntries;
	BOOL preserve;
	CARD8 pad;
    };

    struct _xkbSymMapWireDesc {
	CARD8 ktIndex[4];
	CARD8 groupInfo;
	CARD8 width;
	CARD16 nSyms;
    };

    struct _xkbVModMapWireDesc {
	CARD8 key;
	CARD8 pad;
	CARD16 vmods;
    };

    struct _xkbBehaviorWireDesc {
	CARD8 key;
	CARD8 type;
	CARD8 data;
	CARD8 pad;
    };

    struct _xkbActionWireDesc {
	CARD8 type;
	CARD8 data[7];
    };

    struct _xkbGetMap {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 full;
	CARD16 partial;
	CARD8 firstType;
	CARD8 nTypes;
	CARD8 firstKeySym;
	CARD8 nKeySyms;
	CARD8 firstKeyAct;
	CARD8 nKeyActs;
	CARD8 firstKeyBehavior;
	CARD8 nKeyBehaviors;
	CARD16 virtualMods;
	CARD8 firstKeyExplicit;
	CARD8 nKeyExplicit;
	CARD8 firstModMapKey;
	CARD8 nModMapKeys;
	CARD8 firstVModMapKey;
	CARD8 nVModMapKeys;
	CARD16 pad1;
    };

    struct _xkbGetMapReply {
	CARD8 type;
	CARD8 deviceID;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 pad1;
	CARD8 minKeyCode;
	CARD8 maxKeyCode;
	CARD16 present;
	CARD8 firstType;
	CARD8 nTypes;
	CARD8 totalTypes;
	CARD8 firstKeySym;
	CARD16 totalSyms;
	CARD8 nKeySyms;
	CARD8 firstKeyAct;
	CARD16 totalActs;
	CARD8 nKeyActs;
	CARD8 firstKeyBehavior;
	CARD8 nKeyBehaviors;
	CARD8 totalKeyBehaviors;
	CARD8 firstKeyExplicit;
	CARD8 nKeyExplicit;
	CARD8 totalKeyExplicit;
	CARD8 firstModMapKey;
	CARD8 nModMapKeys;
	CARD8 totalModMapKeys;
	CARD8 firstVModMapKey;
	CARD8 nVModMapKeys;
	CARD8 totalVModMapKeys;
	CARD8 pad2;
	CARD16 virtualMods;
    };

    struct _xkbSetMap {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 present;
	CARD16 flags;
	CARD8 minKeyCode;
	CARD8 maxKeyCode;
	CARD8 firstType;
	CARD8 nTypes;
	CARD8 firstKeySym;
	CARD8 nKeySyms;
	CARD16 totalSyms;
	CARD8 firstKeyAct;
	CARD8 nKeyActs;
	CARD16 totalActs;
	CARD8 firstKeyBehavior;
	CARD8 nKeyBehaviors;
	CARD8 totalKeyBehaviors;
	CARD8 firstKeyExplicit;
	CARD8 nKeyExplicit;
	CARD8 totalKeyExplicit;
	CARD8 firstModMapKey;
	CARD8 nModMapKeys;
	CARD8 totalModMapKeys;
	CARD8 firstVModMapKey;
	CARD8 nVModMapKeys;
	CARD8 totalVModMapKeys;
	CARD16 virtualMods;
    };

    struct _xkbSymInterpretWireDesc {
	CARD32 sym;
	CARD8 mods;
	CARD8 match;
	CARD8 virtualMod;
	CARD8 flags;
	xkbActionWireDesc act;
    };

    struct _xkbGetCompatMap {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD8 groups;
	BOOL getAllSI;
	CARD16 firstSI;
	CARD16 nSI;
    };

    struct _xkbGetCompatMapReply {
	CARD8 type;
	CARD8 deviceID;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 groups;
	CARD8 pad1;
	CARD16 firstSI;
	CARD16 nSI;
	CARD16 nTotalSI;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    };

    struct _xkbSetCompatMap {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD8 pad1;
	BOOL recomputeActions;
	BOOL truncateSI;
	CARD8 groups;
	CARD16 firstSI;
	CARD16 nSI;
	CARD16 pad2;
    };

    struct _xkbGetIndicatorState {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 pad1;
    };

    struct _xkbGetIndicatorStateReply {
	CARD8 type;
	CARD8 deviceID;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 state;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    };

    struct _xkbGetIndicatorMap {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 pad;
	CARD32 which;
    };

    struct _xkbGetIndicatorMapReply {
	CARD8 type;
	CARD8 deviceID;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 which;
	CARD32 realIndicators;
	CARD8 nIndicators;
	CARD8 pad1;
	CARD16 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    };

    struct _xkbIndicatorMapWireDesc {
	CARD8 flags;
	CARD8 whichGroups;
	CARD8 groups;
	CARD8 whichMods;
	CARD8 mods;
	CARD8 realMods;
	CARD16 virtualMods;
	CARD32 ctrls;
    };

    struct _xkbSetIndicatorMap {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 pad1;
	CARD32 which;
    };

    struct _xkbGetNamedIndicator {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 ledClass;
	CARD16 ledID;
	CARD16 pad1;
	CARD32 indicator;
    };

    struct _xkbGetNamedIndicatorReply {
	BYTE type;
	BYTE deviceID;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 indicator;
	BOOL found;
	BOOL on;
	BOOL realIndicator;
	CARD8 ndx;
	CARD8 flags;
	CARD8 whichGroups;
	CARD8 groups;
	CARD8 whichMods;
	CARD8 mods;
	CARD8 realMods;
	CARD16 virtualMods;
	CARD32 ctrls;
	BOOL supported;
	CARD8 pad1;
	CARD16 pad2;
    };

    struct _xkbSetNamedIndicator {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 ledClass;
	CARD16 ledID;
	CARD16 pad1;
	CARD32 indicator;
	BOOL setState;
	BOOL on;
	BOOL setMap;
	BOOL createMap;
	CARD8 pad2;
	CARD8 flags;
	CARD8 whichGroups;
	CARD8 groups;
	CARD8 whichMods;
	CARD8 realMods;
	CARD16 virtualMods;
	CARD32 ctrls;
    };

    struct _xkbGetNames {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 pad;
	CARD32 which;
    };

    struct _xkbGetNamesReply {
	BYTE type;
	BYTE deviceID;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 which;
	CARD8 minKeyCode;
	CARD8 maxKeyCode;
	CARD8 nTypes;
	CARD8 groupNames;
	CARD16 virtualMods;
	CARD8 firstKey;
	CARD8 nKeys;
	CARD32 indicators;
	CARD8 nRadioGroups;
	CARD8 nKeyAliases;
	CARD16 nKTLevels;
	CARD32 pad3;
    };

    struct _xkbSetNames {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 virtualMods;
	CARD32 which;
	CARD8 firstType;
	CARD8 nTypes;
	CARD8 firstKTLevel;
	CARD8 nKTLevels;
	CARD32 indicators;
	CARD8 groupNames;
	CARD8 nRadioGroups;
	CARD8 firstKey;
	CARD8 nKeys;
	CARD8 nKeyAliases;
	CARD8 pad1;
	CARD16 totalKTLevelNames;
    };

    struct _xkbPointWireDesc {
	INT16 x;
	INT16 y;
    };

    struct _xkbOutlineWireDesc {
	CARD8 nPoints;
	CARD8 cornerRadius;
	CARD16 pad;
    };

    struct _xkbShapeWireDesc {
	CARD32 name;
	CARD8 nOutlines;
	CARD8 primaryNdx;
	CARD8 approxNdx;
	CARD8 pad;
    };

    struct _xkbSectionWireDesc {
	CARD32 name;
	INT16 top;
	INT16 left;
	CARD16 width;
	CARD16 height;
	INT16 angle;
	CARD8 priority;
	CARD8 nRows;
	CARD8 nDoodads;
	CARD8 nOverlays;
	CARD16 pad;
    };

    struct _xkbRowWireDesc {
	INT16 top;
	INT16 left;
	CARD8 nKeys;
	BOOL vertical;
	CARD16 pad;
    };

    struct _xkbKeyWireDesc {
	CARD8 name[4];
	INT16 gap;
	CARD8 shapeNdx;
	CARD8 colorNdx;
    };

    struct _xkbOverlayWireDesc {
	CARD32 name;
	CARD8 nRows;
	CARD8 pad1;
	CARD16 pad2;
    };

    struct _xkbOverlayRowWireDesc {
	CARD8 rowUnder;
	CARD8 nKeys;
	CARD16 pad1;
    };

    struct _xkbOverlayKeyWireDesc {
	CARD8 over[4];
	CARD8 under[4];
    };

    struct _xkbShapeDoodadWireDesc {
	CARD32 name;
	CARD8 type;
	CARD8 priority;
	INT16 top;
	INT16 left;
	INT16 angle;
	CARD8 colorNdx;
	CARD8 shapeNdx;
	CARD16 pad1;
	CARD32 pad2;
    };

    struct _xkbTextDoodadWireDesc {
	CARD32 name;
	CARD8 type;
	CARD8 priority;
	INT16 top;
	INT16 left;
	INT16 angle;
	CARD16 width;
	CARD16 height;
	CARD8 colorNdx;
	CARD8 pad1;
	CARD16 pad2;
    };

    struct _xkbIndicatorDoodadWireDesc {
	CARD32 name;
	CARD8 type;
	CARD8 priority;
	INT16 top;
	INT16 left;
	INT16 angle;
	CARD8 shapeNdx;
	CARD8 onColorNdx;
	CARD8 offColorNdx;
	CARD8 pad1;
	CARD32 pad2;
    };

    struct _xkbLogoDoodadWireDesc {
	CARD32 name;
	CARD8 type;
	CARD8 priority;
	INT16 top;
	INT16 left;
	INT16 angle;
	CARD8 colorNdx;
	CARD8 shapeNdx;
	CARD16 pad1;
	CARD32 pad2;
    };

    struct _xkbAnyDoodadWireDesc {
	CARD32 name;
	CARD8 type;
	CARD8 priority;
	INT16 top;
	INT16 left;
	INT16 angle;
	CARD32 pad2;
	CARD32 pad3;
    };

    union _xkbDoodadWireDesc {
	xkbAnyDoodadWireDesc any;
	xkbShapeDoodadWireDesc shape;
	xkbTextDoodadWireDesc text;
	xkbIndicatorDoodadWireDesc indicator;
	xkbLogoDoodadWireDesc logo;
    };

    struct _xkbGetGeometry {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 pad;
	CARD32 name;
    };

    struct _xkbGetGeometryReply {
	CARD8 type;
	CARD8 deviceID;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 name;
	BOOL found;
	CARD8 pad;
	CARD16 widthMM;
	CARD16 heightMM;
	CARD16 nProperties;
	CARD16 nColors;
	CARD16 nShapes;
	CARD16 nSections;
	CARD16 nDoodads;
	CARD16 nKeyAliases;
	CARD8 baseColorNdx;
	CARD8 labelColorNdx;
    };

    struct _xkbSetGeometry {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD8 nShapes;
	CARD8 nSections;
	CARD32 name;
	CARD16 widthMM;
	CARD16 heightMM;
	CARD16 nProperties;
	CARD16 nColors;
	CARD16 nDoodads;
	CARD16 nKeyAliases;
	CARD8 baseColorNdx;
	CARD8 labelColorNdx;
	CARD16 pad;
    };

    struct _xkbPerClientFlags {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 pad1;
	CARD32 change;
	CARD32 value;
	CARD32 ctrlsToChange;
	CARD32 autoCtrls;
	CARD32 autoCtrlValues;
    };

    struct _xkbPerClientFlagsReply {
	CARD8 type;
	CARD8 deviceID;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 supported;
	CARD32 value;
	CARD32 autoCtrls;
	CARD32 autoCtrlValues;
	CARD32 pad1;
	CARD32 pad2;
    };

    struct _xkbListComponents {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 maxNames;
    };

    struct _xkbListComponentsReply {
	CARD8 type;
	CARD8 deviceID;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 nKeymaps;
	CARD16 nKeycodes;
	CARD16 nTypes;
	CARD16 nCompatMaps;
	CARD16 nSymbols;
	CARD16 nGeometries;
	CARD16 extra;
	CARD16 pad1;
	CARD32 pad2;
	CARD32 pad3;
    };

    struct _xkbGetKbdByName {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 need;
	CARD16 want;
	BOOL load;
	CARD8 pad;
    };

    struct _xkbGetKbdByNameReply {
	CARD8 type;
	CARD8 deviceID;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 minKeyCode;
	CARD8 maxKeyCode;
	BOOL loaded;
	BOOL newKeyboard;
	CARD16 found;
	CARD16 reported;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
    };

    struct _xkbDeviceLedsWireDesc {
	CARD16 ledClass;
	CARD16 ledID;
	CARD32 namesPresent;
	CARD32 mapsPresent;
	CARD32 physIndicators;
	CARD32 state;
    };

    struct _xkbGetDeviceInfo {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD16 wanted;
	BOOL allBtns;
	CARD8 firstBtn;
	CARD8 nBtns;
	CARD8 pad;
	CARD16 ledClass;
	CARD16 ledID;
    };

    struct _xkbGetDeviceInfoReply {
	CARD8 type;
	CARD8 deviceID;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 present;
	CARD16 supported;
	CARD16 unsupported;
	CARD16 nDeviceLedFBs;
	CARD8 firstBtnWanted;
	CARD8 nBtnsWanted;
	CARD8 firstBtnRtrn;
	CARD8 nBtnsRtrn;
	CARD8 totalBtns;
	BOOL hasOwnState;
	CARD16 dfltKbdFB;
	CARD16 dfltLedFB;
	CARD16 pad;
	CARD32 devType;
    };

    struct _xkbSetDeviceInfo {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 deviceSpec;
	CARD8 firstBtn;
	CARD8 nBtns;
	CARD16 change;
	CARD16 nDeviceLedFBs;
    };

    struct _xkbSetDebuggingFlags {
	CARD8 reqType;
	CARD8 xkbReqType;
	CARD16 length;
	CARD16 msgLength;
	CARD16 pad;
	CARD32 affectFlags;
	CARD32 flags;
	CARD32 affectCtrls;
	CARD32 ctrls;
    };

    struct _xkbSetDebuggingFlagsReply {
	BYTE type;
	CARD8 pad0;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 currentFlags;
	CARD32 currentCtrls;
	CARD32 supportedFlags;
	CARD32 supportedCtrls;
	CARD32 pad1;
	CARD32 pad2;
    };

    struct _xkbAnyEvent {
	BYTE type;
	BYTE xkbType;
	CARD16 sequenceNumber;
	CARD32 time;
	CARD8 deviceID;
	CARD8 pad1;
	CARD16 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
	CARD32 pad7;
    };

    struct _xkbNewKeyboardNotify {
	BYTE type;
	BYTE xkbType;
	CARD16 sequenceNumber;
	CARD32 time;
	CARD8 deviceID;
	CARD8 oldDeviceID;
	CARD8 minKeyCode;
	CARD8 maxKeyCode;
	CARD8 oldMinKeyCode;
	CARD8 oldMaxKeyCode;
	CARD8 requestMajor;
	CARD8 requestMinor;
	CARD16 changed;
	CARD8 detail;
	CARD8 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
    };

    struct _xkbMapNotify {
	BYTE type;
	BYTE xkbType;
	CARD16 sequenceNumber;
	CARD32 time;
	CARD8 deviceID;
	CARD8 ptrBtnActions;
	CARD16 changed;
	CARD8 minKeyCode;
	CARD8 maxKeyCode;
	CARD8 firstType;
	CARD8 nTypes;
	CARD8 firstKeySym;
	CARD8 nKeySyms;
	CARD8 firstKeyAct;
	CARD8 nKeyActs;
	CARD8 firstKeyBehavior;
	CARD8 nKeyBehaviors;
	CARD8 firstKeyExplicit;
	CARD8 nKeyExplicit;
	CARD8 firstModMapKey;
	CARD8 nModMapKeys;
	CARD8 firstVModMapKey;
	CARD8 nVModMapKeys;
	CARD16 virtualMods;
	CARD16 pad1;
    };

    struct _xkbStateNotify {
	BYTE type;
	BYTE xkbType;
	CARD16 sequenceNumber;
	CARD32 time;
	CARD8 deviceID;
	CARD8 mods;
	CARD8 baseMods;
	CARD8 latchedMods;
	CARD8 lockedMods;
	CARD8 group;
	INT16 baseGroup;
	INT16 latchedGroup;
	CARD8 lockedGroup;
	CARD8 compatState;
	CARD8 grabMods;
	CARD8 compatGrabMods;
	CARD8 lookupMods;
	CARD8 compatLookupMods;
	CARD16 ptrBtnState;
	CARD16 changed;
	CARD8 keycode;
	CARD8 eventType;
	CARD8 requestMajor;
	CARD8 requestMinor;
    };

    struct _xkbControlsNotify {
	BYTE type;
	BYTE xkbType;
	CARD16 sequenceNumber;
	CARD32 time;
	CARD8 deviceID;
	CARD8 numGroups;
	CARD16 pad1;
	CARD32 changedControls;
	CARD32 enabledControls;
	CARD32 enabledControlChanges;
	CARD8 keycode;
	CARD8 eventType;
	CARD8 requestMajor;
	CARD8 requestMinor;
	CARD32 pad2;
    };

    struct _xkbIndicatorNotify {
	BYTE type;
	BYTE xkbType;
	CARD16 sequenceNumber;
	CARD32 time;
	CARD8 deviceID;
	CARD8 pad1;
	CARD16 pad2;
	CARD32 state;
	CARD32 changed;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
    };

    struct _xkbNamesNotify {
	BYTE type;
	BYTE xkbType;
	CARD16 sequenceNumber;
	CARD32 time;
	CARD8 deviceID;
	CARD8 pad1;
	CARD16 changed;
	CARD8 firstType;
	CARD8 nTypes;
	CARD8 firstLevelName;
	CARD8 nLevelNames;
	CARD8 pad2;
	CARD8 nRadioGroups;
	CARD8 nAliases;
	CARD8 changedGroupNames;
	CARD16 changedVirtualMods;
	CARD8 firstKey;
	CARD8 nKeys;
	CARD32 changedIndicators;
	CARD32 pad3;
    };

    struct _xkbCompatMapNotify {
	BYTE type;
	BYTE xkbType;
	CARD16 sequenceNumber;
	CARD32 time;
	CARD8 deviceID;
	CARD8 changedGroups;
	CARD16 firstSI;
	CARD16 nSI;
	CARD16 nTotalSI;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
    };

    struct _xkbBellNotify {
	BYTE type;
	BYTE xkbType;
	CARD16 sequenceNumber;
	CARD32 time;
	CARD8 deviceID;
	CARD8 bellClass;
	CARD8 bellID;
	CARD8 percent;
	CARD16 pitch;
	CARD16 duration;
	CARD32 name;
	CARD32 window;
	BOOL eventOnly;
	CARD8 pad1;
	CARD16 pad2;
	CARD32 pad3;
    };

    struct _xkbActionMessage {
	BYTE type;
	BYTE xkbType;
	CARD16 sequenceNumber;
	CARD32 time;
	CARD8 deviceID;
	CARD8 keycode;
	BOOL press;
	BOOL keyEventFollows;
	CARD8 mods;
	CARD8 group;
	CARD8 message[8];
	CARD16 pad1;
	CARD32 pad2;
	CARD32 pad3;
    };

    struct _xkbAccessXNotify {
	BYTE type;
	BYTE xkbType;
	CARD16 sequenceNumber;
	CARD32 time;
	CARD8 deviceID;
	CARD8 keycode;
	CARD16 detail;
	CARD16 slowKeysDelay;
	CARD16 debounceDelay;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
    };

    struct _xkbExtensionDeviceNotify {
	BYTE type;
	BYTE xkbType;
	CARD16 sequenceNumber;
	CARD32 time;
	CARD8 deviceID;
	CARD8 pad1;
	CARD16 reason;
	CARD16 ledClass;
	CARD16 ledID;
	CARD32 ledsDefined;
	CARD32 ledState;
	CARD8 firstBtn;
	CARD8 nBtns;
	CARD16 supported;
	CARD16 unsupported;
	CARD16 pad3;
    };

    struct _xkbEvent {
	union {
	    xkbAnyEvent any;
	    xkbNewKeyboardNotify new_kbd;
	    xkbMapNotify map;
	    xkbStateNotify state;
	    xkbControlsNotify ctrls;
	    xkbIndicatorNotify indicators;
	    xkbNamesNotify names;
	    xkbCompatMapNotify compat;
	    xkbBellNotify bell;
	    xkbActionMessage message;
	    xkbAccessXNotify accessx;
	    xkbExtensionDeviceNotify device;
	} u;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
