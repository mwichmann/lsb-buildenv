#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QPROCESS_H_
#define _QTCORE_QPROCESS_H_

class QProcess;
// *INDENT-OFF*

typedef qint64	Q_PID	
;

class QProcess;

enum _ZN8QProcess12ProcessErrorE	
{
FailedToStart = 0,	
Crashed = 1,	
Timedout = 2,	
ReadError = 3,	
WriteError = 4,	
UnknownError = 5
}
;

enum _ZN8QProcess12ProcessStateE	
{
NotRunning = 0,	
Starting = 1,	
Running = 2
}
;

enum _ZN8QProcess14ProcessChannelE	
{
StandardOutput = 0,	
StandardError = 1
}
;

enum _ZN8QProcess18ProcessChannelModeE	
{
SeparateChannels = 0,	
MergedChannels = 1,	
ForwardedChannels = 2
}
;

enum _ZN8QProcess10ExitStatusE	
{
NormalExit = 0,	
CrashExit = 1
}
;


/* Function prototypes */

extern struct QMetaObject _ZN8QProcess16staticMetaObjectE;
// *INDENT-ON*
#endif				/* protection */
#endif				/* LSB version */
