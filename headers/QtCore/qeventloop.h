#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QEVENTLOOP_H_
#define _QTCORE_QEVENTLOOP_H_

class QFlags < QEventLoop::ProcessEventsFlag >;
// *INDENT-OFF*

typedef class QFlags<QEventLoop::ProcessEventsFlag>QEventLoop::ProcessEventsFlags	
;

class QEventLoop;

enum QEventLoop::ProcessEventsFlag	
{
AllEvents = 0,	
ExcludeUserInputEvents = 1,	
ExcludeUserInput = 1,	
ExcludeSocketNotifiers = 2,	
WaitForMoreEvents = 4,	
WaitForMore = 4,	
X11ExcludeTimers = 8,	
DeferredDeletion = 16
}
;

class QFlags<QEventLoop::ProcessEventsFlag>;


/* Function prototypes */

extern struct QMetaObject _ZN10QEventLoop16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
