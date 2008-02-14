#ifndef _QTCORE_QPROCESS_H_
#define _QTCORE_QPROCESS_H_

class QProcess;
// *INDENT-OFF*

typedef qint64	Q_PID	
;

class QProcess : public QIODevice
{
private:
public:
    struct QMetaObject * metaObject() const;
    void * qt_metacast(char const*);
    int qt_metacall(QMetaObject::Call, int, void**);
     QProcess(QObject*);
     ~QProcess();
    void start(QString const&, QStringList const&, QFlags<QIODevice::OpenModeFlag>);
    void start(QString const&, QFlags<QIODevice::OpenModeFlag>);
    enum _ZN8QProcess18ProcessChannelModeE readChannelMode() const;
    void setReadChannelMode(QProcess::ProcessChannelMode);
    enum _ZN8QProcess14ProcessChannelE readChannel() const;
    void setReadChannel(QProcess::ProcessChannel);
    void closeReadChannel(QProcess::ProcessChannel);
    void closeWriteChannel();
    QString workingDirectory() const;
    void setWorkingDirectory(QString const&);
    void setEnvironment(QStringList const&);
    QStringList environment() const;
    enum _ZN8QProcess12ProcessErrorE error() const;
    enum _ZN8QProcess12ProcessStateE state() const;
    Q_PID pid() const;
    bool waitForStarted(int);
    bool waitForReadyRead(int);
    bool waitForBytesWritten(int);
    bool waitForFinished(int);
    QByteArray readAllStandardOutput();
    QByteArray readAllStandardError();
    int exitCode() const;
    enum _ZN8QProcess10ExitStatusE exitStatus() const;
    qint64 bytesAvailable() const;
    qint64 bytesToWrite() const;
    bool isSequential() const;
    bool canReadLine() const;
    void close();
    bool atEnd() const;
    static int execute(QString const&, QStringList const&);
    static int execute(QString const&);
    static bool startDetached(QString const&, QStringList const&);
    static bool startDetached(QString const&);
    static QStringList systemEnvironment();
    void terminate();
    void kill();
    void setStandardErrorFile(QString const&, QFlags<QIODevice::OpenModeFlag>);
    void setStandardInputFile(QString const&);
    void setProcessChannelMode(QProcess::ProcessChannelMode);
    void setStandardOutputFile(QString const&, QFlags<QIODevice::OpenModeFlag>);
    void setStandardOutputProcess(QProcess*);
    enum _ZN8QProcess18ProcessChannelModeE processChannelMode() const;
protected:
    void started();
    void finished(int);
    void finished(int, QProcess::ExitStatus);
    void error(QProcess::ProcessError);
    void stateChanged(QProcess::ProcessState);
    void readyReadStandardOutput();
    void readyReadStandardError();
    void setProcessState(QProcess::ProcessState);
    void setupChildProcess();
    qint64 readData(char*, long long);
    qint64 writeData(char const*, long long);
};

enum ProcessError	
{
FailedToStart = 0,	
Crashed = 1,	
Timedout = 2,	
ReadError = 3,	
WriteError = 4,	
UnknownError = 5
}
;

enum ProcessState	
{
NotRunning = 0,	
Starting = 1,	
Running = 2
}
;

enum ProcessChannel	
{
StandardOutput = 0,	
StandardError = 1
}
;

enum ProcessChannelMode	
{
SeparateChannels = 0,	
MergedChannels = 1,	
ForwardedChannels = 2
}
;

enum ExitStatus	
{
NormalExit = 0,	
CrashExit = 1
}
;


extern struct QMetaObject _ZN8QProcess16staticMetaObjectE ;
// *INDENT-ON*
#endif
