#ifndef _QTCORE_QPROCESS_H_
#define _QTCORE_QPROCESS_H_

#include <QtCore/qstringlist.h>
#include <QtCore/qglobal.h>
#include <QtCore/qobjectdefs.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qstring.h>
#include <QtCore/qobject.h>
#include <QtCore/qiodevice.h>

#ifdef __cplusplus
extern "C" {
#endif




    typedef qint64 Q_PID;

    Unknown Type:".Class.";

    enum N8QProcess12ProcessErrorE {
	FailedToStart,
	Crashed,
	Timedout,
	ReadError,
	WriteError,
	UnknownError
    };

    enum N8QProcess12ProcessStateE {
	NotRunning,
	Starting,
	Running
    };

    enum N8QProcess14ProcessChannelE {
	StandardOutput,
	StandardError
    };

    enum N8QProcess18ProcessChannelModeE {
	SeparateChannels,
	MergedChannels,
	ForwardedChannels
    };

    enum N8QProcess10ExitStatusE {
	NormalExit,
	CrashExit
    };


    extern struct QMetaObject _ZN8QProcess16staticMetaObjectE;
    extern struct QMetaObject _ZNK8QProcess10metaObjectEv(void);
    extern void _ZN8QProcess11qt_metacastEPKc(void);
    extern int _ZN8QProcess11qt_metacallEN11QMetaObject4CallEiPPv(void);
    extern Class _ZN8QProcessC2EP7QObject(void);
    extern Class _ZN8QProcessC1EP7QObject(void);
    extern Class _ZN8QProcessD2Ev(void);
    extern Class _ZN8QProcessD1Ev(void);
    extern Class _ZN8QProcessD0Ev(void);
    extern void
	_ZN8QProcess5startERK7QStringRK11QStringList6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern void
	_ZN8QProcess5startERK7QString6QFlagsIN9QIODevice12OpenModeFlagEE
	(void);
    extern enum N8QProcess18ProcessChannelModeE
	_ZNK8QProcess15readChannelModeEv(void);
    extern void
	_ZN8QProcess18setReadChannelModeENS_18ProcessChannelModeE(void);
    extern enum N8QProcess14ProcessChannelE
	_ZNK8QProcess11readChannelEv(void);
    extern void _ZN8QProcess14setReadChannelENS_14ProcessChannelE(void);
    extern void _ZN8QProcess16closeReadChannelENS_14ProcessChannelE(void);
    extern void _ZN8QProcess17closeWriteChannelEv(void);
    extern Class _ZNK8QProcess16workingDirectoryEv(void);
    extern void _ZN8QProcess19setWorkingDirectoryERK7QString(void);
    extern void _ZN8QProcess14setEnvironmentERK11QStringList(void);
    extern Class _ZNK8QProcess11environmentEv(void);
    extern enum N8QProcess12ProcessErrorE _ZNK8QProcess5errorEv(void);
    extern enum N8QProcess12ProcessStateE _ZNK8QProcess5stateEv(void);
    extern Q_PID _ZNK8QProcess3pidEv(void);
    extern bool _ZN8QProcess14waitForStartedEi(void);
    extern bool _ZN8QProcess16waitForReadyReadEi(void);
    extern bool _ZN8QProcess19waitForBytesWrittenEi(void);
    extern bool _ZN8QProcess15waitForFinishedEi(void);
    extern Class _ZN8QProcess21readAllStandardOutputEv(void);
    extern Class _ZN8QProcess20readAllStandardErrorEv(void);
    extern int _ZNK8QProcess8exitCodeEv(void);
    extern enum N8QProcess10ExitStatusE _ZNK8QProcess10exitStatusEv(void);
    extern qint64 _ZNK8QProcess14bytesAvailableEv(void);
    extern qint64 _ZNK8QProcess12bytesToWriteEv(void);
    extern bool _ZNK8QProcess12isSequentialEv(void);
    extern bool _ZNK8QProcess11canReadLineEv(void);
    extern void _ZN8QProcess5closeEv(void);
    extern bool _ZNK8QProcess5atEndEv(void);
    extern int _ZN8QProcess7executeERK7QStringRK11QStringList(void);
    extern int _ZN8QProcess7executeERK7QString(void);
    extern bool
	_ZN8QProcess13startDetachedERK7QStringRK11QStringList(void);
    extern bool _ZN8QProcess13startDetachedERK7QString(void);
    extern Class _ZN8QProcess17systemEnvironmentEv(void);
    extern void _ZN8QProcess9terminateEv(void);
    extern void _ZN8QProcess4killEv(void);
    extern void _ZN8QProcess7startedEv(void);
    extern void _ZN8QProcess8finishedEi(void);
    extern void _ZN8QProcess8finishedEiNS_10ExitStatusE(void);
    extern void _ZN8QProcess5errorENS_12ProcessErrorE(void);
    extern void _ZN8QProcess12stateChangedENS_12ProcessStateE(void);
    extern void _ZN8QProcess23readyReadStandardOutputEv(void);
    extern void _ZN8QProcess22readyReadStandardErrorEv(void);
    extern void _ZN8QProcess15setProcessStateENS_12ProcessStateE(void);
    extern void _ZN8QProcess17setupChildProcessEv(void);
    extern qint64 _ZN8QProcess8readDataEPcx(void);
    extern qint64 _ZN8QProcess9writeDataEPKcx(void);
#ifdef __cplusplus
}
#endif
#endif
