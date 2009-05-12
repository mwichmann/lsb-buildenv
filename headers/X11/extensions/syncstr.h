#if (__LSB_VERSION__ >= 40 )
#ifndef _X11_EXTENSIONS_SYNCSTR_H_
#define _X11_EXTENSIONS_SYNCSTR_H_

#include <X11/Xmd.h>

#ifdef __cplusplus
extern "C" {
#endif


#define sz_xSyncChangeAlarmReq	12
#define sz_xSyncCreateAlarmReq	12
#define sz_xSyncSetPriorityReq	12
#define sz_xSyncSystemCounter	14
#define sz_xSyncChangeCounterReq	16
#define sz_xSyncCreateCounterReq	16
#define sz_xSyncSetCounterReq	16
#define sz_xSyncWaitCondition	28
#define sz_xSyncGetPriorityReply	32
#define sz_xSyncInitializeReply	32
#define sz_xSyncListSystemCountersReply	32
#define sz_xSyncQueryCounterReply	32
#define sz_xSyncAwaitReq	4
#define sz_xSyncListSystemCountersReq	4
#define sz_xSyncQueryAlarmReply	40
#define sz_xSyncDestroyAlarmReq	8
#define sz_xSyncDestroyCounterReq	8
#define sz_xSyncGetPriorityReq	8
#define sz_xSyncInitializeReq	8
#define sz_xSyncQueryAlarmReq	8
#define sz_xSyncQueryCounterReq	8


    typedef struct _xSyncInitialize xSyncInitializeReq;

    typedef struct {
	BYTE type;
	CARD8 unused;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD8 majorVersion;
	CARD8 minorVersion;
	CARD16 pad;
	CARD32 pad0;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
    } xSyncInitializeReply;

    typedef struct _xSyncListSystemCounters xSyncListSystemCountersReq;

    typedef struct {
	BYTE type;
	CARD8 unused;
	CARD16 sequenceNumber;
	CARD32 length;
	INT32 nCounters;
	CARD32 pad0;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
    } xSyncListSystemCountersReply;

    typedef struct {
	CARD32 counter;
	INT32 resolution_hi;
	CARD32 resolution_lo;
	CARD16 name_length;
    } xSyncSystemCounter;

    typedef struct _xSyncCreateCounterReq xSyncCreateCounterReq;

    typedef struct _xSyncChangeCounterReq xSyncChangeCounterReq;

    typedef struct _xSyncSetCounterReq xSyncSetCounterReq;

    typedef struct _xSyncDestroyCounterReq xSyncDestroyCounterReq;

    typedef struct _xSyncQueryCounterReq xSyncQueryCounterReq;

    typedef struct {
	BYTE type;
	CARD8 unused;
	CARD16 sequenceNumber;
	CARD32 length;
	INT32 value_hi;
	CARD32 value_lo;
	CARD32 pad0;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
    } xSyncQueryCounterReply;

    typedef struct _xSyncAwaitReq xSyncAwaitReq;

    typedef struct _xSyncWaitCondition xSyncWaitCondition;

    typedef struct _xSyncCreateAlarmReq xSyncCreateAlarmReq;

    typedef struct _xSyncDestroyAlarmReq xSyncDestroyAlarmReq;

    typedef struct _xSyncQueryAlarmReq xSyncQueryAlarmReq;

    typedef struct {
	BYTE type;
	CARD8 unused;
	CARD16 sequenceNumber;
	CARD32 length;
	CARD32 counter;
	CARD32 value_type;
	INT32 wait_value_hi;
	CARD32 wait_value_lo;
	CARD32 test_type;
	INT32 delta_hi;
	CARD32 delta_lo;
	BOOL events;
	BYTE state;
	BYTE pad0;
	BYTE pad1;
    } xSyncQueryAlarmReply;

    typedef struct _xSyncChangeAlarmReq xSyncChangeAlarmReq;

    typedef struct _xSyncSetPriority xSyncSetPriorityReq;

    typedef struct _xSyncGetPriority xSyncGetPriorityReq;

    typedef struct {
	BYTE type;
	CARD8 unused;
	CARD16 sequenceNumber;
	CARD32 length;
	INT32 priority;
	CARD32 pad0;
	CARD32 pad1;
	CARD32 pad2;
	CARD32 pad3;
	CARD32 pad4;
    } xSyncGetPriorityReply;

    typedef struct _xSyncCounterNotifyEvent xSyncCounterNotifyEvent;

    typedef struct _xSyncAlarmNotifyEvent xSyncAlarmNotifyEvent;

    struct _xSyncInitialize {
	CARD8 reqType;
	CARD8 syncReqType;
	CARD16 length;
	CARD8 majorVersion;
	CARD8 minorVersion;
	CARD16 pad;
    };

    struct _xSyncListSystemCounters {
	CARD8 reqType;
	CARD8 syncReqType;
	CARD16 length;
    };

    struct _xSyncCreateCounterReq {
	CARD8 reqType;
	CARD8 syncReqType;
	CARD16 length;
	CARD32 cid;
	INT32 initial_value_hi;
	CARD32 initial_value_lo;
    };

    struct _xSyncChangeCounterReq {
	CARD8 reqType;
	CARD8 syncReqType;
	CARD16 length;
	CARD32 cid;
	INT32 value_hi;
	CARD32 value_lo;
    };

    struct _xSyncSetCounterReq {
	CARD8 reqType;
	CARD8 syncReqType;
	CARD16 length;
	CARD32 cid;
	INT32 value_hi;
	CARD32 value_lo;
    };

    struct _xSyncDestroyCounterReq {
	CARD8 reqType;
	CARD8 syncReqType;
	CARD16 length;
	CARD32 counter;
    };

    struct _xSyncQueryCounterReq {
	CARD8 reqType;
	CARD8 syncReqType;
	CARD16 length;
	CARD32 counter;
    };

    struct _xSyncAwaitReq {
	CARD8 reqType;
	CARD8 syncReqType;
	CARD16 length;
    };

    struct _xSyncWaitCondition {
	CARD32 counter;
	CARD32 value_type;
	INT32 wait_value_hi;
	CARD32 wait_value_lo;
	CARD32 test_type;
	INT32 event_threshold_hi;
	CARD32 event_threshold_lo;
    };

    struct _xSyncCreateAlarmReq {
	CARD8 reqType;
	CARD8 syncReqType;
	CARD16 length;
	CARD32 id;
	CARD32 valueMask;
    };

    struct _xSyncDestroyAlarmReq {
	CARD8 reqType;
	CARD8 syncReqType;
	CARD16 length;
	CARD32 alarm;
    };

    struct _xSyncQueryAlarmReq {
	CARD8 reqType;
	CARD8 syncReqType;
	CARD16 length;
	CARD32 alarm;
    };

    struct _xSyncChangeAlarmReq {
	CARD8 reqType;
	CARD8 syncReqType;
	CARD16 length;
	CARD32 alarm;
	CARD32 valueMask;
    };

    struct _xSyncSetPriority {
	CARD8 reqType;
	CARD8 syncReqType;
	CARD16 length;
	CARD32 id;
	INT32 priority;
    };

    struct _xSyncGetPriority {
	CARD8 reqType;
	CARD8 syncReqType;
	CARD16 length;
	CARD32 id;
    };

    struct _xSyncCounterNotifyEvent {
	BYTE type;
	BYTE kind;
	CARD16 sequenceNumber;
	CARD32 counter;
	INT32 wait_value_hi;
	CARD32 wait_value_lo;
	INT32 counter_value_hi;
	CARD32 counter_value_lo;
	CARD32 time;
	CARD16 count;
	BOOL destroyed;
	BYTE pad0;
    };

    struct _xSyncAlarmNotifyEvent {
	BYTE type;
	BYTE kind;
	CARD16 sequenceNumber;
	CARD32 alarm;
	INT32 counter_value_hi;
	CARD32 counter_value_lo;
	INT32 alarm_value_hi;
	CARD32 alarm_value_lo;
	CARD32 time;
	CARD8 state;
	BYTE pad0;
	BYTE pad1;
	BYTE pad2;
    };

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
