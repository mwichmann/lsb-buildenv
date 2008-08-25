#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_EXTENSIONS_XIPROTO_H_
#define _X11_EXTENSIONS_XIPROTO_H_

#include <X11/X.h>
#include <X11/Xmd.h>
#include <X11/Xproto.h>

#ifdef __cplusplus
extern "C" {
#endif


#define XI_DeviceValuator
#define InputClassBits	0x3F
#define DEVICE_BITS	0x7F
#define MORE_EVENTS	0x80
#define CLIENT_REQ	1
#define XI_DeviceKeyPress	1
#define X_GetExtensionVersion	1
#define XI_DeviceStateNotify	10
#define X_GetDeviceMotionEvents	10
#define XI_DeviceMappingNotify	11
#define X_ChangeKeyboardDevice	11
#define XI_ChangeDeviceNotify	12
#define X_ChangePointerDevice	12
#define XI_DeviceKeystateNotify	13
#define X_GrabDevice	13
#define XI_DeviceButtonstateNotify	14
#define X_UngrabDevice	14
#define XI_DevicePresenceNotify	15
#define X_GrabDeviceKey	15
#define IEVENTS	16
#define X_UngrabDeviceKey	16
#define X_GrabDeviceButton	17
#define X_UngrabDeviceButton	18
#define X_AllowDeviceEvents	19
#define XI_DeviceKeyRelease	2
#define X_ListInputDevices	2
#define X_GetDeviceFocus	20
#define X_SetDeviceFocus	21
#define X_GetFeedbackControl	22
#define X_ChangeFeedbackControl	23
#define X_GetDeviceKeyMapping	24
#define X_ChangeDeviceKeyMapping	25
#define X_GetDeviceModifierMapping	26
#define X_SetDeviceModifierMapping	27
#define X_GetDeviceButtonMapping	28
#define X_SetDeviceButtonMapping	29
#define XI_DeviceButtonPress	3
#define X_OpenDevice	3
#define X_QueryDeviceState	30
#define X_SendExtensionEvent	31
#define X_DeviceBell	32
#define X_SetDeviceValuators	33
#define X_GetDeviceControl	34
#define X_ChangeDeviceControl	35
#define XI_DeviceButtonRelease	4
#define X_CloseDevice	4
#define IERRORS	5
#define XI_DeviceMotionNotify	5
#define X_SetDeviceMode	5
#define ModeBitsShift	6
#define XI_DeviceFocusIn	6
#define X_SelectExtensionEvent	6
#define XI_DeviceFocusOut	7
#define X_GetSelectedExtensionEvents	7
#define numInputClasses	7
#define XI_ProximityIn	8
#define X_ChangeDeviceDontPropagateList	8
#define XI_ProximityOut	9
#define X_GetDeviceDontPropagateList	9


#if __LSB_VERSION__ >= 30
    typedef struct _XExtEventInfo XExtEventInfo;

    typedef unsigned char *Pointer;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD16 nbytes;
	CARD8 pad1;
	CARD8 pad2;
    } xGetExtensionVersionReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 major_version;
	CARD16 minor_version;
	BOOL present;
	CARD8 pad1;
	CARD8 pad2;
	CARD8 pad3;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
    } xGetExtensionVersionReply;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
    } xListInputDevicesReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 ndevices;
	CARD8 pad1;
	CARD8 pad2;
	CARD8 pad3;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
	CARD32 pad05;
    } xListInputDevicesReply;

    typedef struct _xDeviceInfo *xDeviceInfoPtr;

    typedef struct _xAnyClassinfo *xAnyClassPtr;

    typedef struct _xAnyClassinfo xAnyClassInfo;

    typedef struct _xDeviceInfo xDeviceInfo;

    typedef struct _xKeyInfo *xKeyInfoPtr;

    typedef struct _xKeyInfo xKeyInfo;

    typedef struct _xButtonInfo *xButtonInfoPtr;

    typedef struct _xButtonInfo xButtonInfo;

    typedef struct _xValuatorInfo *xValuatorInfoPtr;

    typedef struct _xValuatorInfo xValuatorInfo;

    typedef struct _xAxisInfo *xAxisInfoPtr;

    typedef struct _xAxisInfo xAxisInfo;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD8 deviceid;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
    } xOpenDeviceReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 num_classes;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
	CARD32 pad00;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
    } xOpenDeviceReply;

    typedef struct {
	CARD8 c_class;
	CARD8 event_type_base;
    } xInputClassInfo;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD8 deviceid;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
    } xCloseDeviceReq;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD8 deviceid;
	CARD8 mode;
	BYTE pad1;
	BYTE pad2;
    } xSetDeviceModeReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 status;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
	CARD32 pad05;
    } xSetDeviceModeReply;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD32 window;
	CARD16 count;
	CARD16 pad00;
    } xSelectExtensionEventReq;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD32 window;
    } xGetSelectedExtensionEventsReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 this_client_count;
	CARD16 all_clients_count;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
	CARD32 pad05;
    } xGetSelectedExtensionEventsReply;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD32 window;
	CARD16 count;
	CARD8 mode;
	BYTE pad;
    } xChangeDeviceDontPropagateListReq;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD32 window;
    } xGetDeviceDontPropagateListReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 count;
	CARD16 pad00;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
	CARD32 pad05;
    } xGetDeviceDontPropagateListReply;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD32 start;
	CARD32 stop;
	CARD8 deviceid;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
    } xGetDeviceMotionEventsReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 nEvents;
	CARD8 axes;
	CARD8 mode;
	BYTE pad1;
	BYTE pad2;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
    } xGetDeviceMotionEventsReply;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD8 deviceid;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
    } xChangeKeyboardDeviceReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 status;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
	CARD32 pad05;
    } xChangeKeyboardDeviceReply;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD8 xaxis;
	CARD8 yaxis;
	CARD8 deviceid;
	BYTE pad1;
    } xChangePointerDeviceReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 status;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
	CARD32 pad05;
    } xChangePointerDeviceReply;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD32 grabWindow;
	CARD32 time;
	CARD16 event_count;
	CARD8 this_device_mode;
	CARD8 other_devices_mode;
	BOOL ownerEvents;
	CARD8 deviceid;
	CARD16 pad01;
    } xGrabDeviceReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 status;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
	CARD32 pad05;
    } xGrabDeviceReply;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD32 time;
	CARD8 deviceid;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
    } xUngrabDeviceReq;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD32 grabWindow;
	CARD16 event_count;
	CARD16 modifiers;
	CARD8 modifier_device;
	CARD8 grabbed_device;
	CARD8 key;
	BYTE this_device_mode;
	BYTE other_devices_mode;
	BOOL ownerEvents;
	BYTE pad1;
	BYTE pad2;
    } xGrabDeviceKeyReq;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD32 grabWindow;
	CARD16 modifiers;
	CARD8 modifier_device;
	CARD8 key;
	CARD8 grabbed_device;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
    } xUngrabDeviceKeyReq;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD32 grabWindow;
	CARD8 grabbed_device;
	CARD8 modifier_device;
	CARD16 event_count;
	CARD16 modifiers;
	BYTE this_device_mode;
	BYTE other_devices_mode;
	CARD8 button;
	BOOL ownerEvents;
	BYTE pad1;
	BYTE pad2;
    } xGrabDeviceButtonReq;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD32 grabWindow;
	CARD16 modifiers;
	CARD8 modifier_device;
	CARD8 button;
	CARD8 grabbed_device;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
    } xUngrabDeviceButtonReq;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD32 time;
	CARD8 mode;
	CARD8 deviceid;
	BYTE pad1;
	BYTE pad2;
    } xAllowDeviceEventsReq;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD8 deviceid;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
    } xGetDeviceFocusReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 focus;
	CARD32 time;
	CARD8 revertTo;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
    } xGetDeviceFocusReply;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD32 focus;
	CARD32 time;
	CARD8 revertTo;
	CARD8 device;
	CARD16 pad01;
    } xSetDeviceFocusReq;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD8 deviceid;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
    } xGetFeedbackControlReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD16 num_feedbacks;
	CARD16 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
	CARD32 pad05;
	CARD32 pad06;
    } xGetFeedbackControlReply;

    typedef struct {
	CARD8 c_class;
	CARD8 id;
	CARD16 length;
    } xFeedbackState;

    typedef struct {
	CARD8 c_class;
	CARD8 id;
	CARD16 length;
	CARD16 pitch;
	CARD16 duration;
	CARD32 led_mask;
	CARD32 led_values;
	BOOL global_auto_repeat;
	CARD8 click;
	CARD8 percent;
	BYTE pad;
	BYTE auto_repeats[];
    } xKbdFeedbackState;

    typedef struct {
	CARD8 c_class;
	CARD8 id;
	CARD16 length;
	CARD8 pad1;
	CARD8 pad2;
	CARD16 accelNum;
	CARD16 accelDenom;
	CARD16 threshold;
    } xPtrFeedbackState;

    typedef struct {
	CARD8 c_class;
	CARD8 id;
	CARD16 length;
	CARD32 resolution;
	INT32 min_value;
	INT32 max_value;
    } xIntegerFeedbackState;

    typedef struct {
	CARD8 c_class;
	CARD8 id;
	CARD16 length;
	CARD16 max_symbols;
	CARD16 num_syms_supported;
    } xStringFeedbackState;

    typedef struct {
	CARD8 c_class;
	CARD8 id;
	CARD16 length;
	CARD8 percent;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
	CARD16 pitch;
	CARD16 duration;
    } xBellFeedbackState;

    typedef struct {
	CARD8 c_class;
	CARD8 id;
	CARD16 length;
	CARD32 led_mask;
	CARD32 led_values;
    } xLedFeedbackState;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD32 mask;
	CARD8 deviceid;
	CARD8 feedbackid;
	BYTE pad1;
	BYTE pad2;
    } xChangeFeedbackControlReq;

    typedef struct {
	CARD8 c_class;
	CARD8 id;
	CARD16 length;
    } xFeedbackCtl;

    typedef struct {
	CARD8 c_class;
	CARD8 id;
	CARD16 length;
	CARD8 key;
	CARD8 auto_repeat_mode;
	INT8 click;
	INT8 percent;
	INT16 pitch;
	INT16 duration;
	CARD32 led_mask;
	CARD32 led_values;
    } xKbdFeedbackCtl;

    typedef struct {
	CARD8 c_class;
	CARD8 id;
	CARD16 length;
	CARD8 pad1;
	CARD8 pad2;
	INT16 num;
	INT16 denom;
	INT16 thresh;
    } xPtrFeedbackCtl;

    typedef struct {
	CARD8 c_class;
	CARD8 id;
	CARD16 length;
	INT32 int_to_display;
    } xIntegerFeedbackCtl;

    typedef struct {
	CARD8 c_class;
	CARD8 id;
	CARD16 length;
	CARD8 pad1;
	CARD8 pad2;
	CARD16 num_keysyms;
    } xStringFeedbackCtl;

    typedef struct {
	CARD8 c_class;
	CARD8 id;
	CARD16 length;
	INT8 percent;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
	INT16 pitch;
	INT16 duration;
    } xBellFeedbackCtl;

    typedef struct {
	CARD8 c_class;
	CARD8 id;
	CARD16 length;
	CARD32 led_mask;
	CARD32 led_values;
    } xLedFeedbackCtl;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD8 deviceid;
	CARD8 firstKeyCode;
	CARD8 count;
	BYTE pad1;
    } xGetDeviceKeyMappingReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 keySymsPerKeyCode;
	CARD8 pad0;
	CARD16 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
    } xGetDeviceKeyMappingReply;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD8 deviceid;
	CARD8 firstKeyCode;
	CARD8 keySymsPerKeyCode;
	CARD8 keyCodes;
    } xChangeDeviceKeyMappingReq;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD8 deviceid;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
    } xGetDeviceModifierMappingReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 numKeyPerModifier;
	CARD8 pad0;
	CARD16 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
    } xGetDeviceModifierMappingReply;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD8 deviceid;
	CARD8 numKeyPerModifier;
	CARD16 pad1;
    } xSetDeviceModifierMappingReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 success;
	CARD8 pad0;
	CARD16 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
    } xSetDeviceModifierMappingReply;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD8 deviceid;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
    } xGetDeviceButtonMappingReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 nElts;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
	CARD32 pad05;
    } xGetDeviceButtonMappingReply;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD8 deviceid;
	CARD8 map_length;
	BYTE pad1;
	BYTE pad2;
    } xSetDeviceButtonMappingReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 status;
	BYTE pad0;
	CARD16 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
    } xSetDeviceButtonMappingReply;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD8 deviceid;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
    } xQueryDeviceStateReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 num_classes;
	BYTE pad0;
	CARD16 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
	CARD32 pad5;
	CARD32 pad6;
    } xQueryDeviceStateReply;

    typedef struct {
	CARD8 c_class;
	CARD8 length;
	CARD8 num_keys;
	BYTE pad1;
	CARD8 keys[];
    } xKeyState;

    typedef struct {
	CARD8 c_class;
	CARD8 length;
	CARD8 num_buttons;
	BYTE pad1;
	CARD8 buttons[];
    } xButtonState;

    typedef struct {
	CARD8 c_class;
	CARD8 length;
	CARD8 num_valuators;
	CARD8 mode;
    } xValuatorState;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD32 destination;
	CARD8 deviceid;
	BOOL propagate;
	CARD16 count;
	CARD8 num_events;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
    } xSendExtensionEventReq;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD8 deviceid;
	CARD8 feedbackid;
	CARD8 feedbackclass;
	INT8 percent;
    } xDeviceBellReq;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD8 deviceid;
	CARD8 first_valuator;
	CARD8 num_valuators;
	BYTE pad1;
    } xSetDeviceValuatorsReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 status;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
	CARD32 pad05;
    } xSetDeviceValuatorsReply;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD16 control;
	CARD8 deviceid;
	BYTE pad2;
    } xGetDeviceControlReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 status;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
	CARD32 pad05;
    } xGetDeviceControlReply;

    typedef struct {
	CARD16 control;
	CARD16 length;
    } xDeviceState;

    typedef struct {
	CARD16 control;
	CARD16 length;
	CARD32 num_valuators;
    } xDeviceResolutionState;

    typedef struct {
	CARD16 control;
	CARD16 length;
	INT32 min_x;
	INT32 max_x;
	INT32 min_y;
	INT32 max_y;
	CARD32 flip_x;
	CARD32 flip_y;
	CARD32 rotation;
	CARD32 button_threshold;
    } xDeviceAbsCalibState;

    typedef struct {
	CARD16 control;
	CARD16 length;
	CARD32 offset_x;
	CARD32 offset_y;
	CARD32 width;
	CARD32 height;
	CARD32 screen;
	CARD32 following;
    } xDeviceAbsAreaState;

    typedef struct {
	CARD16 control;
	CARD16 length;
	CARD8 status;
	CARD8 iscore;
	CARD16 pad1;
    } xDeviceCoreState;

    typedef struct {
	CARD16 control;
	CARD16 length;
	CARD8 enable;
	CARD8 pad0;
	CARD16 pad1;
    } xDeviceEnableState;

    typedef struct {
	CARD8 reqType;
	CARD8 ReqType;
	CARD16 length;
	CARD16 control;
	CARD8 deviceid;
	BYTE pad0;
    } xChangeDeviceControlReq;

    typedef struct {
	CARD8 repType;
	CARD8 RepType;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 status;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
	CARD32 pad05;
    } xChangeDeviceControlReply;

    typedef struct {
	CARD16 control;
	CARD16 length;
    } xDeviceCtl;

    typedef struct {
	CARD16 control;
	CARD16 length;
	CARD8 first_valuator;
	CARD8 num_valuators;
	CARD8 pad1;
	CARD8 pad2;
    } xDeviceResolutionCtl;

    typedef struct {
	CARD16 control;
	CARD16 length;
	INT32 min_x;
	INT32 max_x;
	INT32 min_y;
	INT32 max_y;
	CARD32 flip_x;
	CARD32 flip_y;
	CARD32 rotation;
	CARD32 button_threshold;
    } xDeviceAbsCalibCtl;

    typedef struct {
	CARD16 control;
	CARD16 length;
	CARD32 offset_x;
	CARD32 offset_y;
	INT32 width;
	INT32 height;
	INT32 screen;
	CARD32 following;
    } xDeviceAbsAreaCtl;

    typedef struct {
	CARD16 control;
	CARD16 length;
	CARD8 status;
	CARD8 pad0;
	CARD16 pad1;
    } xDeviceCoreCtl;

    typedef struct {
	CARD16 control;
	CARD16 length;
	CARD8 enable;
	CARD8 pad0;
	CARD16 pad1;
    } xDeviceEnableCtl;

    typedef struct {
	BYTE type;
	CARD8 deviceid;
	CARD16 sequenceNumber;
	KeyButMask device_state;
	CARD8 num_valuators;
	CARD8 first_valuator;
	INT32 valuator0;
	INT32 valuator1;
	INT32 valuator2;
	INT32 valuator3;
	INT32 valuator4;
	INT32 valuator5;
    } deviceValuator;

    typedef struct {
	BYTE type;
	BYTE detail;
	CARD16 sequenceNumber;
	CARD32 time;
	CARD32 root;
	CARD32 event;
	CARD32 child;
	INT16 root_x;
	INT16 root_y;
	INT16 event_x;
	INT16 event_y;
	KeyButMask state;
	BOOL same_screen;
	CARD8 deviceid;
    } deviceKeyButtonPointer;

    typedef struct {
	BYTE type;
	BYTE detail;
	CARD16 sequenceNumber;
	CARD32 time;
	CARD32 window;
	BYTE mode;
	CARD8 deviceid;
	BYTE pad1;
	BYTE pad2;
	CARD32 pad00;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
    } deviceFocus;

    typedef struct {
	BYTE type;
	BYTE deviceid;
	CARD16 sequenceNumber;
	CARD32 time;
	CARD8 num_keys;
	CARD8 num_buttons;
	CARD8 num_valuators;
	CARD8 classes_reported;
	CARD8 buttons[];
	CARD8 keys[];
	INT32 valuator0;
	INT32 valuator1;
	INT32 valuator2;
    } deviceStateNotify;

    typedef struct {
	BYTE type;
	BYTE deviceid;
	CARD16 sequenceNumber;
	CARD8 keys[];
    } deviceKeyStateNotify;

    typedef struct {
	BYTE type;
	BYTE deviceid;
	CARD16 sequenceNumber;
	CARD8 buttons[];
    } deviceButtonStateNotify;

    typedef struct {
	BYTE type;
	BYTE deviceid;
	CARD16 sequenceNumber;
	CARD8 request;
	CARD8 firstKeyCode;
	CARD8 count;
	BYTE pad1;
	CARD32 time;
	CARD32 pad00;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
    } deviceMappingNotify;

    typedef struct {
	BYTE type;
	BYTE deviceid;
	CARD16 sequenceNumber;
	CARD32 time;
	CARD8 request;
	BYTE pad1;
	BYTE pad2;
	BYTE pad3;
	CARD32 pad00;
	CARD32 pad01;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
    } changeDeviceNotify;

    typedef struct {
	BYTE type;
	BYTE pad00;
	CARD16 sequenceNumber;
	CARD32 time;
	BYTE devchange;
	BYTE deviceid;
	CARD16 control;
	CARD32 pad02;
	CARD32 pad03;
	CARD32 pad04;
	CARD32 pad05;
	CARD32 pad06;
    } devicePresenceNotify;

#endif				/* __LSB_VERSION__ >= 3.0 */

#if __LSB_VERSION__ >= 30

    struct _XExtEventInfo {
	Mask mask;
	BYTE type;
	BYTE word;
    };


    struct _xAnyClassinfo {
	CARD8 c_class;
	CARD8 length;
    };


    struct _xDeviceInfo {
	CARD32 type;
	CARD8 id;
	CARD8 num_classes;
	CARD8 use;
	CARD8 pad1;
    };


    struct _xKeyInfo {
	CARD8 c_class;
	CARD8 length;
	CARD8 min_keycode;
	CARD8 max_keycode;
	CARD16 num_keys;
	CARD8 pad1;
	CARD8 pad2;
    };


    struct _xButtonInfo {
	CARD8 c_class;
	CARD8 length;
	CARD16 num_buttons;
    };


    struct _xValuatorInfo {
	CARD8 c_class;
	CARD8 length;
	CARD8 num_axes;
	CARD8 mode;
	CARD32 motion_buffer_size;
    };


    struct _xAxisInfo {
	CARD32 resolution;
	CARD32 min_value;
	CARD32 max_value;
    };

#endif				/* __LSB_VERSION__ >= 3.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
