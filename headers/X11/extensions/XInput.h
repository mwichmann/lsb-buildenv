#if (__LSB_VERSION__ >= 30 )
#ifndef _X11_EXTENSIONS_XINPUT_H_
#define _X11_EXTENSIONS_XINPUT_H_

#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/XI.h>

#ifdef __cplusplus
extern "C" {
#endif


#define DeviceButtonPress(d,type,_class)	 \
	FindTypeAndClass(d, type, _class, ButtonClass, _deviceButtonPress)
#define DeviceButtonRelease(d,type,_class)	 \
	FindTypeAndClass(d, type, _class, ButtonClass, _deviceButtonRelease)
#define DeviceFocusIn(d,type,_class)	 \
	FindTypeAndClass(d, type, _class, FocusClass, _deviceFocusIn)
#define DeviceFocusOut(d,type,_class)	 \
	FindTypeAndClass(d, type, _class, FocusClass, _deviceFocusOut)
#define DeviceKeyPress(d,type,_class)	 \
	FindTypeAndClass(d, type, _class, KeyClass, _deviceKeyPress)
#define DeviceKeyRelease(d,type,_class)	 \
	FindTypeAndClass(d, type, _class, KeyClass, _deviceKeyRelease)
#define ChangeDeviceNotify(d,type,_class)	 \
	FindTypeAndClass(d, type, _class, OtherClass, _changeDeviceNotify)
#define DeviceMappingNotify(d,type,_class)	 \
	FindTypeAndClass(d, type, _class, OtherClass, _deviceMappingNotify)
#define DeviceStateNotify(d,type,_class)	 \
	FindTypeAndClass(d, type, _class, OtherClass, _deviceStateNotify)
#define ProximityIn(d,type,_class)	 \
	FindTypeAndClass(d, type, _class, ProximityClass, _proximityIn)
#define ProximityOut(d,type,_class)	 \
	FindTypeAndClass(d, type, _class, ProximityClass, _proximityOut)
#define DeviceMotionNotify(d,type,_class)	 \
	FindTypeAndClass(d, type, _class, ValuatorClass, _deviceMotionNotify)
#define FindTypeAndClass(d,type,_class,classid,offset)	 \
	{ int _i; XInputClassInfo *_ip; type = 0; _class = 0; for (_i=0, _ip= \
	((XDevice *) d)->classes; _i< ((XDevice *) d)->num_classes; _i++, \
	_ip++) if (_ip->input_class == classid) {type = _ip->event_type_base + \
	offset; _class = ((XDevice *) d)->device_id << 8 | type;}}
#define DevicePointerMotionHint(d,type,_class)	 \
	{ _class = ((XDevice *) d)->device_id << 8 | \
	_devicePointerMotionHint;}
#define DeviceButton1Motion(d,type,_class)	 \
	{ _class = ((XDevice *) d)->device_id << 8 | _deviceButton1Motion;}
#define DeviceButton2Motion(d,type,_class)	 \
	{ _class = ((XDevice *) d)->device_id << 8 | _deviceButton2Motion;}
#define DeviceButton3Motion(d,type,_class)	 \
	{ _class = ((XDevice *) d)->device_id << 8 | _deviceButton3Motion;}
#define DeviceButton5Motion(d,type,_class)	 \
	{ _class = ((XDevice *) d)->device_id << 8 | _deviceButton5Motion;}
#define DeviceButtonPressGrab(d,type,_class)	 \
	{ _class = ((XDevice *) d)->device_id << 8 | _deviceButtonGrab;}
#define DeviceOwnerGrabButton(d,type,_class)	 \
	{ _class = ((XDevice *) d)->device_id << 8 | _deviceOwnerGrabButton;}
#define NoExtensionEvent(d,type,_class)	 \
	{ _class = ((XDevice *) d)->device_id << 8 | _noExtensionEvent;}
#define _deviceButtonPress	0
#define _deviceFocusIn	0
#define _deviceKeyPress	0
#define _deviceMotionNotify	0
#define _deviceStateNotify	0
#define _proximityIn	0
#define _deviceButtonRelease	1
#define _deviceFocusOut	1
#define _deviceKeyRelease	1
#define _deviceMappingNotify	1
#define _proximityOut	1
#define _changeDeviceNotify	2
#define BadClass(dpy,error)	_xibadclass(dpy, &error)
#define BadDevice(dpy,error)	_xibaddevice(dpy, &error)
#define BadEvent(dpy,error)	_xibadevent(dpy, &error)
#define BadMode(dpy,error)	_xibadmode(dpy, &error)
#define DeviceBusy(dpy,error)	_xidevicebusy(dpy, &error)


    typedef struct {
	unsigned char input_class;
	unsigned char event_type_base;
    } XInputClassInfo;

    typedef struct {
	XID device_id;
	int num_classes;
	XInputClassInfo *classes;
    } XDevice;

    typedef struct {
	int type;
	long unsigned int serial;
	int send_event;
	Display *display;
	Window window;
	XID deviceid;
	Window root;
	Window subwindow;
	Time time;
	int x;
	int y;
	int x_root;
	int y_root;
	unsigned int state;
	unsigned int keycode;
	int same_screen;
	unsigned int device_state;
	unsigned char axes_count;
	unsigned char first_axis;
	int axis_data[6];
    } XDeviceKeyEvent;

    typedef XDeviceKeyEvent XDeviceKeyPressedEvent;

    typedef XDeviceKeyEvent XDeviceKeyReleasedEvent;

    typedef struct {
	int type;
	long unsigned int serial;
	int send_event;
	Display *display;
	Window window;
	XID deviceid;
	Window root;
	Window subwindow;
	Time time;
	int x;
	int y;
	int x_root;
	int y_root;
	unsigned int state;
	unsigned int button;
	int same_screen;
	unsigned int device_state;
	unsigned char axes_count;
	unsigned char first_axis;
	int axis_data[6];
    } XDeviceButtonEvent;

    typedef XDeviceButtonEvent XDeviceButtonPressedEvent;

    typedef XDeviceButtonEvent XDeviceButtonReleasedEvent;

    typedef struct {
	int type;
	long unsigned int serial;
	int send_event;
	Display *display;
	Window window;
	XID deviceid;
	Window root;
	Window subwindow;
	Time time;
	int x;
	int y;
	int x_root;
	int y_root;
	unsigned int state;
	char is_hint;
	int same_screen;
	unsigned int device_state;
	unsigned char axes_count;
	unsigned char first_axis;
	int axis_data[6];
    } XDeviceMotionEvent;

    typedef struct {
	int type;
	long unsigned int serial;
	int send_event;
	Display *display;
	Window window;
	XID deviceid;
	int mode;
	int detail;
	Time time;
    } XDeviceFocusChangeEvent;

    typedef XDeviceFocusChangeEvent XDeviceFocusInEvent;

    typedef XDeviceFocusChangeEvent XDeviceFocusOutEvent;

    typedef struct {
	int type;
	long unsigned int serial;
	int send_event;
	Display *display;
	Window window;
	XID deviceid;
	Window root;
	Window subwindow;
	Time time;
	int x;
	int y;
	int x_root;
	int y_root;
	unsigned int state;
	int same_screen;
	unsigned int device_state;
	unsigned char axes_count;
	unsigned char first_axis;
	int axis_data[6];
    } XProximityNotifyEvent;

    typedef XProximityNotifyEvent XProximityInEvent;

    typedef XProximityNotifyEvent XProximityOutEvent;

    typedef struct {
	unsigned char c_class;
	unsigned char length;
    } XInputClass;

    typedef struct {
	int type;
	long unsigned int serial;
	int send_event;
	Display *display;
	Window window;
	XID deviceid;
	Time time;
	int num_classes;
	char data[64];
    } XDeviceStateNotifyEvent;

    typedef struct {
	unsigned char c_class;
	unsigned char length;
	unsigned char num_valuators;
	unsigned char mode;
	int valuators[6];
    } XValuatorStatus;

    typedef struct {
	unsigned char c_class;
	unsigned char length;
	short int num_keys;
	char keys[32];
    } XKeyStatus;

    typedef struct {
	unsigned char c_class;
	unsigned char length;
	short int num_buttons;
	char buttons[32];
    } XButtonStatus;

    typedef struct {
	int type;
	long unsigned int serial;
	int send_event;
	Display *display;
	Window window;
	XID deviceid;
	Time time;
	int request;
	int first_keycode;
	int count;
    } XDeviceMappingEvent;

    typedef struct {
	int type;
	long unsigned int serial;
	int send_event;
	Display *display;
	Window window;
	XID deviceid;
	Time time;
	int request;
    } XChangeDeviceNotifyEvent;

    typedef struct {
	XID c_class;
	int length;
	XID id;
    } XFeedbackState;

    typedef struct {
	XID c_class;
	int length;
	XID id;
	int click;
	int percent;
	int pitch;
	int duration;
	int led_mask;
	int global_auto_repeat;
	char auto_repeats[32];
    } XKbdFeedbackState;

    typedef struct {
	XID c_class;
	int length;
	XID id;
	int accelNum;
	int accelDenom;
	int threshold;
    } XPtrFeedbackState;

    typedef struct {
	XID c_class;
	int length;
	XID id;
	int resolution;
	int minVal;
	int maxVal;
    } XIntegerFeedbackState;

    typedef struct {
	XID c_class;
	int length;
	XID id;
	int max_symbols;
	int num_syms_supported;
	KeySym *syms_supported;
    } XStringFeedbackState;

    typedef struct {
	XID c_class;
	int length;
	XID id;
	int percent;
	int pitch;
	int duration;
    } XBellFeedbackState;

    typedef struct {
	XID c_class;
	int length;
	XID id;
	int led_values;
	int led_mask;
    } XLedFeedbackState;

    typedef struct {
	XID c_class;
	int length;
	XID id;
    } XFeedbackControl;

    typedef struct {
	XID c_class;
	int length;
	XID id;
	int accelNum;
	int accelDenom;
	int threshold;
    } XPtrFeedbackControl;

    typedef struct {
	XID c_class;
	int length;
	XID id;
	int click;
	int percent;
	int pitch;
	int duration;
	int led_mask;
	int led_value;
	int key;
	int auto_repeat_mode;
    } XKbdFeedbackControl;

    typedef struct {
	XID c_class;
	int length;
	XID id;
	int num_keysyms;
	KeySym *syms_to_display;
    } XStringFeedbackControl;

    typedef struct {
	XID c_class;
	int length;
	XID id;
	int int_to_display;
    } XIntegerFeedbackControl;

    typedef struct {
	XID c_class;
	int length;
	XID id;
	int percent;
	int pitch;
	int duration;
    } XBellFeedbackControl;

    typedef struct {
	XID c_class;
	int length;
	XID id;
	int led_mask;
	int led_values;
    } XLedFeedbackControl;

    typedef struct {
	XID control;
	int length;
    } XDeviceControl;

    typedef struct {
	XID control;
	int length;
	int first_valuator;
	int num_valuators;
	int *resolutions;
    } XDeviceResolutionControl;

    typedef struct {
	XID control;
	int length;
	int num_valuators;
	int *resolutions;
	int *min_resolutions;
	int *max_resolutions;
    } XDeviceResolutionState;

    typedef struct _XAnyClassinfo *XAnyClassPtr;

    typedef struct _XAnyClassinfo XAnyClassInfo;

    typedef struct _XDeviceInfo *XDeviceInfoPtr;

    typedef struct _XDeviceInfo XDeviceInfo;

    typedef struct _XKeyInfo *XKeyInfoPtr;

    typedef struct _XKeyInfo XKeyInfo;

    typedef struct _XButtonInfo *XButtonInfoPtr;

    typedef struct _XButtonInfo XButtonInfo;

    typedef struct _XAxisInfo *XAxisInfoPtr;

    typedef struct _XAxisInfo XAxisInfo;

    typedef struct _XValuatorInfo *XValuatorInfoPtr;

    typedef struct _XValuatorInfo XValuatorInfo;

    typedef struct {
	XEventClass event_type;
	XID device;
    } XEventList;

    typedef struct {
	Time time;
	int *data;
    } XDeviceTimeCoord;

    typedef struct {
	XID device_id;
	int num_classes;
	XInputClass *data;
    } XDeviceState;

    typedef struct {
	unsigned char c_class;
	unsigned char length;
	unsigned char num_valuators;
	unsigned char mode;
	int *valuators;
    } XValuatorState;

    typedef struct {
	unsigned char c_class;
	unsigned char length;
	short int num_keys;
	char keys[32];
    } XKeyState;

    typedef struct {
	unsigned char c_class;
	unsigned char length;
	short int num_buttons;
	char buttons[32];
    } XButtonState;


    struct _XAnyClassinfo {
	XID c_class;
	int length;
    };


    struct _XDeviceInfo {
	XID id;
	Atom type;
	char *name;
	int num_classes;
	int use;
	XAnyClassPtr inputclassinfo;
    };


    struct _XKeyInfo {
	XID c_class;
	int length;
	short unsigned int min_keycode;
	short unsigned int max_keycode;
	short unsigned int num_keys;
    };


    struct _XButtonInfo {
	XID c_class;
	int length;
	short int num_buttons;
    };


    struct _XAxisInfo {
	int resolution;
	int min_value;
	int max_value;
    };


    struct _XValuatorInfo {
	XID c_class;
	int length;
	unsigned char num_axes;
	unsigned char mode;
	long unsigned int motion_buffer;
	XAxisInfoPtr axes;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
