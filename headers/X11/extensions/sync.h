#ifndef _X11_EXTENSIONS_SYNC_H_
#define _X11_EXTENSIONS_SYNC_H_

#include <X11/Xlib.h>
#include <X11/X.h>

#ifdef __cplusplus
extern "C"
{
#endif




  typedef struct _XSyncSystemCounter
  {
    char *name;
    XSyncCounter counter;
    XSyncValue resolution;
  }
  XSyncSystemCounter;

  typedef struct
  {
    XSyncCounter counter;
    XSyncValueType value_type;
    XSyncValue wait_value;
    XSyncTestType test_type;
  }
  XSyncTrigger;

  typedef struct
  {
    XSyncTrigger trigger;
    XSyncValue event_threshold;
  }
  XSyncWaitCondition;

  typedef struct
  {
    XSyncTrigger trigger;
    XSyncValue delta;
    int events;
    XSyncAlarmState state;
  }
  XSyncAlarmAttributes;




  typedef XID XSyncCounter;

  typedef XID XSyncAlarm;

  typedef struct _XSyncValue
  {
    int hi;
    unsigned int lo;
  }
  XSyncValue;

  typedef enum
  {
    XSyncAbsolute =,
    XSyncRelative =
  }
  XSyncValueType;

  typedef enum
  {
    XSyncPositiveTransition =,
    XSyncNegativeTransition =,
    XSyncPositiveComparison =,
    XSyncNegativeComparison =
  }
  XSyncTestType;

  typedef enum
  {
    XSyncAlarmActive =,
    XSyncAlarmInactive =,
    XSyncAlarmDestroyed =
  }
  XSyncAlarmState;


  extern int XSyncAwait (Display *, XSyncWaitCondition *, int);
  extern int XSyncChangeAlarm (Display *, XSyncAlarm, unsigned long,
			       XSyncAlarmAttributes *);
  extern int XSyncChangeCounter (Display *, XSyncCounter, XSyncValue);
  extern XSyncAlarm XSyncCreateAlarm (Display *, unsigned long,
				      XSyncAlarmAttributes *);
  extern XSyncCounter XSyncCreateCounter (Display *, XSyncValue);
  extern int XSyncDestroyAlarm (Display *, XSyncAlarm);
  extern int XSyncDestroyCounter (Display *, XSyncCounter);
  extern void XSyncFreeSystemCounterList (XSyncSystemCounter *);
  extern int XSyncGetPriority (Display *, XID, int *);
  extern int XSyncInitialize (Display *, int *, int *);
  extern void XSyncIntToValue (XSyncValue *, int);
  extern void XSyncIntsToValue (XSyncValue *, unsigned int, int);
  extern XSyncSystemCounter *XSyncListSystemCounters (Display *, int *);
  extern void XSyncMaxValue (XSyncValue *);
  extern void XSyncMinValue (XSyncValue *);
  extern int XSyncQueryAlarm (Display *, XSyncAlarm, XSyncAlarmAttributes *);
  extern int XSyncQueryCounter (Display *, XSyncCounter, XSyncValue *);
  extern int XSyncQueryExtension (Display *, int *, int *);
  extern int XSyncSetCounter (Display *, XSyncCounter, XSyncValue);
  extern int XSyncSetPriority (Display *, XID, int);
  extern void XSyncValueAdd (XSyncValue *, XSyncValue, XSyncValue, int *);
  extern int XSyncValueEqual (XSyncValue, XSyncValue);
  extern int XSyncValueGreaterOrEqual (XSyncValue, XSyncValue);
  extern int XSyncValueGreaterThan (XSyncValue, XSyncValue);
  extern int XSyncValueHigh32 (XSyncValue);
  extern int XSyncValueIsNegative (XSyncValue);
  extern int XSyncValueIsPositive (XSyncValue);
  extern int XSyncValueIsZero (XSyncValue);
  extern int XSyncValueLessOrEqual (XSyncValue, XSyncValue);
  extern int XSyncValueLessThan (XSyncValue, XSyncValue);
  extern unsigned int XSyncValueLow32 (XSyncValue);
  extern void XSyncValueSubtract (XSyncValue *, XSyncValue, XSyncValue,
				  int *);
#ifdef __cplusplus
}
#endif
#endif
