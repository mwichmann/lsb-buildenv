#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QPROCESS_H_
#define _QTCORE_QPROCESS_H_

class QProcess;
// *INDENT-OFF*

typedef qint64	Q_PID	
;

class QProcess;

enum QProcess::ProcessError	
{
FailedToStart = 0,	
Crashed = 1,	
Timedout = 2,	
ReadError = 3,	
WriteError = 4,	
UnknownError = 5
}
;

enum QProcess::ProcessState	
{
NotRunning = 0,	
Starting = 1,	
Running = 2
}
;

enum QProcess::ProcessChannel	
{
StandardOutput = 0,	
StandardError = 1
}
;

enum QProcess::ProcessChannelMode	
{
SeparateChannels = 0,	
MergedChannels = 1,	
ForwardedChannels = 2
}
;

enum QProcess::ExitStatus	
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
