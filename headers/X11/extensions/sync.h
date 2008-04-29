#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_EXTENSIONS_SYNC_H_
#define _X11_EXTENSIONS_SYNC_H_

#include <X11/Xlib.h>
#include <X11/X.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define SYNC_NAME	"SYNC"
#define _XSyncValueIsPositive(v)	(((v).hi&0x80000000)?0:1)
#define _XSyncValueIsNegative(v)	(((v).hi&0x80000000)?1:0)
#define _XSyncValueLessThan(a,b)	((a).hi<(b).hi||((a).hi==(b).hi&&(a).lo<(b).lo)))
#define _XSyncValueLessOrEqual(a,b)	((a).hi<(b).hi||((a).hi==(b).hi&&(a).lo<=(b).lo)))
#define _XSyncValueGreaterThan(a,b)	((a).hi>(b).hi||((a).hi==(b).hi&&(a).lo>(b).lo)))
#define _XSyncValueGreaterOrEqual(a,b)	((a).hi>(b).hi||((a).hi==(b).hi&&(a).lo>=(b).lo)))
#define _XSyncValueEqual(a,b)	((a).lo==(b).lo&&(a).hi==(b).hi))
#define _XSyncValueIsZero(a)	((a).lo==0&&(a).hi==0)
#define _XSyncIntToValue(pv,i)	((pv)->hi=((i<0)?~0:0),(pv)->lo=(i)))
#define _XSyncMaxValue(pv)	((pv)->hi=0x7fffffff,(pv)->lo=0xffffffff)
#define _XSyncMinValue(pv)	((pv)->hi=0x80000000,(pv)->lo=0)
#define _XSyncIntsToValue(pv,l,h)	((pv)->lo=(l),(pv)->hi=(h)))
#define _XSyncValueHigh32(v)	((v).hi)
#define _XSyncValueLow32(v)	((v).lo)
#define XSyncCACounter	(1L<<0)
#define XSyncCAValueType	(1L<<1)
#define XSyncCAValue	(1L<<2)
#define XSyncCATestType	(1L<<3)
#define XSyncCADelta	(1L<<4)
#define XSyncCAEvents	(1L<<5)
#define XSyncAlarmNotifyMask	(1L<<XSyncAlarmNotify)
#define XSyncNumberErrors	(XSyncBadAlarm+1)
#define SYNC_MINOR_VERSION	0
#define XSyncCounterNotify	0
#define X_SyncInitialize	0
#define XSyncBadCounter	0L
#define XSyncAlarmNotify	1
#define X_SyncListSystemCounters	1
#define X_SyncQueryAlarm	10
#define X_SyncDestroyAlarm	11
#define X_SyncSetPriority	12
#define X_SyncGetPriority	13
#define XSyncBadAlarm	1L
#define X_SyncCreateCounter	2
#define XSyncNumberEvents	2L
#define SYNC_MAJOR_VERSION	3
#define X_SyncSetCounter	3
#define X_SyncChangeCounter	4
#define X_SyncQueryCounter	5
#define X_SyncDestroyCounter	6
#define X_SyncAwait	7
#define X_SyncCreateAlarm	8
#define X_SyncChangeAlarm	9
#define XSyncIntsToValue(pv,l,h)	_XSyncIntsToValue(pv,l,h))
#define XSyncIntToValue(pv,i)	_XSyncIntToValue(pv,i))
#define XSyncMaxValue(pv)	_XSyncMaxValue(pv)
#define XSyncMinValue(pv)	_XSyncMinValue(pv)
#define XSyncValueAdd(presult,a,b,poverflow)	_XSyncValueAdd(presult,a,b,poverflow)
#define XSyncValueEqual(a,b)	_XSyncValueEqual(a,b))
#define XSyncValueGreaterOrEqual(a,b)	_XSyncValueGreaterOrEqual(a,b))
#define XSyncValueGreaterThan(a,b)	_XSyncValueGreaterThan(a,b))
#define XSyncValueHigh32(v)	_XSyncValueHigh32(v)
#define XSyncValueIsNegative(v)	_XSyncValueIsNegative(v)
#define XSyncValueIsPositive(v)	_XSyncValueIsPositive(v)
#define XSyncValueIsZero(a)	_XSyncValueIsZero(a)
#define XSyncValueLessOrEqual(a,b)	_XSyncValueLessOrEqual(a,b))
#define XSyncValueLessThan(a,b)	_XSyncValueLessThan(a,b))
#define XSyncValueLow32(v)	_XSyncValueLow32(v)
#define XSyncValueSubtract(presult,a,b,poverflow)	_XSyncValueSubtract(presult,a,b,poverflow)
#define _XSyncValueAdd(presult,a,b,poverflow)	{intt=(a).lo;Boolsigna=XSyncValueIsNegative(a);Boolsignb=XSyncValueIsNegative(b);((presult)->lo=(a).lo+(b).lo);((presult)->hi=(a
#define _XSyncValueSubtract(presult,a,b,poverflow)	{intt=(a).lo;Boolsigna=XSyncValueIsNegative(a);Boolsignb=XSyncValueIsNegative(b);((presult)->lo=(a).lo-(b).lo);((presult)->hi=(a
#endif				/* __LSB_VERSION__ >= 1.2 */



#if __LSB_VERSION__ >= 12
    typedef struct _XSyncSystemCounter XSyncSystemCounter;

    typedef struct {
	XSyncCounter counter;
	XSyncValueType value_type;
	XSyncValue wait_value;
	XSyncTestType test_type;
    } XSyncTrigger;

    typedef struct {
	XSyncTrigger trigger;
	XSyncValue event_threshold;
    } XSyncWaitCondition;

    typedef struct {
	XSyncTrigger trigger;
	XSyncValue delta;
	int events;
	XSyncAlarmState state;
    } XSyncAlarmAttributes;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	XSyncCounter counter;
	XSyncValue wait_value;
	XSyncValue counter_value;
	Time time;
	int count;
	int destroyed;
    } XSyncCounterNotifyEvent;

    typedef struct {
	int type;
	unsigned long int serial;
	int send_event;
	Display *display;
	XSyncAlarm alarm;
	XSyncValue counter_value;
	XSyncValue alarm_value;
	Time time;
	XSyncAlarmState state;
    } XSyncAlarmNotifyEvent;

    typedef struct {
	int type;
	Display *display;
	XSyncAlarm alarm;
	unsigned long int serial;
	unsigned char error_code;
	unsigned char request_code;
	unsigned char minor_code;
    } XSyncAlarmError;

    typedef struct {
	int type;
	Display *display;
	XSyncCounter counter;
	unsigned long int serial;
	unsigned char error_code;
	unsigned char request_code;
	unsigned char minor_code;
    } XSyncCounterError;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _XSyncSystemCounter {
	char *name;
	XSyncCounter counter;
	XSyncValue resolution;
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


#if __LSB_VERSION__ >= 12
    typedef XID XSyncCounter;

    typedef XID XSyncAlarm;

    typedef struct _XSyncValue XSyncValue;

    typedef enum {
	XSyncAbsolute,
	XSyncRelative
    } XSyncValueType;

    typedef enum {
	XSyncPositiveTransition,
	XSyncNegativeTransition,
	XSyncPositiveComparison,
	XSyncNegativeComparison
    } XSyncTestType;

    typedef enum {
	XSyncAlarmActive,
	XSyncAlarmInactive,
	XSyncAlarmDestroyed
    } XSyncAlarmState;

#endif				/* __LSB_VERSION__ >= 1.2 */

#if __LSB_VERSION__ >= 12
    struct _XSyncValue {
	int hi;
	unsigned int lo;
    };

    enum {
	XSyncAbsolute,
	XSyncRelative
    };

    enum {
	XSyncPositiveTransition,
	XSyncNegativeTransition,
	XSyncPositiveComparison,
	XSyncNegativeComparison
    };

    enum {
	XSyncAlarmActive,
	XSyncAlarmInactive,
	XSyncAlarmDestroyed
    };

#endif				/* __LSB_VERSION__ >= 1.2 */


/* Function prototypes */

#if __LSB_VERSION__ >= 10
    extern int XSyncAwait(Display *, XSyncWaitCondition *, int);
    extern int XSyncChangeAlarm(Display *, XSyncAlarm, unsigned long int,
				XSyncAlarmAttributes *);
    extern int XSyncChangeCounter(Display *, XSyncCounter, XSyncValue);
    extern XSyncAlarm XSyncCreateAlarm(Display *, unsigned long int,
				       XSyncAlarmAttributes *);
    extern XSyncCounter XSyncCreateCounter(Display *, XSyncValue);
    extern int XSyncDestroyAlarm(Display *, XSyncAlarm);
    extern int XSyncDestroyCounter(Display *, XSyncCounter);
    extern void XSyncFreeSystemCounterList(XSyncSystemCounter *);
    extern int XSyncGetPriority(Display *, XID, int *);
    extern int XSyncInitialize(Display *, int *, int *);
    extern void XSyncIntToValue(XSyncValue *, int);
    extern void XSyncIntsToValue(XSyncValue *, unsigned int, int);
    extern XSyncSystemCounter *XSyncListSystemCounters(Display *, int *);
    extern void XSyncMaxValue(XSyncValue *);
    extern void XSyncMinValue(XSyncValue *);
    extern int XSyncQueryAlarm(Display *, XSyncAlarm,
			       XSyncAlarmAttributes *);
    extern int XSyncQueryCounter(Display *, XSyncCounter, XSyncValue *);
    extern int XSyncQueryExtension(Display *, int *, int *);
    extern int XSyncSetCounter(Display *, XSyncCounter, XSyncValue);
    extern int XSyncSetPriority(Display *, XID, int);
    extern void XSyncValueAdd(XSyncValue *, XSyncValue, XSyncValue, int *);
    extern int XSyncValueEqual(XSyncValue, XSyncValue);
    extern int XSyncValueGreaterOrEqual(XSyncValue, XSyncValue);
    extern int XSyncValueGreaterThan(XSyncValue, XSyncValue);
    extern int XSyncValueHigh32(XSyncValue);
    extern int XSyncValueIsNegative(XSyncValue);
    extern int XSyncValueIsPositive(XSyncValue);
    extern int XSyncValueIsZero(XSyncValue);
    extern int XSyncValueLessOrEqual(XSyncValue, XSyncValue);
    extern int XSyncValueLessThan(XSyncValue, XSyncValue);
    extern unsigned int XSyncValueLow32(XSyncValue);
    extern void XSyncValueSubtract(XSyncValue *, XSyncValue, XSyncValue,
				   int *);
#endif				/* __LSB_VERSION__ >= 1.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
