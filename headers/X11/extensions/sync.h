typedef XID XSyncCounter;

typedef XID XSyncAlarm;

typedef struct _XSyncValue {
    int hi;
    unsigned int lo;
} XSyncValue;

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

/*
 * 79 Default HeaderGroup for X11/extensions/sync.h
 */
typedef struct _XSyncSystemCounter {
    char *name;
    XSyncCounter counter;
    XSyncValue resolution;
} XSyncSystemCounter;

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


int XSyncAwait(Display *, XSyncWaitCondition *, int);
int XSyncChangeAlarm(Display *, XSyncAlarm, unsigned long,
		     XSyncAlarmAttributes *);
int XSyncChangeCounter(Display *, XSyncCounter, XSyncValue);
XSyncAlarm XSyncCreateAlarm(Display *, unsigned long,
			    XSyncAlarmAttributes *);
XSyncCounter XSyncCreateCounter(Display *, XSyncValue);
int XSyncDestroyAlarm(Display *, XSyncAlarm);
int XSyncDestroyCounter(Display *, XSyncCounter);
void XSyncFreeSystemCounterList(XSyncSystemCounter *);
int XSyncGetPriority(Display *, XID, int *);
int XSyncInitialize(Display *, int *, int *);
void XSyncIntToValue(XSyncValue *, int);
void XSyncIntsToValue(XSyncValue *, unsigned int, int);
XSyncSystemCounter *XSyncListSystemCounters(Display *, int *);
void XSyncMaxValue(XSyncValue *);
void XSyncMinValue(XSyncValue *);
int XSyncQueryAlarm(Display *, XSyncAlarm, XSyncAlarmAttributes *);
int XSyncQueryCounter(Display *, XSyncCounter, XSyncValue *);
int XSyncQueryExtension(Display *, int *, int *);
int XSyncSetCounter(Display *, XSyncCounter, XSyncValue);
int XSyncSetPriority(Display *, XID, int);
void XSyncValueAdd(XSyncValue *, XSyncValue, XSyncValue, int *);
int XSyncValueEqual(XSyncValue, XSyncValue);
int XSyncValueGreaterOrEqual(XSyncValue, XSyncValue);
int XSyncValueGreaterThan(XSyncValue, XSyncValue);
int XSyncValueHigh32(XSyncValue);
int XSyncValueIsNegative(XSyncValue);
int XSyncValueIsPositive(XSyncValue);
int XSyncValueIsZero(XSyncValue);
int XSyncValueLessOrEqual(XSyncValue, XSyncValue);
int XSyncValueLessThan(XSyncValue, XSyncValue);
unsigned int XSyncValueLow32(XSyncValue);
void XSyncValueSubtract(XSyncValue *, XSyncValue, XSyncValue, int *);
